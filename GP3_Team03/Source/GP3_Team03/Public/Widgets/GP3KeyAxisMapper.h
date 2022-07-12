// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GP3KeyActionMapper.h"
#include "GP3KeyAxisMapper.generated.h"

UCLASS()
class GP3_TEAM03_API UGP3KeyAxisMapper : public UGP3KeyActionMapper
{
	GENERATED_BODY()

private:
	void LoadMappingFromSaveGame() override;

	void SaveMappingToSaveGame(FKey Key, bool bIsKeyboardMouseMapping, bool bIsJoystickMapping) override;

	void SetKeyboardMouseKeyText(UInputKeySelector* KeySelector) override;

	void SetJoystickKeyText(UInputKeySelector* KeySelector) override;

	void ChangeKeyboardMouseKeybinding(FInputChord InputChord) override;

	void ChangeJoystickKeybinding(FInputChord InputChord) override;

	UPROPERTY(EditAnywhere, Category = "Keybindings", meta = (ClampMin = "-1", ClampMax = "1"))
	float InputScale;
};
