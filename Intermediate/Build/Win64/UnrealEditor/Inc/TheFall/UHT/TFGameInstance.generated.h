// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/TFGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FSaveActorData;
#ifdef THEFALL_TFGameInstance_generated_h
#error "TFGameInstance.generated.h already included, missing '#pragma once' in TFGameInstance.h"
#endif
#define THEFALL_TFGameInstance_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDEV_LoadGame); \
	DECLARE_FUNCTION(execDEV_SaveGame); \
	DECLARE_FUNCTION(execGetActorData); \
	DECLARE_FUNCTION(execAddActorData);


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTFGameInstance(); \
	friend struct Z_Construct_UClass_UTFGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTFGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheFall"), NO_API) \
	DECLARE_SERIALIZER(UTFGameInstance)


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTFGameInstance(UTFGameInstance&&); \
	UTFGameInstance(const UTFGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTFGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTFGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTFGameInstance) \
	NO_API virtual ~UTFGameInstance();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_13_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class UTFGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
