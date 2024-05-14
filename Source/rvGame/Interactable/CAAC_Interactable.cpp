// Fill out your copyright notice in the Description page of Project Settings.


#include "CAAC_Interactable.h"

// Sets default values
ACAAC_Interactable::ACAAC_Interactable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACAAC_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACAAC_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

