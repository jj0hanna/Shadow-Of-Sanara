// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM03_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define GP3_TEAM03_WeaponBase_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	GP3_TEAM03_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GP3_TEAM03_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_45_DELEGATE \
static inline void FOnAmmoChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoChangedEvent) \
{ \
	OnAmmoChangedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_44_DELEGATE \
static inline void FOnReloadedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnReloadedEvent) \
{ \
	OnReloadedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInstantReload); \
	DECLARE_FUNCTION(execReLoadGun);


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInstantReload); \
	DECLARE_FUNCTION(execReLoadGun);


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AWeaponBase, MeshComp); } \
	FORCEINLINE static uint32 __PPO__WeaponDataTable() { return STRUCT_OFFSET(AWeaponBase, WeaponDataTable); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponName() { return STRUCT_OFFSET(AWeaponBase, DefaultWeaponName); }


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_39_PROLOG
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Weapons_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
