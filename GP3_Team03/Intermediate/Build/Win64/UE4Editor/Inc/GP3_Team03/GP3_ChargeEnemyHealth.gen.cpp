// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/AI_Widgets/GP3_ChargeEnemyHealth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_ChargeEnemyHealth() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3_ChargeEnemyHealth_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3_ChargeEnemyHealth();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3_ChargeEnemyHealth::execUpdateHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealth(Z_Param_Health);
		P_NATIVE_END;
	}
	static FName NAME_UGP3_ChargeEnemyHealth_ChargeEnemyHealth = FName(TEXT("ChargeEnemyHealth"));
	UTextBlock* UGP3_ChargeEnemyHealth::ChargeEnemyHealth()
	{
		GP3_ChargeEnemyHealth_eventChargeEnemyHealth_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3_ChargeEnemyHealth_ChargeEnemyHealth),&Parms);
		return Parms.ReturnValue;
	}
	void UGP3_ChargeEnemyHealth::StaticRegisterNativesUGP3_ChargeEnemyHealth()
	{
		UClass* Class = UGP3_ChargeEnemyHealth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHealth", &UGP3_ChargeEnemyHealth::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3_ChargeEnemyHealth_eventChargeEnemyHealth_Parms, ReturnValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AI_Widgets/GP3_ChargeEnemyHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3_ChargeEnemyHealth, nullptr, "ChargeEnemyHealth", nullptr, nullptr, sizeof(GP3_ChargeEnemyHealth_eventChargeEnemyHealth_Parms), Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics
	{
		struct GP3_ChargeEnemyHealth_eventUpdateHealth_Parms
		{
			float Health;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3_ChargeEnemyHealth_eventUpdateHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AI_Widgets/GP3_ChargeEnemyHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3_ChargeEnemyHealth, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(GP3_ChargeEnemyHealth_eventUpdateHealth_Parms), Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3_ChargeEnemyHealth_NoRegister()
	{
		return UGP3_ChargeEnemyHealth::StaticClass();
	}
	struct Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3_ChargeEnemyHealth_ChargeEnemyHealth, "ChargeEnemyHealth" }, // 2849036150
		{ &Z_Construct_UFunction_UGP3_ChargeEnemyHealth_UpdateHealth, "UpdateHealth" }, // 504369634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AI_Widgets/GP3_ChargeEnemyHealth.h" },
		{ "ModuleRelativePath", "Public/AI/AI_Widgets/GP3_ChargeEnemyHealth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3_ChargeEnemyHealth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::ClassParams = {
		&UGP3_ChargeEnemyHealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3_ChargeEnemyHealth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3_ChargeEnemyHealth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3_ChargeEnemyHealth, 4137889792);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3_ChargeEnemyHealth>()
	{
		return UGP3_ChargeEnemyHealth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3_ChargeEnemyHealth(Z_Construct_UClass_UGP3_ChargeEnemyHealth, &UGP3_ChargeEnemyHealth::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3_ChargeEnemyHealth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3_ChargeEnemyHealth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
