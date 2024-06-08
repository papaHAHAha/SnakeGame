// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Food.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood() {}
// Cross Module References
	SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_EFoodType();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	static UEnum* EFoodType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_EFoodType, Z_Construct_UPackage__Script_SnakeGame(), TEXT("EFoodType"));
		}
		return Singleton;
	}
	template<> SNAKEGAME_API UEnum* StaticEnum<EFoodType>()
	{
		return EFoodType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoodType(EFoodType_StaticEnum, TEXT("/Script/SnakeGame"), TEXT("EFoodType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SnakeGame_EFoodType_Hash() { return 3273343126U; }
	UEnum* Z_Construct_UEnum_SnakeGame_EFoodType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SnakeGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoodType"), 0, Get_Z_Construct_UEnum_SnakeGame_EFoodType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoodType::Regular", (int64)EFoodType::Regular },
				{ "EFoodType::Special", (int64)EFoodType::Special },
				{ "EFoodType::SpeedUp", (int64)EFoodType::SpeedUp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Food.h" },
				{ "Regular.DisplayName", "Regular" },
				{ "Regular.Name", "EFoodType::Regular" },
				{ "Special.DisplayName", "Special" },
				{ "Special.Name", "EFoodType::Special" },
				{ "SpeedUp.DisplayName", "SpeedUp" },
				{ "SpeedUp.Name", "EFoodType::SpeedUp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
				nullptr,
				"EFoodType",
				"EFoodType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFood::StaticRegisterNativesAFood()
	{
	}
	UClass* Z_Construct_UClass_AFood_NoRegister()
	{
		return AFood::StaticClass();
	}
	struct Z_Construct_UClass_AFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoodType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoodType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegularMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedUpMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpeedUpMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Food.h" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFood_Statics::NewProp_FoodType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::NewProp_FoodType_MetaData[] = {
		{ "Category", "Food" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFood_Statics::NewProp_FoodType = { "FoodType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood, FoodType), Z_Construct_UEnum_SnakeGame_EFoodType, METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::NewProp_FoodType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::NewProp_FoodType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::NewProp_SpecialMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_Statics::NewProp_SpecialMaterial = { "SpecialMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood, SpecialMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::NewProp_SpecialMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::NewProp_SpecialMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::NewProp_RegularMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_Statics::NewProp_RegularMaterial = { "RegularMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood, RegularMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::NewProp_RegularMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::NewProp_RegularMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::NewProp_SpeedUpMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_Statics::NewProp_SpeedUpMaterial = { "SpeedUpMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood, SpeedUpMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::NewProp_SpeedUpMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::NewProp_SpeedUpMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Statics::NewProp_FoodType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Statics::NewProp_FoodType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Statics::NewProp_SpecialMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Statics::NewProp_RegularMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Statics::NewProp_SpeedUpMaterial,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFood_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AFood, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_Statics::ClassParams = {
		&AFood::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFood_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFood, 2432179987);
	template<> SNAKEGAME_API UClass* StaticClass<AFood>()
	{
		return AFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFood(Z_Construct_UClass_AFood, &AFood::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
