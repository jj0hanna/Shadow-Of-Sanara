// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GP3PlayerDashTrail.generated.h"

class USplineComponent;

UCLASS()
class GP3_TEAM03_API AGP3PlayerDashTrail : public AActor
{
	GENERATED_BODY()
	
public:	
	AGP3PlayerDashTrail();

	void BeginPlay() override;

	void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnExtendSpline(int Index, FVector Location);

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	USplineComponent* Spline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TrailLifetime = 4;

	float InternalLifeTimer = 0.0f;
};
