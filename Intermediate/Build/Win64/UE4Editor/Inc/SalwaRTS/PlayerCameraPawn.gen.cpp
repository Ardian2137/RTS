// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayerCameraPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraPawn() {}
// Cross Module References
	SALWARTS_API UClass* Z_Construct_UClass_APlayerCameraPawn_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_APlayerCameraPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_UInputActionsComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UUnitsSelectionComponent_NoRegister();
// End Cross Module References
	void APlayerCameraPawn::StaticRegisterNativesAPlayerCameraPawn()
	{
	}
	UClass* Z_Construct_UClass_APlayerCameraPawn_NoRegister()
	{
		return APlayerCameraPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerCameraPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PlayerCameraPawn.h" },
				{ "ModuleRelativePath", "Public/PlayerCameraPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionsComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PlayerCameraPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputActionsComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InputActionsComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(APlayerCameraPawn, InputActionsComponent), Z_Construct_UClass_UInputActionsComponent_NoRegister, METADATA_PARAMS(NewProp_InputActionsComponent_MetaData, ARRAY_COUNT(NewProp_InputActionsComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitsSelectionComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PlayerCameraPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnitsSelectionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "UnitsSelectionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(APlayerCameraPawn, UnitsSelectionComponent), Z_Construct_UClass_UUnitsSelectionComponent_NoRegister, METADATA_PARAMS(NewProp_UnitsSelectionComponent_MetaData, ARRAY_COUNT(NewProp_UnitsSelectionComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputActionsComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnitsSelectionComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerCameraPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerCameraPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APlayerCameraPawn, 3546032590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCameraPawn(Z_Construct_UClass_APlayerCameraPawn, &APlayerCameraPawn::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("APlayerCameraPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
