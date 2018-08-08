// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	SALWARTS_API UEnum* Z_Construct_UEnum_SalwaRTS_ETeam();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyCharacter_HandleSelection();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyCharacter_MoveTo();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyCharacter_OnDeath();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
// End Cross Module References
	static UEnum* ETeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SalwaRTS_ETeam, Z_Construct_UPackage__Script_SalwaRTS(), TEXT("ETeam"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeam(ETeam_StaticEnum, TEXT("/Script/SalwaRTS"), TEXT("ETeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SalwaRTS_ETeam_CRC() { return 2280337551U; }
	UEnum* Z_Construct_UEnum_SalwaRTS_ETeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SalwaRTS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeam"), 0, Get_Z_Construct_UEnum_SalwaRTS_ETeam_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeam::Player", (int64)ETeam::Player },
				{ "ETeam::AI", (int64)ETeam::AI },
				{ "ETeam::Unknown", (int64)ETeam::Unknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETeam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETeam",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AMyCharacter_HandleSelection = FName(TEXT("HandleSelection"));
	void AMyCharacter::HandleSelection(bool bSelected)
	{
		MyCharacter_eventHandleSelection_Parms Parms;
		Parms.bSelected=bSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_HandleSelection),&Parms);
	}
	static FName NAME_AMyCharacter_MoveTo = FName(TEXT("MoveTo"));
	void AMyCharacter::MoveTo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_MoveTo),NULL);
	}
	static FName NAME_AMyCharacter_OnDeath = FName(TEXT("OnDeath"));
	void AMyCharacter::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_OnDeath),NULL);
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_HandleSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSelected_SetBit = [](void* Obj){ ((MyCharacter_eventHandleSelection_Parms*)Obj)->bSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventHandleSelection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelected_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelected,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "HandleSelection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MyCharacter_eventHandleSelection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_MoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "MoveTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "OnDeath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyCharacter_HandleSelection, "HandleSelection" }, // 2402516351
				{ &Z_Construct_UFunction_AMyCharacter_MoveTo, "MoveTo" }, // 3495412222
				{ &Z_Construct_UFunction_AMyCharacter_OnDeath, "OnDeath" }, // 2751807639
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyCharacter.h" },
				{ "ModuleRelativePath", "MyCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionRange_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisionRange = { UE4CodeGen_Private::EPropertyClass::Float, "VisionRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, VisionRange), METADATA_PARAMS(NewProp_VisionRange_MetaData, ARRAY_COUNT(NewProp_VisionRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon = { UE4CodeGen_Private::EPropertyClass::Object, "Icon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AMyCharacter, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Icon_MetaData, ARRAY_COUNT(NewProp_Icon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
				{ "Category", "Teams" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Enum, "Team", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, Team), Z_Construct_UEnum_SalwaRTS_ETeam, METADATA_PARAMS(NewProp_Team_MetaData, ARRAY_COUNT(NewProp_Team_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent = { UE4CodeGen_Private::EPropertyClass::Object, "WeaponComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, WeaponComponent), Z_Construct_UClass_UWeaponComponent_NoRegister, METADATA_PARAMS(NewProp_WeaponComponent_MetaData, ARRAY_COUNT(NewProp_WeaponComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ManaComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(NewProp_ManaComponent_MetaData, ARRAY_COUNT(NewProp_ManaComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComponent_MetaData, ARRAY_COUNT(NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibleUnits = { UE4CodeGen_Private::EPropertyClass::Array, "VisibleUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, VisibleUnits), METADATA_PARAMS(NewProp_VisibleUnits_MetaData, ARRAY_COUNT(NewProp_VisibleUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "VisibleUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisionRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Icon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Team,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Team_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibleUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibleUnits_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AMyCharacter, 1906692996);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
