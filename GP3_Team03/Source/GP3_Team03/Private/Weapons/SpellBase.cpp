


#include "Weapons/SpellBase.h"


ASpellBase::ASpellBase()
{
 	
	PrimaryActorTick.bCanEverTick = true;
}

void ASpellBase::BeginPlay()
{
	Super::BeginPlay();
	Use();
}

void ASpellBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpellBase::SelectSpell(FName SpellName)
{
	if (SpellDataTable)
	{
		static const FString PString = FString("Spell1DT");
		SpellData = SpellDataTable->FindRow<FSpellData>(SpellName,PString,true); // Find the spell datatable

		UE_LOG(LogTemp,Warning, TEXT("Shooting,WeaponData->AmmoFlying"))
		//if (SpellData)
		//{
		//	MeshComp->SetSkeletalMesh(SpellData->SpellMesh); //Insted of mesh spawn magic thing?
		//}
	}
}

void ASpellBase::Use()
{
	if (SpellData)
	{
		auto Spell = SpellData->Spellname;
		FString LSpell;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT(Spell));
	}
}

