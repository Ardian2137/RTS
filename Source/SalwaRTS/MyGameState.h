// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

class AMyCharacter;

/**
 * 
 */
UCLASS()
class SALWARTS_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> PlayerUnits;
	
	UPROPERTY(BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> AiUnits;

};
