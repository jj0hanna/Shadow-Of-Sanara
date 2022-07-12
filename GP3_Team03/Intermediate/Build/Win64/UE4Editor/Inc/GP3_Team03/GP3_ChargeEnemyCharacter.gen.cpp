// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_ChargeEnemyCharacter() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_ChargeEnemyCharacter_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_ChargeEnemyCharacter();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	void AGP3_ChargeEnemyCharacter::StaticRegisterNativesAGP3_ChargeEnemyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGP3_ChargeEnemyCharacter_NoRegister()
	{
		return AGP3_ChargeEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCharging_MetaData[];
#endif
		static void NewProp_IsCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCharging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGP3_AI_BaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging_MetaData[] = {
		{ "Category", "GP3_ChargeEnemyCharacter" },
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging_SetBit(void* Obj)
	{
		((AGP3_ChargeEnemyCharacter*)Obj)->IsCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging = { "IsCharging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3_ChargeEnemyCharacter), &Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::NewProp_IsCharging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3_ChargeEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::ClassParams = {
		&AGP3_ChargeEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3_ChargeEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3_ChargeEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3_ChargeEnemyCharacter, 3814434679);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3_ChargeEnemyCharacter>()
	{
		return AGP3_ChargeEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3_ChargeEnemyCharacter(Z_Construct_UClass_AGP3_ChargeEnemyCharacter, &AGP3_ChargeEnemyCharacter::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3_ChargeEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3_ChargeEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
