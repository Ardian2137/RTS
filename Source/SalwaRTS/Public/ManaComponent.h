// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManaComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManaAmountChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SALWARTS_API UManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UManaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = Stats)
	void SetMaxMana(float NewMaxHealth);

	UFUNCTION(BlueprintCallable, Category = Stats)
	void ConsumeMana(float Amount = 0.0f);

	UFUNCTION(BlueprintCallable, Category = Stats)
	void RestoreMana(float Amount = 0.0f);

	UFUNCTION(BlueprintPure, Category = Stats)
	float GetMaxMana();

	UFUNCTION(BlueprintPure, Category = Stats)
	float GetCurrentMana();

	UFUNCTION(BlueprintPure, Category = Stats)
	float GetManaPercentage();

	UPROPERTY(BlueprintAssignable, Category = Stats)
	FOnManaAmountChanged OnManaAmountChanged;

private:

	float MaxMana;
	float CurrentMana;
	
};
