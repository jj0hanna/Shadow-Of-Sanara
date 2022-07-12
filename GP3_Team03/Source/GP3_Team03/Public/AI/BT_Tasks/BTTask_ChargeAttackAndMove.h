// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ChargeAttackAndMove.generated.h"

/**
 * 
 */
UCLASS()
class GP3_TEAM03_API UBTTask_ChargeAttackAndMove : public UBTTaskNode
{
	GENERATED_BODY()

		UBTTask_ChargeAttackAndMove();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	void Cooldown();

	UBlackboardComponent* MyBlackboard;

	bool DistanceBetween(AActor& Self, AActor& targ);


	UPROPERTY(EditAnywhere)
	float Speed = 300;
	UPROPERTY(EditAnywhere)
	float TurnSpeed;
	UPROPERTY(EditAnywhere)
	float InitialSpeed;
	UPROPERTY(EditAnywhere)
	float DeltaTime;
	UPROPERTY(EditAnywhere)
	float AttackRange = 400;
	UPROPERTY(EditAnywhere)
	float ChargeCooldown = 5;
	UPROPERTY(EditAnywhere)
	float SpeedFallOffMultiplier = 2000;

	bool ChargeOnCooldown = true;


	void Delay(UBehaviorTreeComponent OwnerComp);



	



	
	








};
