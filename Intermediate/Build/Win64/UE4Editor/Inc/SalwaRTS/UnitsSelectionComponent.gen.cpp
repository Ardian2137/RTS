// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnitsSelectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitsSelectionComponent() {}
// Cross Module References
	SALWARTS_API UFunction* Z_Construct_UDelegateFunction_SalwaRTS_OnControlGroupModification__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UFunction* Z_Construct_UDelegateFunction_SalwaRTS_RebuildUnitsGridPanel__DelegateSignature();
	SALWARTS_API UClass* Z_Construct_UClass_UUnitsSelectionComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UUnitsSelectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SALWARTS_API UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_AddSelectedUnitsToControlGroup();
	SALWARTS_API UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_CreateControlGroupFromSelectedUnits();
	SALWARTS_API UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_RemoveSelectedUnitsToControlGroup();
	SALWARTS_API UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_SelectAllUnits();
	SALWARTS_API UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_SelectControlGroup();
	SALWARTS_API UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_SetCurrentlySelectedUnits();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_SalwaRTS_OnControlGroupModification__DelegateSignature()
	{
		struct _Script_SalwaRTS_eventOnControlGroupModification_Parms
		{
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SalwaRTS_eventOnControlGroupModification_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS, "OnControlGroupModification__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SalwaRTS_eventOnControlGroupModification_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_SalwaRTS_RebuildUnitsGridPanel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS, "RebuildUnitsGridPanel__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UUnitsSelectionComponent::StaticRegisterNativesUUnitsSelectionComponent()
	{
		UClass* Class = UUnitsSelectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSelectedUnitsToControlGroup", &UUnitsSelectionComponent::execAddSelectedUnitsToControlGroup },
			{ "CreateControlGroupFromSelectedUnits", &UUnitsSelectionComponent::execCreateControlGroupFromSelectedUnits },
			{ "RemoveSelectedUnitsToControlGroup", &UUnitsSelectionComponent::execRemoveSelectedUnitsToControlGroup },
			{ "SelectAllUnits", &UUnitsSelectionComponent::execSelectAllUnits },
			{ "SelectControlGroup", &UUnitsSelectionComponent::execSelectControlGroup },
			{ "SetCurrentlySelectedUnits", &UUnitsSelectionComponent::execSetCurrentlySelectedUnits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_AddSelectedUnitsToControlGroup()
	{
		struct UnitsSelectionComponent_eventAddSelectedUnitsToControlGroup_Parms
		{
			int32 GroupIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GroupIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnitsSelectionComponent_eventAddSelectedUnitsToControlGroup_Parms, GroupIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Grouping" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitsSelectionComponent, "AddSelectedUnitsToControlGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnitsSelectionComponent_eventAddSelectedUnitsToControlGroup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_CreateControlGroupFromSelectedUnits()
	{
		struct UnitsSelectionComponent_eventCreateControlGroupFromSelectedUnits_Parms
		{
			int32 GroupIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GroupIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnitsSelectionComponent_eventCreateControlGroupFromSelectedUnits_Parms, GroupIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Grouping" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitsSelectionComponent, "CreateControlGroupFromSelectedUnits", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnitsSelectionComponent_eventCreateControlGroupFromSelectedUnits_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_RemoveSelectedUnitsToControlGroup()
	{
		struct UnitsSelectionComponent_eventRemoveSelectedUnitsToControlGroup_Parms
		{
			int32 GroupIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GroupIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnitsSelectionComponent_eventRemoveSelectedUnitsToControlGroup_Parms, GroupIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Grouping" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitsSelectionComponent, "RemoveSelectedUnitsToControlGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnitsSelectionComponent_eventRemoveSelectedUnitsToControlGroup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_SelectAllUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Grouping" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitsSelectionComponent, "SelectAllUnits", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_SelectControlGroup()
	{
		struct UnitsSelectionComponent_eventSelectControlGroup_Parms
		{
			int32 GroupIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GroupIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnitsSelectionComponent_eventSelectControlGroup_Parms, GroupIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Grouping" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitsSelectionComponent, "SelectControlGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnitsSelectionComponent_eventSelectControlGroup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUnitsSelectionComponent_SetCurrentlySelectedUnits()
	{
		struct UnitsSelectionComponent_eventSetCurrentlySelectedUnits_Parms
		{
			TArray<AMyCharacter*> NewSelectedUnits;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewSelectedUnits = { UE4CodeGen_Private::EPropertyClass::Array, "NewSelectedUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnitsSelectionComponent_eventSetCurrentlySelectedUnits_Parms, NewSelectedUnits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSelectedUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NewSelectedUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSelectedUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSelectedUnits_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Grouping" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitsSelectionComponent, "SetCurrentlySelectedUnits", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnitsSelectionComponent_eventSetCurrentlySelectedUnits_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnitsSelectionComponent_NoRegister()
	{
		return UUnitsSelectionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UUnitsSelectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUnitsSelectionComponent_AddSelectedUnitsToControlGroup, "AddSelectedUnitsToControlGroup" }, // 496632306
				{ &Z_Construct_UFunction_UUnitsSelectionComponent_CreateControlGroupFromSelectedUnits, "CreateControlGroupFromSelectedUnits" }, // 4229391749
				{ &Z_Construct_UFunction_UUnitsSelectionComponent_RemoveSelectedUnitsToControlGroup, "RemoveSelectedUnitsToControlGroup" }, // 383817849
				{ &Z_Construct_UFunction_UUnitsSelectionComponent_SelectAllUnits, "SelectAllUnits" }, // 1247563242
				{ &Z_Construct_UFunction_UUnitsSelectionComponent_SelectControlGroup, "SelectControlGroup" }, // 1856780307
				{ &Z_Construct_UFunction_UUnitsSelectionComponent_SetCurrentlySelectedUnits, "SetCurrentlySelectedUnits" }, // 1923144153
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "UnitsSelectionComponent.h" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControlGroupModification_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControlGroupModification = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnControlGroupModification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, OnControlGroupModification), Z_Construct_UDelegateFunction_SalwaRTS_OnControlGroupModification__DelegateSignature, METADATA_PARAMS(NewProp_OnControlGroupModification_MetaData, ARRAY_COUNT(NewProp_OnControlGroupModification_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RebuildUnitsGridPanel_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RebuildUnitsGridPanel = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "RebuildUnitsGridPanel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, RebuildUnitsGridPanel), Z_Construct_UDelegateFunction_SalwaRTS_RebuildUnitsGridPanel__DelegateSignature, METADATA_PARAMS(NewProp_RebuildUnitsGridPanel_MetaData, ARRAY_COUNT(NewProp_RebuildUnitsGridPanel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup0_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup0 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup0), METADATA_PARAMS(NewProp_ControlGroup0_MetaData, ARRAY_COUNT(NewProp_ControlGroup0_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup0_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup9_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup9 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup9", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup9), METADATA_PARAMS(NewProp_ControlGroup9_MetaData, ARRAY_COUNT(NewProp_ControlGroup9_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup9_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup9", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup8_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup8 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup8", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup8), METADATA_PARAMS(NewProp_ControlGroup8_MetaData, ARRAY_COUNT(NewProp_ControlGroup8_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup8_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup8", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup7_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup7 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup7), METADATA_PARAMS(NewProp_ControlGroup7_MetaData, ARRAY_COUNT(NewProp_ControlGroup7_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup7_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup6_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup6 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup6), METADATA_PARAMS(NewProp_ControlGroup6_MetaData, ARRAY_COUNT(NewProp_ControlGroup6_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup6_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup5_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup5 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup5), METADATA_PARAMS(NewProp_ControlGroup5_MetaData, ARRAY_COUNT(NewProp_ControlGroup5_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup5_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup4_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup4 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup4), METADATA_PARAMS(NewProp_ControlGroup4_MetaData, ARRAY_COUNT(NewProp_ControlGroup4_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup4_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup3_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup3 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup3), METADATA_PARAMS(NewProp_ControlGroup3_MetaData, ARRAY_COUNT(NewProp_ControlGroup3_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup3_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup2_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup2 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup2), METADATA_PARAMS(NewProp_ControlGroup2_MetaData, ARRAY_COUNT(NewProp_ControlGroup2_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup2_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlGroup1_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlGroup1 = { UE4CodeGen_Private::EPropertyClass::Array, "ControlGroup1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, ControlGroup1), METADATA_PARAMS(NewProp_ControlGroup1_MetaData, ARRAY_COUNT(NewProp_ControlGroup1_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlGroup1_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlGroup1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlySelectedUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentlySelectedUnits = { UE4CodeGen_Private::EPropertyClass::Array, "CurrentlySelectedUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, CurrentlySelectedUnits), METADATA_PARAMS(NewProp_CurrentlySelectedUnits_MetaData, ARRAY_COUNT(NewProp_CurrentlySelectedUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlySelectedUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentlySelectedUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllControlledUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "Public/UnitsSelectionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllControlledUnits = { UE4CodeGen_Private::EPropertyClass::Array, "AllControlledUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUnitsSelectionComponent, AllControlledUnits), METADATA_PARAMS(NewProp_AllControlledUnits_MetaData, ARRAY_COUNT(NewProp_AllControlledUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllControlledUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllControlledUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnControlGroupModification,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RebuildUnitsGridPanel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup0_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup9,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup9_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup8,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup8_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup7_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup6_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup5_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup4_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup3_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup2_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlGroup1_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentlySelectedUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentlySelectedUnits_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllControlledUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllControlledUnits_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUnitsSelectionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUnitsSelectionComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnitsSelectionComponent, 3734949671);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnitsSelectionComponent(Z_Construct_UClass_UUnitsSelectionComponent, &UUnitsSelectionComponent::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("UUnitsSelectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitsSelectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
