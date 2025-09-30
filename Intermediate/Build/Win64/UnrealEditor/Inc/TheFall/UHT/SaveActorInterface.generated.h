// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/SaveActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FSaveActorData;
#ifdef THEFALL_SaveActorInterface_generated_h
#error "SaveActorInterface.generated.h already included, missing '#pragma once' in SaveActorInterface.h"
#endif
#define THEFALL_SaveActorInterface_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveActorData_Statics; \
	THEFALL_API static class UScriptStruct* StaticStruct();


template<> THEFALL_API UScriptStruct* StaticStruct<struct FSaveActorData>();

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSaveData); \
	DECLARE_FUNCTION(execGetActorSaveID);


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEFALL_API USaveActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveActorInterface(USaveActorInterface&&); \
	USaveActorInterface(const USaveActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEFALL_API, USaveActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveActorInterface) \
	THEFALL_API virtual ~USaveActorInterface();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveActorInterface(); \
	friend struct Z_Construct_UClass_USaveActorInterface_Statics; \
public: \
	DECLARE_CLASS(USaveActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheFall"), THEFALL_API) \
	DECLARE_SERIALIZER(USaveActorInterface)


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveActorInterface() {} \
public: \
	typedef USaveActorInterface UClassType; \
	typedef ISaveActorInterface ThisClass; \
	static FGuid Execute_GetActorSaveID(UObject* O); \
	static FSaveActorData Execute_GetSaveData(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_29_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class USaveActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
