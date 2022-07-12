// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GP3KeyActionMapper.generated.h"

class UGP3SettingsSaveGame;
class UTextBlock;
class UInputKeySelector;
class UInputSettings;
struct FInputChord;

UCLASS()
class GP3_TEAM03_API UGP3KeyActionMapper : public UUserWidget
{
	GENERATED_BODY()

	void NativeConstruct() override;

public:
	UFUNCTION(BlueprintImplementableEvent)
	UTextBlock* GetDisplayTextBlock();

	UFUNCTION(BlueprintImplementableEvent)
	UInputKeySelector* GetKeyboardMouseKeySelector();

	UFUNCTION(BlueprintImplementableEvent)
	UInputKeySelector* GetJoystickKeySelector();

private:
	virtual void LoadMappingFromSaveGame();

	virtual void SaveMappingToSaveGame(FKey Key, bool bIsKeyboardMouseMapping, bool bIsJoystickMapping);

	virtual void SetKeyboardMouseKeyText(UInputKeySelector* KeySelector);

	virtual void SetJoystickKeyText(UInputKeySelector* KeySelector);

	UFUNCTION()
	virtual void ChangeKeyboardMouseKeybinding(FInputChord InputChord);

	UFUNCTION()
	virtual void ChangeJoystickKeybinding(FInputChord InputChord);

protected:
	UPROPERTY()
	UInputSettings* InputSettings;

	UPROPERTY(EditAnywhere, Category = "Keybindings")
	FText DisplayName;

	UPROPERTY(EditAnywhere, Category = "Keybindings")
	bool bHideJoystickKeySelector = false;

	UPROPERTY(EditAnywhere, Category = "Keybindings")
	FName InputName;

	UPROPERTY()
	UGP3SettingsSaveGame* SettingsSaveGame;;
};
