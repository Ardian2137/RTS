// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	SALWARTS_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AMyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyHUD_MyGetActorsInSelectionRectangle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
		UClass* Class = AMyHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyGetActorsInSelectionRectangle", &AMyHUD::execMyGetActorsInSelectionRectangle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMyHUD_MyGetActorsInSelectionRectangle()
	{
		struct MyHUD_eventMyGetActorsInSelectionRectangle_Parms
		{
			TSubclassOf<AActor>  ClassFilter;
			FVector2D FirstPoint;
			FVector2D SecondPoint;
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyHUD_eventMyGetActorsInSelectionRectangle_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MyHUD_eventMyGetActorsInSelectionRectangle_Parms, SecondPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_SecondPoint_MetaData, ARRAY_COUNT(NewProp_SecondPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "FirstPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MyHUD_eventMyGetActorsInSelectionRectangle_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_FirstPoint_MetaData, ARRAY_COUNT(NewProp_FirstPoint_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassFilter = { UE4CodeGen_Private::EPropertyClass::Class, "ClassFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(MyHUD_eventMyGetActorsInSelectionRectangle_Parms, ClassFilter), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassFilter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "MyHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, "MyGetActorsInSelectionRectangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C40401, sizeof(MyHUD_eventMyGetActorsInSelectionRectangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyHUD_MyGetActorsInSelectionRectangle, "MyGetActorsInSelectionRectangle" }, // 324096634
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "MyHUD.h" },
				{ "ModuleRelativePath", "MyHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyHUD, 385161523);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyHUD(Z_Construct_UClass_AMyHUD, &AMyHUD::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("AMyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
