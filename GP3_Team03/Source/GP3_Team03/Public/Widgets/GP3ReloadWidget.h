// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GP3ReloadWidget.generated.h"

class AGP3PlayerPawn;
class UCanvasPanel;
class UCanvasPanelSlot;
class UImage;

UCLASS()
class GP3_TEAM03_API UGP3ReloadWidget : public UUserWidget
{
	GENERATED_BODY()

	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	void StartReload();
	void EndReload();

	UFUNCTION(BlueprintCallable)
	bool DoQuickReload();

	UFUNCTION(BlueprintImplementableEvent)
	UImage* GetReloadBar();

	UFUNCTION(BlueprintImplementableEvent)
	UImage* GetHitZone();

	UFUNCTION(BlueprintImplementableEvent)
	UImage* GetHitBar();

	//Methods to update UI elements from BPs
	UFUNCTION(BlueprintImplementableEvent)
	void OnReloadStart();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReloadEnd();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReloadSuccess();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReloadFail();

private:
	UPROPERTY()
	UCanvasPanelSlot* ReloadBar;

	UPROPERTY()
	UCanvasPanelSlot* HitBar;

	UPROPERTY()
	UCanvasPanelSlot* HitZone;

	UPROPERTY()
	AGP3PlayerPawn* PlayerPawn;

	bool FailedQuickReload = false;
	bool IsReloading = false;
	float ReloadBarSpeed = 10;
	float ReloadTime = 0;
	float TimeSpentReloading = 0;

	//Values to lerp the hit bar between.
	float FromX;
	float ToX;

	UPROPERTY(EditDefaultsOnly)
	float SafetyBufferTime = 0.2f;

	UPROPERTY(EditDefaultsOnly)
	float StartDelayTime = 0.2f;
};