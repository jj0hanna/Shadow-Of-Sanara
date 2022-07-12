// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "SpellBase.generated.h"

USTRUCT(BlueprintType)
struct FSpellData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class USkeletalMesh* SpellMesh; //could be removed of we wont use a mesh

	UPROPERTY(EditAnywhere)
	FString Spellname;

	//Particle effect?

	//
	
	//UPROPERTY(EditAnywhere)
	//class UAnimationAsset* FireAnimation;
	
};
UCLASS()
class GP3_TEAM03_API ASpellBase : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ASpellBase();

protected:
	
	UPROPERTY()
	class USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
	class UDataTable* SpellDataTable;

	FSpellData* SpellData;

	UPROPERTY(EditAnywhere)
	FName DefaultSpellName;
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	void SelectSpell(FName SpellName);
	void Use();
};
