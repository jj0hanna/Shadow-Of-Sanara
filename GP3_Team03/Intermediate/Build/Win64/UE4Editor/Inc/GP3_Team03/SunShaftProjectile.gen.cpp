// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Weapons/SunShaftProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSunShaftProjectile() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASunShaftProjectile_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASunShaftProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ASunShaftProjectile::StaticRegisterNativesASunShaftProjectile()
	{
	}
	UClass* Z_Construct_UClass_ASunShaftProjectile_NoRegister()
	{
		return ASunShaftProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASunShaftProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASunShaftProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASunShaftProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/SunShaftProjectile.h" },
		{ "ModuleRelativePath", "Public/Weapons/SunShaftProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "SunShaftProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/SunShaftProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASunShaftProjectile, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_ProjectileComponent_MetaData[] = {
		{ "Category", "SunShaftProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/SunShaftProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_ProjectileComponent = { "ProjectileComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASunShaftProjectile, ProjectileComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_ProjectileComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_ProjectileComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASunShaftProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunShaftProjectile_Statics::NewProp_ProjectileComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASunShaftProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASunShaftProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASunShaftProjectile_Statics::ClassParams = {
		&ASunShaftProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASunShaftProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASunShaftProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASunShaftProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASunShaftProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASunShaftProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASunShaftProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASunShaftProjectile, 1076649857);
	template<> GP3_TEAM03_API UClass* StaticClass<ASunShaftProjectile>()
	{
		return ASunShaftProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASunShaftProjectile(Z_Construct_UClass_ASunShaftProjectile, &ASunShaftProjectile::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("ASunShaftProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASunShaftProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
