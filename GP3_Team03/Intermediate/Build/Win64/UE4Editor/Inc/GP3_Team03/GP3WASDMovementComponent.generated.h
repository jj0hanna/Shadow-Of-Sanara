// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GP3_TEAM03_GP3WASDMovementComponent_generated_h
#error "GP3WASDMovementComponent.generated.h already included, missing '#pragma once' in GP3WASDMovementComponent.h"
#endif
#define GP3_TEAM03_GP3WASDMovementComponent_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotatePlayerWithController); \
	DECLARE_FUNCTION(execApplySlopeAxis); \
	DECLARE_FUNCTION(execIsGrounded); \
	DECLARE_FUNCTION(execExecuteMovement); \
	DECLARE_FUNCTION(execCalculateNextStep); \
	DECLARE_FUNCTION(execGetDirectionFromInput); \
	DECLARE_FUNCTION(execUpdateCurveTimers); \
	DECLARE_FUNCTION(execCheckInputs); \
	DECLARE_FUNCTION(execMove);


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotatePlayerWithController); \
	DECLARE_FUNCTION(execApplySlopeAxis); \
	DECLARE_FUNCTION(execIsGrounded); \
	DECLARE_FUNCTION(execExecuteMovement); \
	DECLARE_FUNCTION(execCalculateNextStep); \
	DECLARE_FUNCTION(execGetDirectionFromInput); \
	DECLARE_FUNCTION(execUpdateCurveTimers); \
	DECLARE_FUNCTION(execCheckInputs); \
	DECLARE_FUNCTION(execMove);


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3WASDMovementComponent(); \
	friend struct Z_Construct_UClass_UGP3WASDMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGP3WASDMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3WASDMovementComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGP3WASDMovementComponent(); \
	friend struct Z_Construct_UClass_UGP3WASDMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGP3WASDMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3WASDMovementComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3WASDMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3WASDMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3WASDMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3WASDMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3WASDMovementComponent(UGP3WASDMovementComponent&&); \
	NO_API UGP3WASDMovementComponent(const UGP3WASDMovementComponent&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3WASDMovementComponent(UGP3WASDMovementComponent&&); \
	NO_API UGP3WASDMovementComponent(const UGP3WASDMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3WASDMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3WASDMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGP3WASDMovementComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_10_PROLOG
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3WASDMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Player_GP3WASDMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
