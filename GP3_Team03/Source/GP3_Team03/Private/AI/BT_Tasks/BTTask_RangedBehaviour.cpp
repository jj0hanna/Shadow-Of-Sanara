// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BT_Tasks/BTTask_RangedBehaviour.h"

#include "DrawDebugHelpers.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "AIController.h"

UBTTask_RangedBehaviour::UBTTask_RangedBehaviour()
{

	bNotifyTick = true;
	

}

void UBTTask_RangedBehaviour::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

}

EBTNodeResult::Type UBTTask_RangedBehaviour::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	MyBlackboard = OwnerComp.GetBlackboardComponent();

	PlayerRef = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(PlayerKey.SelectedKeyName));
	SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(SelfActorKey.SelectedKeyName));

	if (PlayerRef)
	{

		FHitResult HitRes;
		FVector Start = SelfActor->GetActorLocation();
		FVector End = PlayerRef->GetActorLocation();

		GetWorld()->LineTraceSingleByChannel(HitRes, Start, End, ECC_Visibility);
		DrawDebugLine(GetWorld(), Start, End, FColor::White);
		if (HitRes.GetActor() == PlayerRef)
		{
			return EBTNodeResult::Succeeded;
		}
		if (HitRes.GetActor() != PlayerRef)
		{
			SelfActor = Cast<AAIController>(SelfActor);
			return EBTNodeResult::Succeeded;
		}
		return EBTNodeResult::Failed;
	}

	return EBTNodeResult::Failed;


}
