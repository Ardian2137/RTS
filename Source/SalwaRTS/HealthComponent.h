// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class AMyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthAmountChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, AMyCharacter*, DeadUnit);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SALWARTS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = Stats)
	void SetMaxHealth(float NewMaxHealth);

	UFUNCTION(BlueprintCallable, Category = Stats)
	void LooseHealth(float Amount = 0.0f);

	UFUNCTION(BlueprintCallable, Category = Stats)
	void RestoreHealth(float Amount = 0.0f);

	UFUNCTION(BlueprintPure, Category = Stats)
	float GetMaxHealth();

	UFUNCTION(BlueprintPure, Category = Stats)
	float GetCurrentHealth();

	UFUNCTION(BlueprintPure, Category = Stats)
	float GetHealthPercentage();

	UFUNCTION(BlueprintPure, Category = Stats)
	bool IsAlive();

	UPROPERTY(BlueprintAssignable, Category = Stats)
	FOnHealthAmountChanged OnHealthAmountChanged;

	UPROPERTY(BlueprintAssignable, Category = Death)
	FOnDeath OnDeath;

private:

	float MaxHealth;
	float CurrentHealth;
	
};
