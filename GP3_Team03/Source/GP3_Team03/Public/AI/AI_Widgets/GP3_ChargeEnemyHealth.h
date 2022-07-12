// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GP3_ChargeEnemyHealth.generated.h"

/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UGP3_ChargeEnemyHealth : public UUserWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent)
		UTextBlock* ChargeEnemyHealth();

	UFUNCTION(BlueprintCallable)
		void UpdateHealth(float Health);



};
