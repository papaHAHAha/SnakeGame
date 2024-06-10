// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_MovingObject_generated_h
#error "MovingObject.generated.h already included, missing '#pragma once' in MovingObject.h"
#endif
#define SNAKEGAME_MovingObject_generated_h

#define SnakeGame_Source_SnakeGame_MovingObject_h_20_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_MovingObject_h_20_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_MovingObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_MovingObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingObject(); \
	friend struct Z_Construct_UClass_AMovingObject_Statics; \
public: \
	DECLARE_CLASS(AMovingObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingObject) \
	virtual UObject* _getUObject() const override { return const_cast<AMovingObject*>(this); }


#define SnakeGame_Source_SnakeGame_MovingObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMovingObject(); \
	friend struct Z_Construct_UClass_AMovingObject_Statics; \
public: \
	DECLARE_CLASS(AMovingObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingObject) \
	virtual UObject* _getUObject() const override { return const_cast<AMovingObject*>(this); }


#define SnakeGame_Source_SnakeGame_MovingObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingObject(AMovingObject&&); \
	NO_API AMovingObject(const AMovingObject&); \
public:


#define SnakeGame_Source_SnakeGame_MovingObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingObject(AMovingObject&&); \
	NO_API AMovingObject(const AMovingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingObject)


#define SnakeGame_Source_SnakeGame_MovingObject_h_20_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_MovingObject_h_17_PROLOG
#define SnakeGame_Source_SnakeGame_MovingObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_INCLASS \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_MovingObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_MovingObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class AMovingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_MovingObject_h


#define FOREACH_ENUM_EMOVEMENTDISTANCE(op) \
	op(EMovementDistance::MovementDistanceX) \
	op(EMovementDistance::MovementDistanceY) 

enum class EMovementDistance : uint8;
template<> SNAKEGAME_API UEnum* StaticEnum<EMovementDistance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
