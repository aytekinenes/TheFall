// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClass/TFCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEFALL_TFCharacter_generated_h
#error "TFCharacter.generated.h already included, missing '#pragma once' in TFCharacter.h"
#endif
#define THEFALL_TFCharacter_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATFCharacter(); \
	friend struct Z_Construct_UClass_ATFCharacter_Statics; \
public: \
	DECLARE_CLASS(ATFCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), NO_API) \
	DECLARE_SERIALIZER(ATFCharacter)


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATFCharacter(ATFCharacter&&); \
	ATFCharacter(const ATFCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATFCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATFCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATFCharacter) \
	NO_API virtual ~ATFCharacter();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_10_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class ATFCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
