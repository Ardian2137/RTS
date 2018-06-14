// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class UHealthComponent;
class UWeaponComponent;
class UManaComponent;

UENUM(BlueprintType)
enum class ETeam : uint8
{
	Player,
	AI,
	Unknown
};

UCLASS()
class SALWARTS_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter(const class FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> VisibleUnits;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components)
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components)
	UManaComponent* ManaComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components)
	UWeaponComponent* WeaponComponent;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = Teams)
	ETeam Team;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Config)
	UTexture2D* Icon;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MoveTo();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void HandleSelection(bool bSelected);

};
