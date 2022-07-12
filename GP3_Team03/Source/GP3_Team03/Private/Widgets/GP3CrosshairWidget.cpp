// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GP3CrosshairWidget.h"

#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GP3PlayerPawn.h"
#include "Player/GP3ShootComponent.h"
#include "Weapons/WeaponBase.h"

void UGP3CrosshairWidget::NativeConstruct()
{
	Super::NativeConstruct();

	AmmoImages = GetAmmoImages();
	ShootComp = Cast<AGP3PlayerPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->ShootComp;

	WeaponChanged(); // Make sure to subscribe to starting weapons events because of execution order

	ShootComp->OnWeaponEquipped.AddDynamic(this, &UGP3CrosshairWidget::WeaponChanged);
}

void UGP3CrosshairWidget::WeaponChanged()
{
	if (ShootComp->Gun)
	{
		ShootComp->Gun->OnAmmoChanged.AddDynamic(this, &UGP3CrosshairWidget::UpdateAmmo);
	}
}

void UGP3CrosshairWidget::UpdateAmmo()
{
	int CurrentAmmo = ShootComp->Gun->CurrentAmmo;

	for (int i = 0; i < AmmoImages.Num(); ++i)
	{
		AmmoImages[i]->SetVisibility(i == CurrentAmmo ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	}
}
