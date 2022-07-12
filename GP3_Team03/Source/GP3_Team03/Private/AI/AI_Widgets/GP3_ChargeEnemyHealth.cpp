// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AI_Widgets/GP3_ChargeEnemyHealth.h"

void UGP3_ChargeEnemyHealth::UpdateHealth(float Health)
{
	ChargeEnemyHealth()->SetText(FText::AsNumber(Health));

}
