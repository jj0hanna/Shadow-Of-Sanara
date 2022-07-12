// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3DashComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3DashComponent() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3DashComponent::execCalculateDownSlope)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateDownSlope(Z_Param_TargetDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execResetDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execCalculateMovement)
	{
		P_GET_STRUCT(FVector,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateMovement(Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execSetTargetDestination)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SetTargetDestination(Z_Param_TargetDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execSetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SetDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash();
		P_NATIVE_END;
	}
	void UGP3DashComponent::StaticRegisterNativesUGP3DashComponent()
	{
		UClass* Class = UGP3DashComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDownSlope", &UGP3DashComponent::execCalculateDownSlope },
			{ "CalculateMovement", &UGP3DashComponent::execCalculateMovement },
			{ "Dash", &UGP3DashComponent::execDash },
			{ "ResetDash", &UGP3DashComponent::execResetDash },
			{ "SetDirection", &UGP3DashComponent::execSetDirection },
			{ "SetTargetDestination", &UGP3DashComponent::execSetTargetDestination },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics
	{
		struct GP3DashComponent_eventCalculateDownSlope_Parms
		{
			FVector TargetDestination;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDestination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::NewProp_TargetDestination = { "TargetDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventCalculateDownSlope_Parms, TargetDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventCalculateDownSlope_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::NewProp_TargetDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "CalculateDownSlope", nullptr, nullptr, sizeof(GP3DashComponent_eventCalculateDownSlope_Parms), Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics
	{
		struct GP3DashComponent_eventCalculateMovement_Parms
		{
			FVector Step;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventCalculateMovement_Parms, Step), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventCalculateMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "CalculateMovement", nullptr, nullptr, sizeof(GP3DashComponent_eventCalculateMovement_Parms), Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_CalculateMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_Dash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "Dash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "ResetDash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_ResetDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics
	{
		struct GP3DashComponent_eventSetDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventSetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "SetDirection", nullptr, nullptr, sizeof(GP3DashComponent_eventSetDirection_Parms), Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_SetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics
	{
		struct GP3DashComponent_eventSetTargetDestination_Parms
		{
			FVector TargetDirection;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventSetTargetDestination_Parms, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventSetTargetDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "SetTargetDestination", nullptr, nullptr, sizeof(GP3DashComponent_eventSetTargetDestination_Parms), Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister()
	{
		return UGP3DashComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3DashComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDashSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDashSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDashLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDashLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DashMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDashing_MetaData[];
#endif
		static void NewProp_IsDashing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDashing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3DashComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3DashComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3DashComponent_CalculateDownSlope, "CalculateDownSlope" }, // 1365730013
		{ &Z_Construct_UFunction_UGP3DashComponent_CalculateMovement, "CalculateMovement" }, // 1733077483
		{ &Z_Construct_UFunction_UGP3DashComponent_Dash, "Dash" }, // 1172160015
		{ &Z_Construct_UFunction_UGP3DashComponent_ResetDash, "ResetDash" }, // 781513298
		{ &Z_Construct_UFunction_UGP3DashComponent_SetDirection, "SetDirection" }, // 2088270387
		{ &Z_Construct_UFunction_UGP3DashComponent_SetTargetDestination, "SetTargetDestination" }, // 3533027459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3DashComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed = { "MaxDashSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, MaxDashSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength = { "DashLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashLength), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve_MetaData[] = {
		{ "Category", "Dash - Curve" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve = { "DashCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTimer_MetaData[] = {
		{ "Category", "Dash - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTimer = { "DashTimer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashTimer), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_TargetDashLocation_MetaData[] = {
		{ "Category", "Dash - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_TargetDashLocation = { "TargetDashLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, TargetDashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_TargetDashLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_TargetDashLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Dash - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceMoved_MetaData[] = {
		{ "Category", "Dash - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceMoved = { "DistanceMoved", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DistanceMoved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceMoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude_MetaData[] = {
		{ "Category", "Dash - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude = { "DashMagnitude", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashMagnitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_MetaData[] = {
		{ "Category", "Dash - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_SetBit(void* Obj)
	{
		((UGP3DashComponent*)Obj)->IsDashing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing = { "IsDashing", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3DashComponent), &Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, Owner), Z_Construct_UClass_AGP3PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3DashComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_TargetDashLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3DashComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3DashComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3DashComponent_Statics::ClassParams = {
		&UGP3DashComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3DashComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3DashComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3DashComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3DashComponent, 3328701656);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3DashComponent>()
	{
		return UGP3DashComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3DashComponent(Z_Construct_UClass_UGP3DashComponent, &UGP3DashComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3DashComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3DashComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
