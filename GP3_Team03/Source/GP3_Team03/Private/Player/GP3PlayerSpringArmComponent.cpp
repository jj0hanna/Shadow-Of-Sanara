#include "Player/GP3PlayerSpringArmComponent.h"

#include "Kismet/GameplayStatics.h"


UGP3PlayerSpringArmComponent::UGP3PlayerSpringArmComponent()
{
	CameraComp = CreateDefaultSubobject<UGP3PlayerCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(this);
	DefaultOffsetLocation = SocketOffset;
	bDoCollisionTest = false;
	PrimaryComponentTick.bCanEverTick = true;
}

void UGP3PlayerSpringArmComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if(bChangeFov)
	{
		CameraComp->SetFieldOfView(FMath::FInterpTo(CameraComp->FieldOfView, NewFov, DeltaTime, FovSpeed));
		if (CameraComp->FieldOfView == NewFov)
			bChangeFov = false;
	}
	if(bChangeOffset)
	{
		SocketOffset.Set(FMath::FInterpTo(SocketOffset.X, NewOffset.X, DeltaTime, AimZoomOffsetSpeed),
			FMath::FInterpTo(SocketOffset.Y, NewOffset.Y, DeltaTime, AimZoomOffsetSpeed),
			FMath::FInterpTo(SocketOffset.Z, NewOffset.Z, DeltaTime, AimZoomOffsetSpeed));
		if (SocketOffset == NewOffset)
			bChangeOffset = false;
	}
	if (bChangeSpringArmLength)
	{
		TargetArmLength = FMath::FInterpTo(TargetArmLength, NewArmLength, DeltaTime, AimZoomArmSpeed);
		if (TargetArmLength == NewArmLength)
			bChangeSpringArmLength = false;
	}
}

void UGP3PlayerSpringArmComponent::BeginPlay()
{
	Super::BeginPlay();
	//OriginalFov = CameraComp->FieldOfView;
	DefaultOffsetLocation = SocketOffset;
	DefaultTargetArmLength = TargetArmLength;
	ResetCamera();
}

void UGP3PlayerSpringArmComponent::AimZoomStart()
{
	if (UseFov)
		CameraFov(AimZoomFov, AimZoomFovSpeed);
	if (UseOffset)
	{
		NewOffset = AimZoomOffsetLocation;
		bChangeOffset = true;
	}
	if (UseSpringArm)
	{
		NewArmLength = AimZoomArmLength;
		bChangeSpringArmLength = true;
	}
}

void UGP3PlayerSpringArmComponent::AimZoomStop()
{
	CameraFov(DefaultFov, AimZoomFovSpeed);
	if (UseOffset)
	{
		NewOffset = DefaultOffsetLocation;
		bChangeOffset = true;
	}
	if (UseSpringArm)
	{
		NewArmLength = DefaultTargetArmLength;
		bChangeSpringArmLength = true;
	}
}

void UGP3PlayerSpringArmComponent::DashCameraStart()
{
	CameraFov(DashFov, DashFovSpeedStart);
}

void UGP3PlayerSpringArmComponent::DashCameraStop()
{
	CameraFov(DefaultFov, DashFovSpeedStop);
}

void UGP3PlayerSpringArmComponent::CameraFov(float Fov, float Speed)
{
	NewFov = Fov;
	FovSpeed = Speed;
	bChangeFov = true;
}

void UGP3PlayerSpringArmComponent::ResetCamera()
{
	CameraComp->SetFieldOfView(DefaultFov);
	SocketOffset.Set(DefaultOffsetLocation.X, DefaultOffsetLocation.Y, DefaultOffsetLocation.Z);
	TargetArmLength = DefaultTargetArmLength;
}
