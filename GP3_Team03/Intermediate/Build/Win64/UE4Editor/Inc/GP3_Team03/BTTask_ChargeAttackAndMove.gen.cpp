// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChargeAttackAndMove() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UBTTask_ChargeAttackAndMove_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UBTTask_ChargeAttackAndMove();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	void UBTTask_ChargeAttackAndMove::StaticRegisterNativesUBTTask_ChargeAttackAndMove()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_ChargeAttackAndMove_NoRegister()
	{
		return UBTTask_ChargeAttackAndMove::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargeCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFallOffMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFallOffMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, Speed), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_TurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, InitialSpeed), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_InitialSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_InitialSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, DeltaTime), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, AttackRange), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_ChargeCooldown_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_ChargeCooldown = { "ChargeCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, ChargeCooldown), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_ChargeCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_ChargeCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_SpeedFallOffMultiplier_MetaData[] = {
		{ "Category", "BTTask_ChargeAttackAndMove" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/BTTask_ChargeAttackAndMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_SpeedFallOffMultiplier = { "SpeedFallOffMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ChargeAttackAndMove, SpeedFallOffMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_SpeedFallOffMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_SpeedFallOffMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_InitialSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_ChargeCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::NewProp_SpeedFallOffMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChargeAttackAndMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::ClassParams = {
		&UBTTask_ChargeAttackAndMove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ChargeAttackAndMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_ChargeAttackAndMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_ChargeAttackAndMove, 3277277870);
	template<> GP3_TEAM03_API UClass* StaticClass<UBTTask_ChargeAttackAndMove>()
	{
		return UBTTask_ChargeAttackAndMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_ChargeAttackAndMove(Z_Construct_UClass_UBTTask_ChargeAttackAndMove, &UBTTask_ChargeAttackAndMove::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UBTTask_ChargeAttackAndMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChargeAttackAndMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
