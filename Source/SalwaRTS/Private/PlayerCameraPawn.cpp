// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCameraPawn.h"
#include "UnitsSelectionComponent.h"
#include "Components/InputComponent.h"
#include "InputActionsComponent.h"

// Sets default values
APlayerCameraPawn::APlayerCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UnitsSelectionComponent = CreateDefaultSubobject<UUnitsSelectionComponent>(TEXT("UnitsSelectionComponent"));
	InputActionsComponent = CreateDefaultSubobject<UInputActionsComponent>(TEXT("InputActionsComponent"));
}

// Called when the game starts or when spawned
void APlayerCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("SelectAllUnits", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectAllUnits);


	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits1", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits1);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits2", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits2);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits3", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits3);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits4", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits4);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits5", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits5);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits6", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits6);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits7", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits7);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits8", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits8);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits9", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits9);
	PlayerInputComponent->BindAction("CreateControlGroupFromSelectedUnits0", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CreateControlGroupFromSelectedUnits0);


	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup1", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup1);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup2", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup2);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup3", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup3);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup4", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup4);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup5", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup5);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup6", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup6);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup7", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup7);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup8", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup8);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup9", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup9);
	PlayerInputComponent->BindAction("RemoveSelectedUnitsToControlGroup0", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::RemoveSelectedUnitsToControlGroup0);


	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup1", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup1);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup2", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup2);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup3", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup3);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup4", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup4);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup5", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup5);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup6", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup6);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup7", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup7);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup8", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup8);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup9", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup9);
	PlayerInputComponent->BindAction("AddSelectedUnitsToControlGroup0", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AddSelectedUnitsToControlGroup0);


	PlayerInputComponent->BindAction("SelectControlGroup1", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup1);
	PlayerInputComponent->BindAction("SelectControlGroup2", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup2);
	PlayerInputComponent->BindAction("SelectControlGroup3", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup3);
	PlayerInputComponent->BindAction("SelectControlGroup4", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup4);
	PlayerInputComponent->BindAction("SelectControlGroup5", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup5);
	PlayerInputComponent->BindAction("SelectControlGroup6", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup6);
	PlayerInputComponent->BindAction("SelectControlGroup7", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup7);
	PlayerInputComponent->BindAction("SelectControlGroup8", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup8);
	PlayerInputComponent->BindAction("SelectControlGroup9", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup9);
	PlayerInputComponent->BindAction("SelectControlGroup0", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectControlGroup0);


}

