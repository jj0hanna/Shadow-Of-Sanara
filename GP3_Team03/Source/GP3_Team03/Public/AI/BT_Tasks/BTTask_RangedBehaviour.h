// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RangedBehaviour.generated.h"

/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UBTTask_RangedBehaviour : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_RangedBehaviour();

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


	AActor* PlayerRef;
	AActor* SelfActor;

	UBlackboardComponent* MyBlackboard;


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FBlackboardKeySelector PlayerKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FBlackboardKeySelector SelfActorKey;

};
