// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BT_Tasks/BTTask_ChargeAttackAndMove.h"

#include "AIController.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Engine/Engine.h"

UBTTask_ChargeAttackAndMove::UBTTask_ChargeAttackAndMove()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_ChargeAttackAndMove::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.f, FColor::Green, TEXT("Execute task"));

	Speed = InitialSpeed;

	MyBlackboard = OwnerComp.GetBlackboardComponent();

	return Super::ExecuteTask(OwnerComp, NodeMemory);
}

void UBTTask_ChargeAttackAndMove::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	//GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.f, FColor::Green, TEXT("Tick"));


	DeltaTime = DeltaSeconds;
	AActor* SelfActor = Cast<AActor>(MyBlackboard->GetValueAsObject(TEXT("SelfActor")));
	AActor* TargetActor = Cast<AActor>(MyBlackboard->GetValueAsObject(TEXT("Player")));

	auto TargetVector = TargetActor->GetActorLocation() - SelfActor->GetActorLocation();

	auto newYaw = UKismetMathLibrary::RInterpTo(SelfActor->GetActorRotation(), TargetVector.Rotation(), DeltaTime, TurnSpeed).Yaw;


	if (ChargeOnCooldown)
	{
		if (DistanceBetween(*SelfActor, *TargetActor))
		{
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.f, FColor::Green, TEXT("Succeeded tick"));

			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		if (!DistanceBetween(*SelfActor, *TargetActor))
		{
			auto SelfActorAiController = Cast<AAIController>(SelfActor);
			SelfActorAiController->MoveToActor(TargetActor, -1.0f);
		}

		

	}
	if (!ChargeOnCooldown)
	{

		SelfActor->AddActorWorldOffset((SelfActor->GetActorForwardVector() * Speed) * DeltaTime);

		Speed = Speed - (SpeedFallOffMultiplier * DeltaTime);


		FTimerHandle TimerHandle;

		FTimerDelegate Delegate;

		Delegate.BindUFunction(this, "Delay",&OwnerComp);

		SelfActor->GetWorldTimerManager().SetTimer(TimerHandle, Delegate, 1, false);


	}

	SelfActor->SetActorRotation(FRotator(
		SelfActor->GetActorRotation().Pitch,
		newYaw,
		SelfActor->GetActorRotation().Roll));



}

void UBTTask_ChargeAttackAndMove::Cooldown()
{
	float CooldownValue = MyBlackboard->GetValueAsFloat("ChargeCooldown");
	CooldownValue -= DeltaTime;
	MyBlackboard->SetValueAsFloat("ChargeCooldown", CooldownValue);

	if (CooldownValue <= 0.0f)
	{
		ChargeOnCooldown = false;
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.f, FColor::Green, TEXT("Charge off cooldown"));
	}


}

bool UBTTask_ChargeAttackAndMove::DistanceBetween(AActor& Self,AActor& targ)
{
	float dist = FVector::Distance(Self.GetActorLocation(), targ.GetActorLocation());

	return dist < AttackRange;

}

void UBTTask_ChargeAttackAndMove::Delay(UBehaviorTreeComponent OwnerComp)
{
	ChargeOnCooldown = true;
	MyBlackboard->SetValueAsFloat("CurrentChargeCooldownKey", 5);
	FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
}
