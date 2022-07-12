// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Weapons/WeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AWeaponBase();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature();
	GP3_TEAM03_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnAmmoChangedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnReloadedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}

static_assert(std::is_polymorphic<FWeaponData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GP3_TEAM03_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_GP3_Team03(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash());
	}
	return Singleton;
}
template<> GP3_TEAM03_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/GP3_Team03"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_GP3_Team03_StaticRegisterNativesFWeaponData
{
	FScriptStruct_GP3_Team03_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponData>(FName(TEXT("WeaponData")));
	}
} ScriptStruct_GP3_Team03_StaticRegisterNativesFWeaponData;
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponShootCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponShootCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponShootCooldown_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponShootCooldown = { "WeaponShootCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponShootCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponShootCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponShootCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponReloadTime_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponReloadTime = { "WeaponReloadTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponReloadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponAmmo_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponAmmo = { "WeaponAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponShootCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponAmmo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GP3_Team03();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 5854659U; }
	DEFINE_FUNCTION(AWeaponBase::execInstantReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstantReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execReLoadGun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReLoadGun();
		P_NATIVE_END;
	}
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
		UClass* Class = AWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InstantReload", &AWeaponBase::execInstantReload },
			{ "ReLoadGun", &AWeaponBase::execReLoadGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponBase_InstantReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_InstantReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_InstantReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "InstantReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_InstantReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_InstantReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_InstantReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_InstantReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_ReLoadGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_ReLoadGun_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ta bort blueprint\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
		{ "ToolTip", "ta bort blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ReLoadGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ReLoadGun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_ReLoadGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ReLoadGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_ReLoadGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_ReLoadGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultWeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReloadFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAmmoChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmmoChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_InstantReload, "InstantReload" }, // 2656592359
		{ &Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature, "OnAmmoChangedEvent__DelegateSignature" }, // 2949590330
		{ &Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature, "OnReloadedEvent__DelegateSignature" }, // 3896399792
		{ &Z_Construct_UFunction_AWeaponBase_ReLoadGun, "ReLoadGun" }, // 75393297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponBase.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable = { "WeaponDataTable", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, WeaponDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultWeaponName_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultWeaponName = { "DefaultWeaponName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, DefaultWeaponName), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultWeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultWeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnReloadFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnReloadFinished = { "OnReloadFinished", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, OnReloadFinished), Z_Construct_UDelegateFunction_AWeaponBase_OnReloadedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnReloadFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnReloadFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnAmmoChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnAmmoChanged = { "OnAmmoChanged", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, OnAmmoChanged), Z_Construct_UDelegateFunction_AWeaponBase_OnAmmoChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnAmmoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnAmmoChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultWeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnReloadFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnAmmoChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponBase, 30132906);
	template<> GP3_TEAM03_API UClass* StaticClass<AWeaponBase>()
	{
		return AWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBase(Z_Construct_UClass_AWeaponBase, &AWeaponBase::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
