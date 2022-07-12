// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GP3PlayerHealthWidget.h"

#include "Components/ProgressBar.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GP3PlayerPawn.h"

void UGP3PlayerHealthWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HealthProgressBar = GetHealthProgressBar();
	PlayerPawn = Cast<AGP3PlayerPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	PlayerPawn->TookDamage.AddDynamic(this, &UGP3PlayerHealthWidget::UpdateHealth);
}

void UGP3PlayerHealthWidget::UpdateHealth()
{
	float HealthPercentage = PlayerPawn->PlayerHealth / PlayerPawn->PlayerMaxHealth;
	HealthProgressBar->SetPercent(HealthPercentage);
}