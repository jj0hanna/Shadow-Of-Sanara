// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GP3SettingsWidget.generated.h"

class UCheckBox;
class UComboBoxString;

UCLASS()
class GP3_TEAM03_API UGP3SettingsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	UComboBoxString* GetFullscreenModeDropdown();

	UFUNCTION(BlueprintImplementableEvent)
	UCheckBox* GetFullscreenToggle();

	UFUNCTION(BlueprintImplementableEvent)
	UComboBoxString* GetResolutionDropdown();

	UFUNCTION(BlueprintImplementableEvent)
	UComboBoxString* GetQualityDropdown();

	UFUNCTION(BlueprintImplementableEvent)
	UCheckBox* GetVSyncToggle();

	void NativeConstruct() override;

private:
	void SetupFullscreenModeDropdown(UComboBoxString* Dropdown);

	void SetupFullscreenToggle(UCheckBox* CheckBox);

	void SetupResolutionDropdown(UComboBoxString* Dropdown);

	void SetupQualityDropdown(UComboBoxString* Dropdown);

	void SetupVSyncToggle(UCheckBox* CheckBox);

	UFUNCTION()
	void HandleFullscreenModeChange(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void HandleFullscreenToggle(bool bIsChecked);

	UFUNCTION()
	void HandleResolutionChange(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void HandleQualityChange(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void HandleVSyncToggle(bool bIsChecked);

	UGameUserSettings* Settings;

	TArray<FIntPoint> SupportedResolutions;
};
