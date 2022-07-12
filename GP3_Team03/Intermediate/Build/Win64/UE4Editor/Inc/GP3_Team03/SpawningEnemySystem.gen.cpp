// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/SpawningEnemySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawningEnemySystem() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASpawningEnemySystem_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASpawningEnemySystem();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawningEnemySystem::execSpawnMoreEnemiesAfterKills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMoreEnemiesAfterKills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawningEnemySystem::execSpawnEnemiesOnTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemiesOnTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawningEnemySystem::execSpawnEnemies)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmountEnemies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemies(Z_Param_AmountEnemies);
		P_NATIVE_END;
	}
	void ASpawningEnemySystem::StaticRegisterNativesASpawningEnemySystem()
	{
		UClass* Class = ASpawningEnemySystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemies", &ASpawningEnemySystem::execSpawnEnemies },
			{ "SpawnEnemiesOnTimer", &ASpawningEnemySystem::execSpawnEnemiesOnTimer },
			{ "SpawnMoreEnemiesAfterKills", &ASpawningEnemySystem::execSpawnMoreEnemiesAfterKills },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics
	{
		struct SpawningEnemySystem_eventSpawnEnemies_Parms
		{
			float AmountEnemies;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountEnemies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::NewProp_AmountEnemies = { "AmountEnemies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawningEnemySystem_eventSpawnEnemies_Parms, AmountEnemies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::NewProp_AmountEnemies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawningEnemySystem, nullptr, "SpawnEnemies", nullptr, nullptr, sizeof(SpawningEnemySystem_eventSpawnEnemies_Parms), Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawningEnemySystem, nullptr, "SpawnEnemiesOnTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawningEnemySystem, nullptr, "SpawnMoreEnemiesAfterKills", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawningEnemySystem_NoRegister()
	{
		return ASpawningEnemySystem::StaticClass();
	}
	struct Z_Construct_UClass_ASpawningEnemySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerIsOn_MetaData[];
#endif
		static void NewProp_TimerIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TimerIsOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawningEnemySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawningEnemySystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies, "SpawnEnemies" }, // 905458730
		{ &Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemiesOnTimer, "SpawnEnemiesOnTimer" }, // 327667501
		{ &Z_Construct_UFunction_ASpawningEnemySystem_SpawnMoreEnemiesAfterKills, "SpawnMoreEnemiesAfterKills" }, // 2596346504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AI/SpawningEnemySystem.h" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawningEnemySystem, EnemyToSpawn), Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_EnemyToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_EnemyToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_Amount_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere, Category=Enemy)\n//AGP3_AI_BaseCharacter* Enemy;\n" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category=Enemy)\nAGP3_AI_BaseCharacter* Enemy;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawningEnemySystem, Amount), METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawningEnemySystem, SpawnInterval), METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn_MetaData[] = {
		{ "Category", "SpawningEnemySystem" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	void Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn_SetBit(void* Obj)
	{
		((ASpawningEnemySystem*)Obj)->TimerIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn = { "TimerIsOn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawningEnemySystem), &Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem = { "NavSystem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawningEnemySystem, NavSystem), Z_Construct_UClass_UNavigationSystemV1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawningEnemySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_EnemyToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_TimerIsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawningEnemySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawningEnemySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawningEnemySystem_Statics::ClassParams = {
		&ASpawningEnemySystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawningEnemySystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawningEnemySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawningEnemySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawningEnemySystem, 1248823199);
	template<> GP3_TEAM03_API UClass* StaticClass<ASpawningEnemySystem>()
	{
		return ASpawningEnemySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawningEnemySystem(Z_Construct_UClass_ASpawningEnemySystem, &ASpawningEnemySystem::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("ASpawningEnemySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawningEnemySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
