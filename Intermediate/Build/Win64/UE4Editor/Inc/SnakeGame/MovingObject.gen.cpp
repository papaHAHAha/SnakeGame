// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/MovingObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingObject() {}
// Cross Module References
	SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_EMovementDistance();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	SNAKEGAME_API UClass* Z_Construct_UClass_AMovingObject_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AMovingObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SNAKEGAME_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	static UEnum* EMovementDistance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_EMovementDistance, Z_Construct_UPackage__Script_SnakeGame(), TEXT("EMovementDistance"));
		}
		return Singleton;
	}
	template<> SNAKEGAME_API UEnum* StaticEnum<EMovementDistance>()
	{
		return EMovementDistance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementDistance(EMovementDistance_StaticEnum, TEXT("/Script/SnakeGame"), TEXT("EMovementDistance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SnakeGame_EMovementDistance_Hash() { return 3924845048U; }
	UEnum* Z_Construct_UEnum_SnakeGame_EMovementDistance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SnakeGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementDistance"), 0, Get_Z_Construct_UEnum_SnakeGame_EMovementDistance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementDistance::MovementDistanceX", (int64)EMovementDistance::MovementDistanceX },
				{ "EMovementDistance::MovementDistanceY", (int64)EMovementDistance::MovementDistanceY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MovingObject.h" },
				{ "MovementDistanceX.DisplayName", "MovementDistanceX" },
				{ "MovementDistanceX.Name", "EMovementDistance::MovementDistanceX" },
				{ "MovementDistanceY.DisplayName", "MovementDistanceY" },
				{ "MovementDistanceY.Name", "EMovementDistance::MovementDistanceY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
				nullptr,
				"EMovementDistance",
				"EMovementDistance",
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
	void AMovingObject::StaticRegisterNativesAMovingObject()
	{
	}
	UClass* Z_Construct_UClass_AMovingObject_NoRegister()
	{
		return AMovingObject::StaticClass();
	}
	struct Z_Construct_UClass_AMovingObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementDistance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDistanceX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementDistanceX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDistanceY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementDistanceY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingObject.h" },
		{ "ModuleRelativePath", "MovingObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance = { "MovementDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingObject, MovementDistance), Z_Construct_UEnum_SnakeGame_EMovementDistance, METADATA_PARAMS(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingObject, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceX_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceX = { "MovementDistanceX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingObject, MovementDistanceX), METADATA_PARAMS(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceY_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceY = { "MovementDistanceY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingObject, MovementDistanceY), METADATA_PARAMS(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MovementDistanceY,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMovingObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AMovingObject, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingObject_Statics::ClassParams = {
		&AMovingObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingObject, 2459058675);
	template<> SNAKEGAME_API UClass* StaticClass<AMovingObject>()
	{
		return AMovingObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingObject(Z_Construct_UClass_AMovingObject, &AMovingObject::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AMovingObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
