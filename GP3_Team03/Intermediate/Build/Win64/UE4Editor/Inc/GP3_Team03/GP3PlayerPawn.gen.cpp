// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3PlayerPawn() {}
// Cross Module References
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn();
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3WASDMovementComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ShootComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerSpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "TookDamageEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnWeaponEquippedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execOnTakeDamage)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AGP3PlayerPawn_OnForwardInput = FName(TEXT("OnForwardInput"));
	void AGP3PlayerPawn::OnForwardInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnForwardInput),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnRightInput = FName(TEXT("OnRightInput"));
	void AGP3PlayerPawn::OnRightInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnRightInput),NULL);
	}
	void AGP3PlayerPawn::StaticRegisterNativesAGP3PlayerPawn()
	{
		UClass* Class = AGP3PlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTakeDamage", &AGP3PlayerPawn::execOnTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnForwardInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnRightInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics
	{
		struct GP3PlayerPawn_eventOnTakeDamage_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GP3PlayerPawn_eventOnTakeDamage_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3PlayerPawn_eventOnTakeDamage_Parms), &Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnTakeDamage", nullptr, nullptr, sizeof(GP3PlayerPawn_eventOnTakeDamage_Parms), Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister()
	{
		return AGP3PlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGP3PlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASDMovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WASDMovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWeaponEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TookDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TookDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3PlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGP3PlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput, "OnForwardInput" }, // 3781622372
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput, "OnRightInput" }, // 1693248411
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage, "OnTakeDamage" }, // 3395765627
		{ &Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature, "OnWeaponEquippedEvent__DelegateSignature" }, // 454419497
		{ &Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature, "TookDamageEvent__DelegateSignature" }, // 3465460693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/GP3PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp = { "WASDMovementComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, WASDMovementComp), Z_Construct_UClass_UGP3WASDMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp = { "ShootComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, ShootComp), Z_Construct_UClass_UGP3ShootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp = { "DashComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, DashComp), Z_Construct_UClass_UGP3DashComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, SpringArmComp), Z_Construct_UClass_UGP3PlayerSpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue = { "RightInputValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, RightInputValue), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue = { "ForwardInputValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, ForwardInputValue), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity = { "HorizontalMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, HorizontalMouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity = { "VerticalMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, VerticalMouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, WeaponClass), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, Gun), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_OnWeaponEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_OnWeaponEquipped = { "OnWeaponEquipped", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, OnWeaponEquipped), Z_Construct_UDelegateFunction_AGP3PlayerPawn_OnWeaponEquippedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_OnWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_OnWeaponEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage = { "TookDamage", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, TookDamage), Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Player Values" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_OnWeaponEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3PlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3PlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3PlayerPawn_Statics::ClassParams = {
		&AGP3PlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3PlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3PlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3PlayerPawn, 3735839192);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3PlayerPawn>()
	{
		return AGP3PlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3PlayerPawn(Z_Construct_UClass_AGP3PlayerPawn, &AGP3PlayerPawn::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3PlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3PlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
