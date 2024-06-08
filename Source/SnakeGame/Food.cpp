// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "SnakeBase.h"
#include "FoodSpawner.h"
#include "EngineUtils.h"

// Sets default values
AFood::AFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AFood::SetSpecialFoodMaterial()
{
	UStaticMeshComponent* FoodMesh = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (FoodMesh)
	{
		FoodMesh->SetMaterial(0, SpecialMaterial);
	}
}

void AFood::SetRegularFoodMaterial()
{
	UStaticMeshComponent* FoodMesh = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (FoodMesh)
	{
		FoodMesh->SetMaterial(0, RegularMaterial);
	}
}

void AFood::SetSpeedUpFoodMaterial()
{
	UStaticMeshComponent* FoodMesh = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (FoodMesh)
	{
		FoodMesh->SetMaterial(0, SpeedUpMaterial);
	}
}

// Called when the game starts or when spawned
void AFood::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFood::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			switch (FoodType)
			{
			case EFoodType::Regular:
				Snake->AddSnakeElement();
				Snake->IncreaseScore(5);
				break;
			case EFoodType::Special:
				Snake->AddSnakeElement(2);
				Snake->IncreaseScore(10);
				break;
			case EFoodType::SpeedUp:
				Snake->AddSnakeElement();
				Snake->MovementSpeed *= 2.0f;
				Snake->SetActorTickInterval(1.0f / Snake->MovementSpeed);
				GetWorld()->GetTimerManager().SetTimer(Snake->SpeedUpTimerHandle, Snake, &ASnakeBase::ResetSpeed, 10.f, false);
				Snake->IncreaseScore(Snake->Score * 0.2);
				break;
			default:
				break;
			}

			for (TActorIterator<AFoodSpawner> It(GetWorld()); It; ++It)
			{
				AFoodSpawner* FoodSpawner = *It;
				if (IsValid(FoodSpawner))
				{
					FoodSpawner->SpawnFood();
					break;
				}
			}
			Destroy();
		}
	}
}

