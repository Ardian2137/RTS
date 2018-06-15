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
	PlayerInputComponent->BindAction("Shift", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::ShiftPressed);
	PlayerInputComponent->BindAction("Ctrl", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::CtrlPressed);
	PlayerInputComponent->BindAction("Alt", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::AltPressed);

	PlayerInputComponent->BindAction("Shift", IE_Released, UnitsSelectionComponent, &UUnitsSelectionComponent::ShiftReleased);
	PlayerInputComponent->BindAction("Ctrl", IE_Released, UnitsSelectionComponent, &UUnitsSelectionComponent::CtrlReleased);
	PlayerInputComponent->BindAction("Alt", IE_Released, UnitsSelectionComponent, &UUnitsSelectionComponent::AltReleased);

	PlayerInputComponent->BindAction("SelectAllUnits", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::SelectAllUnits);

	PlayerInputComponent->BindAction("UseControlGroup1", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup1);
	PlayerInputComponent->BindAction("UseControlGroup2", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup2);
	PlayerInputComponent->BindAction("UseControlGroup3", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup3);
	PlayerInputComponent->BindAction("UseControlGroup4", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup4);
	PlayerInputComponent->BindAction("UseControlGroup5", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup5);
	PlayerInputComponent->BindAction("UseControlGroup6", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup6);
	PlayerInputComponent->BindAction("UseControlGroup7", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup7);
	PlayerInputComponent->BindAction("UseControlGroup8", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup8);
	PlayerInputComponent->BindAction("UseControlGroup9", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup9);
	PlayerInputComponent->BindAction("UseControlGroup0", IE_Pressed, UnitsSelectionComponent, &UUnitsSelectionComponent::UseControlGroup0);


}

