// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GP3_AIBullet.generated.h"

UCLASS()
class GP3_TEAM03_API AGP3_AIBullet : public AActor
{
	GENERATED_BODY()
	
public:	

	AGP3_AIBullet();


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		UStaticMeshComponent* BulletMesh;

	UPROPERTY(Category = "AI - AOE Values", EditAnywhere, BlueprintReadWrite)
		float Damage = 20.f;

	UPROPERTY(Category = "AI - AOE Values", EditAnywhere, BlueprintReadWrite)
		float ExplosionRadius = 20.f;

};
