// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CI_Interactable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UCI_Interactable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RVGAME_API ICI_Interactable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Interact();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Can_Interact();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cannot_Interact();
};
