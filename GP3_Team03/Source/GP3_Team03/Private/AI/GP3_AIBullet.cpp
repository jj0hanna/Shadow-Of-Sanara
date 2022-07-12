// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GP3_AIBullet.h"

#include "Components/CapsuleComponent.h"

// Sets default values
AGP3_AIBullet::AGP3_AIBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	BulletMesh->SetupAttachment(RootComponent);

	
}



