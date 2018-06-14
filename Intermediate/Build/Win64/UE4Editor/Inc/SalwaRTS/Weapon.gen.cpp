// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	SALWARTS_API UEnum* Z_Construct_UEnum_SalwaRTS_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AWeapon();
	SALWARTS_API UClass* Z_Construct_UClass_AItem();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SalwaRTS_EWeaponType, Z_Construct_UPackage__Script_SalwaRTS(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/SalwaRTS"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SalwaRTS_EWeaponType_CRC() { return 583507779U; }
	UEnum* Z_Construct_UEnum_SalwaRTS_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SalwaRTS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_SalwaRTS_EWeaponType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Sword", (int64)Sword },
				{ "Axe", (int64)Axe },
				{ "Shield", (int64)Shield },
				{ "Mace", (int64)Mace },
				{ "Bow", (int64)Bow },
				{ "Crossbow", (int64)Crossbow },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Weapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWeaponType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EWeaponType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AItem,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapon.h" },
				{ "ModuleRelativePath", "Weapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDamage_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "Weapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDamage = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWeapon, MaxDamage), METADATA_PARAMS(NewProp_MaxDamage_MetaData, ARRAY_COUNT(NewProp_MaxDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDamage_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "Weapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDamage = { UE4CodeGen_Private::EPropertyClass::Int, "MinDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWeapon, MinDamage), METADATA_PARAMS(NewProp_MinDamage_MetaData, ARRAY_COUNT(NewProp_MinDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTwoHanded_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "Weapon.h" },
			};
#endif
			auto NewProp_bIsTwoHanded_SetBit = [](void* Obj){ ((AWeapon*)Obj)->bIsTwoHanded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTwoHanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTwoHanded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWeapon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTwoHanded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsTwoHanded_MetaData, ARRAY_COUNT(NewProp_bIsTwoHanded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "Weapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Float, "Range", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWeapon, Range), METADATA_PARAMS(NewProp_Range_MetaData, ARRAY_COUNT(NewProp_Range_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTwoHanded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Range,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWeapon::StaticClass,
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
	IMPLEMENT_CLASS(AWeapon, 2552278685);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
