// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImage;
#ifdef GP3_TEAM03_GP3ReloadWidget_generated_h
#error "GP3ReloadWidget.generated.h already included, missing '#pragma once' in GP3ReloadWidget.h"
#endif
#define GP3_TEAM03_GP3ReloadWidget_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoQuickReload);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoQuickReload);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_EVENT_PARMS \
	struct GP3ReloadWidget_eventGetHitBar_Parms \
	{ \
		UImage* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3ReloadWidget_eventGetHitBar_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3ReloadWidget_eventGetHitZone_Parms \
	{ \
		UImage* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3ReloadWidget_eventGetHitZone_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3ReloadWidget_eventGetReloadBar_Parms \
	{ \
		UImage* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3ReloadWidget_eventGetReloadBar_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3ReloadWidget(); \
	friend struct Z_Construct_UClass_UGP3ReloadWidget_Statics; \
public: \
	DECLARE_CLASS(UGP3ReloadWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3ReloadWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGP3ReloadWidget(); \
	friend struct Z_Construct_UClass_UGP3ReloadWidget_Statics; \
public: \
	DECLARE_CLASS(UGP3ReloadWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3ReloadWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3ReloadWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3ReloadWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3ReloadWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3ReloadWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3ReloadWidget(UGP3ReloadWidget&&); \
	NO_API UGP3ReloadWidget(const UGP3ReloadWidget&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3ReloadWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3ReloadWidget(UGP3ReloadWidget&&); \
	NO_API UGP3ReloadWidget(const UGP3ReloadWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3ReloadWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3ReloadWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3ReloadWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReloadBar() { return STRUCT_OFFSET(UGP3ReloadWidget, ReloadBar); } \
	FORCEINLINE static uint32 __PPO__HitBar() { return STRUCT_OFFSET(UGP3ReloadWidget, HitBar); } \
	FORCEINLINE static uint32 __PPO__HitZone() { return STRUCT_OFFSET(UGP3ReloadWidget, HitZone); } \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(UGP3ReloadWidget, PlayerPawn); } \
	FORCEINLINE static uint32 __PPO__SafetyBufferTime() { return STRUCT_OFFSET(UGP3ReloadWidget, SafetyBufferTime); }


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_14_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3ReloadWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3ReloadWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
