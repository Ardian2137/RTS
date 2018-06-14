// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSalwaRTS_init() {}
	SALWARTS_API UFunction* Z_Construct_UDelegateFunction_SalwaRTS_OnManaAmountChanged__DelegateSignature();
	SALWARTS_API UFunction* Z_Construct_UDelegateFunction_SalwaRTS_RebuildUnitsGridPanel__DelegateSignature();
	SALWARTS_API UFunction* Z_Construct_UDelegateFunction_SalwaRTS_OnControlGroupModification__DelegateSignature();
	SALWARTS_API UFunction* Z_Construct_UDelegateFunction_SalwaRTS_OnHealthAmountChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SalwaRTS_OnManaAmountChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SalwaRTS_RebuildUnitsGridPanel__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SalwaRTS_OnControlGroupModification__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SalwaRTS_OnHealthAmountChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SalwaRTS",
				PKG_CompiledIn | 0x00000000,
				0x795CB159,
				0xBE69C6F5,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
