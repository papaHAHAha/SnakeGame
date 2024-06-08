// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreWidget.h"

void UScoreWidget::UpdateScore(int32 NewScore)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), NewScore)));
    }
}
