// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#ifdef GP3_TEAM03_GP3_AI_BaseCharacter_generated_h
#error "GP3_AI_BaseCharacter.generated.h already included, missing '#pragma once' in GP3_AI_BaseCharacter.h"
#endif
#define GP3_TEAM03_GP3_AI_BaseCharacter_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_11_DELEGATE \
static inline void FOnTookDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTookDamageDelegate) \
{ \
	OnTookDamageDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_10_DELEGATE \
static inline void FTakeGunDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& TakeGunDamageDelegate) \
{ \
	TakeGunDamageDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_9_DELEGATE \
struct _Script_GP3_Team03_eventOnHitWallDelegate_Parms \
{ \
	FHitResult HitObject; \
}; \
static inline void FOnHitWallDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHitWallDelegate, FHitResult HitObject) \
{ \
	_Script_GP3_Team03_eventOnHitWallDelegate_Parms Parms; \
	Parms.HitObject=HitObject; \
	OnHitWallDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_RPC_WRAPPERS \
	virtual void TakeGunDamage_Implementation(float GunDamage); \
 \
	DECLARE_FUNCTION(execTakeGunDamage); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TakeGunDamage_Implementation(float GunDamage); \
 \
	DECLARE_FUNCTION(execTakeGunDamage); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_EVENT_PARMS \
	struct GP3_AI_BaseCharacter_eventTakeGunDamage_Parms \
	{ \
		float GunDamage; \
	};


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGP3_AI_BaseCharacter(); \
	friend struct Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AGP3_AI_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AGP3_AI_BaseCharacter)


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAGP3_AI_BaseCharacter(); \
	friend struct Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AGP3_AI_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AGP3_AI_BaseCharacter)


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGP3_AI_BaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGP3_AI_BaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3_AI_BaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3_AI_BaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3_AI_BaseCharacter(AGP3_AI_BaseCharacter&&); \
	NO_API AGP3_AI_BaseCharacter(const AGP3_AI_BaseCharacter&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3_AI_BaseCharacter(AGP3_AI_BaseCharacter&&); \
	NO_API AGP3_AI_BaseCharacter(const AGP3_AI_BaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3_AI_BaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3_AI_BaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGP3_AI_BaseCharacter)


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_17_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class AGP3_AI_BaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_AI_EnemyBaseCharacter_GP3_AI_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
