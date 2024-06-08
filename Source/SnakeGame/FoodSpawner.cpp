// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodSpawner.h"
#include "Food.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AFoodSpawner::AFoodSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpecialFoodChance = 0.2f;
	SpeedUpFoodChance = 0.05f;
}

// Called when the game starts or when spawned
void AFoodSpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnFood();
	SpawnFood();
	SpawnFood();
	
}

// Called every frame
void AFoodSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFoodSpawner::SpawnFood()
{
	if (FoodClass)
	{
		float SpawnX = FMath::RandRange(SpawnAreaMin.X, SpawnAreaMax.X);
		float SpawnY = FMath::RandRange(SpawnAreaMin.Y, SpawnAreaMax.Y);
		FVector SpawnLocation = FVector(SpawnX, SpawnY, 50.f);

		FTransform SpawnTransform(SpawnLocation);
		AFood* NewFood = GetWorld()->SpawnActor <AFood>(FoodClass, SpawnTransform);
		if (NewFood)
		{
			float RandomValue = UKismetMathLibrary::RandomFloat();
			if(RandomValue < SpeedUpFoodChance)
			{
				NewFood->FoodType = EFoodType::SpeedUp;
				NewFood->SetSpeedUpFoodMaterial();
			}
			else if (RandomValue < SpecialFoodChance)
			{
				NewFood->FoodType = EFoodType::Special;
				NewFood->SetSpecialFoodMaterial();
			}
			else
			{
				NewFood->FoodType = EFoodType::Regular;
				NewFood->SetRegularFoodMaterial();
			}

		}
	}
}

