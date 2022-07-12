// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GP3PlayerHealthWidget.generated.h"

class UProgressBar;
class AGP3PlayerPawn;
/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UGP3PlayerHealthWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintImplementableEvent)
	UProgressBar* GetHealthProgressBar();

private:
	UFUNCTION()
	void UpdateHealth();

	UPROPERTY()
	AGP3PlayerPawn* PlayerPawn;

	UPROPERTY()
	UProgressBar* HealthProgressBar;
};
