#include "Widgets/GP3SettingsWidget.h"

#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "GameFramework/GameUserSettings.h"
#include "Kismet/KismetSystemLibrary.h"


void UGP3SettingsWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Settings = GEngine->GameUserSettings;

	SetupFullscreenModeDropdown(GetFullscreenModeDropdown());

	//SetupFullscreenToggle(GetFullscreenToggle());

	SetupResolutionDropdown(GetResolutionDropdown());
	
	SetupQualityDropdown(GetQualityDropdown());

	SetupVSyncToggle(GetVSyncToggle());
}

void UGP3SettingsWidget::SetupFullscreenModeDropdown(UComboBoxString* Dropdown)
{
	Dropdown->SetSelectedIndex(Settings->GetFullscreenMode());
	Dropdown->OnSelectionChanged.AddDynamic(this, &UGP3SettingsWidget::HandleFullscreenModeChange);
}

void UGP3SettingsWidget::SetupFullscreenToggle(UCheckBox* CheckBox)
{
	CheckBox->SetCheckedState(Settings->GetFullscreenMode() == EWindowMode::Fullscreen ? ECheckBoxState::Checked : ECheckBoxState::Unchecked);
	CheckBox->OnCheckStateChanged.AddDynamic(this, &UGP3SettingsWidget::HandleFullscreenToggle);
}

void UGP3SettingsWidget::SetupResolutionDropdown(UComboBoxString* Dropdown)
{
	// LOAD RESOLUTION OPTIONS
	UKismetSystemLibrary::GetSupportedFullscreenResolutions(SupportedResolutions);
	FString ResolutionText;

	for (const auto& Resolution : SupportedResolutions)
	{
		ResolutionText = FString::Printf(TEXT("%i x %i"), Resolution.X, Resolution.Y);
		Dropdown->AddOption(ResolutionText);
	}

	// SET CURRENT RESOLUTION
	FIntPoint CurrentResolution = Settings->GetScreenResolution();
	Dropdown->SetSelectedOption(FString::Printf(TEXT("%i x %i"), CurrentResolution.X, CurrentResolution.Y));

	Dropdown->OnSelectionChanged.AddDynamic(this, &UGP3SettingsWidget::HandleResolutionChange);
}

void UGP3SettingsWidget::SetupQualityDropdown(UComboBoxString* Dropdown)
{
	Dropdown->SetSelectedIndex(Settings->GetOverallScalabilityLevel());
	Dropdown->OnSelectionChanged.AddDynamic(this, &UGP3SettingsWidget::HandleQualityChange);
}

void UGP3SettingsWidget::SetupVSyncToggle(UCheckBox* CheckBox)
{
	CheckBox->SetCheckedState(Settings->IsVSyncEnabled() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked);
	CheckBox->OnCheckStateChanged.AddDynamic(this, &UGP3SettingsWidget::HandleVSyncToggle);
}

void UGP3SettingsWidget::HandleFullscreenModeChange(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	int SelectedIndex = GetFullscreenModeDropdown()->GetSelectedIndex();
	Settings->SetFullscreenMode(EWindowMode::ConvertIntToWindowMode(SelectedIndex));
	Settings->ApplyResolutionSettings(false);
}

void UGP3SettingsWidget::HandleFullscreenToggle(bool bIsChecked)
{
	EWindowMode::Type CurrentMode = Settings->GetFullscreenMode();
	EWindowMode::Type NewMode = CurrentMode == EWindowMode::Fullscreen ? EWindowMode::Windowed : EWindowMode::Fullscreen;
	Settings->SetFullscreenMode(NewMode);
	Settings->ApplyResolutionSettings(false);
}

void UGP3SettingsWidget::HandleResolutionChange(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	int SelectedIndex = GetResolutionDropdown()->GetSelectedIndex();
	FIntPoint Resolution = SupportedResolutions[SelectedIndex];
	Settings->SetScreenResolution(Resolution);
	Settings->ApplyResolutionSettings(false);
}

void UGP3SettingsWidget::HandleQualityChange(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	int QualityIndex = GetQualityDropdown()->GetSelectedIndex();
	Settings->SetOverallScalabilityLevel(QualityIndex);
	Settings->ApplyHardwareBenchmarkResults();
}

void UGP3SettingsWidget::HandleVSyncToggle(bool bIsChecked)
{
	Settings->SetVSyncEnabled(bIsChecked);
	Settings->ApplySettings(false);
}