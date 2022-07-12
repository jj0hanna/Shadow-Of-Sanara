// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/GP3_Team03GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_Team03GameModeBase() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_Team03GameModeBase_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_Team03GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	void AGP3_Team03GameModeBase::StaticRegisterNativesAGP3_Team03GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGP3_Team03GameModeBase_NoRegister()
	{
		return AGP3_Team03GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGP3_Team03GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GP3_Team03GameModeBase.h" },
		{ "ModuleRelativePath", "GP3_Team03GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3_Team03GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::ClassParams = {
		&AGP3_Team03GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3_Team03GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3_Team03GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3_Team03GameModeBase, 1065670015);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3_Team03GameModeBase>()
	{
		return AGP3_Team03GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3_Team03GameModeBase(Z_Construct_UClass_AGP3_Team03GameModeBase, &AGP3_Team03GameModeBase::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3_Team03GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3_Team03GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
