// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3PlayerSpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3PlayerSpringArmComponent() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerSpringArmComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerSpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerCameraComponent_NoRegister();
// End Cross Module References
	void UGP3PlayerSpringArmComponent::StaticRegisterNativesUGP3PlayerSpringArmComponent()
	{
	}
	UClass* Z_Construct_UClass_UGP3PlayerSpringArmComponent_NoRegister()
	{
		return UGP3PlayerSpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalFov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFov_MetaData[];
#endif
		static void NewProp_UseFov_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimZoomFov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimZoomFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimZoomFovSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimZoomFovSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalOffsetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalOffsetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOffset_MetaData[];
#endif
		static void NewProp_UseOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimZoomOffsetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimZoomOffsetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimZoomOffsetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimZoomOffsetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTargetArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalTargetArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSpringArm_MetaData[];
#endif
		static void NewProp_UseSpringArm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimZoomArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimZoomArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimZoomArmSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimZoomArmSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Player/GP3PlayerSpringArmComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalFov_MetaData[] = {
		{ "Comment", "// FOV Aim Settings ******************************************************* //\n" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "FOV Aim Settings *******************************************************" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalFov = { "OriginalFov", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, OriginalFov), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalFov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Change FOV for aiming? */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Change FOV for aiming?" },
	};
#endif
	void Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov_SetBit(void* Obj)
	{
		((UGP3PlayerSpringArmComponent*)Obj)->UseFov = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov = { "UseFov", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3PlayerSpringArmComponent), &Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFov_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** FOV when aiming */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "FOV when aiming" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFov = { "AimZoomFov", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, AimZoomFov), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFovSpeed_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Speed of camera FOV changing. Higher = faster. */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Speed of camera FOV changing. Higher = faster." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFovSpeed = { "AimZoomFovSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, AimZoomFovSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFovSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFovSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalOffsetLocation_MetaData[] = {
		{ "Comment", "// Camera offset Aim Settings ******************************************************* //\n" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Camera offset Aim Settings *******************************************************" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalOffsetLocation = { "OriginalOffsetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, OriginalOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalOffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalOffsetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Change camera location when aiming? */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Change camera location when aiming?" },
	};
#endif
	void Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset_SetBit(void* Obj)
	{
		((UGP3PlayerSpringArmComponent*)Obj)->UseOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset = { "UseOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3PlayerSpringArmComponent), &Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetLocation_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Camera offset location when aiming. */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Camera offset location when aiming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetLocation = { "AimZoomOffsetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, AimZoomOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetSpeed_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Speed of changing camera location. Higher = faster. */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Speed of changing camera location. Higher = faster." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetSpeed = { "AimZoomOffsetSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, AimZoomOffsetSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalTargetArmLength_MetaData[] = {
		{ "Comment", "// Spring Arm Aim Settings ************************************************ //\n" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Spring Arm Aim Settings ************************************************" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalTargetArmLength = { "OriginalTargetArmLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, OriginalTargetArmLength), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalTargetArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalTargetArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Should spring arm length be changed when aiming? */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Should spring arm length be changed when aiming?" },
	};
#endif
	void Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm_SetBit(void* Obj)
	{
		((UGP3PlayerSpringArmComponent*)Obj)->UseSpringArm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm = { "UseSpringArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3PlayerSpringArmComponent), &Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmLength_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Spring arm length when aiming. Camera distance from player. */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Spring arm length when aiming. Camera distance from player." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmLength = { "AimZoomArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, AimZoomArmLength), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmSpeed_MetaData[] = {
		{ "Category", "CameraAimZoomSettings" },
		{ "Comment", "/** Speed of arm length changing. Higher = faster. */" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
		{ "ToolTip", "Speed of arm length changing. Higher = faster." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmSpeed = { "AimZoomArmSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, AimZoomArmSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "Comment", "// ************************************************************************ //\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerSpringArmComponent, CameraComp), Z_Construct_UClass_UGP3PlayerCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_CameraComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomFovSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalOffsetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomOffsetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_OriginalTargetArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_UseSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_AimZoomArmSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::NewProp_CameraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3PlayerSpringArmComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::ClassParams = {
		&UGP3PlayerSpringArmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3PlayerSpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3PlayerSpringArmComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3PlayerSpringArmComponent, 2585658665);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3PlayerSpringArmComponent>()
	{
		return UGP3PlayerSpringArmComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3PlayerSpringArmComponent(Z_Construct_UClass_UGP3PlayerSpringArmComponent, &UGP3PlayerSpringArmComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3PlayerSpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3PlayerSpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
