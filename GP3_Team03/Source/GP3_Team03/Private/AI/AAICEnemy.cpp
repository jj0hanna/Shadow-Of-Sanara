// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AAICEnemy.h"
#include "GameFramework/Character.h"
#include "Perception/AIPerceptionComponent.h"

AAICEnemy::AAICEnemy()
{
	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
	Perception->OnTargetPerceptionUpdated.AddDynamic(this, &AAICEnemy::OnPercieved);


	CrowdFollowing = CreateDefaultSubobject<UCrowdFollowingComponent>(TEXT("CrowdFollowingComponent"));


	TeamId = FGenericTeamId(1);

}

void AAICEnemy::BeginPlay()
{
	Super::BeginPlay();

}

void AAICEnemy::OnPercieved(AActor* Actor, FAIStimulus Stimuli)
{
}

ETeamAttitude::Type AAICEnemy::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* OtherPawn = Cast<APawn>(&Other);
	if (OtherPawn == nullptr)
	{
		return ETeamAttitude::Neutral;
	}
	auto PlayerTI = Cast<IGenericTeamAgentInterface>(&Other);
	IGenericTeamAgentInterface* BotTI = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController());

	if (BotTI && PlayerTI == nullptr)
	{
		return ETeamAttitude::Neutral;
	}

	FGenericTeamId OtherActorTeamId = NULL;
	if (BotTI != nullptr)
	{
		OtherActorTeamId = BotTI->GetGenericTeamId();
	}
	else if (PlayerTI != nullptr)
	{
		OtherActorTeamId = PlayerTI->GetGenericTeamId();
	}

	FGenericTeamId ThisId = GetGenericTeamId();
	if (OtherActorTeamId == 8)
	{
		return ETeamAttitude::Neutral;
	}
	if (OtherActorTeamId == ThisId)
	{
		return ETeamAttitude::Friendly;
	}
	return ETeamAttitude::Hostile;
	

}



