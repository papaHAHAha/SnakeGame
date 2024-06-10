// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "MovingObject.generated.h"

UENUM(BlueprintType)
enum class EMovementDistance : uint8
{
	MovementDistanceX UMETA(DisplayName = "MovementDistanceX"),
	MovementDistanceY UMETA(DisplayName = "MovementDistanceY")
};

UCLASS()
class SNAKEGAME_API AMovingObject : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingObject();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	EMovementDistance MovementDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementDistanceX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementDistanceY;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact(AActor* Interactor, bool bIsHead) override;

private:
	FVector StartLocation;
	FVector EndLocation;
	FVector CurrentDirection;
	float MoveDistance;
};
