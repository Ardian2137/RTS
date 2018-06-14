// Fill out your copyright notice in the Description page of Project Settings.

#include "ManaComponent.h"


// Sets default values for this component's properties
UManaComponent::UManaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxMana = 40;
	CurrentMana = MaxMana;

	// ...
}


// Called when the game starts
void UManaComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UManaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UManaComponent::SetMaxMana(float NewMaxHealth)
{
	if (NewMaxHealth >= 1.0f)
	{
		MaxMana = NewMaxHealth;
	}
}

void UManaComponent::ConsumeMana(float Amount)
{
	if (Amount <= 0.0f)
	{
		return;
	}

	if (CurrentMana - Amount <= 0.0f)
	{
		CurrentMana = 0.0f;
	}
	else
	{
		CurrentMana -= Amount;
	}
	OnManaAmountChanged.Broadcast();
}

void UManaComponent::RestoreMana(float Amount)
{
	if (Amount <= 0.0f)
	{
		return;
	}

	if (CurrentMana + Amount >= MaxMana)
	{
		CurrentMana = MaxMana;
	}
	else
	{
		CurrentMana += Amount;
	}
	OnManaAmountChanged.Broadcast();
}

float UManaComponent::GetMaxMana()
{
	return MaxMana;
}

float UManaComponent::GetCurrentMana()
{
	return CurrentMana;
}

float UManaComponent::GetManaPercentage()
{
	return CurrentMana / MaxMana;
}


