// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GP3DashCooldownWidget.h"

#include "Components/ProgressBar.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GP3PlayerPawn.h"

void UGP3DashCooldownWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ProgressBar = GetProgressBar();

	AGP3PlayerPawn* PlayerPawn = Cast<AGP3PlayerPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	DashComp = PlayerPawn->DashComp;
	DashComp->OnDash.AddDynamic(this, &UGP3DashCooldownWidget::OnDash);
}

void UGP3DashCooldownWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bIsOnCooldown)
	{
		if (DashComp->ReadyToDash == false)
		{
			float CooldownTimer = DashComp->InternalDashCooldownTimer;
			float Cooldown = DashComp->DashCooldown;
			float RemainingTime = Cooldown - CooldownTimer;

			float Percentage = RemainingTime / Cooldown;

			ProgressBar->SetPercent(Percentage);
		}
		else
		{
			ProgressBar->SetPercent(0);
			bIsOnCooldown = false;
			OnCooldownEnd();
		}
	}
}

void UGP3DashCooldownWidget::OnDash()
{
	bIsOnCooldown = true;
	OnCooldownStart();
}