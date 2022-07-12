
#include "Weapons/SunShaftProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


ASunShaftProjectile::ASunShaftProjectile()
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
	ProjectileComponent->Velocity = FVector(1,0,0);
}

void ASunShaftProjectile::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	ProjectileComponent->InitialSpeed = InitialSpeed;
}

void ASunShaftProjectile::BeginPlay()
{
	Super::BeginPlay();
	//Velocity = GetActorForwardVector() * 50.f;
	//Gravity = GetActorUpVector() * 100.f;
	
}
void ASunShaftProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FHitResult Hit;
	//AddActorWorldOffset( * DeltaTime, true,&Hit);
//
	//if (Hit.bBlockingHit)
	//{
	//	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("Hit something"));
	//}

}

