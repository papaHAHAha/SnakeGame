// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "ScoreWidget.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API UScoreWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* ScoreText;

    UFUNCTION(BlueprintCallable, Category = "Score")
    void UpdateScore(int32 NewScore);
};
