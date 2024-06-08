// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/FoodSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodSpawner() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_AFoodSpawner_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFoodSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFoodSpawner::execSpawnFood)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFood();
		P_NATIVE_END;
	}
	void AFoodSpawner::StaticRegisterNativesAFoodSpawner()
	{
		UClass* Class = AFoodSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnFood", &AFoodSpawner::execSpawnFood },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFoodSpawner_SpawnFood_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFoodSpawner_SpawnFood_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFoodSpawner_SpawnFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFoodSpawner, nullptr, "SpawnFood", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFoodSpawner_SpawnFood_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodSpawner_SpawnFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFoodSpawner_SpawnFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFoodSpawner_SpawnFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFoodSpawner_NoRegister()
	{
		return AFoodSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AFoodSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAreaMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnAreaMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAreaMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnAreaMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FoodClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedUpFoodChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedUpFoodChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialFoodChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecialFoodChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFoodSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFoodSpawner_SpawnFood, "SpawnFood" }, // 3191811928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodSpawner.h" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMax_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMax = { "SpawnAreaMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawner, SpawnAreaMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMin_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMin = { "SpawnAreaMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawner, SpawnAreaMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawner_Statics::NewProp_FoodClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "//?????? ?? ????? actor(????? ????????? ??????????? ?????)\n" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
		{ "ToolTip", "?????? ?? ????? actor(????? ????????? ??????????? ?????)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFoodSpawner_Statics::NewProp_FoodClass = { "FoodClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawner, FoodClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_FoodClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_FoodClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpeedUpFoodChance_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpeedUpFoodChance = { "SpeedUpFoodChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawner, SpeedUpFoodChance), METADATA_PARAMS(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpeedUpFoodChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpeedUpFoodChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpecialFoodChance_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "FoodSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpecialFoodChance = { "SpecialFoodChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawner, SpecialFoodChance), METADATA_PARAMS(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpecialFoodChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpecialFoodChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoodSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpawnAreaMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawner_Statics::NewProp_FoodClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpeedUpFoodChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawner_Statics::NewProp_SpecialFoodChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodSpawner_Statics::ClassParams = {
		&AFoodSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFoodSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoodSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoodSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoodSpawner, 1712727381);
	template<> SNAKEGAME_API UClass* StaticClass<AFoodSpawner>()
	{
		return AFoodSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoodSpawner(Z_Construct_UClass_AFoodSpawner, &AFoodSpawner::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AFoodSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
