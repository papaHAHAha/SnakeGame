// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingObject.h"
#include "SnakeBase.h"

// Sets default values
AMovingObject::AMovingObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingObject::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	switch (MovementDistance)
	{
	case EMovementDistance::MovementDistanceX:
		EndLocation = StartLocation + FVector(MovementDistanceX, 0.f, 0.f);
		MoveDistance = MovementDistanceX;
		break;
	case EMovementDistance::MovementDistanceY:
		EndLocation = StartLocation + FVector(0.f, MovementDistanceY, 0.f);
		MoveDistance = MovementDistanceY;
		break;
	default:
		break;
	}

	CurrentDirection = (EndLocation - StartLocation).GetSafeNormal();
}

// Called every frame
void AMovingObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + CurrentDirection * MovementSpeed * DeltaTime;
	if (FVector::Dist(NewLocation, StartLocation) > MoveDistance)
	{
		CurrentDirection *= -1;
		NewLocation = GetActorLocation() + CurrentDirection * MovementSpeed * DeltaTime;
	}
	SetActorLocation(NewLocation);
}

void AMovingObject::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->Destroy();
		}
	}
}

