// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3ShootComponent.h"

#include "DrawDebugHelpers.h"
#include "AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#include "AI/EnemyBaseCharacter/GP3_RangedEnemyCharacter.h"
#include "Components/SplineComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GP3PlayerPawn.h"
#include "Weapons/GunProjectile.h"
#include "Widgets/GP3ReloadWidget.h"

UGP3ShootComponent::UGP3ShootComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	Owner = Cast<AGP3PlayerPawn, AActor>(GetOwner());
}

void UGP3ShootComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
		if (!ReadyToShoot)
		{
			InternalCooldownTimer -= DeltaTime;
			
			// If cooldown has run down to 0, player is ready to shoot.
			if (InternalCooldownTimer <= 0.0f)
			{
				InternalCooldownTimer = Gun->ShootCoolDownTimer;
				ReadyToShoot = true;
			}
		}
}

void UGP3ShootComponent::Shoot()
{
	if (Gun->HasAmmo() && !Gun->IsReLoading && ReadyToShoot)
	{
		InternalCooldownTimer = Gun->ShootCoolDownTimer;
		ReadyToShoot = false;
		//bCalculateProjectilePath = true;
		Gun->Use();
		FVector Start = Owner->MeshComp->GetSocketLocation(FName("RightHand_ProjectileSocket"));
		FRotator Rotator = Owner->GetControlRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; // make sure the projectile always spawn
		
		FTransform SpawnTransform;
		SpawnTransform.SetComponents(FQuat::MakeFromEuler(Rotator.Euler()),Start, FVector(1,1,1));
		
		AGunProjectile* ProjectileInstance = GetWorld()->SpawnActorDeferred<AGunProjectile>(Gun->Projectile,SpawnTransform);
		ProjectileInstance->OnWeakPointHit.AddDynamic(Owner->DashComp, &UGP3DashComponent::DecreaseDashCooldown);
		UGameplayStatics::FinishSpawningActor(ProjectileInstance,SpawnTransform);

		ProjectileInstance->Damage = Gun->GetDamageFromGun();
		ProjectileInstance->CriticalDamage = Gun->GetCriticalDamageFromGun();



	//if (Cast<AGP3_ChargeEnemyCharacter>(Hit.GetActor()))
	//{

	//	//DealDamage to AI
	//	AGP3_ChargeEnemyCharacter* Enemy = Cast<AGP3_ChargeEnemyCharacter>(Hit.GetActor());

	//	if(Hit.GetComponent()->ComponentHasTag("WeakSpot"))//Added a check for the component tag on the Hit.GetComponent
	//	{

	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Hit weakspot"));
	//		//DealDamage to AI
	//		if (Enemy->IsDebuffed)//Check if the enemy is charging bool
	//		{
	//			Enemy->TakeGunDamage(Gun->GetCriticalDamageFromGun());
	//			return;
	//		}				
	//	}

	//	Enemy->TakeGunDamage(Gun->GetDamageFromGun());
	//	return;
	//	
	//}

	//if (Cast<AGP3_RangedEnemyCharacter>(Hit.GetActor()))//Shooting the ranged enemy
	//{

	//	AGP3_RangedEnemyCharacter* Enemy = Cast<AGP3_RangedEnemyCharacter>(Hit.GetActor());


	//	if(Hit.GetComponent()->ComponentHasTag("WeakSpot"))//Added a check for the component tag on the Hit.GetComponent
	//	{

	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Hit weakspot"));
	//		//DealDamage to AI
	//		if (Enemy->IsDebuffed || Enemy->IsCharging)//Check if the enemy is charging bool
	//		{
	//			Enemy->TakeGunDamage(Gun->GetCriticalDamageFromGun());
	//			return;
	//		}
	//		
	//	}
	//	Enemy->TakeGunDamage(Gun->GetDamageFromGun());
	//	return;
	//}
	}
	if (!Gun->HasAmmo())
	{
		if (!Gun->IsReLoading)
		{
			ReloadWidget->StartReload();
			Gun->ReLoadGun();
			
			Gun->OnReloadFinished.AddUniqueDynamic(this, &UGP3ShootComponent::OnReloaded);
		}
		else if (ReloadWidget->DoQuickReload())
		{
			Gun->InstantReload();
		}
	}
}

void UGP3ShootComponent::Reload()
{
	Gun->ReLoadGun();
}


void UGP3ShootComponent::OnReloaded()
{
	ReloadWidget->EndReload();
}

void UGP3ShootComponent::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParames;
	SpawnParames.bNoFail = true;
	SpawnParames.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if (WeaponClass)
	{
		FTransform SpellTransform;
		SpellTransform.SetLocation(FVector::ZeroVector);
		SpellTransform.SetRotation(FQuat(FRotator::ZeroRotator));
		
		Gun = GetWorld()->SpawnActor<AWeaponBase>(WeaponClass,SpellTransform,SpawnParames);
		
		if (Gun)
		{
			Gun->SelectWeapon("Gun"); //Select what gun to use
			OnWeaponEquipped.Broadcast();
		}
	}

	ReloadWidget = Cast<UGP3ReloadWidget>(CreateWidget(GetWorld(), ReloadWidgetClass));
	ReloadWidget->AddToViewport();
}
