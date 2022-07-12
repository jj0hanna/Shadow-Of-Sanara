// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GP3WASDMovementComponent.generated.h"

class AGP3PlayerPawn;

UCLASS()
class GP3_TEAM03_API UGP3WASDMovementComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UGP3WASDMovementComponent();

	void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void Move(float ForwardInput, float RightInput, float DeltaTime);
	
	UFUNCTION()
	void CheckInputs(float InForwardInput, float InRightInput);

	UFUNCTION()
	void UpdateCurveTimers(float DeltaTime);

	UFUNCTION()
	FVector CalculateInput(float ForwardAxis, float RightAxis);

	UFUNCTION()
	FVector CalculateAccelerationDeceleration(FVector InInput, float DeltaTime);

	UFUNCTION()
	void ExecuteMovement(FVector InMovement, float DeltaTime);
	
	void ApplyDepenetration (FHitResult* HitResult);
	
	void ApplyWallSliding(FHitResult* HitResult);

	UFUNCTION()
	bool IsGrounded();

	UFUNCTION()
	void ApplySlopeAxis(FVector NextLocation);
	
	UFUNCTION()
	void RotatePlayerWithController();
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float MaxForwardSpeed = 600.0f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float MaxRightSpeed = 600.0f;

	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float InputTurnSpeed = 10.0f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float DiagonalMovementDivider = 1.414f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float MaxSlopeAngle = 70.0f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	FVector OffsetToActorFeet = {0.0f, 0.0f, 48.0f};
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	FVector GravityAcceleration = {0.0f, 0.0f, 500.f};
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	FVector CharacterOffsetToGround = {0.0f, 0.0f, 10.0f};
	
	UPROPERTY(Category="Character Movement - Curves", EditDefaultsOnly)
	UCurveFloat* AccelerationCurve = NULL;
	
	UPROPERTY(Category="Character Movement - Curves", EditDefaultsOnly)
	UCurveFloat* DecelerationCurve = NULL;
	
	UPROPERTY()
	bool IsReceivingInput = false;
	
	UPROPERTY()
	bool IsOnGround = false;

	UPROPERTY()
	bool MovementDisabled = false;

	bool IsMoving = false;

	UPROPERTY()
	int DepenetrationIterationCount = 0.0f;
	
	UPROPERTY()
	float GravityScalar = 0.05f;
	
	UPROPERTY()
	float AccelerationCurveValue = 0.0f;
	
	UPROPERTY()
	float DecelerationCurveValue = 0.0f;

	UPROPERTY()
	float AcceleratingTime = 0.0f;
	
	UPROPERTY()
	float DeceleratingTime = 0.0f;

	UPROPERTY()
	float TimeBeforeStopped = 2.0f;

	float InternalStopTimer = 0.0f;
		
	UPROPERTY(BlueprintReadOnly)
	FVector LocalInstantVelocity = {0.0f, 0.0f, 0.0f};

	UPROPERTY(BlueprintReadOnly)
	FVector AnimationSpeed = {0.0f, 0.0f, 0.0f};

	UPROPERTY(BlueprintReadOnly)
	FVector InstantVelocity = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY()
	FVector Acceleration = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY()
	FVector LastRegisteredInput = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY()
	FVector Input = {0.0f, 0.0f, 0.0f};

	UPROPERTY()
	FVector CurrentGravityForce = {0.0f, 0.0f, 0.0f};
	
	AGP3PlayerPawn* Owner = NULL;
};
