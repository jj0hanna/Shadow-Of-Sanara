// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h"
#include "GP3_ChargeEnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GP3_TEAM03_API AGP3_ChargeEnemyCharacter : public AGP3_AI_BaseCharacter
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsCharging;

	
	
};
