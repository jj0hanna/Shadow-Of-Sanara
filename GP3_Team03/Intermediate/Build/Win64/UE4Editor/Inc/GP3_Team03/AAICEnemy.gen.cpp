// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/AAICEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAICEnemy() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AAICEnemy_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AAICEnemy();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAICEnemy::execOnPercieved)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimuli);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPercieved(Z_Param_Actor,Z_Param_Stimuli);
		P_NATIVE_END;
	}
	void AAICEnemy::StaticRegisterNativesAAICEnemy()
	{
		UClass* Class = AAICEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPercieved", &AAICEnemy::execOnPercieved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics
	{
		struct AICEnemy_eventOnPercieved_Parms
		{
			AActor* Actor;
			FAIStimulus Stimuli;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimuli;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICEnemy_eventOnPercieved_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::NewProp_Stimuli = { "Stimuli", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICEnemy_eventOnPercieved_Parms, Stimuli), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::NewProp_Stimuli,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AAICEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICEnemy, nullptr, "OnPercieved", nullptr, nullptr, sizeof(AICEnemy_eventOnPercieved_Parms), Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICEnemy_OnPercieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICEnemy_OnPercieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAICEnemy_NoRegister()
	{
		return AAICEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAICEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdFollowing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdFollowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICEnemy_OnPercieved, "OnPercieved" }, // 1798374668
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/AAICEnemy.h" },
		{ "ModuleRelativePath", "Public/AI/AAICEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICEnemy_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "AICEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AAICEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICEnemy_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICEnemy, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICEnemy_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICEnemy_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICEnemy_Statics::NewProp_CrowdFollowing_MetaData[] = {
		{ "Category", "AICEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AAICEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICEnemy_Statics::NewProp_CrowdFollowing = { "CrowdFollowing", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICEnemy, CrowdFollowing), Z_Construct_UClass_UCrowdFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICEnemy_Statics::NewProp_CrowdFollowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICEnemy_Statics::NewProp_CrowdFollowing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICEnemy_Statics::NewProp_Perception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICEnemy_Statics::NewProp_CrowdFollowing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICEnemy_Statics::ClassParams = {
		&AAICEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAICEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICEnemy_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICEnemy, 1333939747);
	template<> GP3_TEAM03_API UClass* StaticClass<AAICEnemy>()
	{
		return AAICEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICEnemy(Z_Construct_UClass_AAICEnemy, &AAICEnemy::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AAICEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
