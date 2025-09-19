// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/TheFallGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheFallGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEFALL_API UClass* Z_Construct_UClass_ATheFallGameMode();
THEFALL_API UClass* Z_Construct_UClass_ATheFallGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin Class ATheFallGameMode
void ATheFallGameMode::StaticRegisterNativesATheFallGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheFallGameMode);
UClass* Z_Construct_UClass_ATheFallGameMode_NoRegister()
{
	return ATheFallGameMode::StaticClass();
}
struct Z_Construct_UClass_ATheFallGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheFallGameMode.h" },
		{ "ModuleRelativePath", "TheFallGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheFallGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheFallGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheFallGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheFallGameMode_Statics::ClassParams = {
	&ATheFallGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheFallGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheFallGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheFallGameMode()
{
	if (!Z_Registration_Info_UClass_ATheFallGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheFallGameMode.OuterSingleton, Z_Construct_UClass_ATheFallGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheFallGameMode.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<ATheFallGameMode>()
{
	return ATheFallGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheFallGameMode);
ATheFallGameMode::~ATheFallGameMode() {}
// End Class ATheFallGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_TheFallGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheFallGameMode, ATheFallGameMode::StaticClass, TEXT("ATheFallGameMode"), &Z_Registration_Info_UClass_ATheFallGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheFallGameMode), 1757042939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_TheFallGameMode_h_3137306301(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_TheFallGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_TheFallGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
