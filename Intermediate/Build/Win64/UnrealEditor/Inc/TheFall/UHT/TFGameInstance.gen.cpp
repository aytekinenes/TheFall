// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Public/Game/TFGameInstance.h"
#include "TheFall/Public/Interface/SaveActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTFGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
THEFALL_API UClass* Z_Construct_UClass_UTFGameInstance();
THEFALL_API UClass* Z_Construct_UClass_UTFGameInstance_NoRegister();
THEFALL_API UClass* Z_Construct_UClass_UTFSaveGame_NoRegister();
THEFALL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveActorData();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin Class UTFGameInstance Function AddActorData
struct Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics
{
	struct TFGameInstance_eventAddActorData_Parms
	{
		FGuid ActorID;
		FSaveActorData ActorData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/TFGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFGameInstance_eventAddActorData_Parms, ActorID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorID_MetaData), NewProp_ActorID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::NewProp_ActorData = { "ActorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFGameInstance_eventAddActorData_Parms, ActorData), Z_Construct_UScriptStruct_FSaveActorData, METADATA_PARAMS(0, nullptr) }; // 279375981
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::NewProp_ActorID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::NewProp_ActorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTFGameInstance, nullptr, "AddActorData", nullptr, nullptr, Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::TFGameInstance_eventAddActorData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::TFGameInstance_eventAddActorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTFGameInstance_AddActorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTFGameInstance_AddActorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTFGameInstance::execAddActorData)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ActorID);
	P_GET_STRUCT(FSaveActorData,Z_Param_ActorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActorData(Z_Param_Out_ActorID,Z_Param_ActorData);
	P_NATIVE_END;
}
// End Class UTFGameInstance Function AddActorData

// Begin Class UTFGameInstance Function DEV_LoadGame
struct Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/TFGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTFGameInstance, nullptr, "DEV_LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTFGameInstance::execDEV_LoadGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DEV_LoadGame();
	P_NATIVE_END;
}
// End Class UTFGameInstance Function DEV_LoadGame

// Begin Class UTFGameInstance Function DEV_SaveGame
struct Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/TFGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTFGameInstance, nullptr, "DEV_SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTFGameInstance::execDEV_SaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DEV_SaveGame();
	P_NATIVE_END;
}
// End Class UTFGameInstance Function DEV_SaveGame

// Begin Class UTFGameInstance Function GetActorData
struct Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics
{
	struct TFGameInstance_eventGetActorData_Parms
	{
		FGuid ActorID;
		FSaveActorData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/TFGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFGameInstance_eventGetActorData_Parms, ActorID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorID_MetaData), NewProp_ActorID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFGameInstance_eventGetActorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveActorData, METADATA_PARAMS(0, nullptr) }; // 279375981
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::NewProp_ActorID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTFGameInstance, nullptr, "GetActorData", nullptr, nullptr, Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::TFGameInstance_eventGetActorData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::TFGameInstance_eventGetActorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTFGameInstance_GetActorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTFGameInstance_GetActorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTFGameInstance::execGetActorData)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ActorID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveActorData*)Z_Param__Result=P_THIS->GetActorData(Z_Param_Out_ActorID);
	P_NATIVE_END;
}
// End Class UTFGameInstance Function GetActorData

// Begin Class UTFGameInstance
void UTFGameInstance::StaticRegisterNativesUTFGameInstance()
{
	UClass* Class = UTFGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorData", &UTFGameInstance::execAddActorData },
		{ "DEV_LoadGame", &UTFGameInstance::execDEV_LoadGame },
		{ "DEV_SaveGame", &UTFGameInstance::execDEV_SaveGame },
		{ "GetActorData", &UTFGameInstance::execGetActorData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTFGameInstance);
UClass* Z_Construct_UClass_UTFGameInstance_NoRegister()
{
	return UTFGameInstance::StaticClass();
}
struct Z_Construct_UClass_UTFGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/TFGameInstance.h" },
		{ "ModuleRelativePath", "Public/Game/TFGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/TFGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTFGameInstance_AddActorData, "AddActorData" }, // 200231433
		{ &Z_Construct_UFunction_UTFGameInstance_DEV_LoadGame, "DEV_LoadGame" }, // 4159774474
		{ &Z_Construct_UFunction_UTFGameInstance_DEV_SaveGame, "DEV_SaveGame" }, // 1317523253
		{ &Z_Construct_UFunction_UTFGameInstance_GetActorData, "GetActorData" }, // 1476513325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTFGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTFGameInstance_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTFGameInstance, SaveGameObject), Z_Construct_UClass_UTFSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameObject_MetaData), NewProp_SaveGameObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTFGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTFGameInstance_Statics::NewProp_SaveGameObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTFGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTFGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTFGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTFGameInstance_Statics::ClassParams = {
	&UTFGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTFGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTFGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTFGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTFGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTFGameInstance()
{
	if (!Z_Registration_Info_UClass_UTFGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTFGameInstance.OuterSingleton, Z_Construct_UClass_UTFGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTFGameInstance.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<UTFGameInstance>()
{
	return UTFGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTFGameInstance);
UTFGameInstance::~UTFGameInstance() {}
// End Class UTFGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTFGameInstance, UTFGameInstance::StaticClass, TEXT("UTFGameInstance"), &Z_Registration_Info_UClass_UTFGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTFGameInstance), 448222295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_3078651781(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Game_TFGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
