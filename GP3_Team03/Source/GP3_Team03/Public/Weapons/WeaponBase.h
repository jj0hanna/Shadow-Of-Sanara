// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SunShaftProjectile.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "WeaponBase.generated.h"

class USplineComponent;
USTRUCT(BlueprintType)
struct FWeaponData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor>Projectile;

	UPROPERTY(EditAnywhere)
	FString WeaponName;

	UPROPERTY(EditAnywhere)
	float WeaponDamage;

	UPROPERTY(EditAnywhere)//Added critical damage
	float WeaponCriticalDamage;

	UPROPERTY(EditAnywhere)
	float WeaponRange;

	UPROPERTY(EditAnywhere)
	float WeaponShootCooldown;

	UPROPERTY(EditAnywhere)
	float WeaponReloadTime;

	UPROPERTY(EditAnywhere)
	float WeaponAmmo;
};
UCLASS()
class GP3_TEAM03_API AWeaponBase : public AActor
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadedEvent);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAmmoChangedEvent);
	
public:	
	
	AWeaponBase();

protected:
	
	UPROPERTY(EditAnywhere)
	class UDataTable* WeaponDataTable;

	FWeaponData* WeaponData;

	UPROPERTY(EditAnywhere)
	FName DefaultWeaponName;

	
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

public:

	UPROPERTY()
	TSubclassOf<AActor> Projectile;
	void SelectWeapon(FName SpellName);
	FHitResult Use();
	float GetDamageFromGun();
	float GetCriticalDamageFromGun();
	float StartAmmo;
	float CurrentAmmo;
	float ShootCoolDownTimer;
	float ReLoadTimer;
	float ReLoadTime;

	UPROPERTY(BlueprintReadOnly)
	bool IsReLoading;
	
	bool HasAmmo();
	
	UFUNCTION()
	void ReLoadGun();

	UFUNCTION(BlueprintCallable)
	void InstantReload();

	UPROPERTY()
	FOnReloadedEvent OnReloadFinished;

	UPROPERTY()
	FOnAmmoChangedEvent OnAmmoChanged;

	void SetProjectileVelocity(float Delta);

	//UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, meta =(AllowPrivateAccess="true"))
	//USplineComponent* SplinePath;
	//
	//UPROPERTY(Category="Built in components", EditDefaultsOnly) //
	//USceneComponent* StartProjectileLocation;
//
	//bool bCalculateProjectilePath; //

	UPROPERTY()
	float LaunchVelocity = 1500; // fix exposed

	UPROPERTY()
	float MinLaunchVelocity = 500.f; // fix exposed

	UPROPERTY()
	float MaxLaunchVelocity = 3000.f; // fix exposed
};
