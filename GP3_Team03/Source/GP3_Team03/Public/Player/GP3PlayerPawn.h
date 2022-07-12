// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GP3DashComponent.h"
#include "GP3GameInstance.h"
#include "AI/GP3_ChargeTrail.h"
#include "GP3PlayerPawn.generated.h"

class UGP3SpawnWave;
class ASunShaftProjectile;
class UGP3WASDMovementComponent;
class UGP3ShootComponent;
class UGP3DodgeComponent;
class UGP3PlayerSpringArmComponent;

class UCameraComponent;
class UCapsuleComponent;
class UNigaraComponent;
class USplineComponent;
class USkeletalMeshComponent;
class UPlayerPawnMovementComponent;

UCLASS()
class GP3_TEAM03_API AGP3PlayerPawn : public APawn
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTookDamageEvent);

public:
	AGP3PlayerPawn();

	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaSeconds) override;

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void HandleMoveForwardInput(float ForwardInput);
	
	void HandleMoveRightInput(float RightInput);
	
	void HandleLookYawInput(float YawInput);
	
	void HandleLookPitchInput(float PitchInput);

	void PressedSunShaftAbility();
	
	void ReleasedSunShaftAbility();

	void SetProjectileVelocity(float Delta);
	
	void Aim();
	
	void StopAim();

	void RotatePlayerWithController();
	
	UFUNCTION(Category="Player Health", BlueprintCallable)
	void RemovePlayerHealth(float Amount, bool bBroadcast);
	
	UFUNCTION(Category="Player Health", BlueprintCallable)
	void AddPlayerHealth(float Amount);
	
	UFUNCTION(Category="Player Health", BlueprintCallable)
	void PlayerDie();
	
	UFUNCTION(BlueprintCallable)
	void ResetDeathCounter() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnForwardInput();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnRightInput();

	UFUNCTION()
	void OnTakeDamage(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	void TakeExplosiveDamage(float Damage);

	UFUNCTION(BlueprintImplementableEvent)
	void OnDashStart();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDashFinish();

	UFUNCTION(BlueprintImplementableEvent)
	void OnMoveStart();

	UFUNCTION(BlueprintImplementableEvent)
	void OnMoveFinish();

	UFUNCTION(BlueprintImplementableEvent)
	void OnTookDamage();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();

	UFUNCTION(BlueprintImplementableEvent)
	void OnShoot();
	
	UPROPERTY(Category="Custom Components", EditAnywhere, BlueprintReadWrite)
	UGP3WASDMovementComponent* WASDMovementComp;
	
	UPROPERTY(Category="Custom Components", EditAnywhere, BlueprintReadWrite)
	UGP3ShootComponent* ShootComp;
	
	UPROPERTY(Category="Custom Components", EditAnywhere, BlueprintReadWrite)
	UGP3DashComponent* DashComp;

	UPROPERTY(Category="Custom Components", EditAnywhere, BlueprintReadWrite)
	UGP3DodgeComponent* DodgeComp;
	
	UPROPERTY(Category="Built in components", EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* MeshComp;
	
	UPROPERTY(Category="Built in components", EditDefaultsOnly)
	UCameraComponent* CameraComp;

	UPROPERTY(Category="Built in components", EditDefaultsOnly,BlueprintReadOnly)
	UCapsuleComponent* CapsuleComp;
	
	UPROPERTY(Category="Built in components", EditDefaultsOnly)
	UGP3PlayerSpringArmComponent* SpringArmComp;

	UPROPERTY(Category="Built in components", EditDefaultsOnly)
	USceneComponent* StartProjectileLocation;

	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, meta =(AllowPrivateAccess="true"))
	USplineComponent* SplinePath;

	UNigaraComponent* PathVisualEffect;

	UPROPERTY(Category = "Player Values",EditAnywhere, BlueprintReadWrite)
	float DefaultTrailDamageTimeDelay;
	
	UPROPERTY(Category = "Player Values", EditDefaultsOnly, BlueprintReadWrite)
	float PlayerHealth;
	
	UPROPERTY(Category = "Player Values", EditDefaultsOnly, BlueprintReadWrite)
	float PlayerMaxHealth;

	float TrailDamageTimeDelay = 0;
	
	UPROPERTY(BlueprintReadWrite)
	float RightInputValue = 0.0f;
	
	UPROPERTY(BlueprintReadWrite)
	float ForwardInputValue = 0.0f;

	UPROPERTY()
	float LaunchVelocity;

	UPROPERTY()
	float MinLaunchVelocity = 500.f;

	UPROPERTY()
	float MaxLaunchVelocity = 3000.f;
	
	UPROPERTY()
	float ProjectileRadius = 10.0f;

	float CurrentHorizontalLookSpeed = 0.0f;

	float CurrentVerticalLookSpeed = 0.0f;

	UPROPERTY(EditAnywhere)
	bool bDebugPlayerCantDie;
	
	UPROPERTY(VisibleAnywhere)
	bool bIsInvincible = false;

	UPROPERTY(VisibleAnywhere)
	bool bIsDashing = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsUsingGamepad = false;

	bool bCalculateProjectilePath; //

	UPROPERTY(BlueprintAssignable,BlueprintCallable)
	FTookDamageEvent TookDamage;
	
	UPROPERTY()
	UGP3GameInstance* GameInstance;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ASunShaftProjectile> Projectile; //

	UPROPERTY()
	AGP3_ChargeTrail* ChargeTrailRef;

private:
	int32 CallTracker = 3;
	
	UPROPERTY()
	APlayerController* PlayerController;
	
public:
	UPROPERTY(Category = "Player Death",EditAnywhere)
	float DeathDelay = 6.f;
	
	void LastBreath();
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	bool bPlayerAlive = true;
	
	FTimerHandle TimerHandle;
	
	UPROPERTY(Category = "Player Death",EditAnywhere)
	UAnimSequence* DeathAnimation;
};
