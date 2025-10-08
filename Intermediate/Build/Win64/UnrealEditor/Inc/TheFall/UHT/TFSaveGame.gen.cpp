// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Public/Game/TFSaveGame.h"
#include "TheFall/Public/Interface/SaveActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTFSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
THEFALL_API UClass* Z_Construct_UClass_UTFSaveGame();
THEFALL_API UClass* Z_Construct_UClass_UTFSaveGame_NoRegister();
THEFALL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveActorData();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin Class UTFSaveGame
void UTFSaveGame::StaticRegisterNativesUTFSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTFSaveGame);
UClass* Z_Construct_UClass_UTFSaveGame_NoRegister()
{
	return UTFSaveGame::StaticClass();
}
struct Z_Construct_UClass_UTFSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/TFSaveGame.h" },
		{ "ModuleRelativePath", "Public/Game/TFSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveableActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/TFSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentlyLoadedLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/TFSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveableActorData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveableActorData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveableActorData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentlyLoadedLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTFSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTFSaveGame_Statics::NewProp_SaveableActorData_ValueProp = { "SaveableActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSaveActorData, METADATA_PARAMS(0, nullptr) }; // 279375981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTFSaveGame_Statics::NewProp_SaveableActorData_Key_KeyProp = { "SaveableActorData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTFSaveGame_Statics::NewProp_SaveableActorData = { "SaveableActorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTFSaveGame, SaveableActorData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveableActorData_MetaData), NewProp_SaveableActorData_MetaData) }; // 279375981
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTFSaveGame_Statics::NewProp_CurrentlyLoadedLevel = { "CurrentlyLoadedLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTFSaveGame, CurrentlyLoadedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentlyLoadedLevel_MetaData), NewProp_CurrentlyLoadedLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTFSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTFSaveGame_Statics::NewProp_SaveableActorData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTFSaveGame_Statics::NewProp_SaveableActorData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTFSaveGame_Statics::NewProp_SaveableActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTFSaveGame_Statics::NewProp_CurrentlyLoadedLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTFSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTFSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTFSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTFSaveGame_Statics::ClassParams = {
	&UTFSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTFSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTFSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTFSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UTFSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTFSaveGame()
{
	if (!Z_Registration_Info_UClass_UTFSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTFSaveGame.OuterSingleton, Z_Construct_UClass_UTFSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTFSaveGame.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<UTFSaveGame>()
{
	return UTFSaveGame::StaticClass();
}
UTFSaveGame::UTFSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTFSaveGame);
UTFSaveGame::~UTFSaveGame() {}
// End Class UTFSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTFSaveGame, UTFSaveGame::StaticClass, TEXT("UTFSaveGame"), &Z_Registration_Info_UClass_UTFSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTFSaveGame), 2435476867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_3228809868(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
