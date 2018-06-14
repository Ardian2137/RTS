// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthComponent.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxHealth = 100;
	CurrentHealth = MaxHealth;
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::SetMaxHealth(float NewMaxHealth)
{
	if (NewMaxHealth >= 1.0f)
	{
		MaxHealth = NewMaxHealth;
	}
}

void UHealthComponent::LooseHealth(float Amount)
{
	if (Amount <= 0.0f)
	{
		return;
	}

	if (CurrentHealth - Amount <= 0.0f)
	{
		CurrentHealth = 0.0f;
	}
	else
	{
		CurrentHealth -= Amount;
	}
	OnHealthAmountChanged.Broadcast();
}

void UHealthComponent::RestoreHealth(float Amount)
{
	if (Amount <= 0.0f)
	{
		return;
	}

	if (CurrentHealth + Amount >= MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
	else
	{
		CurrentHealth += Amount;
	}
	OnHealthAmountChanged.Broadcast();
}

float UHealthComponent::GetMaxHealth()
{
	return MaxHealth;
}

float UHealthComponent::GetCurrentHealth()
{
	return CurrentHealth;
}

float UHealthComponent::GetHealthPercentage()
{
	return CurrentHealth / MaxHealth;
}

bool UHealthComponent::IsAlive()
{
	return CurrentHealth;
}