// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WeaponComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}
// Cross Module References
	SALWARTS_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_AttackMade();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_HaveTargetInCombatRange();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
		UClass* Class = UWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackMade", &UWeaponComponent::execAttackMade },
			{ "HaveTargetInCombatRange", &UWeaponComponent::execHaveTargetInCombatRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWeaponComponent_AttackMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, "AttackMade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeaponComponent_HaveTargetInCombatRange()
	{
		struct WeaponComponent_eventHaveTargetInCombatRange_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WeaponComponent_eventHaveTargetInCombatRange_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WeaponComponent_eventHaveTargetInCombatRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, "HaveTargetInCombatRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WeaponComponent_eventHaveTargetInCombatRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
	{
		return UWeaponComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UWeaponComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWeaponComponent_AttackMade, "AttackMade" }, // 615815606
				{ &Z_Construct_UFunction_UWeaponComponent_HaveTargetInCombatRange, "HaveTargetInCombatRange" }, // 2633430135
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "WeaponComponent.h" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToAttack_MetaData[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetToAttack = { UE4CodeGen_Private::EPropertyClass::Object, "TargetToAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, TargetToAttack), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(NewProp_TargetToAttack_MetaData, ARRAY_COUNT(NewProp_TargetToAttack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			auto NewProp_bCanAttack_SetBit = [](void* Obj){ ((UWeaponComponent*)Obj)->bCanAttack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttack = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWeaponComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanAttack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanAttack_MetaData, ARRAY_COUNT(NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			auto NewProp_bIsAttacking_SetBit = [](void* Obj){ ((UWeaponComponent*)Obj)->bIsAttacking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAttacking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWeaponComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAttacking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAttacking_MetaData, ARRAY_COUNT(NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWeapon_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "LeftWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, LeftWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(NewProp_LeftWeapon_MetaData, ARRAY_COUNT(NewProp_LeftWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeapon_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "RightWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, RightWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(NewProp_RightWeapon_MetaData, ARRAY_COUNT(NewProp_RightWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWeaponClass_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_LeftWeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "LeftWeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, LeftWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_LeftWeaponClass_MetaData, ARRAY_COUNT(NewProp_LeftWeaponClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeaponClass_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_RightWeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "RightWeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, RightWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_RightWeaponClass_MetaData, ARRAY_COUNT(NewProp_RightWeaponClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetToAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAttacking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftWeaponClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightWeaponClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWeaponComponent::StaticClass,
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
	IMPLEMENT_CLASS(UWeaponComponent, 1456640173);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponComponent(Z_Construct_UClass_UWeaponComponent, &UWeaponComponent::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("UWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
