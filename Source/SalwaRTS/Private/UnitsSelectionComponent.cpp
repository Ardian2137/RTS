// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitsSelectionComponent.h"
#include "MyCharacter.h"

// Sets default values for this component's properties
UUnitsSelectionComponent::UUnitsSelectionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUnitsSelectionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UUnitsSelectionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits(int32 GroupIndex)
{
	switch (GroupIndex)
	{
	case 1:
		ControlGroup1 = CurrentlySelectedUnits;
		break;
	case 2:
		ControlGroup2 = CurrentlySelectedUnits;
		break;
	case 3:
		ControlGroup3 = CurrentlySelectedUnits;
		break;
	case 4:
		ControlGroup4 = CurrentlySelectedUnits;
		break;
	case 5:
		ControlGroup5 = CurrentlySelectedUnits;
		break;
	case 6:
		ControlGroup6 = CurrentlySelectedUnits;
		break;
	case 7:
		ControlGroup7 = CurrentlySelectedUnits;
		break;
	case 8:
		ControlGroup8 = CurrentlySelectedUnits;
		break;
	case 9:
		ControlGroup9 = CurrentlySelectedUnits;
		break;
	case 0:
		ControlGroup0 = CurrentlySelectedUnits;
		break;
	}
	OnControlGroupModification.Broadcast(GroupIndex);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup(int32 GroupIndex)
{
	switch (GroupIndex)
	{
	case 1:
		ControlGroup1 = Separate2UnitsGroup(ControlGroup1, CurrentlySelectedUnits);
		break;
	case 2:
		ControlGroup2 = Separate2UnitsGroup(ControlGroup2, CurrentlySelectedUnits);
		break;
	case 3:
		ControlGroup3 = Separate2UnitsGroup(ControlGroup3, CurrentlySelectedUnits);
		break;
	case 4:
		ControlGroup4 = Separate2UnitsGroup(ControlGroup4, CurrentlySelectedUnits);
		break;
	case 5:
		ControlGroup5 = Separate2UnitsGroup(ControlGroup5, CurrentlySelectedUnits);
		break;
	case 6:
		ControlGroup6 = Separate2UnitsGroup(ControlGroup6, CurrentlySelectedUnits);
		break;
	case 7:
		ControlGroup7 = Separate2UnitsGroup(ControlGroup7, CurrentlySelectedUnits);
		break;
	case 8:
		ControlGroup8 = Separate2UnitsGroup(ControlGroup8, CurrentlySelectedUnits);
		break;
	case 9:
		ControlGroup9 = Separate2UnitsGroup(ControlGroup9, CurrentlySelectedUnits);
		break;
	case 0:
		ControlGroup0 = Separate2UnitsGroup(ControlGroup0, CurrentlySelectedUnits);;
		break;
	}
	OnControlGroupModification.Broadcast(GroupIndex);
}


void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup(int32 GroupIndex)
{
	switch (GroupIndex)
	{
	case 1:
		ControlGroup1 = Merge2UnitsGroup(ControlGroup1, CurrentlySelectedUnits);
		break;
	case 2:
		ControlGroup2 = Merge2UnitsGroup(ControlGroup2, CurrentlySelectedUnits);
		break;
	case 3:
		ControlGroup3 = Merge2UnitsGroup(ControlGroup3, CurrentlySelectedUnits);
		break;
	case 4:
		ControlGroup4 = Merge2UnitsGroup(ControlGroup4, CurrentlySelectedUnits);
		break;
	case 5:
		ControlGroup5 = Merge2UnitsGroup(ControlGroup5, CurrentlySelectedUnits);
		break;
	case 6:
		ControlGroup6 = Merge2UnitsGroup(ControlGroup6, CurrentlySelectedUnits);
		break;
	case 7:
		ControlGroup7 = Merge2UnitsGroup(ControlGroup7, CurrentlySelectedUnits);
		break;
	case 8:
		ControlGroup8 = Merge2UnitsGroup(ControlGroup8, CurrentlySelectedUnits);
		break;
	case 9:
		ControlGroup9 = Merge2UnitsGroup(ControlGroup9, CurrentlySelectedUnits);
		break;
	case 0:
		ControlGroup0 = Merge2UnitsGroup(ControlGroup0, CurrentlySelectedUnits);;
		break;
	}
	OnControlGroupModification.Broadcast(GroupIndex);
}


void UUnitsSelectionComponent::SelectControlGroup(int32 GroupIndex)
{
	switch (GroupIndex)
	{
	case 1:
		SetCurrentlySelectedUnits(ControlGroup1);
		break;
	case 2:
		SetCurrentlySelectedUnits(ControlGroup2);
		break;
	case 3:
		SetCurrentlySelectedUnits(ControlGroup3);
		break;
	case 4:
		SetCurrentlySelectedUnits(ControlGroup4);
		break;
	case 5:
		SetCurrentlySelectedUnits(ControlGroup5);
		break;
	case 6:
		SetCurrentlySelectedUnits(ControlGroup6);
		break;
	case 7:
		SetCurrentlySelectedUnits(ControlGroup7);
		break;
	case 8:
		SetCurrentlySelectedUnits(ControlGroup8);
		break;
	case 9:
		SetCurrentlySelectedUnits(ControlGroup9);
		break;
	case 0:
		SetCurrentlySelectedUnits(ControlGroup0);
		break;
	}
}

void UUnitsSelectionComponent::SetCurrentlySelectedUnits(TArray<AMyCharacter*> NewSelectedUnits)
{
	CurrentlySelectedUnits = NewSelectedUnits;
	for (auto Unit : AllControlledUnits)
	{
		Unit->HandleSelection(false);
	}

	for (auto Unit : CurrentlySelectedUnits)
	{
		Unit->HandleSelection(true);
	}
	RebuildUnitsGridPanel.Broadcast();
}

void UUnitsSelectionComponent::SelectAllUnits()
{
	SetCurrentlySelectedUnits(AllControlledUnits);
}

TArray<AMyCharacter*>  UUnitsSelectionComponent::Merge2UnitsGroup(TArray<AMyCharacter*> FirstGroup, TArray<AMyCharacter*> SecondGroup)
{
	for (auto Unit : SecondGroup)
	{
		if (FirstGroup.Find(Unit) == -1)
		{
			FirstGroup.Add(Unit);
		}
	}
	return FirstGroup;
}

TArray<AMyCharacter*>  UUnitsSelectionComponent::Separate2UnitsGroup(TArray<AMyCharacter*> FirstGroup, TArray<AMyCharacter*> SecondGroup)
{
	for (auto Unit : SecondGroup)
	{
		if (FirstGroup.Find(Unit) != -1)
		{
			FirstGroup.Remove(Unit);
		}
	}
	return FirstGroup;
}



void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits1()
{
	CreateControlGroupFromSelectedUnits(1);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits2()
{
	CreateControlGroupFromSelectedUnits(2);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits3()
{
	CreateControlGroupFromSelectedUnits(3);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits4()
{
	CreateControlGroupFromSelectedUnits(4);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits5()
{
	CreateControlGroupFromSelectedUnits(5);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits6()
{
	CreateControlGroupFromSelectedUnits(6);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits7()
{
	CreateControlGroupFromSelectedUnits(7);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits8()
{
	CreateControlGroupFromSelectedUnits(8);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits9()
{
	CreateControlGroupFromSelectedUnits(9);
}

void UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits0()
{
	CreateControlGroupFromSelectedUnits(0);
}


void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup1()
{
	RemoveSelectedUnitsToControlGroup(1);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup2()
{
	RemoveSelectedUnitsToControlGroup(2);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup3()
{
	RemoveSelectedUnitsToControlGroup(3);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup4()
{
	RemoveSelectedUnitsToControlGroup(4);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup5()
{
	RemoveSelectedUnitsToControlGroup(5);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup6()
{
	RemoveSelectedUnitsToControlGroup(6);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup7()
{
	RemoveSelectedUnitsToControlGroup(7);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup8()
{
	RemoveSelectedUnitsToControlGroup(8);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup9()
{
	RemoveSelectedUnitsToControlGroup(9);
}

void UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup0()
{
	RemoveSelectedUnitsToControlGroup(0);
}


void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup1()
{
	AddSelectedUnitsToControlGroup(1);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup2()
{
	AddSelectedUnitsToControlGroup(2);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup3()
{
	AddSelectedUnitsToControlGroup(3);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup4()
{
	AddSelectedUnitsToControlGroup(4);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup5()
{
	AddSelectedUnitsToControlGroup(5);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup6()
{
	AddSelectedUnitsToControlGroup(6);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup7()
{
	AddSelectedUnitsToControlGroup(7);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup8()
{
	AddSelectedUnitsToControlGroup(8);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup9()
{
	AddSelectedUnitsToControlGroup(9);
}

void UUnitsSelectionComponent::AddSelectedUnitsToControlGroup0()
{
	AddSelectedUnitsToControlGroup(0);
}


void UUnitsSelectionComponent::SelectControlGroup1()
{
	SelectControlGroup(1);
}

void UUnitsSelectionComponent::SelectControlGroup2()
{
	SelectControlGroup(2);
}

void UUnitsSelectionComponent::SelectControlGroup3()
{
	SelectControlGroup(3);
}

void UUnitsSelectionComponent::SelectControlGroup4()
{
	SelectControlGroup(4);
}

void UUnitsSelectionComponent::SelectControlGroup5()
{
	SelectControlGroup(5);
}

void UUnitsSelectionComponent::SelectControlGroup6()
{
	SelectControlGroup(6);
}

void UUnitsSelectionComponent::SelectControlGroup7()
{
	SelectControlGroup(7);
}

void UUnitsSelectionComponent::SelectControlGroup8()
{
	SelectControlGroup(8);
}

void UUnitsSelectionComponent::SelectControlGroup9()
{
	SelectControlGroup(9);
}

void UUnitsSelectionComponent::SelectControlGroup0()
{
	SelectControlGroup(0);
}
