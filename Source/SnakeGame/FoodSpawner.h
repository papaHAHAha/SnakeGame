// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodSpawner.generated.h"

UCLASS()
class SNAKEGAME_API AFoodSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFoodSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	FVector2D SpawnAreaMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	FVector2D SpawnAreaMin;

	//ссылка на класс actor(можно поставить практически любой)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<AActor> FoodClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpeedUpFoodChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpecialFoodChance;
	
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnFood();
};
