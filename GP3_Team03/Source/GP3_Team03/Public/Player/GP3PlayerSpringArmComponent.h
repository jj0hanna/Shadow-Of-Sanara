#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Player/GP3PlayerCameraComponent.h"
#include "GP3PlayerSpringArmComponent.generated.h"

UCLASS()
class GP3_TEAM03_API UGP3PlayerSpringArmComponent : public USpringArmComponent
{
	GENERATED_BODY()

public:
	UGP3PlayerSpringArmComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void BeginPlay() override;
	
	// FOV Aim Settings ******************************************************* //
	UPROPERTY(EditAnywhere, Category = "DefaultCameraSettings")
	float DefaultFov = 90;

	/** Speed of mouse look. Higher = faster. */
	UPROPERTY(EditAnywhere, Category = "DefaultCameraSettings")
	float VerticalLookSpeed = 0.5f;

	UPROPERTY(EditAnywhere, Category = "DefaultCameraSettings")
	float HorizontalLookSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	/** Change FOV for aiming? */
	bool UseFov = true;
	
	/** FOV when aiming */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomFov = 60.f;
	
	/** Speed of camera FOV changing. Higher = faster. */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomFovSpeed = 9.f;

	// Camera offset Aim Settings ******************************************************* //
	UPROPERTY(EditAnywhere)
	FVector DefaultOffsetLocation;

	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	/** Change camera location when aiming? */
	bool UseOffset;

	/** Camera offset location when aiming. */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	FVector AimZoomOffsetLocation {0.f,0.f,0.f};
	
	/** Speed of changing camera location. Higher = faster. */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomOffsetSpeed = 9.f;
	
	
	// Spring Arm Aim Settings ************************************************ //
	UPROPERTY()
	float DefaultTargetArmLength;
	
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	/** Should spring arm length be changed when aiming? */
	bool UseSpringArm;
	
	/** Spring arm length when aiming. Camera distance from player. */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomArmLength = 200.f;
	
	/** Speed of arm length changing. Higher = faster. */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomArmSpeed = 9.f;

	/** Speed of mouse look. Higher = faster. */
	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomVerticalLookSpeed = 0.5f;

	UPROPERTY(EditAnywhere, Category = "CameraAimZoomSettings")
	float AimZoomHorizontalLookSpeed = 0.0f;
	
	// ************************************************************************ //
	// FOV Dash Settings ****************************************************** //
	
	/** FOV when aiming */
	UPROPERTY(EditAnywhere, Category = "CameraDashSettings")
	float DashFov = 60.f;
	
	/** Speed of camera FOV changing. Higher = faster. */
	UPROPERTY(EditAnywhere, Category = "CameraDashSettings")
	float DashFovSpeedStart = 5.f;
	UPROPERTY(EditAnywhere, Category = "CameraDashSettings")
	float DashFovSpeedStop = 6.f;
	
	// ************************************************************************ //
	
	UPROPERTY(EditDefaultsOnly)
	UGP3PlayerCameraComponent* CameraComp;
	
	void AimZoomStart();
	void AimZoomStop();
	void DashCameraStart();
	void DashCameraStop();
	void ResetCamera();
	void CameraFov(float Fov, float Speed);

private:
	bool bChangeFov;
	bool bChangeOffset;
	bool bChangeSpringArmLength;
	
	float FovSpeed;
	float NewFov;
	FVector NewOffset;
	float NewArmLength;
};
