// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GP3ReloadWidget.h"

#include "Components/Image.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GP3PlayerPawn.h"
#include "Player/GP3ShootComponent.h"
#include "Weapons/WeaponBase.h"

void UGP3ReloadWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ReloadBar = Cast<UCanvasPanelSlot>(GetReloadBar()->Slot);
	HitBar = Cast<UCanvasPanelSlot>(GetHitBar()->Slot);
	HitZone = Cast<UCanvasPanelSlot>(GetHitZone()->Slot);
	PlayerPawn = Cast<AGP3PlayerPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	//Calculate start and end positions
	float ReloadPanelWidth = ReloadBar->GetSize().X;
	float PanelX = ReloadBar->GetPosition().X;
	FromX = PanelX - ReloadPanelWidth / 2;
	ToX = PanelX + ReloadPanelWidth / 2;
}

void UGP3ReloadWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (IsReloading && UGameplayStatics::IsGamePaused(this) == false)
	{
		TimeSpentReloading += InDeltaTime;

		float T = FMath::Clamp((TimeSpentReloading - StartDelayTime) / (ReloadTime - StartDelayTime), 0.f, 1.f);
		float X = FMath::Lerp(FromX, ToX, T);
		float Y = HitBar->GetPosition().Y;
		HitBar->SetPosition(FVector2D(X, Y));

		if (TimeSpentReloading > ReloadTime)
		{
			HitBar->SetPosition(FVector2D(ToX, Y));
			EndReload();
		}
	}
}

/**
 * @brief Open and start the active reload widget.
 */
void UGP3ReloadWidget::StartReload()
{
	IsReloading = true;
	TimeSpentReloading = 0;
	ReloadTime = PlayerPawn->ShootComp->Gun->ReLoadTime;

	//Reset the bar position to the start
	HitBar->SetPosition(FVector2D(FromX, HitBar->GetPosition().Y));

	OnReloadStart();
}

/**
 * @brief Stop and close the active reload widget.
 */
void UGP3ReloadWidget::EndReload()
{
	IsReloading = false;
	FailedQuickReload = false;
	OnReloadEnd();
}

bool UGP3ReloadWidget::DoQuickReload()
{
	if (IsReloading == false || FailedQuickReload)
	{
		return false;
	}

	float ZoneX = HitZone->GetPosition().X;
	float ZoneWidth = HitZone->GetSize().X / 2;
	float ZoneMin = ZoneX - ZoneWidth;
	float ZoneMax = ZoneX + ZoneWidth;

	float BarX = HitBar->GetPosition().X;

	bool Success = BarX >= ZoneMin && BarX <= ZoneMax;

	if (Success)
	{
		OnReloadSuccess();
	}
	else if (TimeSpentReloading > SafetyBufferTime + StartDelayTime)
	{
		//Restart the active reload without the hit zone if player clicked at the wrong time.
		FailedQuickReload = true;
		PlayerPawn->ShootComp->Gun->ReLoadTimer = PlayerPawn->ShootComp->Gun->ReLoadTime;
		StartReload();
		OnReloadFail();
	}

	return Success;
}