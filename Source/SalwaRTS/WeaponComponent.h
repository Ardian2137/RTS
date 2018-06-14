// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class AWeapon;
class AMyCharacter;

UCLASS(BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SALWARTS_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<AWeapon> RightWeaponClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<AWeapon> LeftWeaponClass;
	
	UPROPERTY(BlueprintReadWrite, Category = Weapon)
	AWeapon* RightWeapon;

	UPROPERTY(BlueprintReadWrite, Category = Weapon)
	AWeapon* LeftWeapon;

	UPROPERTY(BlueprintReadOnly, Category = Combat)
	bool bIsAttacking;

	UPROPERTY(BlueprintReadOnly, Category = Combat)
	bool bCanAttack;

	UPROPERTY(BlueprintReadWrite, Category = Combat)
	AMyCharacter* TargetToAttack;

	UFUNCTION(BlueprintPure, Category = Combat)
	bool HaveTargetInCombatRange();

	UFUNCTION(BlueprintCallable, Category = Combat)
	void AttackMade();

};
