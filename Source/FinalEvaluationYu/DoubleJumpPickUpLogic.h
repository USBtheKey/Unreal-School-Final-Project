// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "FinalEvaluationYuCharacter.h"
#include "Components/ActorComponent.h"
#include "DoubleJumpPickUpLogic.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FINALEVALUATIONYU_API UDoubleJumpPickUpLogic : public UActorComponent
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Double Jump Enabler")
		void EnableOverlap(AFinalEvaluationYuCharacter* object);

public:	
	// Sets default values for this component's properties
	UDoubleJumpPickUpLogic();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
