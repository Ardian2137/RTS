// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitsSelectionComponent.h"
#include "HealthComponent.h"
#include "MyCharacter.h"

// Sets default values for this component's properties
UUnitsSelectionComponent::UUnitsSelectionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bIsShiftHeld = false;
	bIsCtrlHeld = false;
	bIsAltHeld = false;
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

void UUnitsSelectionComponent::UseControlGroup(int32 GroupIndex)
{
	switch (GroupIndex)
	{
	case 1:
		if (bIsCtrlHeld)
		{
			ControlGroup1 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if(bIsShiftHeld)
		{
			ControlGroup1 = Merge2UnitsGroup(ControlGroup1, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup1 = Separate2UnitsGroup(ControlGroup1, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup1);
		}
		break;
	case 2:
		if (bIsCtrlHeld)
		{
			ControlGroup2 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup2 = Merge2UnitsGroup(ControlGroup2, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup2 = Separate2UnitsGroup(ControlGroup2, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup2);
		}
		break;
	case 3:
		if (bIsCtrlHeld)
		{
			ControlGroup3 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup3 = Merge2UnitsGroup(ControlGroup3, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup3 = Separate2UnitsGroup(ControlGroup3, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup3);
		}
		break;
	case 4:
		if (bIsCtrlHeld)
		{
			ControlGroup4 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if(bIsShiftHeld)
		{
			ControlGroup4 = Merge2UnitsGroup(ControlGroup4, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup4 = Separate2UnitsGroup(ControlGroup4, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup4);
		}
		break;
	case 5:
		if (bIsCtrlHeld)
		{
			ControlGroup5 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup5 = Merge2UnitsGroup(ControlGroup5, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup5 = Separate2UnitsGroup(ControlGroup5, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup5);
		}
		break;
	case 6:
		if (bIsCtrlHeld)
		{
			ControlGroup6 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup6 = Merge2UnitsGroup(ControlGroup6, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup6 = Separate2UnitsGroup(ControlGroup6, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup6);
		}
		break;
	case 7:
		if (bIsCtrlHeld)
		{
			ControlGroup7 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup7 = Merge2UnitsGroup(ControlGroup7, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup7 = Separate2UnitsGroup(ControlGroup7, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup7);
		}
		break;
	case 8:
		if (bIsCtrlHeld)
		{
			ControlGroup8 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup8 = Merge2UnitsGroup(ControlGroup8, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup8 = Separate2UnitsGroup(ControlGroup8, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup8);
		}
		break;
	case 9:
		if (bIsCtrlHeld)
		{
			ControlGroup9 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup9 = Merge2UnitsGroup(ControlGroup9, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup9 = Separate2UnitsGroup(ControlGroup9, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup9);
		}
		break;
	case 0:
		if (bIsCtrlHeld)
		{
			ControlGroup0 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHeld)
		{
			ControlGroup0 = Merge2UnitsGroup(ControlGroup0, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHeld)
		{
			ControlGroup0 = Separate2UnitsGroup(ControlGroup0, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else
		{
			SetCurrentlySelectedUnits(ControlGroup0);
		}
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

void UUnitsSelectionComponent::ShiftPressed()
{
	bIsShiftHeld = true;
}

void UUnitsSelectionComponent::ShiftReleased()
{
	bIsShiftHeld = false;
}

void UUnitsSelectionComponent::CtrlPressed()
{
	bIsCtrlHeld = true;
}

void UUnitsSelectionComponent::CtrlReleased()
{
	bIsCtrlHeld = false;
}

void UUnitsSelectionComponent::AltPressed()
{
	bIsAltHeld = true;
}

void UUnitsSelectionComponent::AltReleased()
{
	bIsAltHeld = false;
}

void UUnitsSelectionComponent::UseControlGroup1()
{
	UseControlGroup(1);
}

void UUnitsSelectionComponent::UseControlGroup2()
{
	UseControlGroup(2);
}

void UUnitsSelectionComponent::UseControlGroup3()
{
	UseControlGroup(3);
}

void UUnitsSelectionComponent::UseControlGroup4()
{
	UseControlGroup(4);
}

void UUnitsSelectionComponent::UseControlGroup5()
{
	UseControlGroup(5);
}

void UUnitsSelectionComponent::UseControlGroup6()
{
	UseControlGroup(6);
}

void UUnitsSelectionComponent::UseControlGroup7()
{
	UseControlGroup(7);
}

void UUnitsSelectionComponent::UseControlGroup8()
{
	UseControlGroup(8);
}

void UUnitsSelectionComponent::UseControlGroup9()
{
	UseControlGroup(9);
}

void UUnitsSelectionComponent::UseControlGroup0()
{
	UseControlGroup(0);
}

void UUnitsSelectionComponent::RefteshControlGroup(int32 GroupIndex, AMyCharacter* DeadUnit)
{
	switch (GroupIndex)
	{
	case 1:
		ControlGroup1.Remove(DeadUnit);
		break;
	case 2:
		ControlGroup2.Remove(DeadUnit);
		break;
	case 3:
		ControlGroup3.Remove(DeadUnit);
		break;
	case 4:
		ControlGroup4.Remove(DeadUnit);
		break;
	case 5:
		ControlGroup5.Remove(DeadUnit);
		break;
	case 6:
		ControlGroup6.Remove(DeadUnit);
		break;
	case 7:
		ControlGroup7.Remove(DeadUnit);
		break;
	case 8:
		ControlGroup8.Remove(DeadUnit);
		break;
	case 9:
		ControlGroup9.Remove(DeadUnit);
		break;
	case 0:
		ControlGroup0.Remove(DeadUnit);
		break;
	}
}