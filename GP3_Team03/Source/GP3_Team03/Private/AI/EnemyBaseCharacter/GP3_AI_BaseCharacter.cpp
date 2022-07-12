#include "AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h"
#include "DrawDebugHelpers.h"

void AGP3_AI_BaseCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

AGP3_AI_BaseCharacter::AGP3_AI_BaseCharacter()
{
		PrimaryActorTick.bCanEverTick = true;

}

void AGP3_AI_BaseCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AGP3_AI_BaseCharacter::TakeGunDamage_Implementation(float GunDamage)
{

	if (Health > 0)
	{
		Health -= GunDamage;

		OnTookGunDamage.Broadcast();

		if (Health <= 0)
		{
			DeathAnimation();
		}

	}
	


	
}