// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3PlayerPawn.h"
#include "AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#include "AI/GP3_ChargeTrail.h"
#include "Weapons/WeaponBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Player/GP3PlayerSpringArmComponent.h"
#include "Player/GP3ShootComponent.h"
#include "Player/GP3WASDMovementComponent.h"
#include "Player/GP3DodgeComponent.h"

AGP3PlayerPawn::AGP3PlayerPawn()
{
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>("CapsuleComp");
	RootComponent = CapsuleComp;
	
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>("MeshComp");
	MeshComp->SetupAttachment(RootComponent);

	StartProjectileLocation = CreateDefaultSubobject<USceneComponent>(TEXT("StartProjectile")); // we ether use this or skelleton later
	StartProjectileLocation->SetupAttachment(MeshComp);

	SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
	SplinePath->SetupAttachment(StartProjectileLocation);
	SplinePath->SetHiddenInGame(false,true);
	
	SpringArmComp = CreateDefaultSubobject<UGP3PlayerSpringArmComponent>("SpringArmComp");
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;

	WASDMovementComp = CreateDefaultSubobject<UGP3WASDMovementComponent>("WASDMovementComp");
	ShootComp = CreateDefaultSubobject<UGP3ShootComponent>("ShootComp");
	DashComp = CreateDefaultSubobject<UGP3DashComponent>("DashComp");
	DodgeComp = CreateDefaultSubobject<UGP3DodgeComponent>("DodgeComp");

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AGP3PlayerPawn::OnTakeDamage);
}

void AGP3PlayerPawn::BeginPlay()
{
	PlayerMaxHealth = PlayerHealth;
	GameInstance = GetWorld()->GetGameInstance<UGP3GameInstance>();
	
	//GEngine->AddOnScreenDebugMessage(999, 5.f, FColor::Red, FString::Printf(TEXT("Death Counter: %d"), GameInstance->DeathCount));
	CurrentVerticalLookSpeed = SpringArmComp->VerticalLookSpeed;
	CurrentHorizontalLookSpeed = SpringArmComp->HorizontalLookSpeed;
	
	Super::BeginPlay();
	PlayerController = UGameplayStatics::GetPlayerController(this, 0);
}

void AGP3PlayerPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (bCalculateProjectilePath)
	{
		FPredictProjectilePathParams Params;
		Params.StartLocation = StartProjectileLocation->Bounds.Origin;
		Params.LaunchVelocity = GetActorForwardVector() * LaunchVelocity;
		Params.ProjectileRadius = ProjectileRadius;
		FPredictProjectilePathResult PathResult;
		bool Hit = UGameplayStatics::PredictProjectilePath(GetWorld(),Params,PathResult);

		//TArray<FVector> PointLocation;
		for (int i = 1; i < PathResult.PathData.Num(); i++)
		{
			DrawDebugLine(GetWorld(), PathResult.PathData[i-1].Location,PathResult.PathData[i].Location, FColor::Red, false, 20.0f, 0, 1);
		}
		//SplinePath->SetSplinePoints(PointLocation, ESplineCoordinateSpace::World);
	}

	// if controller input is disabled and axisvalues are null, do not move
	if (!InputEnabled())
	{
		ForwardInputValue = 0.0f;
		RightInputValue = 0.0f;
		
		if (DashComp->IsDashing)
		{
			DashComp->InterruptDash();
		}
	}

	TrailDamageTimeDelay -= DeltaSeconds;

	if(IsOverlappingActor(ChargeTrailRef) && TrailDamageTimeDelay < 0)
	{
		RemovePlayerHealth(ChargeTrailRef->TrailDamage,true);
		TrailDamageTimeDelay = DefaultTrailDamageTimeDelay;
	}
	
	WASDMovementComp->Move(ForwardInputValue, RightInputValue, DeltaSeconds);
}

void AGP3PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AGP3PlayerPawn::HandleMoveForwardInput);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AGP3PlayerPawn::HandleMoveRightInput);

	PlayerInputComponent->BindAxis(TEXT("LookHorizontal"), this, &AGP3PlayerPawn::HandleLookYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookVertical"), this, &AGP3PlayerPawn::HandleLookPitchInput);

	PlayerInputComponent->BindAction(TEXT("AimZoom"),IE_Pressed ,this, &AGP3PlayerPawn::Aim);
	PlayerInputComponent->BindAction(TEXT("AimZoom"),IE_Released ,this, &AGP3PlayerPawn::StopAim);

	// PlayerInputComponent->BindAction(TEXT("SunShaftAbility"), IE_Pressed,this, &AGP3PlayerPawn::PressedSunShaftAbility);
	// PlayerInputComponent->BindAction(TEXT("SunShaftAbility"), IE_Released,this, &AGP3PlayerPawn::ReleasedSunShaftAbility);
}

void AGP3PlayerPawn::HandleMoveForwardInput(float ForwardInput)
{
	ForwardInputValue = ForwardInput;
	OnForwardInput();
}

void AGP3PlayerPawn::HandleMoveRightInput(float RightInput)
{
	RightInputValue = RightInput;
	OnRightInput();
}

void AGP3PlayerPawn::HandleLookYawInput(float YawInput)
{
	AddControllerYawInput(YawInput * CurrentHorizontalLookSpeed);
	RotatePlayerWithController();
}

void AGP3PlayerPawn::HandleLookPitchInput(float PitchInput)
{
	AddControllerPitchInput(PitchInput * CurrentVerticalLookSpeed);
	RotatePlayerWithController();
	SetProjectileVelocity(-PitchInput);
}

void AGP3PlayerPawn::Aim()
{
	CurrentVerticalLookSpeed = SpringArmComp->AimZoomVerticalLookSpeed;
	CurrentHorizontalLookSpeed = SpringArmComp->AimZoomHorizontalLookSpeed;
	SpringArmComp->AimZoomStart();
}

void AGP3PlayerPawn::StopAim()
{
	CurrentVerticalLookSpeed = SpringArmComp->VerticalLookSpeed;
	CurrentHorizontalLookSpeed = SpringArmComp->HorizontalLookSpeed;
	SpringArmComp->AimZoomStop();
}

void AGP3PlayerPawn::OnTakeDamage(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bPlayerAlive || bIsInvincible)
		return;
	
	//if (Cast<AGP3_ChargeEnemyCharacter>(OtherActor))
	//{
	//	AGP3_ChargeEnemyCharacter* Enemy = Cast<AGP3_ChargeEnemyCharacter>(OtherActor);
	//	RemovePlayerHealth(Enemy->Damage, true);
	//	OnTookDamage();
	//}

	//if (Cast<AGP3_ChargeTrail>(OtherActor))
	//{
	//	ChargeTrailRef = Cast<AGP3_ChargeTrail>(OtherActor);
	//	AGP3_ChargeTrail* Trail = Cast<AGP3_ChargeTrail>(OtherActor);
	//	OnTookDamage();
	//	//RemovePlayerHealth(Trail->TrailDamage, true);
	//}

}

void AGP3PlayerPawn::TakeExplosiveDamage(float Damage)
{
	if (!bPlayerAlive || bIsInvincible)
		return;
	
	RemovePlayerHealth(Damage, true);
	OnTookDamage();
}

void AGP3PlayerPawn::RotatePlayerWithController()
{
	float NewYawRotation = (GetWorld()->GetFirstPlayerController()->GetControlRotation().Yaw);
	SetActorRotation(FRotator(GetActorRotation().Pitch, NewYawRotation, GetActorRotation().Roll));
}

void AGP3PlayerPawn::PressedSunShaftAbility()
{
	SplinePath->SetHiddenInGame(false,true);
	bCalculateProjectilePath = true;

	//ShootComp->Gun->SelectWeapon("SunShaft");
}

void AGP3PlayerPawn::ReleasedSunShaftAbility()
{
	SplinePath->SetHiddenInGame(true,true);
	bCalculateProjectilePath = false;
	OnShoot();
	
	FVector Start = StartProjectileLocation->Bounds.Origin;
	FRotator Rotator = GetActorRotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; // make sure the projectile always spawn
	//FVector Start = MeshComp->GetSocketLocation(FName("GunOrigin"));
	//ASunShaftProjectile* ProjectileInstance = GetWorld()->SpawnActor<ASunShaftProjectile>(Projectile, Start,Rotator,SpawnParams);

	FTransform SpawnTransform;
	SpawnTransform.SetComponents(FQuat::MakeFromEuler(Rotator.Euler()),Start, FVector(1,1,1));
	ASunShaftProjectile* ProjectileInstance = GetWorld()->SpawnActorDeferred<ASunShaftProjectile>(Projectile,SpawnTransform,this,this,ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	ProjectileInstance->InitialSpeed = LaunchVelocity;
	UGameplayStatics::FinishSpawningActor(ProjectileInstance,SpawnTransform);
}

void AGP3PlayerPawn::SetProjectileVelocity(float Delta)
{
	LaunchVelocity += LaunchVelocity * Delta;
	LaunchVelocity = FMath::Clamp(LaunchVelocity,500.f,3000.f);
}

//Player health&death stuff start
void AGP3PlayerPawn::RemovePlayerHealth(float Amount, bool bBroadcast)
{
	if (!bPlayerAlive)
		return;
	
	PlayerHealth = PlayerHealth - Amount <= 0 ?
		PlayerHealth = 0 : PlayerHealth -= Amount;
	if (bBroadcast)
		TookDamage.Broadcast();
	if (PlayerHealth <= 0)
		PlayerDie();
}

void AGP3PlayerPawn::AddPlayerHealth(float Amount)
{
	PlayerHealth = PlayerHealth + Amount >= PlayerMaxHealth ?
		PlayerHealth = PlayerMaxHealth : PlayerHealth += Amount;
}

void AGP3PlayerPawn::PlayerDie()
{
	if (bDebugPlayerCantDie || !bPlayerAlive)
		return;
	
	bPlayerAlive = false;
	PlayerHealth = 0;
	
	DisableInput(PlayerController);
	
	OnDeath();
	
	
	
	//TODO cool plan for level 1 deaths
	
	GameInstance->DeathCount++;
	MeshComp->PlayAnimation(DeathAnimation, false);
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AGP3PlayerPawn::LastBreath, DeathDelay, false);
}

void AGP3PlayerPawn::LastBreath()
{
	PlayerController->RestartLevel();
	GetWorldTimerManager().ClearTimer(TimerHandle);
}

void AGP3PlayerPawn::ResetDeathCounter() const
{
	GameInstance->DeathCount = 0;
}
//Player health&death stuff end 

