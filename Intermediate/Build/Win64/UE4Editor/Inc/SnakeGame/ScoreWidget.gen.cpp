// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/ScoreWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreWidget() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_UScoreWidget_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_UScoreWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScoreWidget::execUpdateScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScore(Z_Param_NewScore);
		P_NATIVE_END;
	}
	void UScoreWidget::StaticRegisterNativesUScoreWidget()
	{
		UClass* Class = UScoreWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateScore", &UScoreWidget::execUpdateScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics
	{
		struct ScoreWidget_eventUpdateScore_Parms
		{
			int32 NewScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreWidget_eventUpdateScore_Parms, NewScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreWidget, nullptr, "UpdateScore", nullptr, nullptr, sizeof(ScoreWidget_eventUpdateScore_Parms), Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreWidget_UpdateScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreWidget_UpdateScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScoreWidget_NoRegister()
	{
		return UScoreWidget::StaticClass();
	}
	struct Z_Construct_UClass_UScoreWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScoreWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreWidget_UpdateScore, "UpdateScore" }, // 92617974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScoreWidget.h" },
		{ "ModuleRelativePath", "ScoreWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreWidget, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScoreWidget_Statics::ClassParams = {
		&UScoreWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScoreWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScoreWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScoreWidget, 792266796);
	template<> SNAKEGAME_API UClass* StaticClass<UScoreWidget>()
	{
		return UScoreWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScoreWidget(Z_Construct_UClass_UScoreWidget, &UScoreWidget::StaticClass, TEXT("/Script/SnakeGame"), TEXT("UScoreWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
