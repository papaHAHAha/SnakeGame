// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_FoodSpawner_generated_h
#error "FoodSpawner.generated.h already included, missing '#pragma once' in FoodSpawner.h"
#endif
#define SNAKEGAME_FoodSpawner_generated_h

#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnFood);


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnFood);


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFoodSpawner(); \
	friend struct Z_Construct_UClass_AFoodSpawner_Statics; \
public: \
	DECLARE_CLASS(AFoodSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AFoodSpawner)


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFoodSpawner(); \
	friend struct Z_Construct_UClass_AFoodSpawner_Statics; \
public: \
	DECLARE_CLASS(AFoodSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AFoodSpawner)


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFoodSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFoodSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodSpawner(AFoodSpawner&&); \
	NO_API AFoodSpawner(const AFoodSpawner&); \
public:


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodSpawner(AFoodSpawner&&); \
	NO_API AFoodSpawner(const AFoodSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFoodSpawner)


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_FoodSpawner_h_9_PROLOG
#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_INCLASS \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_FoodSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_FoodSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class AFoodSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_FoodSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
