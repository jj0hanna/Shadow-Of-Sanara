// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#pragma once

#include "AIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "AAICEnemy.generated.h"


UCLASS()
class GP3_TEAM03_API AAICEnemy : public AAIController
{
public:

	AAICEnemy();




	virtual void BeginPlay() override;


	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
		UAIPerceptionComponent* Perception = nullptr;

	UFUNCTION(BlueprintCallable)
		void OnPercieved(AActor* Actor, FAIStimulus Stimuli);


	virtual FGenericTeamId GetGenericTeamId() const override { return TeamId; }
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

	UPROPERTY(EditAnywhere)
	UCrowdFollowingComponent* CrowdFollowing;

private:
	FGenericTeamId TeamId;



};
