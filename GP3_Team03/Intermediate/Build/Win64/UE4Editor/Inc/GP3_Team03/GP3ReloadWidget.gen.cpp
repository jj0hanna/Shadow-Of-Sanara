// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3ReloadWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3ReloadWidget() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ReloadWidget_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ReloadWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3ReloadWidget::execDoQuickReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoQuickReload();
		P_NATIVE_END;
	}
	static FName NAME_UGP3ReloadWidget_GetHitBar = FName(TEXT("GetHitBar"));
	UImage* UGP3ReloadWidget::GetHitBar()
	{
		GP3ReloadWidget_eventGetHitBar_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_GetHitBar),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3ReloadWidget_GetHitZone = FName(TEXT("GetHitZone"));
	UImage* UGP3ReloadWidget::GetHitZone()
	{
		GP3ReloadWidget_eventGetHitZone_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_GetHitZone),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3ReloadWidget_GetReloadBar = FName(TEXT("GetReloadBar"));
	UImage* UGP3ReloadWidget::GetReloadBar()
	{
		GP3ReloadWidget_eventGetReloadBar_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_GetReloadBar),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3ReloadWidget_OnReloadEnd = FName(TEXT("OnReloadEnd"));
	void UGP3ReloadWidget::OnReloadEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_OnReloadEnd),NULL);
	}
	static FName NAME_UGP3ReloadWidget_OnReloadFail = FName(TEXT("OnReloadFail"));
	void UGP3ReloadWidget::OnReloadFail()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_OnReloadFail),NULL);
	}
	static FName NAME_UGP3ReloadWidget_OnReloadStart = FName(TEXT("OnReloadStart"));
	void UGP3ReloadWidget::OnReloadStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_OnReloadStart),NULL);
	}
	static FName NAME_UGP3ReloadWidget_OnReloadSuccess = FName(TEXT("OnReloadSuccess"));
	void UGP3ReloadWidget::OnReloadSuccess()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGP3ReloadWidget_OnReloadSuccess),NULL);
	}
	void UGP3ReloadWidget::StaticRegisterNativesUGP3ReloadWidget()
	{
		UClass* Class = UGP3ReloadWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoQuickReload", &UGP3ReloadWidget::execDoQuickReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics
	{
		struct GP3ReloadWidget_eventDoQuickReload_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GP3ReloadWidget_eventDoQuickReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3ReloadWidget_eventDoQuickReload_Parms), &Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "DoQuickReload", nullptr, nullptr, sizeof(GP3ReloadWidget_eventDoQuickReload_Parms), Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3ReloadWidget_eventGetHitBar_Parms, ReturnValue), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "GetHitBar", nullptr, nullptr, sizeof(GP3ReloadWidget_eventGetHitBar_Parms), Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3ReloadWidget_eventGetHitZone_Parms, ReturnValue), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "GetHitZone", nullptr, nullptr, sizeof(GP3ReloadWidget_eventGetHitZone_Parms), Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3ReloadWidget_eventGetReloadBar_Parms, ReturnValue), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "GetReloadBar", nullptr, nullptr, sizeof(GP3ReloadWidget_eventGetReloadBar_Parms), Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "OnReloadEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "OnReloadFail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Methods to update UI elements from BPs\n" },
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
		{ "ToolTip", "Methods to update UI elements from BPs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "OnReloadStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ReloadWidget, nullptr, "OnReloadSuccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3ReloadWidget_NoRegister()
	{
		return UGP3ReloadWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGP3ReloadWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyBufferTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafetyBufferTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3ReloadWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3ReloadWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3ReloadWidget_DoQuickReload, "DoQuickReload" }, // 2744976545
		{ &Z_Construct_UFunction_UGP3ReloadWidget_GetHitBar, "GetHitBar" }, // 306802358
		{ &Z_Construct_UFunction_UGP3ReloadWidget_GetHitZone, "GetHitZone" }, // 2774674043
		{ &Z_Construct_UFunction_UGP3ReloadWidget_GetReloadBar, "GetReloadBar" }, // 1500754683
		{ &Z_Construct_UFunction_UGP3ReloadWidget_OnReloadEnd, "OnReloadEnd" }, // 323458944
		{ &Z_Construct_UFunction_UGP3ReloadWidget_OnReloadFail, "OnReloadFail" }, // 3353800449
		{ &Z_Construct_UFunction_UGP3ReloadWidget_OnReloadStart, "OnReloadStart" }, // 2189117300
		{ &Z_Construct_UFunction_UGP3ReloadWidget_OnReloadSuccess, "OnReloadSuccess" }, // 2562663109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ReloadWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/GP3ReloadWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_ReloadBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_ReloadBar = { "ReloadBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ReloadWidget, ReloadBar), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_ReloadBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_ReloadBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitBar = { "HitBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ReloadWidget, HitBar), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitZone = { "HitZone", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ReloadWidget, HitZone), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ReloadWidget, PlayerPawn), Z_Construct_UClass_AGP3PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_SafetyBufferTime_MetaData[] = {
		{ "Category", "GP3ReloadWidget" },
		{ "ModuleRelativePath", "Public/Widgets/GP3ReloadWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_SafetyBufferTime = { "SafetyBufferTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ReloadWidget, SafetyBufferTime), METADATA_PARAMS(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_SafetyBufferTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_SafetyBufferTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3ReloadWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_ReloadBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_HitZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ReloadWidget_Statics::NewProp_SafetyBufferTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3ReloadWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3ReloadWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3ReloadWidget_Statics::ClassParams = {
		&UGP3ReloadWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3ReloadWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3ReloadWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ReloadWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3ReloadWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3ReloadWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3ReloadWidget, 701966526);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3ReloadWidget>()
	{
		return UGP3ReloadWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3ReloadWidget(Z_Construct_UClass_UGP3ReloadWidget, &UGP3ReloadWidget::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3ReloadWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3ReloadWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
