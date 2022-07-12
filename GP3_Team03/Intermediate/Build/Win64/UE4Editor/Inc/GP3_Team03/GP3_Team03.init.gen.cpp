// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_Team03_init() {}
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_GP3_Team03_OnHitWallDelegate__DelegateSignature();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_GP3_Team03_TakeGunDamageDelegate__DelegateSignature();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_GP3_Team03_OnTookDamageDelegate__DelegateSignature();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GP3_Team03_OnHitWallDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GP3_Team03_TakeGunDamageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GP3_Team03_OnTookDamageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/GP3_Team03",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9F940A3E,
				0xB9A6E6EF,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
