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
	SALWARTS_API UEnum* Z_Construct_UEnum_SalwaRTS_EFightingStyle();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_AttackMade();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_GetFightingWeaponRange();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_HaveTargetInCombatRange();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_SetLeftWeapon();
	SALWARTS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	SALWARTS_API UFunction* Z_Construct_UFunction_UWeaponComponent_SetRightWeapon();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	static UEnum* EFightingStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SalwaRTS_EFightingStyle, Z_Construct_UPackage__Script_SalwaRTS(), TEXT("EFightingStyle"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFightingStyle(EFightingStyle_StaticEnum, TEXT("/Script/SalwaRTS"), TEXT("EFightingStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SalwaRTS_EFightingStyle_CRC() { return 4125482393U; }
	UEnum* Z_Construct_UEnum_SalwaRTS_EFightingStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SalwaRTS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFightingStyle"), 0, Get_Z_Construct_UEnum_SalwaRTS_EFightingStyle_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFightingStyle::OneHandedAndShield", (int64)EFightingStyle::OneHandedAndShield },
				{ "EFightingStyle::TwoHanded", (int64)EFightingStyle::TwoHanded },
				{ "EFightingStyle::BareFists", (int64)EFightingStyle::BareFists },
				{ "EFightingStyle::Crossbow", (int64)EFightingStyle::Crossbow },
				{ "EFightingStyle::Bow", (int64)EFightingStyle::Bow },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFightingStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EFightingStyle::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
		UClass* Class = UWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackMade", &UWeaponComponent::execAttackMade },
			{ "GetFightingWeaponRange", &UWeaponComponent::execGetFightingWeaponRange },
			{ "HaveTargetInCombatRange", &UWeaponComponent::execHaveTargetInCombatRange },
			{ "SetLeftWeapon", &UWeaponComponent::execSetLeftWeapon },
			{ "SetRightWeapon", &UWeaponComponent::execSetRightWeapon },
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
	UFunction* Z_Construct_UFunction_UWeaponComponent_GetFightingWeaponRange()
	{
		struct WeaponComponent_eventGetFightingWeaponRange_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WeaponComponent_eventGetFightingWeaponRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, "GetFightingWeaponRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WeaponComponent_eventGetFightingWeaponRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
	UFunction* Z_Construct_UFunction_UWeaponComponent_SetLeftWeapon()
	{
		struct WeaponComponent_eventSetLeftWeapon_Parms
		{
			AWeapon* NewLeftWeapon;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WeaponComponent_eventSetLeftWeapon_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WeaponComponent_eventSetLeftWeapon_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLeftWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "NewLeftWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeaponComponent_eventSetLeftWeapon_Parms, NewLeftWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLeftWeapon,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, "SetLeftWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WeaponComponent_eventSetLeftWeapon_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeaponComponent_SetRightWeapon()
	{
		struct WeaponComponent_eventSetRightWeapon_Parms
		{
			AWeapon* NewRightWeapon;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WeaponComponent_eventSetRightWeapon_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WeaponComponent_eventSetRightWeapon_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRightWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "NewRightWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeaponComponent_eventSetRightWeapon_Parms, NewRightWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRightWeapon,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, "SetRightWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WeaponComponent_eventSetRightWeapon_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_UWeaponComponent_GetFightingWeaponRange, "GetFightingWeaponRange" }, // 681403906
				{ &Z_Construct_UFunction_UWeaponComponent_HaveTargetInCombatRange, "HaveTargetInCombatRange" }, // 2633430135
				{ &Z_Construct_UFunction_UWeaponComponent_SetLeftWeapon, "SetLeftWeapon" }, // 4012086070
				{ &Z_Construct_UFunction_UWeaponComponent_SetRightWeapon, "SetRightWeapon" }, // 1188873806
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWeapon_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "LeftWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, LeftWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(NewProp_LeftWeapon_MetaData, ARRAY_COUNT(NewProp_LeftWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeapon_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "RightWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, RightWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(NewProp_RightWeapon_MetaData, ARRAY_COUNT(NewProp_RightWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToAttack_MetaData[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetToAttack = { UE4CodeGen_Private::EPropertyClass::Object, "TargetToAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, TargetToAttack), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(NewProp_TargetToAttack_MetaData, ARRAY_COUNT(NewProp_TargetToAttack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FightingStyle_MetaData[] = {
				{ "Category", "Combat" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FightingStyle = { UE4CodeGen_Private::EPropertyClass::Byte, "FightingStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, FightingStyle), Z_Construct_UEnum_SalwaRTS_EFightingStyle, METADATA_PARAMS(NewProp_FightingStyle_MetaData, ARRAY_COUNT(NewProp_FightingStyle_MetaData)) };
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnims_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "WeaponComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackAnims = { UE4CodeGen_Private::EPropertyClass::Array, "AttackAnims", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWeaponComponent, AttackAnims), METADATA_PARAMS(NewProp_AttackAnims_MetaData, ARRAY_COUNT(NewProp_AttackAnims_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnims_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AttackAnims", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetToAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FightingStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAttacking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftWeaponClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightWeaponClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackAnims,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackAnims_Inner,
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
	IMPLEMENT_CLASS(UWeaponComponent, 2932881488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponComponent(Z_Construct_UClass_UWeaponComponent, &UWeaponComponent::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("UWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
