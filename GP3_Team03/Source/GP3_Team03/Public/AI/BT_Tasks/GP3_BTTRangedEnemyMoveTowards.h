// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GP3_BTTRangedEnemyMoveTowards.generated.h"

/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UGP3_BTTRangedEnemyMoveTowards : public UBTTaskNode
{
	GENERATED_BODY()

	UGP3_BTTRangedEnemyMoveTowards();

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
