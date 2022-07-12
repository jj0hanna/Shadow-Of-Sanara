// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BT_Tasks/GP3BTT_RangedMoveTowards.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "GameFramework/Character.h"

UGP3BTT_RangedMoveTowards::UGP3BTT_RangedMoveTowards()
{

	bNotifyTick = true;

}

void UGP3BTT_RangedMoveTowards::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
}

EBTNodeResult::Type UGP3BTT_RangedMoveTowards::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	MyBlackboard = OwnerComp.GetBlackboardComponent();

	PlayerRef = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(PlayerKey.SelectedKeyName));
	SelfActor = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(SelfActorKey.SelectedKeyName));


	if (FVector::Distance(PlayerRef->GetActorLocation(), SelfActor->GetActorLocation()) < MaxDistanceBetween)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Magenta, TEXT("In range"));
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(ShootingState.SelectedKeyName,true);
		return EBTNodeResult::Succeeded;
	}
	if (FVector::Distance(PlayerRef->GetActorLocation(), SelfActor->GetActorLocation()) > MaxDistanceBetween)
	{
		AAIController* SelfActorController = Cast<AAIController>(SelfActor->GetController());
		SelfActorController->MoveToLocation(PlayerRef->GetActorLocation());
		return EBTNodeResult::Failed;
	}

	return EBTNodeResult::Failed;
}

	

