#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GP3_RangedEnemyHealth.generated.h"

/**
 *
 */
UCLASS()
class GP3_TEAM03_API UGP3_RangedEnemyHealth : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent)
		UTextBlock* RangedEnemyHealth();

	UFUNCTION(BlueprintCallable)
		void UpdateHealth(float Health);



};
