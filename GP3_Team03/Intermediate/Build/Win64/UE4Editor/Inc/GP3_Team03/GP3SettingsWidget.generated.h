// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UComboBoxString;
class UCheckBox;
#ifdef GP3_TEAM03_GP3SettingsWidget_generated_h
#error "GP3SettingsWidget.generated.h already included, missing '#pragma once' in GP3SettingsWidget.h"
#endif
#define GP3_TEAM03_GP3SettingsWidget_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleVSyncToggle); \
	DECLARE_FUNCTION(execHandleQualityChange); \
	DECLARE_FUNCTION(execHandleResolutionChange); \
	DECLARE_FUNCTION(execHandleFullscreenToggle); \
	DECLARE_FUNCTION(execHandleFullscreenModeChange);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleVSyncToggle); \
	DECLARE_FUNCTION(execHandleQualityChange); \
	DECLARE_FUNCTION(execHandleResolutionChange); \
	DECLARE_FUNCTION(execHandleFullscreenToggle); \
	DECLARE_FUNCTION(execHandleFullscreenModeChange);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_EVENT_PARMS \
	struct GP3SettingsWidget_eventGetFullscreenModeDropdown_Parms \
	{ \
		UComboBoxString* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3SettingsWidget_eventGetFullscreenModeDropdown_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3SettingsWidget_eventGetFullscreenToggle_Parms \
	{ \
		UCheckBox* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3SettingsWidget_eventGetFullscreenToggle_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3SettingsWidget_eventGetQualityDropdown_Parms \
	{ \
		UComboBoxString* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3SettingsWidget_eventGetQualityDropdown_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3SettingsWidget_eventGetResolutionDropdown_Parms \
	{ \
		UComboBoxString* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3SettingsWidget_eventGetResolutionDropdown_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3SettingsWidget_eventGetVSyncToggle_Parms \
	{ \
		UCheckBox* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3SettingsWidget_eventGetVSyncToggle_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3SettingsWidget(); \
	friend struct Z_Construct_UClass_UGP3SettingsWidget_Statics; \
public: \
	DECLARE_CLASS(UGP3SettingsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3SettingsWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGP3SettingsWidget(); \
	friend struct Z_Construct_UClass_UGP3SettingsWidget_Statics; \
public: \
	DECLARE_CLASS(UGP3SettingsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3SettingsWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3SettingsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3SettingsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3SettingsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3SettingsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3SettingsWidget(UGP3SettingsWidget&&); \
	NO_API UGP3SettingsWidget(const UGP3SettingsWidget&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3SettingsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3SettingsWidget(UGP3SettingsWidget&&); \
	NO_API UGP3SettingsWidget(const UGP3SettingsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3SettingsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3SettingsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3SettingsWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_12_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3SettingsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3SettingsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
