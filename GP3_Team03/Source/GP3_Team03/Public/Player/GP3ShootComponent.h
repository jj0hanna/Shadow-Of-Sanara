// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Weapons/WeaponBase.h"
#include "GP3ShootComponent.generated.h"

class UGP3ReloadWidget;
class AGP3PlayerPawn;

UCLASS()
class GP3_TEAM03_API UGP3ShootComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponEquippedEvent);
public:
	UGP3ShootComponent();

	UFUNCTION(BlueprintCallable)
	void Shoot();
	
	UFUNCTION(BlueprintCallable)
	void Reload();

protected:
	virtual void BeginPlay() override;
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	AGP3PlayerPawn* Owner = NULL;

	UPROPERTY(Category="Shoot buffertime", EditAnywhere)
	float ShootBuffer = 0.5f;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	bool ReadyToShoot = true;

	float ShootTimeStamp = 0.0f;
	float InternalCooldownTimer = 0.0f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGP3ReloadWidget> ReloadWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponBase> WeaponClass;

	UPROPERTY(BlueprintReadOnly)
	AWeaponBase* Gun;

	UPROPERTY()
	FOnWeaponEquippedEvent OnWeaponEquipped;
	
	UPROPERTY()
	UGP3ReloadWidget* ReloadWidget;

	bool bCalculateProjectilePath;

private:
	UFUNCTION()
	void OnReloaded();
};
