// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3SettingsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3SettingsWidget() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3SettingsWidget_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3SettingsWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
// End Cross Module References
	DEFINE_FUNCTION(UGP3SettingsWidget::execHandleVSyncToggle)
	{
		P_GET_UBOOL(Z_Param_bIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVSyncToggle(Z_Param_bIsChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3SettingsWidget::execHandleQualityChange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleQualityChange(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3SettingsWidget::execHandleResolutionChange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleResolutionChange(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3SettingsWidget::execHandleFullscreenToggle)
	{
		P_GET_UBOOL(Z_Param_bIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFullscreenToggle(Z_Param_bIsChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3SettingsWidget::execHandleFullscreenModeChange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFullscreenModeChange(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	static FName NAME_UGP3SettingsWidget_GetFullscreenModeDropdown = FName(TEXT("GetFullscreenModeDropdown"));
	UComboBoxString* UGP3SettingsWidget::GetFullscreenModeDropdown()
	{
		GP3SettingsWidget_eventGetFullscreenModeDropdown_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3SettingsWidget_GetFullscreenModeDropdown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3SettingsWidget_GetFullscreenToggle = FName(TEXT("GetFullscreenToggle"));
	UCheckBox* UGP3SettingsWidget::GetFullscreenToggle()
	{
		GP3SettingsWidget_eventGetFullscreenToggle_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3SettingsWidget_GetFullscreenToggle),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3SettingsWidget_GetQualityDropdown = FName(TEXT("GetQualityDropdown"));
	UComboBoxString* UGP3SettingsWidget::GetQualityDropdown()
	{
		GP3SettingsWidget_eventGetQualityDropdown_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3SettingsWidget_GetQualityDropdown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3SettingsWidget_GetResolutionDropdown = FName(TEXT("GetResolutionDropdown"));
	UComboBoxString* UGP3SettingsWidget::GetResolutionDropdown()
	{
		GP3SettingsWidget_eventGetResolutionDropdown_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3SettingsWidget_GetResolutionDropdown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3SettingsWidget_GetVSyncToggle = FName(TEXT("GetVSyncToggle"));
	UCheckBox* UGP3SettingsWidget::GetVSyncToggle()
	{
		GP3SettingsWidget_eventGetVSyncToggle_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3SettingsWidget_GetVSyncToggle),&Parms);
		return Parms.ReturnValue;
	}
	void UGP3SettingsWidget::StaticRegisterNativesUGP3SettingsWidget()
	{
		UClass* Class = UGP3SettingsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleFullscreenModeChange", &UGP3SettingsWidget::execHandleFullscreenModeChange },
			{ "HandleFullscreenToggle", &UGP3SettingsWidget::execHandleFullscreenToggle },
			{ "HandleQualityChange", &UGP3SettingsWidget::execHandleQualityChange },
			{ "HandleResolutionChange", &UGP3SettingsWidget::execHandleResolutionChange },
			{ "HandleVSyncToggle", &UGP3SettingsWidget::execHandleVSyncToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventGetFullscreenModeDropdown_Parms, ReturnValue), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "GetFullscreenModeDropdown", nullptr, nullptr, sizeof(GP3SettingsWidget_eventGetFullscreenModeDropdown_Parms), Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventGetFullscreenToggle_Parms, ReturnValue), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "GetFullscreenToggle", nullptr, nullptr, sizeof(GP3SettingsWidget_eventGetFullscreenToggle_Parms), Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventGetQualityDropdown_Parms, ReturnValue), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "GetQualityDropdown", nullptr, nullptr, sizeof(GP3SettingsWidget_eventGetQualityDropdown_Parms), Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventGetResolutionDropdown_Parms, ReturnValue), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "GetResolutionDropdown", nullptr, nullptr, sizeof(GP3SettingsWidget_eventGetResolutionDropdown_Parms), Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventGetVSyncToggle_Parms, ReturnValue), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "GetVSyncToggle", nullptr, nullptr, sizeof(GP3SettingsWidget_eventGetVSyncToggle_Parms), Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics
	{
		struct GP3SettingsWidget_eventHandleFullscreenModeChange_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventHandleFullscreenModeChange_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventHandleFullscreenModeChange_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "HandleFullscreenModeChange", nullptr, nullptr, sizeof(GP3SettingsWidget_eventHandleFullscreenModeChange_Parms), Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics
	{
		struct GP3SettingsWidget_eventHandleFullscreenToggle_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((GP3SettingsWidget_eventHandleFullscreenToggle_Parms*)Obj)->bIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3SettingsWidget_eventHandleFullscreenToggle_Parms), &Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "HandleFullscreenToggle", nullptr, nullptr, sizeof(GP3SettingsWidget_eventHandleFullscreenToggle_Parms), Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics
	{
		struct GP3SettingsWidget_eventHandleQualityChange_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventHandleQualityChange_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventHandleQualityChange_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "HandleQualityChange", nullptr, nullptr, sizeof(GP3SettingsWidget_eventHandleQualityChange_Parms), Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics
	{
		struct GP3SettingsWidget_eventHandleResolutionChange_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventHandleResolutionChange_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3SettingsWidget_eventHandleResolutionChange_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "HandleResolutionChange", nullptr, nullptr, sizeof(GP3SettingsWidget_eventHandleResolutionChange_Parms), Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics
	{
		struct GP3SettingsWidget_eventHandleVSyncToggle_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((GP3SettingsWidget_eventHandleVSyncToggle_Parms*)Obj)->bIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3SettingsWidget_eventHandleVSyncToggle_Parms), &Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3SettingsWidget, nullptr, "HandleVSyncToggle", nullptr, nullptr, sizeof(GP3SettingsWidget_eventHandleVSyncToggle_Parms), Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3SettingsWidget_NoRegister()
	{
		return UGP3SettingsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGP3SettingsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3SettingsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3SettingsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenModeDropdown, "GetFullscreenModeDropdown" }, // 3759238263
		{ &Z_Construct_UFunction_UGP3SettingsWidget_GetFullscreenToggle, "GetFullscreenToggle" }, // 3712206878
		{ &Z_Construct_UFunction_UGP3SettingsWidget_GetQualityDropdown, "GetQualityDropdown" }, // 3369388978
		{ &Z_Construct_UFunction_UGP3SettingsWidget_GetResolutionDropdown, "GetResolutionDropdown" }, // 1689713865
		{ &Z_Construct_UFunction_UGP3SettingsWidget_GetVSyncToggle, "GetVSyncToggle" }, // 2459660656
		{ &Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenModeChange, "HandleFullscreenModeChange" }, // 204614351
		{ &Z_Construct_UFunction_UGP3SettingsWidget_HandleFullscreenToggle, "HandleFullscreenToggle" }, // 3620673632
		{ &Z_Construct_UFunction_UGP3SettingsWidget_HandleQualityChange, "HandleQualityChange" }, // 2163117944
		{ &Z_Construct_UFunction_UGP3SettingsWidget_HandleResolutionChange, "HandleResolutionChange" }, // 4116463573
		{ &Z_Construct_UFunction_UGP3SettingsWidget_HandleVSyncToggle, "HandleVSyncToggle" }, // 1831814835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3SettingsWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/GP3SettingsWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3SettingsWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3SettingsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3SettingsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3SettingsWidget_Statics::ClassParams = {
		&UGP3SettingsWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGP3SettingsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3SettingsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3SettingsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3SettingsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3SettingsWidget, 489814525);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3SettingsWidget>()
	{
		return UGP3SettingsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3SettingsWidget(Z_Construct_UClass_UGP3SettingsWidget, &UGP3SettingsWidget::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3SettingsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3SettingsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
