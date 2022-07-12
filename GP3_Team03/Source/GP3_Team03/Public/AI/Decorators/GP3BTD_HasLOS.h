// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GP3BTD_HasLOS.generated.h"

/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UGP3BTD_HasLOS : public UBTDecorator
{
	GENERATED_BODY()

	UGP3BTD_HasLOS();

protected:

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FBlackboardKeySelector SelfActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FBlackboardKeySelector TargetActor;


	
};
