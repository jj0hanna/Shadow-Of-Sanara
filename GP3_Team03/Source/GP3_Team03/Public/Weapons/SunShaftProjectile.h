// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SunShaftProjectile.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()
class GP3_TEAM03_API ASunShaftProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ASunShaftProjectile();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly, Category= Projectile, meta = (AllowPrivateAccess = "true"))
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly, Category= Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, Category= Projectile, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileComponent;

	UPROPERTY()
	float InitialSpeed;

	UPROPERTY()
	float Gravity = 2;
};
