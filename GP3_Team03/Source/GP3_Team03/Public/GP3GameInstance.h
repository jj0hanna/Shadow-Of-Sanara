// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GP3GameInstance.generated.h"

class UGP3SettingsSaveGame;

UCLASS()
class GP3_TEAM03_API UGP3GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	UGP3SettingsSaveGame* GetSettingsSaveGame();
	UPROPERTY(Category = "Player Values", EditDefaultsOnly, BlueprintReadOnly)
	int DeathCount;
};
