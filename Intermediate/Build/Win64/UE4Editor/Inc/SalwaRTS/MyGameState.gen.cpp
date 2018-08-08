// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameState() {}
// Cross Module References
	SALWARTS_API UClass* Z_Construct_UClass_AMyGameState_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AMyGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
// End Cross Module References
	void AMyGameState::StaticRegisterNativesAMyGameState()
	{
	}
	UClass* Z_Construct_UClass_AMyGameState_NoRegister()
	{
		return AMyGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameState,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MyGameState.h" },
				{ "ModuleRelativePath", "MyGameState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AiUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "MyGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AiUnits = { UE4CodeGen_Private::EPropertyClass::Array, "AiUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AMyGameState, AiUnits), METADATA_PARAMS(NewProp_AiUnits_MetaData, ARRAY_COUNT(NewProp_AiUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AiUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AiUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "MyGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerUnits = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AMyGameState, PlayerUnits), METADATA_PARAMS(NewProp_PlayerUnits_MetaData, ARRAY_COUNT(NewProp_PlayerUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AiUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AiUnits_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerUnits_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyGameState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AMyGameState, 3246670045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameState(Z_Construct_UClass_AMyGameState, &AMyGameState::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("AMyGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
