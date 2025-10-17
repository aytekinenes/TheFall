// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClass/TFPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THEFALL_TFPlayerCharacter_generated_h
#error "TFPlayerCharacter.generated.h already included, missing '#pragma once' in TFPlayerCharacter.h"
#endif
#define THEFALL_TFPlayerCharacter_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInteractionTriggerOverlapEnd); \
	DECLARE_FUNCTION(execOnInteractionOverlapBegin);


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATFPlayerCharacter(); \
	friend struct Z_Construct_UClass_ATFPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ATFPlayerCharacter, ATFCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), NO_API) \
	DECLARE_SERIALIZER(ATFPlayerCharacter)


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATFPlayerCharacter(ATFPlayerCharacter&&); \
	ATFPlayerCharacter(const ATFPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATFPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATFPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATFPlayerCharacter) \
	NO_API virtual ~ATFPlayerCharacter();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_19_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class ATFPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
