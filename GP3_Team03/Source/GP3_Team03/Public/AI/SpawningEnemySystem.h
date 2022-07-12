// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#include "GameFramework/Volume.h"
#include "SpawningEnemySystem.generated.h"

class UNavigationSystemV1;
UCLASS()
class GP3_TEAM03_API ASpawningEnemySystem : public AVolume
{
	GENERATED_BODY()

public:
	ASpawningEnemySystem();
	
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SpawnEnemies(int FirstWaveAmount, TSubclassOf<AGP3_AI_BaseCharacter> EnemyType);

	UFUNCTION(BlueprintCallable)
	void SpawnEnemy(TSubclassOf<AGP3_AI_BaseCharacter> EnemyType, AGP3_AI_BaseCharacter* &SpawnedEnemy);

	UFUNCTION(BlueprintImplementableEvent)
	void OnSpawn(const FVector &SpawnedEnemyLocation);

	int NumberToSpawn = 0;

	UPROPERTY(EditAnywhere, Category=Timer)
	float SpawnInterval = 5.0f;

	float SpawnIntervalTimer;

	UPROPERTY(BlueprintReadWrite)
	bool bTimerIsOn;

	UPROPERTY(BlueprintReadWrite)
	bool bReadyToSpawn;

	UPROPERTY(BlueprintReadWrite)
	bool bSpawnerActivated = false;

	FVector Location1;
	
	FRotator SpawnRotation;
	
	FActorSpawnParameters SpawnParams;
	
	FNavLocation SpawnLocation;
	
	UPROPERTY()
	UNavigationSystemV1* NavSystem;
};
