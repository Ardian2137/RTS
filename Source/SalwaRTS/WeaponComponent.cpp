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
	FightingStyle = EFightingStyle::Type::BareFists;
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
	if (TargetToAttack && !TargetToAttack->HealthComponent->IsAlive())
	{
		TargetToAttack = nullptr;
	}
	if (TargetToAttack)
	{
		return FVector::Dist(TargetToAttack->GetActorLocation(), GetOwner()->GetActorLocation()) < GetFightingWeaponRange();
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

float UWeaponComponent::GetFightingWeaponRange()
{
	if (RightWeapon && LeftWeapon)
	{
		if (RightWeapon->Range > LeftWeapon->Range)
		{
			return RightWeapon->Range;
		}
		else if (RightWeapon->Range <= LeftWeapon->Range)
		{
			return LeftWeapon->Range;
		}
	}
	else if (RightWeapon)
	{
		return RightWeapon->Range;
	}
	else if (LeftWeapon)
	{
		return LeftWeapon->Range;
	}
	return 0.0f;
}

bool UWeaponComponent::SetRightWeapon(AWeapon* NewRightWeapon)
{
	RightWeapon = NewRightWeapon;
	DetermineFightingStyle();
	return true;
}

bool UWeaponComponent::SetLeftWeapon(AWeapon* NewLeftWeapon)
{
	LeftWeapon = NewLeftWeapon;
	DetermineFightingStyle();
	return true;
}

void UWeaponComponent::DetermineFightingStyle()
{
	if ((RightWeapon && LeftWeapon && ((RightWeapon->IsMelee() && LeftWeapon->WeaponType==EWeaponType::Type::Shield) || (LeftWeapon->IsMelee() && RightWeapon->WeaponType == EWeaponType::Type::Shield))))
	{
		FightingStyle = EFightingStyle::Type::OneHandedAndShield;
	}
	else if ((LeftWeapon && LeftWeapon->IsMelee()) || (RightWeapon && RightWeapon->IsMelee()))
	{
		FightingStyle = EFightingStyle::Type::TwoHanded;
	}
	else
	{
		FightingStyle = EFightingStyle::Type::BareFists;
	}
}