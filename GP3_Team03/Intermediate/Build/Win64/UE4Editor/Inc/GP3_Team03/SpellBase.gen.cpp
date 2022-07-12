// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Weapons/SpellBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellBase() {}
// Cross Module References
	GP3_TEAM03_API UScriptStruct* Z_Construct_UScriptStruct_FSpellData();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASpellBase_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASpellBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSpellData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSpellData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSpellData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GP3_TEAM03_API uint32 Get_Z_Construct_UScriptStruct_FSpellData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpellData, Z_Construct_UPackage__Script_GP3_Team03(), TEXT("SpellData"), sizeof(FSpellData), Get_Z_Construct_UScriptStruct_FSpellData_Hash());
	}
	return Singleton;
}
template<> GP3_TEAM03_API UScriptStruct* StaticStruct<FSpellData>()
{
	return FSpellData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpellData(FSpellData::StaticStruct, TEXT("/Script/GP3_Team03"), TEXT("SpellData"), false, nullptr, nullptr);
static struct FScriptStruct_GP3_Team03_StaticRegisterNativesFSpellData
{
	FScriptStruct_GP3_Team03_StaticRegisterNativesFSpellData()
	{
		UScriptStruct::DeferCppStructOps<FSpellData>(FName(TEXT("SpellData")));
	}
} ScriptStruct_GP3_Team03_StaticRegisterNativesFSpellData;
	struct Z_Construct_UScriptStruct_FSpellData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spellname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Spellname;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpellData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpellData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpellData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_SpellMesh_MetaData[] = {
		{ "Category", "SpellData" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_SpellMesh = { "SpellMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpellData, SpellMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_SpellMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_SpellMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_Spellname_MetaData[] = {
		{ "Category", "SpellData" },
		{ "Comment", "//could be removed of we wont use a mesh\n" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
		{ "ToolTip", "could be removed of we wont use a mesh" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_Spellname = { "Spellname", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpellData, Spellname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_Spellname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_Spellname_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpellData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_SpellMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpellData_Statics::NewProp_Spellname,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpellData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SpellData",
		sizeof(FSpellData),
		alignof(FSpellData),
		Z_Construct_UScriptStruct_FSpellData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpellData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpellData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpellData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpellData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpellData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GP3_Team03();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpellData"), sizeof(FSpellData), Get_Z_Construct_UScriptStruct_FSpellData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpellData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpellData_Hash() { return 4174080095U; }
	void ASpellBase::StaticRegisterNativesASpellBase()
	{
	}
	UClass* Z_Construct_UClass_ASpellBase_NoRegister()
	{
		return ASpellBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpellBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSpellName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultSpellName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpellBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/SpellBase.h" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellBase, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpellBase_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellBase_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellBase_Statics::NewProp_SpellDataTable_MetaData[] = {
		{ "Category", "SpellBase" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellBase_Statics::NewProp_SpellDataTable = { "SpellDataTable", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellBase, SpellDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpellBase_Statics::NewProp_SpellDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellBase_Statics::NewProp_SpellDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellBase_Statics::NewProp_DefaultSpellName_MetaData[] = {
		{ "Category", "SpellBase" },
		{ "ModuleRelativePath", "Public/Weapons/SpellBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpellBase_Statics::NewProp_DefaultSpellName = { "DefaultSpellName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellBase, DefaultSpellName), METADATA_PARAMS(Z_Construct_UClass_ASpellBase_Statics::NewProp_DefaultSpellName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellBase_Statics::NewProp_DefaultSpellName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpellBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellBase_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellBase_Statics::NewProp_SpellDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellBase_Statics::NewProp_DefaultSpellName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpellBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpellBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpellBase_Statics::ClassParams = {
		&ASpellBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpellBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpellBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpellBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpellBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpellBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpellBase, 3902738367);
	template<> GP3_TEAM03_API UClass* StaticClass<ASpellBase>()
	{
		return ASpellBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpellBase(Z_Construct_UClass_ASpellBase, &ASpellBase::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("ASpellBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpellBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
