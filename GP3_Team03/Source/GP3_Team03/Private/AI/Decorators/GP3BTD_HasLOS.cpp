// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Decorators/GP3BTD_HasLOS.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"

UGP3BTD_HasLOS::UGP3BTD_HasLOS()
{

	SelfActor.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGP3BTD_HasLOS, SelfActor), AActor::StaticClass());
	TargetActor.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGP3BTD_HasLOS, TargetActor), AActor::StaticClass());


}

bool UGP3BTD_HasLOS::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

	const AActor* ActorA = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(SelfActor.SelectedKeyName));
	const AActor* ActorB = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(TargetActor.SelectedKeyName));

	if (ActorA && ActorB)
	{

		FHitResult HitRes;
		FVector Start = ActorA->GetActorLocation();
		FVector End = ActorB->GetActorLocation();

		GetWorld()->LineTraceSingleByChannel(HitRes, Start, End, ECC_Visibility);

		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.5f, FColor::Cyan, FString::Printf(TEXT("Hit: %p"), HitRes.GetActor()));



		return HitRes.GetActor() == ActorA;
	}
	return Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
}
