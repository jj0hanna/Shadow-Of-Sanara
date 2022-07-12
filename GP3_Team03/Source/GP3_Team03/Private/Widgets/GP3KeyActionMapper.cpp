// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GP3KeyActionMapper.h"

#include "GP3GameInstance.h"
#include "Components/InputKeySelector.h"
#include "Components/TextBlock.h"
#include "Data/GP3SettingsSaveGame.h"
#include "GameFramework/InputSettings.h"
#include "Framework/Commands/InputChord.h"
#include "Kismet/KismetInputLibrary.h"


void UGP3KeyActionMapper::NativeConstruct()
{
	Super::NativeConstruct();

	InputSettings = UInputSettings::GetInputSettings();

	UGP3GameInstance* GameInstance = GetWorld()->GetGameInstance<UGP3GameInstance>();
	SettingsSaveGame = GameInstance->GetSettingsSaveGame();
	LoadMappingFromSaveGame();

	GetDisplayTextBlock()->SetText(DisplayName);
	
	UInputKeySelector* KeyboardMouseKeySelector = GetKeyboardMouseKeySelector();
	SetKeyboardMouseKeyText(KeyboardMouseKeySelector);

	UInputKeySelector* JoystickKeySelector = GetJoystickKeySelector();
	SetJoystickKeyText(JoystickKeySelector);

	if (bHideJoystickKeySelector)
	{
		JoystickKeySelector->SetVisibility(ESlateVisibility::Hidden);
	}

	KeyboardMouseKeySelector->OnKeySelected.AddDynamic(this, &UGP3KeyActionMapper::ChangeKeyboardMouseKeybinding);
	JoystickKeySelector->OnKeySelected.AddDynamic(this, &UGP3KeyActionMapper::ChangeJoystickKeybinding);
}

void UGP3KeyActionMapper::LoadMappingFromSaveGame()
{
	if (SettingsSaveGame)
	{
		if (SettingsSaveGame->KeyboardMouseActionMappings.Contains(InputName))
		{
			ChangeKeyboardMouseKeybinding(FInputChord(SettingsSaveGame->KeyboardMouseActionMappings[InputName]));
		}
		if (SettingsSaveGame->JoystickActionMappings.Contains(InputName))
		{
			ChangeJoystickKeybinding(FInputChord(SettingsSaveGame->JoystickActionMappings[InputName]));
		}
	}
}

void UGP3KeyActionMapper::SaveMappingToSaveGame(FKey Key, bool bIsKeyboardMouseMapping, bool bIsJoystickMapping)
{
	if (SettingsSaveGame)
	{
		if (bIsKeyboardMouseMapping)
		{
			if (SettingsSaveGame->KeyboardMouseActionMappings.Contains(InputName))
			{
				SettingsSaveGame->KeyboardMouseActionMappings[InputName] = Key;
			}
			else
			{
				SettingsSaveGame->KeyboardMouseActionMappings.Add(InputName, Key);
			}
		}
		if (bIsJoystickMapping)
		{
			if (SettingsSaveGame->JoystickActionMappings.Contains(InputName))
			{
				SettingsSaveGame->JoystickActionMappings[InputName] = Key;
			}
			else
			{
				SettingsSaveGame->JoystickActionMappings.Add(InputName, Key);
			}
		}
	}
}

void UGP3KeyActionMapper::SetKeyboardMouseKeyText(UInputKeySelector* KeySelector)
{
	TArray<FInputActionKeyMapping> KeyMapping;
	InputSettings->GetActionMappingByName(InputName, KeyMapping);
	KeySelector->SetSelectedKey(FInputChord());

	// Show first found PC binding
	for (auto& Mapping : KeyMapping)
	{
		if (UKismetInputLibrary::Key_IsKeyboardKey(Mapping.Key) || Mapping.Key.IsMouseButton())
		{
			KeySelector->SetSelectedKey(Mapping.Key);
			break;
		}
	}
}

void UGP3KeyActionMapper::SetJoystickKeyText(UInputKeySelector* KeySelector)
{
	TArray<FInputActionKeyMapping> KeyMapping;
	InputSettings->GetActionMappingByName(InputName, KeyMapping);
	KeySelector->SetSelectedKey(FInputChord());

	// Show first found Joystick binding
	for (auto& Mapping : KeyMapping)
	{
		if (Mapping.Key.IsGamepadKey())
		{
			KeySelector->SetSelectedKey(Mapping.Key);
			break;
		}
	}
}

void UGP3KeyActionMapper::ChangeKeyboardMouseKeybinding(FInputChord InputChord)
{
	TArray<FInputActionKeyMapping> KeyMapping;
	InputSettings->GetActionMappingByName(InputName, KeyMapping);

	// Remove PC bindings
	for (auto& Mapping : KeyMapping)
	{
		if (UKismetInputLibrary::Key_IsKeyboardKey(Mapping.Key) || Mapping.Key.IsMouseButton())
		{
			InputSettings->RemoveActionMapping(Mapping);
		}
	}

	FInputActionKeyMapping NewMapping(InputName, InputChord.Key);
	InputSettings->AddActionMapping(NewMapping, true);
	InputSettings->SaveKeyMappings();

	SaveMappingToSaveGame(InputChord.Key, true, false);
}

void UGP3KeyActionMapper::ChangeJoystickKeybinding(FInputChord InputChord)
{
	if (InputChord.Key.IsGamepadKey() == false)
	{
		SetJoystickKeyText(GetJoystickKeySelector());
		return;
	}

	TArray<FInputActionKeyMapping> KeyMapping;
	InputSettings->GetActionMappingByName(InputName, KeyMapping);

	// Remove PC bindings
	for (auto& Mapping : KeyMapping)
	{
		if (Mapping.Key.IsGamepadKey())
		{
			InputSettings->RemoveActionMapping(Mapping);
		}
	}

	FInputActionKeyMapping NewMapping(InputName, InputChord.Key);
	InputSettings->AddActionMapping(NewMapping, true);
	InputSettings->SaveKeyMappings();

	SaveMappingToSaveGame(InputChord.Key, false, true);
}
