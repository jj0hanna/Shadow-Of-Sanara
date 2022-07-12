// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3PlayerCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3PlayerCameraComponent() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerCameraComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	void UGP3PlayerCameraComponent::StaticRegisterNativesUGP3PlayerCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UGP3PlayerCameraComponent_NoRegister()
	{
		return UGP3PlayerCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3PlayerCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Player/GP3PlayerCameraComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerCameraComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3PlayerCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::ClassParams = {
		&UGP3PlayerCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3PlayerCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3PlayerCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3PlayerCameraComponent, 2925667776);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3PlayerCameraComponent>()
	{
		return UGP3PlayerCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3PlayerCameraComponent(Z_Construct_UClass_UGP3PlayerCameraComponent, &UGP3PlayerCameraComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3PlayerCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3PlayerCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
