// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileDoorLogic.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UProjectileDoorLogic::UProjectileDoorLogic()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UProjectileDoorLogic::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UProjectileDoorLogic::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UProjectileDoorLogic::RaiseDoor(float force) {
	
	if (doorMesh->RelativeLocation.Z < doorEndZPosition) {
		doorMesh->SetRelativeLocation(doorMesh->RelativeLocation + FVector::UpVector * doorEndZPosition * force);
		GEngine->AddOnScreenDebugMessage(2, 1, FColor::Red, FString::FromInt(doorMesh->RelativeLocation.Z));
	}
	else if (doorMesh->RelativeLocation.Z >= doorEndZPosition)
	{
		boxCollider->SetVisibility(false);
	}
}

void UProjectileDoorLogic::SetDoorMesh(UStaticMeshComponent* door) {
	doorMesh = door;
	
	GEngine->AddOnScreenDebugMessage(2, 1, FColor::Red, doorMesh == NULL ? "True" : "False");
}

void UProjectileDoorLogic::SetCollisionBox(UBoxComponent* collider) {
	boxCollider = collider;
}