#include "Weapons/GunProjectile.h"

#include "AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Player/GP3PlayerPawn.h"


AGunProjectile::AGunProjectile()
{
 
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = Collision;
	Collision->SetSphereRadius(10.0f);
	Collision->SetCollisionProfileName(TEXT("BlockAll"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);

	ProjectileComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileComponent->InitialSpeed = 1000.f;
	ProjectileComponent->Velocity = FVector(1,0.03,0.2);

}

void AGunProjectile::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	ProjectileComponent->InitialSpeed = InitialSpeed;
}

void AGunProjectile::BeginPlay()
{
	Super::BeginPlay();
}

void AGunProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}