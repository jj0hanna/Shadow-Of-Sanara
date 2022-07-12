// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PlayerPawnMovementComponent.generated.h"

class AGP3PlayerPawn;

// USTRUCT(BlueprintType)
// struct ENGINE_API FFindFloorResult
// {
// 	GENERATED_USTRUCT_BODY()
//
// 	/**
// 	* True if there was a blocking hit in the floor test that was NOT in initial penetration.
// 	* The HitResult can give more info about other circumstances.
// 	*/
// 	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category=CharacterFloor)
// 	uint32 bBlockingHit:1;
//
// 	/** True if the hit found a valid walkable floor. */
// 	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category=CharacterFloor)
// 	uint32 bWalkableFloor:1;
//
// 	/** True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface). */
// 	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category=CharacterFloor)
// 	uint32 bLineTrace:1;
//
// 	/** The distance to the floor, computed from the swept capsule trace. */
// 	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category=CharacterFloor)
// 	float FloorDist;
// 	
// 	/** The distance to the floor, computed from the trace. Only valid if bLineTrace is true. */
// 	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category=CharacterFloor)
// 	float LineDist;
//
// 	/** Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point. */
// 	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category=CharacterFloor)
// 	FHitResult HitResult;
//
// public:
//
// 	FFindFloorResult()
// 		: bBlockingHit(false)
// 		, bWalkableFloor(false)
// 		, bLineTrace(false)
// 		, FloorDist(0.f)
// 		, LineDist(0.f)
// 		, HitResult(1.f)
// 	{
// 	}
//
// 	/** Returns true if the floor result hit a walkable surface. */
// 	bool IsWalkableFloor() const
// 	{
// 		return bBlockingHit && bWalkableFloor;
// 	}
//
// 	void Clear()
// 	{
// 		bBlockingHit = false;
// 		bWalkableFloor = false;
// 		bLineTrace = false;
// 		FloorDist = 0.f;
// 		LineDist = 0.f;
// 		HitResult.Reset(1.f, false);
// 	}
//
// 	/** Gets the distance to floor, either LineDist or FloorDist. */
// 	float GetDistanceToFloor() const
// 	{
// 		// When the floor distance is set using SetFromSweep, the LineDist value will be reset.
// 		// However, when SetLineFromTrace is used, there's no guarantee that FloorDist is set.
// 		return bLineTrace ? LineDist : FloorDist;
// 	}
//
// 	void SetFromSweep(const FHitResult& InHit, const float InSweepFloorDist, const bool bIsWalkableFloor);
// 	void SetFromLineTrace(const FHitResult& InHit, const float InSweepFloorDist, const float InLineDist, const bool bIsWalkableFloor);
// };
//
// struct FStepDownResult
// {
// 	uint32 bComputedFloor:1;		// True if the floor was computed as a result of the step down.
// 	FFindFloorResult FloorResult;	// The result of the floor test if the floor was updated.
//
// 	FStepDownResult()
// 		: bComputedFloor(false)
// 	{
// 	}
// };

UCLASS()
class GP3_TEAM03_API UPlayerPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
public:
	UPlayerPawnMovementComponent();

	UFUNCTION(BlueprintCallable)
	void Move(float InRightInputValue, float InForwardInputValue);

	UFUNCTION(BlueprintCallable)
	void Jump();
	UFUNCTION(BlueprintCallable)
	void Shoot();
	UFUNCTION(BlueprintCallable)
	void ReLoad();
	

protected:
	void BeginPlay() override;

	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool LineTraceToGround();


private:
	void GroundCheck ();

	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float ForwardSpeed = 500.0f;
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float Acceleration = 100.0f;
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float RightSpeed = 400.0f;
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float JumpForce = 1000.0f;
	
	UPROPERTY(Category="Character Movement - Info", VisibleAnywhere)
	bool IsGrounded = false;
	UPROPERTY(Category="Character Movement - Info", VisibleAnywhere)
	FVector CompVelocity;

	UPROPERTY(Category="Combat - Editable", EditAnywhere)
	float DelayedInputValue = 1.0f;
	UPROPERTY(Category="Combat - Info", VisibleAnywhere)
	bool ReadyToShoot = true;
	UPROPERTY(Category="Combat - Info", VisibleAnywhere)
	float InternalCoolDownTimer = 0.0f;
	float ShootTimeStamp = 0.0f;
	
	float DeltaSeconds = 0.0f;

	AGP3PlayerPawn* Player = NULL; // ta bort?
	
};
