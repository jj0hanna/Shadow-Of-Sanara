// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GP3DodgeComponent.generated.h"

class AGP3PlayerPawn;

UCLASS()
class GP3_TEAM03_API UGP3DodgeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UGP3DodgeComponent();

	void BeginPlay() override;
	
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void Dodge(float ForwardAxis, float RightAxis);

	UFUNCTION()
	FVector SetDirection(float Forward, float Right);

	UFUNCTION()
	FVector CalculateMovement(FVector Step);

	UFUNCTION()
	void ResetDodge();

	UFUNCTION()
	void HandleDodgeStates(float DeltaTime);

	UFUNCTION()
	FVector ApplySlopeAxis(FVector TargetDestination);
	
	FVector ApplySlopeSliding(FVector TargetDestination, FHitResult* Hit);
	
	FVector ApplyDepenetration(FVector Step, FHitResult* HitResult);

	UPROPERTY(Category="Dodge - Config", EditAnywhere)
	float MaxDodgeSpeed = 1500.0f;
	
	UPROPERTY(Category="Dodge - Config", EditAnywhere)
	float DodgeLength = 200.0f;

	UPROPERTY(Category="Dodge - Config", EditAnywhere)
	float DodgeCooldown = 1.0f;

	UPROPERTY(Category="Dodge - Config", EditAnywhere)
	float InputGraceTime = 0.3f;

	UPROPERTY(Category="Dodge - Curve", EditDefaultsOnly)
	UCurveFloat* DodgeCurve = NULL;

	UPROPERTY(Category="Dodge - Debug Info", VisibleAnywhere)
	float DistanceTravelled = 0.0f;

	UPROPERTY(Category="Dodge - Debug Info", VisibleAnywhere)
	float DodgeTime = 0.0f;

	UPROPERTY(Category="Dodge - Debug Info", VisibleAnywhere)
	FVector TargetDodgeLocation = {0.0f, 0.0f, 0.0f};

	UPROPERTY(Category="Dodge - Debug Info", VisibleAnywhere)
	FVector Direction = {0.0f, 0.0f, 0.0f};

	UPROPERTY(Category="Dodge - Debug Info", VisibleAnywhere)
	FVector DodgeMagnitude = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY(Category="Dodge - Debug Info", VisibleAnywhere, BlueprintReadOnly)
	bool ReadyToDodge = false;

	bool IsDodging = false;

	bool ObstacleMet = false;

	float InternalDodgeCooldownTimer = 0.0f;

	float LatestTimeDodgePressed = 0.0f;

	FVector DodgeInputTimestamp = {0.0f, 0.0f, 0.0f};

	FVector StartPosition = {0.0f, 0.0f, 0.0f};

	UPROPERTY()
	AGP3PlayerPawn* Owner = nullptr;
};
