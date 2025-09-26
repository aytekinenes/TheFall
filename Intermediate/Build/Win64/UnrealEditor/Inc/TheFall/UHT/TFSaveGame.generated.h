// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/TFSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEFALL_TFSaveGame_generated_h
#error "TFSaveGame.generated.h already included, missing '#pragma once' in TFSaveGame.h"
#endif
#define THEFALL_TFSaveGame_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTFSaveGame(); \
	friend struct Z_Construct_UClass_UTFSaveGame_Statics; \
public: \
	DECLARE_CLASS(UTFSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheFall"), NO_API) \
	DECLARE_SERIALIZER(UTFSaveGame)


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTFSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTFSaveGame(UTFSaveGame&&); \
	UTFSaveGame(const UTFSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTFSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTFSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTFSaveGame) \
	NO_API virtual ~UTFSaveGame();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_10_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class UTFSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
