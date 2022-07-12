// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3DodgeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3DodgeComponent() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DodgeComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DodgeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3DodgeComponent::execCalculateDownSlope)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateDownSlope(Z_Param_TargetDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DodgeComponent::execResetDodge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDodge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DodgeComponent::execCalculateMovement)
	{
		P_GET_STRUCT(FVector,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateMovement(Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DodgeComponent::execSetTargetDestination)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SetTargetDestination(Z_Param_TargetDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DodgeComponent::execSetDirection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SetDirection(Z_Param_Forward,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DodgeComponent::execDodge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dodge(Z_Param_ForwardAxis,Z_Param_RightAxis);
		P_NATIVE_END;
	}
	void UGP3DodgeComponent::StaticRegisterNativesUGP3DodgeComponent()
	{
		UClass* Class = UGP3DodgeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDownSlope", &UGP3DodgeComponent::execCalculateDownSlope },
			{ "CalculateMovement", &UGP3DodgeComponent::execCalculateMovement },
			{ "Dodge", &UGP3DodgeComponent::execDodge },
			{ "ResetDodge", &UGP3DodgeComponent::execResetDodge },
			{ "SetDirection", &UGP3DodgeComponent::execSetDirection },
			{ "SetTargetDestination", &UGP3DodgeComponent::execSetTargetDestination },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics
	{
		struct GP3DodgeComponent_eventCalculateDownSlope_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::NewProp_TargetDestination = { "TargetDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventCalculateDownSlope_Parms, TargetDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventCalculateDownSlope_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::NewProp_TargetDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DodgeComponent, nullptr, "CalculateDownSlope", nullptr, nullptr, sizeof(GP3DodgeComponent_eventCalculateDownSlope_Parms), Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics
	{
		struct GP3DodgeComponent_eventCalculateMovement_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventCalculateMovement_Parms, Step), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventCalculateMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DodgeComponent, nullptr, "CalculateMovement", nullptr, nullptr, sizeof(GP3DodgeComponent_eventCalculateMovement_Parms), Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics
	{
		struct GP3DodgeComponent_eventDodge_Parms
		{
			float ForwardAxis;
			float RightAxis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventDodge_Parms, ForwardAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventDodge_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::NewProp_ForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::NewProp_RightAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DodgeComponent, nullptr, "Dodge", nullptr, nullptr, sizeof(GP3DodgeComponent_eventDodge_Parms), Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DodgeComponent_Dodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DodgeComponent_Dodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DodgeComponent, nullptr, "ResetDodge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics
	{
		struct GP3DodgeComponent_eventSetDirection_Parms
		{
			float Forward;
			float Right;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Right;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventSetDirection_Parms, Forward), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventSetDirection_Parms, Right), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventSetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DodgeComponent, nullptr, "SetDirection", nullptr, nullptr, sizeof(GP3DodgeComponent_eventSetDirection_Parms), Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DodgeComponent_SetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DodgeComponent_SetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics
	{
		struct GP3DodgeComponent_eventSetTargetDestination_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventSetTargetDestination_Parms, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DodgeComponent_eventSetTargetDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DodgeComponent, nullptr, "SetTargetDestination", nullptr, nullptr, sizeof(GP3DodgeComponent_eventSetTargetDestination_Parms), Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3DodgeComponent_NoRegister()
	{
		return UGP3DodgeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3DodgeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDodgeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDodgeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DodgeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDodgeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDodgeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DodgeMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDodging_MetaData[];
#endif
		static void NewProp_IsDodging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDodging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3DodgeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3DodgeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3DodgeComponent_CalculateDownSlope, "CalculateDownSlope" }, // 1479097001
		{ &Z_Construct_UFunction_UGP3DodgeComponent_CalculateMovement, "CalculateMovement" }, // 1969868665
		{ &Z_Construct_UFunction_UGP3DodgeComponent_Dodge, "Dodge" }, // 2721963336
		{ &Z_Construct_UFunction_UGP3DodgeComponent_ResetDodge, "ResetDodge" }, // 552365321
		{ &Z_Construct_UFunction_UGP3DodgeComponent_SetDirection, "SetDirection" }, // 3065318538
		{ &Z_Construct_UFunction_UGP3DodgeComponent_SetTargetDestination, "SetTargetDestination" }, // 2679653023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3DodgeComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_MaxDodgeSpeed_MetaData[] = {
		{ "Category", "Dodge - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_MaxDodgeSpeed = { "MaxDodgeSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, MaxDodgeSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_MaxDodgeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_MaxDodgeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeLength_MetaData[] = {
		{ "Category", "Dodge - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeLength = { "DodgeLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, DodgeLength), METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeCurve_MetaData[] = {
		{ "Category", "Dodge - Curve" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeCurve = { "DodgeCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, DodgeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeTimer_MetaData[] = {
		{ "Category", "Dodge - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeTimer = { "DodgeTimer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, DodgeTimer), METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_TargetDodgeLocation_MetaData[] = {
		{ "Category", "Dodge - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_TargetDodgeLocation = { "TargetDodgeLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, TargetDodgeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_TargetDodgeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_TargetDodgeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Dodge - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DistanceMoved_MetaData[] = {
		{ "Category", "Dodge - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DistanceMoved = { "DistanceMoved", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, DistanceMoved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DistanceMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DistanceMoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeMagnitude_MetaData[] = {
		{ "Category", "Dodge - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeMagnitude = { "DodgeMagnitude", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, DodgeMagnitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging_MetaData[] = {
		{ "Category", "Dodge - Debug Info" },
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging_SetBit(void* Obj)
	{
		((UGP3DodgeComponent*)Obj)->IsDodging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging = { "IsDodging", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3DodgeComponent), &Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DodgeComponent, Owner), Z_Construct_UClass_AGP3PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3DodgeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_MaxDodgeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_TargetDodgeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DistanceMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_DodgeMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_IsDodging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DodgeComponent_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3DodgeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3DodgeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3DodgeComponent_Statics::ClassParams = {
		&UGP3DodgeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3DodgeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3DodgeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DodgeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3DodgeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3DodgeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3DodgeComponent, 23385253);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3DodgeComponent>()
	{
		return UGP3DodgeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3DodgeComponent(Z_Construct_UClass_UGP3DodgeComponent, &UGP3DodgeComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3DodgeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3DodgeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
