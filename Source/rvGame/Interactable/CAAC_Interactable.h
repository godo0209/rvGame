// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CI_Interactable.h"
#include "CAAC_Interactable.generated.h"

UCLASS(Abstract, Blueprintable)
class RVGAME_API ACAAC_Interactable : public AActor, public ICI_Interactable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACAAC_Interactable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	enum Interactable_State
	{
		Base = 0, Can_Be_Interacted = 1, Interacted = 2
	};

	Interactable_State state = Interactable_State::Base;

};
