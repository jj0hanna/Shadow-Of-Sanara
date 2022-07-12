// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunProjectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
UCLASS()
class GP3_TEAM03_API AGunProjectile : public AActor
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeakPointHitEvent);
	
public:	
	
	AGunProjectile();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly, Category= Projectile, meta = (AllowPrivateAccess = "true"))
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly, Category= Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category= Projectile, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileComponent;

	UPROPERTY()
	float InitialSpeed;
	
	//Added two variables to get the damage from the gun.
	UPROPERTY(BlueprintReadOnly)
	float Damage;
	UPROPERTY(BlueprintReadOnly)
	float CriticalDamage;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnWeakPointHitEvent OnWeakPointHit;
};
