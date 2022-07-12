// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3PlayerDashTrail.h"
#include "Components/SplineComponent.h"

AGP3PlayerDashTrail::AGP3PlayerDashTrail()
{
	PrimaryActorTick.bCanEverTick = true;

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(RootComponent);
}

void AGP3PlayerDashTrail::BeginPlay()
{
	Super::BeginPlay();
	
	InternalLifeTimer = 0.0f;
}

void AGP3PlayerDashTrail::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	InternalLifeTimer += DeltaSeconds;

	if (InternalLifeTimer >= TrailLifetime)
	{
		Destroy();
	}
}


