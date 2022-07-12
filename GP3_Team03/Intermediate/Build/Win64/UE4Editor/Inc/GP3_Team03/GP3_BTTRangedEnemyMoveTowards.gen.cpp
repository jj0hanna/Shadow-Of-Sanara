// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/BT_Tasks/GP3_BTTRangedEnemyMoveTowards.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_BTTRangedEnemyMoveTowards() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGP3_BTTRangedEnemyMoveTowards::StaticRegisterNativesUGP3_BTTRangedEnemyMoveTowards()
	{
	}
	UClass* Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_NoRegister()
	{
		return UGP3_BTTRangedEnemyMoveTowards::StaticClass();
	}
	struct Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BT_Tasks/GP3_BTTRangedEnemyMoveTowards.h" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3_BTTRangedEnemyMoveTowards.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "GP3_BTTRangedEnemyMoveTowards" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3_BTTRangedEnemyMoveTowards.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3_BTTRangedEnemyMoveTowards, PlayerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "GP3_BTTRangedEnemyMoveTowards" },
		{ "ModuleRelativePath", "Public/AI/BT_Tasks/GP3_BTTRangedEnemyMoveTowards.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3_BTTRangedEnemyMoveTowards, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_SelfActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_SelfActorKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_PlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::NewProp_SelfActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3_BTTRangedEnemyMoveTowards>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::ClassParams = {
		&UGP3_BTTRangedEnemyMoveTowards::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3_BTTRangedEnemyMoveTowards, 400868287);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3_BTTRangedEnemyMoveTowards>()
	{
		return UGP3_BTTRangedEnemyMoveTowards::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3_BTTRangedEnemyMoveTowards(Z_Construct_UClass_UGP3_BTTRangedEnemyMoveTowards, &UGP3_BTTRangedEnemyMoveTowards::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3_BTTRangedEnemyMoveTowards"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3_BTTRangedEnemyMoveTowards);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
