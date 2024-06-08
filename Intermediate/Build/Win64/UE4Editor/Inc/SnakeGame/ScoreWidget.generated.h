// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_ScoreWidget_generated_h
#error "ScoreWidget.generated.h already included, missing '#pragma once' in ScoreWidget.h"
#endif
#define SNAKEGAME_ScoreWidget_generated_h

#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateScore);


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateScore);


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreWidget(); \
	friend struct Z_Construct_UClass_UScoreWidget_Statics; \
public: \
	DECLARE_CLASS(UScoreWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UScoreWidget)


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUScoreWidget(); \
	friend struct Z_Construct_UClass_UScoreWidget_Statics; \
public: \
	DECLARE_CLASS(UScoreWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UScoreWidget)


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreWidget(UScoreWidget&&); \
	NO_API UScoreWidget(const UScoreWidget&); \
public:


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreWidget(UScoreWidget&&); \
	NO_API UScoreWidget(const UScoreWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreWidget)


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_ScoreWidget_h_13_PROLOG
#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_INCLASS \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_ScoreWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_ScoreWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UScoreWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_ScoreWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
