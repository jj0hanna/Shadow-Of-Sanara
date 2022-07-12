// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3CrosshairWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3CrosshairWidget() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3CrosshairWidget_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3CrosshairWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3CrosshairWidget::execUpdateAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3CrosshairWidget::execWeaponChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponChanged();
		P_NATIVE_END;
	}
	static FName NAME_UGP3CrosshairWidget_GetAmmoImages = FName(TEXT("GetAmmoImages"));
	TArray<UImage*> UGP3CrosshairWidget::GetAmmoImages()
	{
		GP3CrosshairWidget_eventGetAmmoImages_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3CrosshairWidget_GetAmmoImages),&Parms);
		return Parms.ReturnValue;
	}
	void UGP3CrosshairWidget::StaticRegisterNativesUGP3CrosshairWidget()
	{
		UClass* Class = UGP3CrosshairWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAmmo", &UGP3CrosshairWidget::execUpdateAmmo },
			{ "WeaponChanged", &UGP3CrosshairWidget::execWeaponChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3CrosshairWidget_eventGetAmmoImages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3CrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3CrosshairWidget, nullptr, "GetAmmoImages", nullptr, nullptr, sizeof(GP3CrosshairWidget_eventGetAmmoImages_Parms), Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3CrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3CrosshairWidget, nullptr, "UpdateAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3CrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3CrosshairWidget, nullptr, "WeaponChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3CrosshairWidget_NoRegister()
	{
		return UGP3CrosshairWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGP3CrosshairWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3CrosshairWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3CrosshairWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3CrosshairWidget_GetAmmoImages, "GetAmmoImages" }, // 3237798914
		{ &Z_Construct_UFunction_UGP3CrosshairWidget_UpdateAmmo, "UpdateAmmo" }, // 1802092430
		{ &Z_Construct_UFunction_UGP3CrosshairWidget_WeaponChanged, "WeaponChanged" }, // 1456452394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3CrosshairWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/GP3CrosshairWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3CrosshairWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3CrosshairWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3CrosshairWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3CrosshairWidget_Statics::ClassParams = {
		&UGP3CrosshairWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGP3CrosshairWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3CrosshairWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3CrosshairWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3CrosshairWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3CrosshairWidget, 1549721611);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3CrosshairWidget>()
	{
		return UGP3CrosshairWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3CrosshairWidget(Z_Construct_UClass_UGP3CrosshairWidget, &UGP3CrosshairWidget::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3CrosshairWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3CrosshairWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
