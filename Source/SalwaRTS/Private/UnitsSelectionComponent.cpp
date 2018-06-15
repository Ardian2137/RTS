// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitsSelectionComponent.h"
#include "MyCharacter.h"

// Sets default values for this component's properties
UUnitsSelectionComponent::UUnitsSelectionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bIsShiftHolded = false;
	bIsCtrlHolded = false;
	bIsAltHolded = false;
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
		if (bIsCtrlHolded)
		{
			ControlGroup1 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if(bIsShiftHolded)
		{
			ControlGroup1 = Merge2UnitsGroup(ControlGroup1, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup2 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup2 = Merge2UnitsGroup(ControlGroup2, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup3 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup3 = Merge2UnitsGroup(ControlGroup3, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup4 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if(bIsShiftHolded)
		{
			ControlGroup4 = Merge2UnitsGroup(ControlGroup4, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup5 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup5 = Merge2UnitsGroup(ControlGroup5, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup6 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup6 = Merge2UnitsGroup(ControlGroup6, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup7 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup7 = Merge2UnitsGroup(ControlGroup7, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup8 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup8 = Merge2UnitsGroup(ControlGroup8, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup9 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup9 = Merge2UnitsGroup(ControlGroup9, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
		if (bIsCtrlHolded)
		{
			ControlGroup0 = CurrentlySelectedUnits;
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsShiftHolded)
		{
			ControlGroup0 = Merge2UnitsGroup(ControlGroup0, CurrentlySelectedUnits);
			OnControlGroupModification.Broadcast(GroupIndex);
		}
		else if (bIsAltHolded)
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
	bIsShiftHolded = true;
}

void UUnitsSelectionComponent::ShiftReleased()
{
	bIsShiftHolded = false;
}

void UUnitsSelectionComponent::CtrlPressed()
{
	bIsCtrlHolded = true;
}

void UUnitsSelectionComponent::CtrlReleased()
{
	bIsCtrlHolded = false;
}

void UUnitsSelectionComponent::AltPressed()
{
	bIsAltHolded = true;
}

void UUnitsSelectionComponent::AltReleased()
{
	bIsAltHolded = false;
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
