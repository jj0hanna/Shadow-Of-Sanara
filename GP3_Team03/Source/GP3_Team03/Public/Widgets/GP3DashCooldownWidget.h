// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GP3DashCooldownWidget.generated.h"

class UProgressBar;
class UGP3DashComponent;
/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UGP3DashCooldownWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	UProgressBar* GetProgressBar();

	UFUNCTION(BlueprintImplementableEvent)
	void OnCooldownStart();

	UFUNCTION(BlueprintImplementableEvent)
	void OnCooldownEnd();

private:
	UFUNCTION()
	void OnDash();

	UPROPERTY()
	UGP3DashComponent* DashComp;

	UPROPERTY()
	UProgressBar* ProgressBar;

	bool bIsOnCooldown = false;
};
