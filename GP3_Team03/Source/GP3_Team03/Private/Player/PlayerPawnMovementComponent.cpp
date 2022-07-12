// Fill out your copyright notice in the Description page of Project Settings.
#include "Player/PlayerPawnMovementComponent.h"

#include <Weapons/WeaponBase.h>

#include "DrawDebugHelpers.h"
#include "AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h"
#include "Player/GP3PlayerPawn.h"

UPlayerPawnMovementComponent::UPlayerPawnMovementComponent()
{
	
}

void UPlayerPawnMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<AGP3PlayerPawn, AActor>(GetOwner());
}

void UPlayerPawnMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	DeltaSeconds = DeltaTime;

	// If player isn't ready to shoot, run timer.
	if (!ReadyToShoot)
	{
		InternalCoolDownTimer -= DeltaSeconds;
		
		// If cooldown has run down to 0, player is ready to shoot.
		if (InternalCoolDownTimer <= 0.0f)
		{
			ReadyToShoot = true;
			//InternalCoolDownTimer = Player->Gun->ShootCoolDownTimer;
			
			// If player has pressed shoot during the past 1-something second, shoot again instantly.
			if (GetWorld()->GetTimeSeconds() - ShootTimeStamp < DelayedInputValue)
			{
				Shoot();
			}
		}
	}
}


void UPlayerPawnMovementComponent::Move(float InRightInputValue, float InForwardInputValue)
{
	GroundCheck();
	
	float ForwardForce = InForwardInputValue * ForwardSpeed * DeltaSeconds;
	float RightForce = InRightInputValue * RightSpeed * DeltaSeconds;
	CompVelocity = {ForwardForce, RightForce, 0.0f};
	
	float NewRot = InRightInputValue * 500.f * DeltaSeconds;
	float ClampedRot = FMath::ClampAngle(NewRot, -50.0f, 50.0f);

	Player->AddActorLocalOffset(CompVelocity);

	float NewYawRotation = (GetWorld()->GetFirstPlayerController()->GetControlRotation().Yaw) + ClampedRot;
	Player->SetActorRotation(FRotator(Player->GetActorRotation().Pitch, NewYawRotation, Player->GetActorRotation().Roll));

	// while (DeltaTime > 0.0f)
	// {
	// 	FHitResult Hit;
	// 	Pawn->AddActorLocalOffset(CompVelocity, true, &Hit);
	//
	// 	float NewYawRotation = (GetWorld()->GetFirstPlayerController()->GetControlRotation().Yaw) + ClampedRot;
	// 	Pawn->SetActorRotation(FRotator(Pawn->GetActorRotation().Pitch, NewYawRotation, Pawn->GetActorRotation().Roll));
 //
	// 	if (Hit.bBlockingHit)
	// 	{
	// 		if (Hit.bStartPenetrating)
	// 		{
	// 			Pawn->AddActorWorldOffset(Hit.Normal * (Hit.PenetrationDepth + 0.1f));
	// 		}
	// 		else
	// 		{
	// 			CompVelocity = FVector::VectorPlaneProject(CompVelocity, Hit.Normal);
	// 			DeltaTime -= DeltaTime * Hit.Time;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		break;
	// 	}
	// }
}

void UPlayerPawnMovementComponent::Jump()
{
	Player->AddActorWorldOffset(FVector(0.0f, 0.0f, JumpForce));
}

void UPlayerPawnMovementComponent::Shoot()
{
	if (!ReadyToShoot)
	{
		ShootTimeStamp = GetWorld()->GetTimeSeconds();
	}
	
	// if (ReadyToShoot && Player->Gun->HasAmmo())
	// {
	// 	InternalCoolDownTimer = Player->Gun->ShootCoolDownTimer;
	// 	ReadyToShoot = false;
	// 	FHitResult Hit = Player->Gun->Use();
	// 	
//
	// 	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Cyan, TEXT("Pang pang"));
	// 	
 	//	if (Cast<AGP3_AI_BaseCharacter>(Hit.GetActor()))
 	//	{
 	//		//DealDamage to AI
 	//		auto Enemy = Cast<AGP3_AI_BaseCharacter> (Hit.GetActor());
 	//		Enemy->TakeGunDamage(Player->Gun->GetDamageFromGun());
 	//	}
	// }
}

void UPlayerPawnMovementComponent::ReLoad()
{
	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Cyan, TEXT("ReLoadar"));
	//Player->Gun->ReLoadGun();
}

void UPlayerPawnMovementComponent::GroundCheck()
{
	if (!IsGrounded && LineTraceToGround())
	{
		IsGrounded = true;
		return;
	}

	if (IsGrounded && !LineTraceToGround())
	{
		IsGrounded = false;
	}
}

bool UPlayerPawnMovementComponent::LineTraceToGround()
{
	FHitResult OutHit;
	FVector Start = GetActorLocation();
	FVector End = (Player->GetActorUpVector() * -50.f) + Start;
	if (GetWorld()->LineTraceSingleByChannel(
		OutHit,
		Start,
		End,
		ECC_Visibility))
	{
		if (OutHit.bBlockingHit)
		{
			return true;
		}
	}
	return false;
}





