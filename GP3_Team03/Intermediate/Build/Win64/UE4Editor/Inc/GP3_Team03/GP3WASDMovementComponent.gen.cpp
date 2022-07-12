// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3WASDMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3WASDMovementComponent() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3WASDMovementComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3WASDMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execRotatePlayerWithController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotatePlayerWithController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execApplySlopeAxis)
	{
		P_GET_STRUCT(FVector,Z_Param_ActorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySlopeAxis(Z_Param_ActorLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execIsGrounded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrounded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execExecuteMovement)
	{
		P_GET_STRUCT(FVector,Z_Param_InMovement);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteMovement(Z_Param_InMovement,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execCalculateNextStep)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateNextStep(Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execGetDirectionFromInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionFromInput(Z_Param_ForwardAxis,Z_Param_RightAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execUpdateCurveTimers)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurveTimers(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execCheckInputs)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForwardInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRightInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInputs(Z_Param_InForwardInput,Z_Param_InRightInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3WASDMovementComponent::execMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_ForwardInput,Z_Param_RightInput,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UGP3WASDMovementComponent::StaticRegisterNativesUGP3WASDMovementComponent()
	{
		UClass* Class = UGP3WASDMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySlopeAxis", &UGP3WASDMovementComponent::execApplySlopeAxis },
			{ "CalculateNextStep", &UGP3WASDMovementComponent::execCalculateNextStep },
			{ "CheckInputs", &UGP3WASDMovementComponent::execCheckInputs },
			{ "ExecuteMovement", &UGP3WASDMovementComponent::execExecuteMovement },
			{ "GetDirectionFromInput", &UGP3WASDMovementComponent::execGetDirectionFromInput },
			{ "IsGrounded", &UGP3WASDMovementComponent::execIsGrounded },
			{ "Move", &UGP3WASDMovementComponent::execMove },
			{ "RotatePlayerWithController", &UGP3WASDMovementComponent::execRotatePlayerWithController },
			{ "UpdateCurveTimers", &UGP3WASDMovementComponent::execUpdateCurveTimers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics
	{
		struct GP3WASDMovementComponent_eventApplySlopeAxis_Parms
		{
			FVector ActorLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventApplySlopeAxis_Parms, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::NewProp_ActorLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "ApplySlopeAxis", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventApplySlopeAxis_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics
	{
		struct GP3WASDMovementComponent_eventCalculateNextStep_Parms
		{
			FVector Direction;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventCalculateNextStep_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventCalculateNextStep_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "CalculateNextStep", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventCalculateNextStep_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics
	{
		struct GP3WASDMovementComponent_eventCheckInputs_Parms
		{
			float InForwardInput;
			float InRightInput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForwardInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRightInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::NewProp_InForwardInput = { "InForwardInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventCheckInputs_Parms, InForwardInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::NewProp_InRightInput = { "InRightInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventCheckInputs_Parms, InRightInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::NewProp_InForwardInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::NewProp_InRightInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "CheckInputs", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventCheckInputs_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics
	{
		struct GP3WASDMovementComponent_eventExecuteMovement_Parms
		{
			FVector InMovement;
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMovement;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::NewProp_InMovement = { "InMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventExecuteMovement_Parms, InMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventExecuteMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::NewProp_InMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "ExecuteMovement", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventExecuteMovement_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics
	{
		struct GP3WASDMovementComponent_eventGetDirectionFromInput_Parms
		{
			float ForwardAxis;
			float RightAxis;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventGetDirectionFromInput_Parms, ForwardAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventGetDirectionFromInput_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventGetDirectionFromInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::NewProp_ForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::NewProp_RightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "GetDirectionFromInput", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventGetDirectionFromInput_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics
	{
		struct GP3WASDMovementComponent_eventIsGrounded_Parms
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
	void Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GP3WASDMovementComponent_eventIsGrounded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3WASDMovementComponent_eventIsGrounded_Parms), &Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "IsGrounded", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventIsGrounded_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics
	{
		struct GP3WASDMovementComponent_eventMove_Parms
		{
			float ForwardInput;
			float RightInput;
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventMove_Parms, ForwardInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::NewProp_RightInput = { "RightInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventMove_Parms, RightInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventMove_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::NewProp_ForwardInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::NewProp_RightInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "Move", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventMove_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "RotatePlayerWithController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics
	{
		struct GP3WASDMovementComponent_eventUpdateCurveTimers_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3WASDMovementComponent_eventUpdateCurveTimers_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3WASDMovementComponent, nullptr, "UpdateCurveTimers", nullptr, nullptr, sizeof(GP3WASDMovementComponent_eventUpdateCurveTimers_Parms), Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3WASDMovementComponent_NoRegister()
	{
		return UGP3WASDMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3WASDMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingTovesMovement_MetaData[];
#endif
		static void NewProp_IsUsingTovesMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingTovesMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForwardSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForwardSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiagonalMovementDivider_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiagonalMovementDivider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetToActorFeet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetToActorFeet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOffsetToGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterOffsetToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelerationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecelerationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecelerationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOnGround_MetaData[];
#endif
		static void NewProp_IsOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRegisteredInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRegisteredInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatedMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotatedMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationCurveValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationCurveValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecelerationCurveValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecelerationCurveValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHitresultLine_MetaData[];
#endif
		static void NewProp_DrawHitresultLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawHitresultLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceleratingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceleratingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeceleratingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeceleratingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepenetrationIterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DepenetrationIterationCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3WASDMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3WASDMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_ApplySlopeAxis, "ApplySlopeAxis" }, // 3565878789
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_CalculateNextStep, "CalculateNextStep" }, // 2565837445
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_CheckInputs, "CheckInputs" }, // 381490269
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_ExecuteMovement, "ExecuteMovement" }, // 1689074482
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_GetDirectionFromInput, "GetDirectionFromInput" }, // 2531352280
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_IsGrounded, "IsGrounded" }, // 256277037
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_Move, "Move" }, // 2468238809
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_RotatePlayerWithController, "RotatePlayerWithController" }, // 2911323397
		{ &Z_Construct_UFunction_UGP3WASDMovementComponent_UpdateCurveTimers, "UpdateCurveTimers" }, // 3338124193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3WASDMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement_SetBit(void* Obj)
	{
		((UGP3WASDMovementComponent*)Obj)->IsUsingTovesMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement = { "IsUsingTovesMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3WASDMovementComponent), &Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxForwardSpeed_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxForwardSpeed = { "MaxForwardSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, MaxForwardSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxForwardSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxForwardSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxRightSpeed_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxRightSpeed = { "MaxRightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, MaxRightSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxRightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxRightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DiagonalMovementDivider_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DiagonalMovementDivider = { "DiagonalMovementDivider", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, DiagonalMovementDivider), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DiagonalMovementDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DiagonalMovementDivider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxSlopeAngle_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxSlopeAngle = { "MaxSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, MaxSlopeAngle), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_OffsetToActorFeet_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_OffsetToActorFeet = { "OffsetToActorFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, OffsetToActorFeet), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_OffsetToActorFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_OffsetToActorFeet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_GravityForce_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_GravityForce = { "GravityForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, GravityForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_GravityForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_GravityForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_CharacterOffsetToGround_MetaData[] = {
		{ "Category", "Character Movement - Editable" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_CharacterOffsetToGround = { "CharacterOffsetToGround", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, CharacterOffsetToGround), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_CharacterOffsetToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_CharacterOffsetToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurve_MetaData[] = {
		{ "Category", "Character Movement - Curves" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurve = { "AccelerationCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, AccelerationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurve_MetaData[] = {
		{ "Category", "Character Movement - Curves" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurve = { "DecelerationCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, DecelerationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((UGP3WASDMovementComponent*)Obj)->IsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3WASDMovementComponent), &Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround_SetBit(void* Obj)
	{
		((UGP3WASDMovementComponent*)Obj)->IsOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround = { "IsOnGround", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3WASDMovementComponent), &Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_LastRegisteredInput_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_LastRegisteredInput = { "LastRegisteredInput", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, LastRegisteredInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_LastRegisteredInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_LastRegisteredInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_RotatedMovement_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_RotatedMovement = { "RotatedMovement", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, RotatedMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_RotatedMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_RotatedMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurveValue_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurveValue = { "AccelerationCurveValue", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, AccelerationCurveValue), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurveValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurveValue_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurveValue = { "DecelerationCurveValue", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, DecelerationCurveValue), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurveValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine_MetaData[] = {
		{ "Category", "Character Movement - Debugging Info" },
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine_SetBit(void* Obj)
	{
		((UGP3WASDMovementComponent*)Obj)->DrawHitresultLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine = { "DrawHitresultLine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3WASDMovementComponent), &Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AcceleratingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AcceleratingTime = { "AcceleratingTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, AcceleratingTime), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AcceleratingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AcceleratingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DeceleratingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DeceleratingTime = { "DeceleratingTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, DeceleratingTime), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DeceleratingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DeceleratingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DepenetrationIterationCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3WASDMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DepenetrationIterationCount = { "DepenetrationIterationCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3WASDMovementComponent, DepenetrationIterationCount), METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DepenetrationIterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DepenetrationIterationCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3WASDMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsUsingTovesMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxForwardSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxRightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DiagonalMovementDivider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_MaxSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_OffsetToActorFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_GravityForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_CharacterOffsetToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_IsOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_LastRegisteredInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_RotatedMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AccelerationCurveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DecelerationCurveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DrawHitresultLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_AcceleratingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DeceleratingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3WASDMovementComponent_Statics::NewProp_DepenetrationIterationCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3WASDMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3WASDMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3WASDMovementComponent_Statics::ClassParams = {
		&UGP3WASDMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3WASDMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3WASDMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3WASDMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3WASDMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3WASDMovementComponent, 1334760123);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3WASDMovementComponent>()
	{
		return UGP3WASDMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3WASDMovementComponent(Z_Construct_UClass_UGP3WASDMovementComponent, &UGP3WASDMovementComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3WASDMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3WASDMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
