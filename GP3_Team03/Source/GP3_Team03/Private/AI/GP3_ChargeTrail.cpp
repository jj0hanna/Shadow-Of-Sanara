// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GP3_ChargeTrail.h"

AGP3_ChargeTrail::AGP3_ChargeTrail()
{

	TrailMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("TrailComponent"));

	TrailMesh->SetupAttachment(RootComponent);

}

