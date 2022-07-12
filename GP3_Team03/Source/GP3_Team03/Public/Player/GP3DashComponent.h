// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GP3DashComponent.generated.h"

class AGP3PlayerPawn;
class AGP3PlayerDashTrail;

UCLASS()
class GP3_TEAM03_API UGP3DashComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDashEvent);
public:
	UGP3DashComponent();

	void BeginPlay() override;
	
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void Dash(float ForwardInput, float RightInput);

	UFUNCTION()
	FVector SetDirection(float Forward, float Right);

	UFUNCTION()
	FVector ReturnInstantVelocity(float DeltaTime);

	UFUNCTION()
	FVector CalculateMovement(FVector Step);

	UFUNCTION()
	void ResetDash();

	UFUNCTION()
	void HandleDashStates(float DeltaTime);

	UFUNCTION()
	FVector ApplySlopeAxis(FVector TargetDestination);
	
	void ApplyWallSliding(FHitResult* HitResult, FVector InstantVelocity);

	UFUNCTION()
	void DecreaseDashCooldown();

	UFUNCTION()
	void ExtendDashTrail();

	UFUNCTION()
	void InterruptDash();
	
	FVector ApplySlopeSliding(FVector TargetDestination, FHitResult* Hit);
	
	FVector ApplyDepenetration(FVector Step, FHitResult* HitResult);

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	TSubclassOf<AGP3PlayerDashTrail> DashTrail;
	
	UPROPERTY(Category="Dash - Config", EditAnywhere)
	int MaxDashSpeed = 1500.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float InputBufferSeconds = 0.3f;
	
	UPROPERTY(Category="Dash - Config", EditAnywhere)
	int DashLength = 200.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float InvincibilityGraceTime = 2.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float MovementCooldown = 0.5f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	int DashCooldown = 5.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float CooldownBonusOnWeakpointHit = 0.5f;

	UPROPERTY(Category = "Dash - Config", EditAnywhere,BlueprintReadOnly)
	float DashDamage = 0.5f;

	UPROPERTY(Category="Dash - Curve", EditDefaultsOnly)
	UCurveFloat* DashCurve = NULL;

	bool ReadyToDash = true;

	bool ObstacleMet = false;

	UPROPERTY(BlueprintReadOnly)
	bool IsDashing = false;

	bool IsInGracePeriod = false;

	bool IsInMoveCooldown = false;

	int SplinePointIndex = 0;

	int ObstacleCounter = 0;

	UPROPERTY()
	float DashTime = 0;

	UPROPERTY()
	float DashCurveValue = 0;

	UPROPERTY()
	float DistanceTravelled = 0;

	UPROPERTY()
	float InternalDashCooldownTimer = 0.0f;

	float InternalMoveCooldownTimer = 0.0f;

	float InternalGracePeriodTimer = 0.0f;

	float DashBufferTimestamp = 0.0f;

	UPROPERTY()
	FVector DashInstantVelocity = {0.0f, 0.0f, 0.0f};

	UPROPERTY()
	FVector StartPosition = {0.0f, 0.0f, 0.0f};

	UPROPERTY()
	FVector Direction = {0.0f, 0.0f, 0.0f};

	UPROPERTY()
	FVector DashMagnitude = {0.0f, 0.0f, 0.0f};

	FRotator DashRotation = {0.0f, 0.0f, 0.0f};

	FVector DashBufferInput = {0.0f, 0.0f, 0.0f};

	FOnDashEvent OnDash;

	AGP3PlayerDashTrail* CurrentDashTrail = nullptr;

	UPROPERTY()
	AGP3PlayerPawn* Owner = nullptr;
	
	FActorSpawnParameters SpawnParams;
};