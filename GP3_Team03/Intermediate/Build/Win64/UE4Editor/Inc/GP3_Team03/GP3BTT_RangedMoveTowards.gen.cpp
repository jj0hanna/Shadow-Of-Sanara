// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/BT_Tasks/GP3BTT_RangedMoveTowards.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3BTT_RangedMoveTowards() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3BTT_RangedMoveTowards_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3BTT_RangedMoveTowards();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGP3BTT_RangedMoveTowards::StaticRegisterNativesUGP3BTT_RangedMoveTowards()
	{
	}
	UClass* Z_Construct_UClass_UGP3BTT_RangedMoveTowards_NoRegister()
	{
		return UGP3BTT_RangedMoveTowards::StaticClass();
	}
	struct Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceBetween_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceBetween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BT_Tasks/GP3BTT_RangedMoveTowards.h" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3BTT_RangedMoveTowards.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "GP3BTT_RangedMoveTowards" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3BTT_RangedMoveTowards.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3BTT_RangedMoveTowards, PlayerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "GP3BTT_RangedMoveTowards" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3BTT_RangedMoveTowards.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3BTT_RangedMoveTowards, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_SelfActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_SelfActorKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_ShootingState_MetaData[] = {
		{ "Category", "GP3BTT_RangedMoveTowards" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3BTT_RangedMoveTowards.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_ShootingState = { "ShootingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3BTT_RangedMoveTowards, ShootingState), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_ShootingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_ShootingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_MaxDistanceBetween_MetaData[] = {
		{ "Category", "GP3BTT_RangedMoveTowards" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3BTT_RangedMoveTowards.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_MaxDistanceBetween = { "MaxDistanceBetween", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3BTT_RangedMoveTowards, MaxDistanceBetween), METADATA_PARAMS(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_MaxDistanceBetween_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_MaxDistanceBetween_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_PlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_SelfActorKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_ShootingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::NewProp_MaxDistanceBetween,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3BTT_RangedMoveTowards>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::ClassParams = {
		&UGP3BTT_RangedMoveTowards::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3BTT_RangedMoveTowards()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3BTT_RangedMoveTowards_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3BTT_RangedMoveTowards, 3421483573);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3BTT_RangedMoveTowards>()
	{
		return UGP3BTT_RangedMoveTowards::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3BTT_RangedMoveTowards(Z_Construct_UClass_UGP3BTT_RangedMoveTowards, &UGP3BTT_RangedMoveTowards::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3BTT_RangedMoveTowards"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3BTT_RangedMoveTowards);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
