// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_Food_generated_h
#error "Food.generated.h already included, missing '#pragma once' in Food.h"
#endif
#define SNAKEGAME_Food_generated_h

#define SnakeGame_Source_SnakeGame_Food_h_21_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_Food_h_21_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_Food_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_Food_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AFood) \
	virtual UObject* _getUObject() const override { return const_cast<AFood*>(this); }


#define SnakeGame_Source_SnakeGame_Food_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AFood) \
	virtual UObject* _getUObject() const override { return const_cast<AFood*>(this); }


#define SnakeGame_Source_SnakeGame_Food_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFood(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFood) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public:


#define SnakeGame_Source_SnakeGame_Food_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFood)


#define SnakeGame_Source_SnakeGame_Food_h_21_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_Food_h_18_PROLOG
#define SnakeGame_Source_SnakeGame_Food_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Food_h_21_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Food_h_21_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Food_h_21_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_Food_h_21_INCLASS \
	SnakeGame_Source_SnakeGame_Food_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_Food_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Food_h_21_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Food_h_21_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Food_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Food_h_21_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Food_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class AFood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_Food_h


#define FOREACH_ENUM_EFOODTYPE(op) \
	op(EFoodType::Regular) \
	op(EFoodType::Special) \
	op(EFoodType::SpeedUp) 

enum class EFoodType : uint8;
template<> SNAKEGAME_API UEnum* StaticEnum<EFoodType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
