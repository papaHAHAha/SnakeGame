// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBase.h"
#include "SnakeElementBase.h"
#include "Interactable.h"

// Sets default values
ASnakeBase::ASnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	MovementSpeed = 5.f;
	LastMoveDirection = EMovementDirection::UP;
	bCanChangeDirection = true;

	Score = 0;
}

// Called when the game starts or when spawned
void ASnakeBase::BeginPlay()
{
	Super::BeginPlay();
	DefaultMovementSpeed = MovementSpeed;
	SetActorTickInterval(1.0f / MovementSpeed);
	AddSnakeElement(5);

	if (ScoreWidgetClass)
	{
		ScoreWidgetInstance = CreateWidget<UScoreWidget>(GetWorld(), ScoreWidgetClass);
		if (ScoreWidgetInstance)
		{
			ScoreWidgetInstance->AddToViewport();
		}
	}
}

// Called every frame
void ASnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();

}

void ASnakeBase::AddSnakeElement(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; ++i)
	{
		FVector NewLocation;
		if (SnakeElements.Num() == 0)
		{
			NewLocation = FVector(SnakeElements.Num() * ElementSize, 0, 0);
		}
		else
		{
			// новый элемент прицепляется к хвосту
			ASnakeElementBase* LastElement = SnakeElements.Last();
			NewLocation = LastElement->GetActorLocation();

			switch (LastMoveDirection)
			{
			case EMovementDirection::UP:
				NewLocation.Y -= ElementSize;
				break;
			case EMovementDirection::DOWN:
				NewLocation.Y += ElementSize;
				break;
			case EMovementDirection::LEFT:
				NewLocation.X += ElementSize;
				break;
			case EMovementDirection::RIGHT:
				NewLocation.X -= ElementSize;
				break;
			default:
				break;
			}
		}			

		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElem->SnakeOwner = this;
		int32 ElemIndex = SnakeElements.Add(NewSnakeElem);
		if (ElemIndex == 0)
		{
			NewSnakeElem->SetFirstElementType();
		}
	} 
	
}

void ASnakeBase::Move()
{
	FVector MovementVector(ForceInitToZero);
	
	switch (LastMoveDirection)
	{
	case EMovementDirection::UP:
		MovementVector.X += ElementSize;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= ElementSize;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y += ElementSize;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y -= ElementSize;
		break;
	}

	//AddActorWorldOffset(MovementVector);
	SnakeElements[0]->ToggleCollision();

	for (int i = SnakeElements.Num() - 1; i > 0; i--)
	{
		auto CurrentElement = SnakeElements[i];
		auto PrevElement = SnakeElements[i - 1];
		FVector PrevLocation = PrevElement->GetActorLocation();
		CurrentElement->SetActorLocation(PrevLocation);
	}

	SnakeElements[0]->AddActorWorldOffset(MovementVector);
	SnakeElements[0]->ToggleCollision();

	bCanChangeDirection = true;
}

void ASnakeBase::SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other)
{
	int32 ElemIndex;
	SnakeElements.Find(OverlappedElement, ElemIndex);
	bool bIsFirst = ElemIndex == 0;
	IInteractable* InteractableInterface = Cast<IInteractable>(Other);
	if (InteractableInterface)
	{
		InteractableInterface->Interact(this, bIsFirst);
	}
}

void ASnakeBase::IncreaseScore(int32 Amount)
{
	Score += Amount;

	if (ScoreWidgetInstance)
	{
		ScoreWidgetInstance->UpdateScore(Score);
	}
}

void ASnakeBase::ResetSpeed()
{
	MovementSpeed = DefaultMovementSpeed;
	SetActorTickInterval(1.0f / MovementSpeed);
	GetWorldTimerManager().ClearTimer(SpeedUpTimerHandle);
}

