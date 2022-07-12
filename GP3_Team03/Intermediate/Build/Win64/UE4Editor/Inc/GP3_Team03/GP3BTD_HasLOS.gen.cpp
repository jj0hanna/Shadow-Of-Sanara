// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/Decorators/GP3BTD_HasLOS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3BTD_HasLOS() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3BTD_HasLOS_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3BTD_HasLOS();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGP3BTD_HasLOS::StaticRegisterNativesUGP3BTD_HasLOS()
	{
	}
	UClass* Z_Construct_UClass_UGP3BTD_HasLOS_NoRegister()
	{
		return UGP3BTD_HasLOS::StaticClass();
	}
	struct Z_Construct_UClass_UGP3BTD_HasLOS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelfActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3BTD_HasLOS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTD_HasLOS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Decorators/GP3BTD_HasLOS.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/GP3BTD_HasLOS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_SelfActor_MetaData[] = {
		{ "Category", "GP3BTD_HasLOS" },
		{ "ModuleRelativePath", "Public/AI/Decorators/GP3BTD_HasLOS.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3BTD_HasLOS, SelfActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_SelfActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_SelfActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "GP3BTD_HasLOS" },
		{ "ModuleRelativePath", "Public/AI/Decorators/GP3BTD_HasLOS.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3BTD_HasLOS, TargetActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3BTD_HasLOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_SelfActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3BTD_HasLOS_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3BTD_HasLOS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3BTD_HasLOS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3BTD_HasLOS_Statics::ClassParams = {
		&UGP3BTD_HasLOS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGP3BTD_HasLOS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3BTD_HasLOS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3BTD_HasLOS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3BTD_HasLOS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3BTD_HasLOS, 155381455);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3BTD_HasLOS>()
	{
		return UGP3BTD_HasLOS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3BTD_HasLOS(Z_Construct_UClass_UGP3BTD_HasLOS, &UGP3BTD_HasLOS::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3BTD_HasLOS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3BTD_HasLOS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
