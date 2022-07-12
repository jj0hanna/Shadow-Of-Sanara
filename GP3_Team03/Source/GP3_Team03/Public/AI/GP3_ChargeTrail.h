// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "GP3_ChargeTrail.generated.h"

UCLASS()
class GP3_TEAM03_API AGP3_ChargeTrail : public AActor
{
	GENERATED_BODY()

public:
	AGP3_ChargeTrail();
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	USplineMeshComponent* TrailMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DashTrailDuration = 4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TrailDamage = 10;

};
