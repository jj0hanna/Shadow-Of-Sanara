// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AI_Widgets/GP3_RangedEnemyHealth.h"

void UGP3_RangedEnemyHealth::UpdateHealth(float Health)
{

	RangedEnemyHealth()->SetText(FText::AsNumber(Health));


}
