#pragma once

#include "GameFramework/Character.h"
#include "Weapons/WeaponBase.h"
#include "GP3_AI_BaseCharacter.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitWallDelegate,FHitResult,HitObject);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTakeGunDamageDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTookDamageDelegate);





UCLASS()
class GP3_TEAM03_API AGP3_AI_BaseCharacter : public ACharacter
{

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable,BlueprintCallable)
		FOnHitWallDelegate HitObjectDelegate;

	UPROPERTY(BlueprintAssignable,BlueprintCallable)
		FTakeGunDamageDelegate TakeGunDamageDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FOnTookDamageDelegate OnTookGunDamage;

	void Overlapped();

	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult);
	

	AGP3_AI_BaseCharacter();

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(Category = "Enemy Values and Stats", EditAnywhere, BlueprintReadWrite)
		float Health = 200;

	UPROPERTY(Category = "Enemy Values and Stats", EditAnywhere,BlueprintReadWrite)
		float Damage = 200;

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
		void TakeGunDamage(float GunDamage);

	UFUNCTION(BlueprintImplementableEvent)
		void TookDamageEvent();

	UFUNCTION(BlueprintImplementableEvent)
		void DeathAnimation();

	UPROPERTY(BlueprintReadWrite)
		bool IsDebuffed;

};




