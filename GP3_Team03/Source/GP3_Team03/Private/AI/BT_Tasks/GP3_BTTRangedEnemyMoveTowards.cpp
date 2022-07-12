// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BT_Tasks/GP3_BTTRangedEnemyMoveTowards.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


class UBlackboardKeyType_Object;

UGP3_BTTRangedEnemyMoveTowards::UGP3_BTTRangedEnemyMoveTowards()
{

	bNotifyTick = true;

}




void UGP3_BTTRangedEnemyMoveTowards::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
}

EBTNodeResult::Type UGP3_BTTRangedEnemyMoveTowards::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	MyBlackboard = OwnerComp.GetBlackboardComponent();


	PlayerRef = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(PlayerKey.SelectedKeyName));
	SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));



	auto SelfActorAICOntroller = Cast<AAIController>(SelfActor);

	SelfActorAICOntroller->MoveToActor(PlayerRef);


	return Super::ExecuteTask(OwnerComp, NodeMemory);
}




