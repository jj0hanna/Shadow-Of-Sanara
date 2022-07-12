// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3WASDMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Player/GP3PlayerPawn.h"

UGP3WASDMovementComponent::UGP3WASDMovementComponent()
{
	
}

void UGP3WASDMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	Owner = Cast<AGP3PlayerPawn, AActor>(GetOwner());
}

void UGP3WASDMovementComponent::Move(float ForwardInput, float RightInput, float DeltaTime)
{
	CheckInputs(ForwardInput, RightInput);
	UpdateCurveTimers(DeltaTime);
	
	AccelerationCurveValue = AccelerationCurve->GetFloatValue(AcceleratingTime);
	DecelerationCurveValue = DecelerationCurve->GetFloatValue(DeceleratingTime);
	
	Input = CalculateInput(ForwardInput, RightInput);
	InstantVelocity = CalculateAccelerationDeceleration(Input, DeltaTime);

	if (InstantVelocity == FVector(0.0f, 0.0f, 0.0f))
	{
		Owner->OnMoveFinish();
	}
	
	if (!Owner->bIsDashing)
	{
		ExecuteMovement(InstantVelocity, DeltaTime);
		RotatePlayerWithController();
	}
}

void UGP3WASDMovementComponent::CheckInputs(float InForwardInput, float InRightInput)
{
	// If player is moving, add deltatime to timestamps. If forward input has decreased to 0, then reset timestamps..
	// .. and set moving to false.
	if (IsReceivingInput && InForwardInput == 0.0f && InRightInput == 0.0f)
	{
		DeceleratingTime = 0.0f;
		IsReceivingInput = false;

		IsMoving = false;
	}
	
	// If player is not moving, add deltatime to timestamps. If forward input has increased from 0, then reset timestamps..
	// .. and set moving to true.
	else if (!IsReceivingInput && (FMath::Abs(InForwardInput) > 0.01f || FMath::Abs(InRightInput) > 0.01f))
	{
		AcceleratingTime = 0.0f;
		IsReceivingInput = true;
		
		IsMoving = true;

		if (!Owner->bIsDashing)
		{
			Owner->OnMoveStart();
		}
	}
}

void UGP3WASDMovementComponent::UpdateCurveTimers(float DeltaTime)
{
	if (IsReceivingInput)
	{
		AcceleratingTime += DeltaTime;
	}
	
	DeceleratingTime += DeltaTime;
}

FVector UGP3WASDMovementComponent::CalculateInput(float ForwardAxis, float RightAxis)
{
	float SmoothTurnAlpha = GetWorld()->GetDeltaSeconds() * InputTurnSpeed;
	
	// we're clamping the input between 0 and 1, so the player can't get double the speed from pressing both controller and keyboard
	// input at the same time.
	FVector NewInput = {FMath::Clamp(ForwardAxis, -1.0f, 1.0f), FMath::Clamp(RightAxis, -1.0f, 1.0f), 0.0f};
	
	AnimationSpeed = NewInput;

	// if player is not using gamepad, and player is moving diagonally, divide the animation speed to keep it at 1.
	if (!Owner->bIsUsingGamepad && (NewInput.X != 0.0f && NewInput.Y != 0.0f || NewInput.X * NewInput.Y != 0.0f))
	{
		AnimationSpeed /= DiagonalMovementDivider;
	}

	// if the player is not receiving any input, set NewInput to last registered input for deceleration purposes.
	if (!IsReceivingInput)
	{
		NewInput.X = LastRegisteredInput.X;
	}
	
	else
	{
		// if player is switching forward axis fast, and is not moving sideways, activate turn lerp.
		if (NewInput.X != Input.X && NewInput.X != 0.0f && LastRegisteredInput.X != 0.0f && NewInput.Y == 0.0f)
		{
			NewInput.X = FMath::Lerp(Input.X, NewInput.X, SmoothTurnAlpha);
		}

		// if player is using gamepad, set lastregisteredinput to the current input.
		if (Owner->bIsUsingGamepad)
		{
			LastRegisteredInput.X = NewInput.X;
		}
		
		// else, set lastregisteredinput to the signed current input for deceleration purposes.
		else
		{
			LastRegisteredInput.X = FMath::Sign(NewInput.X);
		}
	}
	
	if (!IsReceivingInput)
	{
		NewInput.Y = LastRegisteredInput.Y;
	}
	
	else
	{
		if (NewInput.Y != Input.Y && NewInput.Y != 0.0f && LastRegisteredInput.Y != 0.0f && NewInput.X == 0.0f)
		{
			NewInput.Y = FMath::Lerp(Input.Y, NewInput.Y, SmoothTurnAlpha);
		}

		if (Owner->bIsUsingGamepad)
		{
			LastRegisteredInput.Y = NewInput.Y;
		}
		else
		{
			LastRegisteredInput.Y = FMath::Sign(NewInput.Y);
		}
	}
	
	return NewInput;
}

FVector UGP3WASDMovementComponent::CalculateAccelerationDeceleration(FVector InInput, float DeltaTime)
{
	if (IsReceivingInput)
	{
		AccelerationCurveValue = FMath::Clamp(AccelerationCurveValue, DecelerationCurveValue, 1.0f);

		Acceleration = {MaxForwardSpeed * AccelerationCurveValue, MaxForwardSpeed * AccelerationCurveValue, 0.0f};
		
		if (!Owner->bIsUsingGamepad && (InInput.X != 0.0f && InInput.Y != 0.0f || InInput.X * InInput.Y != 0.0f))
		{
			Acceleration /= DiagonalMovementDivider;
		}
		
		FVector ReturnInstantVelocity = InInput * Acceleration * DeltaTime;
		return ReturnInstantVelocity;
	}
	
	DecelerationCurveValue = FMath::Clamp(DecelerationCurveValue, 0.0f, AccelerationCurveValue);
	FVector Deceleration = {Acceleration.X * DecelerationCurveValue, Acceleration.Y * DecelerationCurveValue, 0.0f};
	
	FVector ReturnInstantVelocity = InInput * Deceleration * DeltaTime;
	
	return ReturnInstantVelocity;
}

void UGP3WASDMovementComponent::ExecuteMovement(FVector InMovement, float DeltaTime)
{
	FHitResult Hit;
	
	LocalInstantVelocity = Owner->GetActorRotation().RotateVector(InMovement);
	ApplySlopeAxis((LocalInstantVelocity) + Owner->GetActorLocation());
	FVector PreviousPosition = Owner->GetActorLocation();
	Owner->SetActorLocation((LocalInstantVelocity) + Owner->GetActorLocation(), true, &Hit);
	
	if (Hit.bBlockingHit)
	{
		FVector ImpactVelocity = FVector::DotProduct(Owner->GetActorLocation() - PreviousPosition, Hit.Normal) * Hit.Normal;
		Owner->SetActorLocation(Owner->GetActorLocation() - ImpactVelocity);
		Owner->SetActorLocation(Owner->GetActorLocation() - ImpactVelocity * 0.3f);

		float UpwardDot = FVector::DotProduct(Owner->GetActorUpVector(), Hit.ImpactNormal);
		
		if (Hit.bStartPenetrating)
		{
			ApplyDepenetration(&Hit);
			return;
		}
		
		if (UpwardDot == 0.0f)
		{
			ApplyWallSliding(&Hit);
		}
	}
}

void UGP3WASDMovementComponent::ApplyDepenetration(FHitResult* HitResult)
{
	Owner->SetActorLocation((HitResult->Normal * FMath::Max(HitResult->PenetrationDepth, KINDA_SMALL_NUMBER) + Owner->GetActorLocation()));
}

void UGP3WASDMovementComponent::ApplyWallSliding(FHitResult* HitResult)
{
	LocalInstantVelocity = FVector::VectorPlaneProject (LocalInstantVelocity, HitResult->Normal);
	Owner->SetActorLocation(LocalInstantVelocity + Owner->GetActorLocation());
}

void UGP3WASDMovementComponent::ApplySlopeAxis(FVector NextLocation)
{
	FVector DownwardRaycastOrigin = Owner->GetActorLocation();
	FVector DownwardRayCastEnd = DownwardRaycastOrigin + FVector(0.0f, 0.0f, -400.0f);
	
	bool SlopeAxisApplied = false;
	
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
			float SlopeAngleInDegrees =  FMath::RadiansToDegrees(FMath::Acos(DownwardDot));
			
			if (180.f - FMath::Abs(SlopeAngleInDegrees) < MaxSlopeAngle && DownwardDot > -1.0f)
			{
				LocalInstantVelocity = FVector::VectorPlaneProject (LocalInstantVelocity, SlopeHitResult.Normal);
				SlopeAxisApplied = true;
			}
		}
	}

	if (!IsGrounded())
	{
		CurrentGravityForce += GravityAcceleration * GravityScalar * GetWorld()->GetDeltaSeconds();
		LocalInstantVelocity += -CurrentGravityForce;
	}
}

void UGP3WASDMovementComponent::RotatePlayerWithController()
{
	float NewYawRotation = (GetWorld()->GetFirstPlayerController()->GetControlRotation().Yaw);
	Owner->SetActorRotation(FRotator(Owner->GetActorRotation().Pitch, NewYawRotation, Owner->GetActorRotation().Roll));
}

bool UGP3WASDMovementComponent::IsGrounded()
{
	FVector RayCastOrigin = Owner->GetActorLocation() - OffsetToActorFeet;
	FVector RayCastEnd = RayCastOrigin - CharacterOffsetToGround;
	FHitResult GroundHit;

	FCollisionQueryParams CollisionQueryParams;
	CollisionQueryParams.AddIgnoredActor(Owner);
	
	if (GetWorld()->LineTraceSingleByChannel(
		GroundHit,
		RayCastOrigin,
		RayCastEnd,
		ECC_WorldStatic,
		CollisionQueryParams))
	{
		if (GroundHit.bBlockingHit)
		{
			if (GetWorld()->LineTraceSingleByChannel(
		GroundHit,
		RayCastOrigin,
		RayCastEnd - CharacterOffsetToGround,
		ECC_WorldStatic,
		CollisionQueryParams))
			{
				if (GroundHit.bBlockingHit)
				{
					CurrentGravityForce = {0.0f, 0.0f, 0.0f};
			
					IsOnGround = true;
					return true;
				}
			}
		}
	}
	IsOnGround = false;
	return false;
}
