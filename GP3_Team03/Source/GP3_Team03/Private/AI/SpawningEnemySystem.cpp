
#include "AI/SpawningEnemySystem.h"
#include "NavigationSystem.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

ASpawningEnemySystem::ASpawningEnemySystem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASpawningEnemySystem::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnIntervalTimer = SpawnInterval;
	bTimerIsOn = false;
	bReadyToSpawn = false;
}

void ASpawningEnemySystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bTimerIsOn)
	{
		SpawnIntervalTimer -= DeltaTime;
		
		if (SpawnIntervalTimer <=0)
		{
			SpawnIntervalTimer = SpawnInterval;
			bReadyToSpawn = true;
			bTimerIsOn = false;
			//SpawnEnemiesOnTimer();
		}
	}
}

void ASpawningEnemySystem::SpawnEnemies(int FirstWaveAmount, TSubclassOf<AGP3_AI_BaseCharacter> EnemyType)
{
	NumberToSpawn = FirstWaveAmount;
	
	if (bReadyToSpawn)
	{
		for (int i = 1; i <= NumberToSpawn; i++)
		{
			NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
			SpawnParams.Owner = this;
			
			SpawnRotation = GetActorRotation();
			SpawnRotation.Yaw += 90; //fix this so it looking towards the player or different ways
			
			if (NavSystem->GetRandomPointInNavigableRadius(GetBounds().Origin,GetBounds().BoxExtent.Size(), SpawnLocation))
			{
				float SpawnOffset = GetDefault<AGP3_AI_BaseCharacter>(EnemyType)->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

				AActor* SpawnedEnemy = GetWorld()->SpawnActor<AGP3_AI_BaseCharacter>(EnemyType,FVector(SpawnLocation.Location.X,SpawnLocation.Location.Y,SpawnLocation.Location.Z+SpawnOffset),SpawnRotation, SpawnParams); //TODO Wrong location sometimes add a offset?
				//bReadyToSpawn = false;
				OnSpawn(FVector(SpawnLocation.Location.X,SpawnLocation.Location.Y,SpawnLocation.Location.Z+SpawnOffset));
			}
		}
	}
}

void ASpawningEnemySystem::SpawnEnemy(TSubclassOf<AGP3_AI_BaseCharacter> EnemyType, AGP3_AI_BaseCharacter* &SpawnedEnemy)
{
	NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	SpawnParams.Owner = this;
			
	SpawnRotation = GetActorRotation();
	SpawnRotation.Yaw += 90; //fix this so it looking towards the player or different ways
			
	if (NavSystem->GetRandomPointInNavigableRadius(GetBounds().Origin,GetBounds().BoxExtent.Size(), SpawnLocation))
	{
		float SpawnOffset = GetDefault<AGP3_AI_BaseCharacter>(EnemyType)->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

		SpawnedEnemy = GetWorld()->SpawnActor<AGP3_AI_BaseCharacter>(EnemyType,FVector(SpawnLocation.Location.X,SpawnLocation.Location.Y,SpawnLocation.Location.Z+SpawnOffset),SpawnRotation, SpawnParams); //TODO Wrong location sometimes add a offset?
		//bReadyToSpawn = false;
		OnSpawn(FVector(SpawnLocation.Location.X,SpawnLocation.Location.Y,SpawnLocation.Location.Z+SpawnOffset));
	}
}
