// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyCharacter;
#ifdef SALWARTS_UnitsSelectionComponent_generated_h
#error "UnitsSelectionComponent.generated.h already included, missing '#pragma once' in UnitsSelectionComponent.h"
#endif
#define SALWARTS_UnitsSelectionComponent_generated_h

#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_12_DELEGATE \
struct _Script_SalwaRTS_eventOnControlGroupModification_Parms \
{ \
	int32 Index; \
}; \
static inline void FOnControlGroupModification_DelegateWrapper(const FMulticastScriptDelegate& OnControlGroupModification, int32 Index) \
{ \
	_Script_SalwaRTS_eventOnControlGroupModification_Parms Parms; \
	Parms.Index=Index; \
	OnControlGroupModification.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_11_DELEGATE \
static inline void FRebuildUnitsGridPanel_DelegateWrapper(const FMulticastScriptDelegate& RebuildUnitsGridPanel) \
{ \
	RebuildUnitsGridPanel.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectAllUnits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectAllUnits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseControlGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseControlGroup(Z_Param_GroupIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefteshControlGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupIndex); \
		P_GET_OBJECT(AMyCharacter,Z_Param_DeadUnit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefteshControlGroup(Z_Param_GroupIndex,Z_Param_DeadUnit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentlySelectedUnits) \
	{ \
		P_GET_TARRAY(AMyCharacter*,Z_Param_NewSelectedUnits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentlySelectedUnits(Z_Param_NewSelectedUnits); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectAllUnits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectAllUnits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseControlGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseControlGroup(Z_Param_GroupIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefteshControlGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupIndex); \
		P_GET_OBJECT(AMyCharacter,Z_Param_DeadUnit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefteshControlGroup(Z_Param_GroupIndex,Z_Param_DeadUnit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentlySelectedUnits) \
	{ \
		P_GET_TARRAY(AMyCharacter*,Z_Param_NewSelectedUnits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentlySelectedUnits(Z_Param_NewSelectedUnits); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnitsSelectionComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UUnitsSelectionComponent(); \
public: \
	DECLARE_CLASS(UUnitsSelectionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UUnitsSelectionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUnitsSelectionComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UUnitsSelectionComponent(); \
public: \
	DECLARE_CLASS(UUnitsSelectionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UUnitsSelectionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitsSelectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitsSelectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitsSelectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitsSelectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnitsSelectionComponent(UUnitsSelectionComponent&&); \
	NO_API UUnitsSelectionComponent(const UUnitsSelectionComponent&); \
public:


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnitsSelectionComponent(UUnitsSelectionComponent&&); \
	NO_API UUnitsSelectionComponent(const UUnitsSelectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitsSelectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitsSelectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnitsSelectionComponent)


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_14_PROLOG
#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_INCLASS \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_Public_UnitsSelectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
