// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GP3KeyAxisMapper.h"

#include "Components/InputKeySelector.h"
#include "Data/GP3SettingsSaveGame.h"
#include "GameFramework/InputSettings.h"
#include "Framework/Commands/InputChord.h"
#include "Kismet/KismetInputLibrary.h"

void UGP3KeyAxisMapper::LoadMappingFromSaveGame()
{
	if (SettingsSaveGame)
	{
		FName SaveName(FString::Printf(TEXT("%s Scale=%f"), *InputName.ToString(), InputScale));
		if (SettingsSaveGame->KeyboardMouseAxisMappings.Contains(SaveName))
		{
			ChangeKeyboardMouseKeybinding(FInputChord(SettingsSaveGame->KeyboardMouseAxisMappings[SaveName]));
		}
		if (SettingsSaveGame->JoystickAxisMappings.Contains(SaveName))
		{
			ChangeJoystickKeybinding(FInputChord(SettingsSaveGame->JoystickAxisMappings[SaveName]));
		}
	}
}

void UGP3KeyAxisMapper::SaveMappingToSaveGame(FKey Key, bool bIsKeyboardMouseMapping, bool bIsJoystickMapping)
{
	if (SettingsSaveGame)
	{
		FName SaveName(FString::Printf(TEXT("%s Scale=%f"), *InputName.ToString(), InputScale));
		if (bIsKeyboardMouseMapping)
		{
			if (SettingsSaveGame->KeyboardMouseAxisMappings.Contains(SaveName))
			{
				SettingsSaveGame->KeyboardMouseAxisMappings[SaveName] = Key;
			}
			else
			{
				SettingsSaveGame->KeyboardMouseAxisMappings.Add(SaveName, Key);
			}
		}
		if (bIsJoystickMapping)
		{
			if (SettingsSaveGame->JoystickAxisMappings.Contains(SaveName))
			{
				SettingsSaveGame->JoystickAxisMappings[SaveName] = Key;
			}
			else
			{
				SettingsSaveGame->JoystickAxisMappings.Add(SaveName, Key);
			}
		}
	}
}

void UGP3KeyAxisMapper::SetKeyboardMouseKeyText(UInputKeySelector* KeySelector)
{
	TArray<FInputAxisKeyMapping> KeyMapping;
	InputSettings->GetAxisMappingByName(InputName, KeyMapping);
	KeySelector->SetSelectedKey(FInputChord());

	// Show first found PC binding
	for (auto& Mapping : KeyMapping)
	{
		if (Mapping.Scale == InputScale && (UKismetInputLibrary::Key_IsKeyboardKey(Mapping.Key) || Mapping.Key.IsMouseButton()))
		{
			KeySelector->SetSelectedKey(Mapping.Key);
			break;
		}
	}
}

void UGP3KeyAxisMapper::SetJoystickKeyText(UInputKeySelector* KeySelector)
{
	TArray<FInputAxisKeyMapping> KeyMapping;
	InputSettings->GetAxisMappingByName(InputName, KeyMapping);
	KeySelector->SetSelectedKey(FInputChord());

	// Show first found Joystick binding
	for (auto& Mapping : KeyMapping)
	{
		if (Mapping.Scale == InputScale && Mapping.Key.IsGamepadKey())
		{
			KeySelector->SetSelectedKey(Mapping.Key);
			break;
		}
	}
}

void UGP3KeyAxisMapper::ChangeKeyboardMouseKeybinding(FInputChord InputChord)
{
	TArray<FInputAxisKeyMapping> KeyMapping;
	InputSettings->GetAxisMappingByName(InputName, KeyMapping);

	//Remove old key bindings of the same scale (forward/backward)
	for (auto& Mapping : KeyMapping)
	{
		if (Mapping.Scale == InputScale && (UKismetInputLibrary::Key_IsKeyboardKey(Mapping.Key) || Mapping.Key.IsMouseButton()))
		{
			InputSettings->RemoveAxisMapping(Mapping);
		}
	}

	FInputAxisKeyMapping NewMapping(InputName, InputChord.Key, InputScale);
	InputSettings->AddAxisMapping(NewMapping, true);
	InputSettings->SaveKeyMappings();

	SaveMappingToSaveGame(InputChord.Key, true, false);
}

void UGP3KeyAxisMapper::ChangeJoystickKeybinding(FInputChord InputChord)
{
	if (InputChord.Key.IsGamepadKey() == false)
	{
		SetJoystickKeyText(GetJoystickKeySelector());
		return;
	}

	TArray<FInputAxisKeyMapping> KeyMapping;
	InputSettings->GetAxisMappingByName(InputName, KeyMapping);

	//Remove old key bindings of the same scale (forward/backward)
	for (auto& Mapping : KeyMapping)
	{
		if (Mapping.Scale == InputScale && Mapping.Key.IsGamepadKey())
		{
			InputSettings->RemoveAxisMapping(Mapping);
		}
	}

	FInputAxisKeyMapping NewMapping(InputName, InputChord.Key, InputScale);
	InputSettings->AddAxisMapping(NewMapping, true);
	InputSettings->SaveKeyMappings();

	SaveMappingToSaveGame(InputChord.Key, false, true);
}
