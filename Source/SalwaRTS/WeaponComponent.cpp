// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponComponent.h"
#include "HealthComponent.h"
#include "MyCharacter.h"
#include "Weapon.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	bCanAttack = true;
	bIsAttacking = false;
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (HaveTargetInCombatRange())
	{
		bIsAttacking = true;
	}
	else
	{
		bIsAttacking = false;
	}
}

bool UWeaponComponent::HaveTargetInCombatRange()
{
	if (TargetToAttack)
	{
		return FVector::Dist(TargetToAttack->GetActorLocation(), GetOwner()->GetActorLocation()) < RightWeapon->Range;
	}
	return false;
}

void UWeaponComponent::AttackMade()
{
	if (TargetToAttack)
	{
		TargetToAttack->HealthComponent->LooseHealth(FMath::RandRange(RightWeapon->MinDamage, RightWeapon->MaxDamage));
	}
}