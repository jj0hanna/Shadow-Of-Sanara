// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GP3SettingsSaveGame.generated.h"

UCLASS()
class GP3_TEAM03_API UGP3SettingsSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<FName, FKey> KeyboardMouseActionMappings;

	UPROPERTY()
	TMap<FName, FKey> JoystickActionMappings;

	UPROPERTY()
	TMap<FName, FKey> KeyboardMouseAxisMappings;

	UPROPERTY()
	TMap<FName, FKey> JoystickAxisMappings;
};
