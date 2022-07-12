// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM03_PlayerPawnMovementComponent_generated_h
#error "PlayerPawnMovementComponent.generated.h already included, missing '#pragma once' in PlayerPawnMovementComponent.h"
#endif
#define GP3_TEAM03_PlayerPawnMovementComponent_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReLoad); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execMove);


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReLoad); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execMove);


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerPawnMovementComponent(); \
	friend struct Z_Construct_UClass_UPlayerPawnMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerPawnMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UPlayerPawnMovementComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerPawnMovementComponent(); \
	friend struct Z_Construct_UClass_UPlayerPawnMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerPawnMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UPlayerPawnMovementComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerPawnMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerPawnMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerPawnMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerPawnMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerPawnMovementComponent(UPlayerPawnMovementComponent&&); \
	NO_API UPlayerPawnMovementComponent(const UPlayerPawnMovementComponent&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerPawnMovementComponent(UPlayerPawnMovementComponent&&); \
	NO_API UPlayerPawnMovementComponent(const UPlayerPawnMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerPawnMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerPawnMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerPawnMovementComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ForwardSpeed() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, ForwardSpeed); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__RightSpeed() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, RightSpeed); } \
	FORCEINLINE static uint32 __PPO__JumpForce() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, JumpForce); } \
	FORCEINLINE static uint32 __PPO__IsGrounded() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, IsGrounded); } \
	FORCEINLINE static uint32 __PPO__CompVelocity() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, CompVelocity); } \
	FORCEINLINE static uint32 __PPO__DelayedInputValue() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, DelayedInputValue); } \
	FORCEINLINE static uint32 __PPO__ReadyToShoot() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, ReadyToShoot); } \
	FORCEINLINE static uint32 __PPO__InternalCoolDownTimer() { return STRUCT_OFFSET(UPlayerPawnMovementComponent, InternalCoolDownTimer); }


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_94_PROLOG
#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UPlayerPawnMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Player_PlayerPawnMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
