// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GP3_TEAM03_GP3PlayerPawn_generated_h
#error "GP3PlayerPawn.generated.h already included, missing '#pragma once' in GP3PlayerPawn.h"
#endif
#define GP3_TEAM03_GP3PlayerPawn_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_22_DELEGATE \
static inline void FTookDamageEvent_DelegateWrapper(const FMulticastScriptDelegate& TookDamageEvent) \
{ \
	TookDamageEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_21_DELEGATE \
static inline void FOnWeaponEquippedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponEquippedEvent) \
{ \
	OnWeaponEquippedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeDamage);


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeDamage);


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_EVENT_PARMS
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGP3PlayerPawn(); \
	friend struct Z_Construct_UClass_AGP3PlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AGP3PlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AGP3PlayerPawn)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAGP3PlayerPawn(); \
	friend struct Z_Construct_UClass_AGP3PlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AGP3PlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AGP3PlayerPawn)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGP3PlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGP3PlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3PlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3PlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3PlayerPawn(AGP3PlayerPawn&&); \
	NO_API AGP3PlayerPawn(const AGP3PlayerPawn&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3PlayerPawn(AGP3PlayerPawn&&); \
	NO_API AGP3PlayerPawn(const AGP3PlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3PlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3PlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGP3PlayerPawn)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_17_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class AGP3PlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Player_GP3PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
