// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "ProjectileDoorLogic.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FINALEVALUATIONYU_API UProjectileDoorLogic : public UActorComponent
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		float doorEndZPosition = 305;

		UFUNCTION(BlueprintCallable)
		void RaiseDoor(float force);

	UFUNCTION(BlueprintCallable)
		void SetDoorMesh(UStaticMeshComponent* door);

	UFUNCTION(BlueprintCallable)
		void SetCollisionBox(UBoxComponent* collider);

public:	
	// Sets default values for this component's properties
	UProjectileDoorLogic();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
private:
	
	UBoxComponent* boxCollider;
	UStaticMeshComponent* doorMesh;
};
