// Fill out your copyright notice in the Description page of Project Settings.


#include "Test1.h"

// Sets default values for this component's properties
UTest1::UTest1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTest1::BeginPlay()
{
	Super::BeginPlay();
	Player Player1, Player2;

	Player1.set_value(10, 5);
	Player2.set_value(10, 3);

	try {
		if (Player1.score() > Player2.score()) {
			throw 100;
		}
		else if (Player1.score() < Player2.score()) {
			throw 101;
		}
		else if (Player1.score() == Player2.score()) {
			throw 102;
		}
		else {
			throw 103;
		}
	}
	catch(int32 e){
		if (e == 100) {
			UE_LOG(LogTemp, Warning, TEXT ("Player 1 wins! Score: %d"), Player1.score());
		}
		if (e == 101) {
			UE_LOG(LogTemp, Warning, TEXT("Player 2 wins! Score: %d"), Player2.score());
		}
		if (e == 102) {
			UE_LOG(LogTemp, Warning, TEXT("Both is equal!"));
		}
		if (e == 103) {
			UE_LOG(LogTemp, Warning, TEXT("Error, unable to find playeres"), Player1.score());
		}
	}

	// ...
	
}


// Called every frame
void UTest1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

