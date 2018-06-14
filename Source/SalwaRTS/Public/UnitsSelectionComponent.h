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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
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


	UFUNCTION(BlueprintCallable, Category = Grouping)
	void CreateControlGroupFromSelectedUnits(int32 GroupIndex);

	UFUNCTION(BlueprintCallable, Category = Grouping)
	void RemoveSelectedUnitsToControlGroup(int32 GroupIndex);

	UFUNCTION(BlueprintCallable, Category = Grouping)
	void AddSelectedUnitsToControlGroup(int32 GroupIndex);

	UFUNCTION(BlueprintCallable, Category = Grouping)
	void SelectControlGroup(int32 GroupIndex);

	UFUNCTION(BlueprintCallable, Category = Grouping)
	void SelectAllUnits();

	UFUNCTION(BlueprintCallable, Category = Grouping)
	void SetCurrentlySelectedUnits(TArray<AMyCharacter*> NewSelectedUnits);

	UPROPERTY(BlueprintAssignable, Category = Stats)
	FRebuildUnitsGridPanel RebuildUnitsGridPanel;

	UPROPERTY(BlueprintAssignable, Category = Stats)
	FOnControlGroupModification OnControlGroupModification;

	void CreateControlGroupFromSelectedUnits1();
	void CreateControlGroupFromSelectedUnits2();
	void CreateControlGroupFromSelectedUnits3();
	void CreateControlGroupFromSelectedUnits4();
	void CreateControlGroupFromSelectedUnits5();
	void CreateControlGroupFromSelectedUnits6();
	void CreateControlGroupFromSelectedUnits7();
	void CreateControlGroupFromSelectedUnits8();
	void CreateControlGroupFromSelectedUnits9();
	void CreateControlGroupFromSelectedUnits0();


	void RemoveSelectedUnitsToControlGroup1();
	void RemoveSelectedUnitsToControlGroup2();
	void RemoveSelectedUnitsToControlGroup3();
	void RemoveSelectedUnitsToControlGroup4();
	void RemoveSelectedUnitsToControlGroup5();
	void RemoveSelectedUnitsToControlGroup6();
	void RemoveSelectedUnitsToControlGroup7();
	void RemoveSelectedUnitsToControlGroup8();
	void RemoveSelectedUnitsToControlGroup9();
	void RemoveSelectedUnitsToControlGroup0();


	void AddSelectedUnitsToControlGroup1();
	void AddSelectedUnitsToControlGroup2();
	void AddSelectedUnitsToControlGroup3();
	void AddSelectedUnitsToControlGroup4();
	void AddSelectedUnitsToControlGroup5();
	void AddSelectedUnitsToControlGroup6();
	void AddSelectedUnitsToControlGroup7();
	void AddSelectedUnitsToControlGroup8();
	void AddSelectedUnitsToControlGroup9();
	void AddSelectedUnitsToControlGroup0();


	void SelectControlGroup1();
	void SelectControlGroup2();
	void SelectControlGroup3();
	void SelectControlGroup4();
	void SelectControlGroup5();
	void SelectControlGroup6();
	void SelectControlGroup7();
	void SelectControlGroup8();
	void SelectControlGroup9();
	void SelectControlGroup0();

private:
	TArray<AMyCharacter*>  Merge2UnitsGroup(TArray<AMyCharacter*> FirstGroup, TArray<AMyCharacter*> SecondGroup);
	TArray<AMyCharacter*>  Separate2UnitsGroup(TArray<AMyCharacter*> FirstGroup, TArray<AMyCharacter*> SecondGroup);
};
