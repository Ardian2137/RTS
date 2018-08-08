// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnitsSelectionComponent.generated.h"

class AMyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRebuildUnitsGridPanel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControlGroupModification, int32, Index);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SALWARTS_API UUnitsSelectionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UUnitsSelectionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Units)
	bool bIsShiftHeld;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Units)
	bool bIsCtrlHeld;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Units)
	bool bIsAltHeld;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Units)
	TArray<AMyCharacter*> AllControlledUnits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> CurrentlySelectedUnits;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> ControlGroup0;

	UPROPERTY(BlueprintAssignable, Category = Stats)
	FRebuildUnitsGridPanel RebuildUnitsGridPanel;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Stats)
	FOnControlGroupModification OnControlGroupModification;

	UFUNCTION(BlueprintCallable, Category = Units)
	void SetCurrentlySelectedUnits(TArray<AMyCharacter*> NewSelectedUnits);

	UFUNCTION(BlueprintCallable, Category = Units)
	void RefteshControlGroup(int32 GroupIndex, AMyCharacter* DeadUnit);

	UFUNCTION(BlueprintCallable, Category = Units)
	void UseControlGroup(int32 GroupIndex);

	UFUNCTION(BlueprintCallable, Category = Units)
	void SelectAllUnits();




	void ShiftPressed();
	void CtrlPressed();
	void AltPressed();

	void ShiftReleased();
	void CtrlReleased();
	void AltReleased();

	void UseControlGroup1();
	void UseControlGroup2();
	void UseControlGroup3();
	void UseControlGroup4();
	void UseControlGroup5();
	void UseControlGroup6();
	void UseControlGroup7();
	void UseControlGroup8();
	void UseControlGroup9();
	void UseControlGroup0();

private:
	TArray<AMyCharacter*>  Separate2UnitsGroup(TArray<AMyCharacter*> FirstGroup, TArray<AMyCharacter*> SecondGroup);
	TArray<AMyCharacter*>  Merge2UnitsGroup(TArray<AMyCharacter*> FirstGroup, TArray<AMyCharacter*> SecondGroup);
	
};
