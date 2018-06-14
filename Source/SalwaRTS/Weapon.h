// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

class UAnimInstance;

UENUM()
enum EWeaponType
{
	Sword,
	Axe,
	Shield,
	Mace,
	Bow,
	Crossbow,
};

UCLASS()
class SALWARTS_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	float Range;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	bool bIsTwoHanded;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	int32 MinDamage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	int32 MaxDamage;

};
