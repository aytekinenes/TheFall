// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StatlineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterMovementComponent;
enum class ECoreStat : uint8;
#ifdef THEFALL_StatlineComponent_generated_h
#error "StatlineComponent.generated.h already included, missing '#pragma once' in StatlineComponent.h"
#endif
#define THEFALL_StatlineComponent_generated_h

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreStat_Statics; \
	THEFALL_API static class UScriptStruct* StaticStruct();


template<> THEFALL_API UScriptStruct* StaticStruct<struct FCoreStat>();

#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasJumped); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execSetSneaking); \
	DECLARE_FUNCTION(execSetSprinting); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execGetStatPercentile); \
	DECLARE_FUNCTION(execSetMovementCompReference);


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatlineComponent(); \
	friend struct Z_Construct_UClass_UStatlineComponent_Statics; \
public: \
	DECLARE_CLASS(UStatlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), NO_API) \
	DECLARE_SERIALIZER(UStatlineComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStatlineComponent*>(this); }


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatlineComponent(UStatlineComponent&&); \
	UStatlineComponent(const UStatlineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatlineComponent) \
	NO_API virtual ~UStatlineComponent();


#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_93_PROLOG
#define FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEFALL_API UClass* StaticClass<class UStatlineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Components_StatlineComponent_h


#define FOREACH_ENUM_ECORESTAT(op) \
	op(ECoreStat::CS_HEALTH) \
	op(ECoreStat::CS_STAMINA) \
	op(ECoreStat::CS_HUNGER) \
	op(ECoreStat::CS_THIRST) 

enum class ECoreStat : uint8;
template<> struct TIsUEnumClass<ECoreStat> { enum { Value = true }; };
template<> THEFALL_API UEnum* StaticEnum<ECoreStat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
