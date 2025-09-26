// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Public/Interface/SaveActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveActorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
THEFALL_API UClass* Z_Construct_UClass_USaveActorInterface();
THEFALL_API UClass* Z_Construct_UClass_USaveActorInterface_NoRegister();
THEFALL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveActorData();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin ScriptStruct FSaveActorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveActorData;
class UScriptStruct* FSaveActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveActorData, (UObject*)Z_Construct_UPackage__Script_TheFall(), TEXT("SaveActorData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveActorData.OuterSingleton;
}
template<> THEFALL_API UScriptStruct* StaticStruct<FSaveActorData>()
{
	return FSaveActorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveActorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "Category", "SaveActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Category", "SaveActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WasSpawned_MetaData[] = {
		{ "Category", "SaveActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "SaveActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static void NewProp_WasSpawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WasSpawned;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveActorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveActorData, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveActorData, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
void Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_WasSpawned_SetBit(void* Obj)
{
	((FSaveActorData*)Obj)->WasSpawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_WasSpawned = { "WasSpawned", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSaveActorData), &Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_WasSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WasSpawned_MetaData), NewProp_WasSpawned_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveActorData, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ByteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_WasSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveActorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
	nullptr,
	&NewStructOps,
	"SaveActorData",
	Z_Construct_UScriptStruct_FSaveActorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorData_Statics::PropPointers),
	sizeof(FSaveActorData),
	alignof(FSaveActorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveActorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveActorData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveActorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveActorData.InnerSingleton, Z_Construct_UScriptStruct_FSaveActorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveActorData.InnerSingleton;
}
// End ScriptStruct FSaveActorData

// Begin Interface USaveActorInterface
void USaveActorInterface::StaticRegisterNativesUSaveActorInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveActorInterface);
UClass* Z_Construct_UClass_USaveActorInterface_NoRegister()
{
	return USaveActorInterface::StaticClass();
}
struct Z_Construct_UClass_USaveActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveActorInterface_Statics::ClassParams = {
	&USaveActorInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveActorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveActorInterface()
{
	if (!Z_Registration_Info_UClass_USaveActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveActorInterface.OuterSingleton, Z_Construct_UClass_USaveActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveActorInterface.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<USaveActorInterface>()
{
	return USaveActorInterface::StaticClass();
}
USaveActorInterface::USaveActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveActorInterface);
USaveActorInterface::~USaveActorInterface() {}
// End Interface USaveActorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveActorData::StaticStruct, Z_Construct_UScriptStruct_FSaveActorData_Statics::NewStructOps, TEXT("SaveActorData"), &Z_Registration_Info_UScriptStruct_SaveActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveActorData), 733657510U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveActorInterface, USaveActorInterface::StaticClass, TEXT("USaveActorInterface"), &Z_Registration_Info_UClass_USaveActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveActorInterface), 4038510861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_3272709733(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
