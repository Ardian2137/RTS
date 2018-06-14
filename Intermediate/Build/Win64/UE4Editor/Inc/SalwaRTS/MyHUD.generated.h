// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector2D;
#ifdef SALWARTS_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define SALWARTS_MyHUD_generated_h

#define RTS_Source_SalwaRTS_MyHUD_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyGetActorsInSelectionRectangle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FirstPoint); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SecondPoint); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyGetActorsInSelectionRectangle(Z_Param_ClassFilter,Z_Param_Out_FirstPoint,Z_Param_Out_SecondPoint,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_MyHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyGetActorsInSelectionRectangle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FirstPoint); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SecondPoint); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyGetActorsInSelectionRectangle(Z_Param_ClassFilter,Z_Param_Out_FirstPoint,Z_Param_Out_SecondPoint,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_MyHUD_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyHUD(); \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyHUD_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyHUD(); \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyHUD_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public:


#define RTS_Source_SalwaRTS_MyHUD_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD)


#define RTS_Source_SalwaRTS_MyHUD_h_17_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_MyHUD_h_14_PROLOG
#define RTS_Source_SalwaRTS_MyHUD_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyHUD_h_17_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_MyHUD_h_17_INCLASS \
	RTS_Source_SalwaRTS_MyHUD_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_MyHUD_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyHUD_h_17_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
