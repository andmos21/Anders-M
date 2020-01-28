// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Test1.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT3_API UTest1 : public UActorComponent
{
	GENERATED_BODY()
private:
	int health, kill;

public:	
	// Sets default values for this component's properties
	UTest1();
	struct Player
	{
		int32 health = 0;
		int32 kill = 0;
		void set_value(int32 h, int32 k) {
			health = h;
			kill = k;
		}
		int32 score() { return health + (kill * 100); }
	};
	
	

	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

