// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "Food.generated.h"

UENUM(BlueprintType)
enum class EFoodType : uint8
{
	Regular UMETA(DisplayName = "Regular"),
	Special UMETA(DisplayName = "Special"),
	SpeedUp UMETA(DisplayName = "SpeedUp")
};

UCLASS()
class SNAKEGAME_API AFood : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFood();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Food")
	EFoodType FoodType;

	UPROPERTY(BlueprintReadWrite, Category = "Materials")
	class UMaterial* SpecialMaterial;

	UPROPERTY(BlueprintReadWrite, Category = "Materials")
	class UMaterial* RegularMaterial;

	UPROPERTY(BlueprintReadWrite, Category = "Materials")
	class UMaterial* SpeedUpMaterial;

	void SetSpecialFoodMaterial();

	void SetRegularFoodMaterial();

	void SetSpeedUpFoodMaterial();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact(AActor* Interactor, bool bIsHead) override;
};
