// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATFCharacter;
#ifdef THEFALL_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define THEFALL_InteractionInterface_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInteracable); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetInteractionText);


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEFALL_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionInterface(UInteractionInterface&&); \
	UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEFALL_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	THEFALL_API virtual ~UInteractionInterface();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheFall"), THEFALL_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static FText Execute_GetInteractionText(UObject* O); \
	static void Execute_Interact(UObject* O, ATFCharacter* Caller); \
	static bool Execute_IsInteracable(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_10_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
