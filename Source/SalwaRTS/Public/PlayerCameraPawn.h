// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCameraPawn.generated.h"

class AMyPlayerController;
class UUnitsSelectionComponent;
class UInputActionsComponent;

UCLASS()
class SALWARTS_API APlayerCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly, Category = Components)
	UUnitsSelectionComponent* UnitsSelectionComponent;

	UPROPERTY(BlueprintReadOnly, Category = Components)
	UInputActionsComponent* InputActionsComponent;

private:

};
