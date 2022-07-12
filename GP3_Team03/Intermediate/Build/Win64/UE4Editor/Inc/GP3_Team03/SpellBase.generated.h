// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM03_SpellBase_generated_h
#error "SpellBase.generated.h already included, missing '#pragma once' in SpellBase.h"
#endif
#define GP3_TEAM03_SpellBase_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpellData_Statics; \
	GP3_TEAM03_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GP3_TEAM03_API UScriptStruct* StaticStruct<struct FSpellData>();

#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_RPC_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpellBase(); \
	friend struct Z_Construct_UClass_ASpellBase_Statics; \
public: \
	DECLARE_CLASS(ASpellBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(ASpellBase)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASpellBase(); \
	friend struct Z_Construct_UClass_ASpellBase_Statics; \
public: \
	DECLARE_CLASS(ASpellBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(ASpellBase)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpellBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpellBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellBase(ASpellBase&&); \
	NO_API ASpellBase(const ASpellBase&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellBase(ASpellBase&&); \
	NO_API ASpellBase(const ASpellBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpellBase)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASpellBase, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SpellDataTable() { return STRUCT_OFFSET(ASpellBase, SpellDataTable); } \
	FORCEINLINE static uint32 __PPO__DefaultSpellName() { return STRUCT_OFFSET(ASpellBase, DefaultSpellName); }


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_29_PROLOG
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class ASpellBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Weapons_SpellBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
