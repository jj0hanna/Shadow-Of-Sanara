// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3DashComponent.h"

#include "AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h"
#include "Player/GP3PlayerDashTrail.h"
#include "Player/GP3PlayerPawn.h"
#include "Player/GP3PlayerSpringArmComponent.h"
#include "Player/GP3WASDMovementComponent.h"

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/SplineComponent.h"
#include "Kismet/KismetMathLibrary.h"

UGP3DashComponent::UGP3DashComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UGP3DashComponent::BeginPlay()
{
	Super::BeginPlay();
	
	Owner = Cast<AGP3PlayerPawn, AActor>(GetOwner());
	SpawnParams.Owner = Owner;
}

void UGP3DashComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HandleDashStates(DeltaTime);

	if (!IsDashing)
	{
		return;
	}
	
	DashInstantVelocity = {ReturnInstantVelocity(DeltaTime)};
	FVector PreviousPosition = Owner->GetActorLocation();
	FVector NextStep = {CalculateMovement(DashInstantVelocity)};
	
	FHitResult Hit;
	Owner->SetActorLocation(NextStep + Owner->GetActorLocation(), true, &Hit);
	
	 if (Hit.bBlockingHit)
	 {
	 	FVector ImpactVelocity = FVector::DotProduct(Owner->GetActorLocation() - PreviousPosition, Hit.Normal) * Hit.Normal;
	 	Owner->SetActorLocation(Owner->GetActorLocation() - ImpactVelocity);
	 	Owner->SetActorLocation(Owner->GetActorLocation() - ImpactVelocity * 0.3f);
	 	
	 	float UpwardDot = FVector::DotProduct(Owner->GetActorUpVector(), Hit.ImpactNormal);
	
	 	if (Hit.bStartPenetrating)
	 	{
	 		Owner->SetActorLocation((Hit.Normal * FMath::Max(Hit.PenetrationDepth, KINDA_SMALL_NUMBER) + Owner->GetActorLocation()));
	 	}

	 	if (UpwardDot == 0.0f)
	 	{
	 		ApplyWallSliding(&Hit, NextStep);
	 		ObstacleMet = true;
	 	}
	 }
	
	DistanceTravelled = (Owner->GetActorLocation() - StartPosition).Size();

	ExtendDashTrail();
	
	if (ObstacleMet || DistanceTravelled >= DashLength)
	{
		ResetDash();
	}
}

void UGP3DashComponent::Dash(float ForwardInput, float RightInput)
{
	if (!ReadyToDash)
	{
		DashBufferTimestamp = GetWorld()->GetTimeSeconds();
		DashBufferInput = {ForwardInput, RightInput, 0.0f};
		return;
	}

	DashTime = 0.0f;
	DistanceTravelled = 0.0f;
	
	Direction = {SetDirection(ForwardInput, RightInput)};

	DashRotation = Owner->GetActorRotation();
	StartPosition = Owner->GetActorLocation();

	Owner->bIsInvincible = true;
	ReadyToDash = false;
	IsDashing = true;

	if (!IsInMoveCooldown)
	{
		Owner->OnMoveFinish();
		Owner->bIsDashing = true;;
	}
	
	Owner->CapsuleComp->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Overlap);
	OnDash.Broadcast();
	Owner->OnDashStart();
	Owner->SpringArmComp->DashCameraStart();
	
	FRotator TrailSpawnRotation = UKismetMathLibrary::FindLookAtRotation(StartPosition, StartPosition + Direction);

	SplinePointIndex = 1;
	CurrentDashTrail = GetWorld()->SpawnActor<AGP3PlayerDashTrail>(DashTrail, StartPosition - Owner->WASDMovementComp->OffsetToActorFeet, DashRotation + TrailSpawnRotation, SpawnParams);
}

FVector UGP3DashComponent::SetDirection(float Forward, float Right)
{
	FVector ReturnDirection = {FMath::Sign(Forward), FMath::Sign(Right), 0.0f};
	if (ReturnDirection.X == 0.0f && ReturnDirection.Y == 0.0f)
	{
		ReturnDirection = {1.0f, 0.0f, 0.0f};
	}
	
	return ReturnDirection;
}

FVector UGP3DashComponent::ReturnInstantVelocity(float DeltaTime)
{
	DashTime += DeltaTime;
	DashCurveValue = DashCurve->GetFloatValue(DashTime);
	FVector DashAcceleration = {MaxDashSpeed * DashCurveValue, MaxDashSpeed * DashCurveValue, 0.0f};

	if (Direction.X != 0.0f && Direction.Y != 0.0f || Direction.X * Direction.Y != 0.0f)
	{
		DashAcceleration /= Owner->WASDMovementComp->DiagonalMovementDivider;
	}
	
	FVector ReturnVelocity = {Direction * DashAcceleration * DeltaTime};
	ReturnVelocity = DashRotation.RotateVector(ReturnVelocity);

	return ReturnVelocity;
}

FVector UGP3DashComponent::CalculateMovement(FVector Step)
{
	FVector ReturnStep = Step;
	FHitResult Hit;
 
	FCollisionQueryParams CollisionQueryParams;
	CollisionQueryParams.AddIgnoredActor(Owner);
	
	ReturnStep = ApplySlopeAxis(ReturnStep);
 
	FVector Origin = Owner->GetActorLocation() - Owner->WASDMovementComp->OffsetToActorFeet;
	FVector End = Origin + ReturnStep;
	
	if (GetWorld()->LineTraceSingleByChannel(
		Hit,
		Origin,
		End,
		ECC_WorldStatic,
		CollisionQueryParams))
	{
		if (Hit.bBlockingHit && !Cast<AGP3_AI_BaseCharacter>(Hit.GetActor()))
		{
			if (GetWorld()->LineTraceSingleByChannel(
				Hit,
				Origin + FVector(0.0f, 0.0f, 15.0f),
				End + FVector (0.0f, 0.0f, 15.0f),
				ECC_WorldStatic,
				CollisionQueryParams))
			{
				ObstacleMet = true;
			}
		}
	}
	
	return ReturnStep;
}


void UGP3DashComponent::ResetDash()
{
	DashTime = 0.0f;
	
	IsInGracePeriod = true;
	IsInMoveCooldown = true;

	if (ObstacleMet)
	{
		ObstacleMet = false;
	}
	
	ReadyToDash = false;
	IsDashing = false;
	Owner->SpringArmComp->DashCameraStop();
	Owner->OnDashFinish();
	
	Owner->CapsuleComp->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block);
}

void UGP3DashComponent::HandleDashStates(float DeltaTime)
{
	if (IsInGracePeriod)
	{
		InternalGracePeriodTimer += DeltaTime;

		if (InternalGracePeriodTimer >= InvincibilityGraceTime)
		{
			Owner->bIsInvincible = false;
			IsInGracePeriod = false;
			InternalGracePeriodTimer = 0.0f;
		}
	}

	if (IsInMoveCooldown)
	{
		InternalMoveCooldownTimer += DeltaTime;

		if (InternalMoveCooldownTimer >= MovementCooldown)
		{
			Owner->bIsDashing = false;
			IsInMoveCooldown = false;
			InternalMoveCooldownTimer = 0.0f;
		}
	}
	
	if (!ReadyToDash)
	{
		InternalDashCooldownTimer += DeltaTime;

		if (InternalDashCooldownTimer >= DashCooldown)
		{
			ReadyToDash = true;
			InternalDashCooldownTimer = 0.0f;

			if (GetWorld()->GetTimeSeconds() - DashBufferTimestamp <= InputBufferSeconds)
			{
				Dash(DashBufferInput.X, DashBufferInput.Y);
			}
		}
	}
}

FVector UGP3DashComponent::ApplySlopeAxis(FVector TargetDestination)
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
			float SlopeAngleInDegrees = FMath::RadiansToDegrees(FMath::Acos(DownwardDot));
			
			if (180.0f - FMath::Abs(SlopeAngleInDegrees) < Owner->WASDMovementComp->MaxSlopeAngle && DownwardDot > -1.0f)
			{
				ReturnDestination = FVector::VectorPlaneProject (ReturnDestination, SlopeHitResult.Normal);
			}
		}
	}
	
	return ReturnDestination;
}

void UGP3DashComponent::ApplyWallSliding(FHitResult* HitResult, FVector InstantVelocity)
{
	InstantVelocity = FVector::VectorPlaneProject (InstantVelocity, HitResult->Normal);
	Owner->SetActorLocation(InstantVelocity + Owner->GetActorLocation());
}

FVector UGP3DashComponent::ApplySlopeSliding(FVector TargetDestination, FHitResult* Hit)
{
	FVector ReturnStep = TargetDestination;
	ReturnStep = FVector::VectorPlaneProject (ReturnStep, Hit->Normal);
	return ReturnStep;
}

FVector UGP3DashComponent::ApplyDepenetration(FVector Step, FHitResult* HitResult)
{
	FVector DepenetratedStep = Step;
	DepenetratedStep = HitResult->Normal * FMath::Max(HitResult->PenetrationDepth, KINDA_SMALL_NUMBER);
	return DepenetratedStep;
}

void UGP3DashComponent::DecreaseDashCooldown()
{
	if (!ReadyToDash)
	{
		InternalDashCooldownTimer += CooldownBonusOnWeakpointHit;
	}
}

void UGP3DashComponent::ExtendDashTrail()
{
	SplinePointIndex++;
	FVector TrailEndPosition = UKismetMathLibrary::InverseTransformLocation(CurrentDashTrail->GetTransform(), Owner->GetActorLocation());

	CurrentDashTrail->OnExtendSpline(SplinePointIndex, TrailEndPosition - Owner->WASDMovementComp->OffsetToActorFeet);
}

void UGP3DashComponent::InterruptDash()
{
	ObstacleMet = true;
}