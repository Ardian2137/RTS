// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enums.generated.h"

UENUM()
enum class EDamageType : uint8
{
	Slash,
	Pierce,
	Siege,
	Crush,
	Magic,
	Fire,
	Frost,
	Lighting,
	Bleed,
	Poison,
	Holy,
	Dark,
}

