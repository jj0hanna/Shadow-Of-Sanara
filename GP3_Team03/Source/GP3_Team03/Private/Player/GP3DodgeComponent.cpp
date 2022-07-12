// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GP3DodgeComponent.h"
#include "Player/GP3PlayerPawn.h"
#include "Player/GP3WASDMovementComponent.h"

UGP3DodgeComponent::UGP3DodgeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UGP3DodgeComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<AGP3PlayerPawn, AActor>(GetOwner());
}

void UGP3DodgeComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HandleDodgeStates(DeltaTime);

	if (!IsDodging)
	{
		return;
	}

	FVector PreviousPosition = Owner->GetActorLocation();
	
	DodgeTime += DeltaTime;
	float DodgeCurveValue = DodgeCurve->GetFloatValue(DodgeTime);

	float DodgeAcceleration = MaxDodgeSpeed * DodgeCurveValue;

	if (Direction.X != 0.0f && Direction.Y != 0.0f || Direction.X * Direction.Y != 0.0f)
	{
		DodgeAcceleration /= Owner->WASDMovementComp->DiagonalMovementDivider;
	}

	FVector DodgeInstantVelocity = Direction * DodgeAcceleration * DeltaTime;
	DodgeInstantVelocity = Owner->GetActorRotation().RotateVector(DodgeInstantVelocity);
	FVector NextStep = CalculateMovement(DodgeInstantVelocity);

	FHitResult Hit;
	Owner->SetActorLocation(NextStep + Owner->GetActorLocation(), true, &Hit);
	
	if (Hit.bBlockingHit)
	{
		FVector ImpactVelocity = FVector::DotProduct(Owner->GetActorLocation() - PreviousPosition, Hit.Normal) * Hit.Normal;
		Owner->SetActorLocation(Owner->GetActorLocation() - ImpactVelocity);
		Owner->SetActorLocation(Owner->GetActorLocation() - ImpactVelocity * 0.3f);
	
		if (Hit.bStartPenetrating)
		{
			Owner->SetActorLocation((Hit.Normal * FMath::Max(Hit.PenetrationDepth, KINDA_SMALL_NUMBER) + Owner->GetActorLocation()));
		}
	}

	DistanceTravelled = (Owner->GetActorLocation() - StartPosition).Size();
	
	if (ObstacleMet || DistanceTravelled >= DodgeLength)
	{
		ResetDodge();
	}
}

void UGP3DodgeComponent::Dodge(float ForwardAxis, float RightAxis)
{
	if (!ReadyToDodge)
	{
		LatestTimeDodgePressed = GetWorld()->GetTimeSeconds();
		DodgeInputTimestamp = {SetDirection(ForwardAxis, RightAxis)};
		return;
	}

	DodgeTime = 0.0f;
	DistanceTravelled = 0.0f;
	
	Direction = {SetDirection(ForwardAxis, RightAxis)};
	
	StartPosition = Owner->GetActorLocation();
	
	ReadyToDodge = false;
	Owner->bIsDashing = true;
	IsDodging = true;
}

FVector UGP3DodgeComponent::SetDirection(float Forward, float Right)
{
	FVector ReturnDirection = {FMath::Sign(Forward), FMath::Sign(Right), 0.0f};
	
	if (ReturnDirection.X == 0.0f && ReturnDirection.Y == 0.0f)
	{
		ReturnDirection = {1.0f, 0.0f, 0.0f};
	}
	
	//ReturnDirection = Owner->GetActorRotation().RotateVector(ReturnDirection);
	return ReturnDirection;
}

void UGP3DodgeComponent::ResetDodge()
{
	DodgeTime = 0.0f;
	//Cast<AGP3PlayerPawn, AActor>(GetOwner())->bIsDashing = false;
	Owner->bIsDashing = false;

	if (ObstacleMet)
	{
		ObstacleMet = false;
	}
	
	IsDodging = false;
}

void UGP3DodgeComponent::HandleDodgeStates(float DeltaTime)
{
	if (!ReadyToDodge)
	{
		InternalDodgeCooldownTimer += DeltaTime;

		if (InternalDodgeCooldownTimer >= DodgeCooldown)
		{
			ReadyToDodge = true;
			InternalDodgeCooldownTimer = 0.0f;

			if (GetWorld()->GetTimeSeconds() - LatestTimeDodgePressed <= InputGraceTime)
			{
				Dodge(DodgeInputTimestamp.X, DodgeInputTimestamp.Y);
			}
		}
	}
}

FVector UGP3DodgeComponent::ApplySlopeAxis(FVector TargetDestination)
{
	FVector ReturnDestination = TargetDestination;
	FVector DownwardRaycastOrigin = Owner->GetActorLocation();
	FVector DownwardRayCastEnd = DownwardRaycastOrigin + FVector(0.0f, 0.0f, -400.0f);
	
	FCollisionQueryParams CollisionQueryParams;
	CollisionQueryParams.AddIgnoredActor(Owner);
	
	FHitResult SlopeHitResult;
	if (GetWorld()->LineTraceSingleByChannel(
		SlopeHitResult,
		DownwardRaycastOrigin,
		DownwardRayCastEnd,
		ECC_WorldStatic,
		CollisionQueryParams))
	{
		if (SlopeHitResult.Normal.Z > KINDA_SMALL_NUMBER && SlopeHitResult.bBlockingHit)
		{
			float DownwardDot = FVector::DotProduct(-Owner->GetActorUpVector(), SlopeHitResult.Normal);
			
			if (DownwardDot < (-1 + Owner->WASDMovementComp->MaxSlopeAngle * 0.01f) && DownwardDot > -1.0f)
			{
				ReturnDestination = FVector::VectorPlaneProject (ReturnDestination, SlopeHitResult.Normal);
			}
		}
	}
	
	return ReturnDestination;
}

FVector UGP3DodgeComponent::CalculateMovement(FVector Step)
{
	FVector ReturnStep = Step;
	FHitResult Hit;
 
	FCollisionQueryParams CollisionQueryTest;
	CollisionQueryTest.AddIgnoredActor(Owner);
	
	ReturnStep = ApplySlopeAxis(ReturnStep);
 
	FVector Origin = Owner->GetActorLocation() - Owner->WASDMovementComp->OffsetToActorFeet;
	FVector End = Origin + ReturnStep;
	
	if (GetWorld()->LineTraceSingleByChannel(
		Hit,
		Origin,
		End,
		ECC_WorldStatic,
		CollisionQueryTest))
	{
		if (Hit.bBlockingHit)
		{
			ObstacleMet = true;
		}
	}
	
	return ReturnStep;
}

FVector UGP3DodgeComponent::ApplySlopeSliding(FVector TargetDestination, FHitResult* Hit)
{
	FVector ReturnStep = TargetDestination;
	ReturnStep = FVector::VectorPlaneProject (ReturnStep, Hit->Normal);
	return ReturnStep;
}

FVector UGP3DodgeComponent::ApplyDepenetration(FVector Step, FHitResult* HitResult)
{
	FVector DepenetratedStep = Step;
	DepenetratedStep = HitResult->Normal * FMath::Max(HitResult->PenetrationDepth, KINDA_SMALL_NUMBER);
	return DepenetratedStep;
}

