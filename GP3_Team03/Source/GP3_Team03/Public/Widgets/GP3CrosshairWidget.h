#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GP3CrosshairWidget.generated.h"

class UGP3ShootComponent;
class AWeaponBase;
class UImage;
class AGP3PlayerPawn;

UCLASS()
class GP3_TEAM03_API UGP3CrosshairWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	TArray<UImage*> GetAmmoImages();

private:
	void NativeConstruct() override;

	UFUNCTION()
	void WeaponChanged();

	UFUNCTION(BlueprintCallable)
	void UpdateAmmo();

	UPROPERTY()
	AGP3PlayerPawn* PlayerPawn;

	UGP3ShootComponent* ShootComp;

	TArray<UImage*> AmmoImages;
};
