// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InputActionsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionsComponent() {}
// Cross Module References
	SALWARTS_API UClass* Z_Construct_UClass_UInputActionsComponent_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_UInputActionsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UFunction* Z_Construct_UFunction_UInputActionsComponent_FasterGameSpeed();
	SALWARTS_API UFunction* Z_Construct_UFunction_UInputActionsComponent_PauseGame();
	SALWARTS_API UFunction* Z_Construct_UFunction_UInputActionsComponent_SlowerGameSpeed();
// End Cross Module References
	static FName NAME_UInputActionsComponent_FasterGameSpeed = FName(TEXT("FasterGameSpeed"));
	void UInputActionsComponent::FasterGameSpeed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInputActionsComponent_FasterGameSpeed),NULL);
	}
	static FName NAME_UInputActionsComponent_PauseGame = FName(TEXT("PauseGame"));
	void UInputActionsComponent::PauseGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInputActionsComponent_PauseGame),NULL);
	}
	static FName NAME_UInputActionsComponent_SlowerGameSpeed = FName(TEXT("SlowerGameSpeed"));
	void UInputActionsComponent::SlowerGameSpeed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInputActionsComponent_SlowerGameSpeed),NULL);
	}
	void UInputActionsComponent::StaticRegisterNativesUInputActionsComponent()
	{
	}
	UFunction* Z_Construct_UFunction_UInputActionsComponent_FasterGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/InputActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputActionsComponent, "FasterGameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputActionsComponent_PauseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/InputActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputActionsComponent, "PauseGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputActionsComponent_SlowerGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/InputActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputActionsComponent, "SlowerGameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputActionsComponent_NoRegister()
	{
		return UInputActionsComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputActionsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInputActionsComponent_FasterGameSpeed, "FasterGameSpeed" }, // 3402038499
				{ &Z_Construct_UFunction_UInputActionsComponent_PauseGame, "PauseGame" }, // 2116019587
				{ &Z_Construct_UFunction_UInputActionsComponent_SlowerGameSpeed, "SlowerGameSpeed" }, // 211414836
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "InputActionsComponent.h" },
				{ "ModuleRelativePath", "Public/InputActionsComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputActionsComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputActionsComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputActionsComponent, 2142572524);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputActionsComponent(Z_Construct_UClass_UInputActionsComponent, &UInputActionsComponent::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("UInputActionsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputActionsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
