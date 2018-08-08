// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Enums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	SALWARTS_API UEnum* Z_Construct_UEnum_SalwaRTS_EDamageType();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
// End Cross Module References
	static UEnum* EDamageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SalwaRTS_EDamageType, Z_Construct_UPackage__Script_SalwaRTS(), TEXT("EDamageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDamageType(EDamageType_StaticEnum, TEXT("/Script/SalwaRTS"), TEXT("EDamageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SalwaRTS_EDamageType_CRC() { return 1375184457U; }
	UEnum* Z_Construct_UEnum_SalwaRTS_EDamageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SalwaRTS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDamageType"), 0, Get_Z_Construct_UEnum_SalwaRTS_EDamageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDamageType::Slash", (int64)EDamageType::Slash },
				{ "EDamageType::Pierce", (int64)EDamageType::Pierce },
				{ "EDamageType::Siege", (int64)EDamageType::Siege },
				{ "EDamageType::Crush", (int64)EDamageType::Crush },
				{ "EDamageType::Magic", (int64)EDamageType::Magic },
				{ "EDamageType::Fire", (int64)EDamageType::Fire },
				{ "EDamageType::Frost", (int64)EDamageType::Frost },
				{ "EDamageType::Lighting", (int64)EDamageType::Lighting },
				{ "EDamageType::Bleed", (int64)EDamageType::Bleed },
				{ "EDamageType::Poison", (int64)EDamageType::Poison },
				{ "EDamageType::Holy", (int64)EDamageType::Holy },
				{ "EDamageType::Dark", (int64)EDamageType::Dark },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Enums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDamageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EDamageType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
