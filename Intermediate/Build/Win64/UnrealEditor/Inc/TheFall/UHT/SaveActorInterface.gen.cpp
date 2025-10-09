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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
THEFALL_API UClass* Z_Construct_UClass_USaveActorInterface();
THEFALL_API UClass* Z_Construct_UClass_USaveActorInterface_NoRegister();
THEFALL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveActorData();
THEFALL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveComponentData();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin ScriptStruct FSaveComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveComponentData;
class UScriptStruct* FSaveComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveComponentData, (UObject*)Z_Construct_UPackage__Script_TheFall(), TEXT("SaveComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveComponentData.OuterSingleton;
}
template<> THEFALL_API UScriptStruct* StaticStruct<FSaveComponentData>()
{
	return FSaveComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Category", "SaveComponentData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Category", "SaveComponentData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "Category", "SaveComponentData" },
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveComponentData, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveComponentData, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveComponentData, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
	nullptr,
	&NewStructOps,
	"SaveComponentData",
	Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers),
	sizeof(FSaveComponentData),
	alignof(FSaveComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveComponentData.InnerSingleton, Z_Construct_UScriptStruct_FSaveComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveComponentData.InnerSingleton;
}
// End ScriptStruct FSaveComponentData

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentData_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentData;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ComponentData_Inner = { "ComponentData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSaveComponentData, METADATA_PARAMS(0, nullptr) }; // 3505926419
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ComponentData = { "ComponentData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveActorData, ComponentData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentData_MetaData), NewProp_ComponentData_MetaData) }; // 3505926419
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ComponentData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorData_Statics::NewProp_ComponentData,
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

// Begin Interface USaveActorInterface Function GetActorSaveID
struct SaveActorInterface_eventGetActorSaveID_Parms
{
	FGuid ReturnValue;
};
FGuid ISaveActorInterface::GetActorSaveID()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorSaveID instead.");
	SaveActorInterface_eventGetActorSaveID_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveActorInterface_GetActorSaveID = FName(TEXT("GetActorSaveID"));
FGuid ISaveActorInterface::Execute_GetActorSaveID(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveActorInterface::StaticClass()));
	SaveActorInterface_eventGetActorSaveID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveActorInterface_GetActorSaveID);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveActorInterface*)(O->GetNativeInterfaceAddress(USaveActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetActorSaveID_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveActorInterface_eventGetActorSaveID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveActorInterface, nullptr, "GetActorSaveID", nullptr, nullptr, Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::PropPointers), sizeof(SaveActorInterface_eventGetActorSaveID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveActorInterface_eventGetActorSaveID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveActorInterface_GetActorSaveID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveActorInterface_GetActorSaveID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveActorInterface::execGetActorSaveID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetActorSaveID_Implementation();
	P_NATIVE_END;
}
// End Interface USaveActorInterface Function GetActorSaveID

// Begin Interface USaveActorInterface Function GetComponentSaveData
struct SaveActorInterface_eventGetComponentSaveData_Parms
{
	FSaveComponentData ReturnValue;
};
FSaveComponentData ISaveActorInterface::GetComponentSaveData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetComponentSaveData instead.");
	SaveActorInterface_eventGetComponentSaveData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveActorInterface_GetComponentSaveData = FName(TEXT("GetComponentSaveData"));
FSaveComponentData ISaveActorInterface::Execute_GetComponentSaveData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveActorInterface::StaticClass()));
	SaveActorInterface_eventGetComponentSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveActorInterface_GetComponentSaveData);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveActorInterface*)(O->GetNativeInterfaceAddress(USaveActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetComponentSaveData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveActorInterface_eventGetComponentSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveComponentData, METADATA_PARAMS(0, nullptr) }; // 3505926419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveActorInterface, nullptr, "GetComponentSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::PropPointers), sizeof(SaveActorInterface_eventGetComponentSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveActorInterface_eventGetComponentSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveActorInterface::execGetComponentSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveComponentData*)Z_Param__Result=P_THIS->GetComponentSaveData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveActorInterface Function GetComponentSaveData

// Begin Interface USaveActorInterface Function GetSaveData
struct SaveActorInterface_eventGetSaveData_Parms
{
	FSaveActorData ReturnValue;
};
FSaveActorData ISaveActorInterface::GetSaveData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSaveData instead.");
	SaveActorInterface_eventGetSaveData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveActorInterface_GetSaveData = FName(TEXT("GetSaveData"));
FSaveActorData ISaveActorInterface::Execute_GetSaveData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveActorInterface::StaticClass()));
	SaveActorInterface_eventGetSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveActorInterface_GetSaveData);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveActorInterface*)(O->GetNativeInterfaceAddress(USaveActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSaveData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveActorInterface_eventGetSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveActorData, METADATA_PARAMS(0, nullptr) }; // 279375981
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveActorInterface, nullptr, "GetSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::PropPointers), sizeof(SaveActorInterface_eventGetSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveActorInterface_eventGetSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveActorInterface_GetSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveActorInterface_GetSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveActorInterface::execGetSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveActorData*)Z_Param__Result=P_THIS->GetSaveData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveActorInterface Function GetSaveData

// Begin Interface USaveActorInterface Function SetActorGUID
struct SaveActorInterface_eventSetActorGUID_Parms
{
	FGuid NewGuid;
};
void ISaveActorInterface::SetActorGUID(FGuid const& NewGuid)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActorGUID instead.");
}
static FName NAME_USaveActorInterface_SetActorGUID = FName(TEXT("SetActorGUID"));
void ISaveActorInterface::Execute_SetActorGUID(UObject* O, FGuid const& NewGuid)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveActorInterface::StaticClass()));
	SaveActorInterface_eventSetActorGUID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveActorInterface_SetActorGUID);
	if (Func)
	{
		Parms.NewGuid=NewGuid;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveActorInterface*)(O->GetNativeInterfaceAddress(USaveActorInterface::StaticClass())))
	{
		I->SetActorGUID_Implementation(NewGuid);
	}
}
struct Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::NewProp_NewGuid = { "NewGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveActorInterface_eventSetActorGUID_Parms, NewGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGuid_MetaData), NewProp_NewGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::NewProp_NewGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveActorInterface, nullptr, "SetActorGUID", nullptr, nullptr, Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::PropPointers), sizeof(SaveActorInterface_eventSetActorGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveActorInterface_eventSetActorGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveActorInterface_SetActorGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveActorInterface_SetActorGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveActorInterface::execSetActorGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NewGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorGUID_Implementation(Z_Param_Out_NewGuid);
	P_NATIVE_END;
}
// End Interface USaveActorInterface Function SetActorGUID

// Begin Interface USaveActorInterface Function SetComponentSaveData
struct SaveActorInterface_eventSetComponentSaveData_Parms
{
	FSaveComponentData Data;
};
void ISaveActorInterface::SetComponentSaveData(FSaveComponentData Data)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetComponentSaveData instead.");
}
static FName NAME_USaveActorInterface_SetComponentSaveData = FName(TEXT("SetComponentSaveData"));
void ISaveActorInterface::Execute_SetComponentSaveData(UObject* O, FSaveComponentData Data)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveActorInterface::StaticClass()));
	SaveActorInterface_eventSetComponentSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveActorInterface_SetComponentSaveData);
	if (Func)
	{
		Parms.Data=Data;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveActorInterface*)(O->GetNativeInterfaceAddress(USaveActorInterface::StaticClass())))
	{
		I->SetComponentSaveData_Implementation(Data);
	}
}
struct Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveActorInterface_eventSetComponentSaveData_Parms, Data), Z_Construct_UScriptStruct_FSaveComponentData, METADATA_PARAMS(0, nullptr) }; // 3505926419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveActorInterface, nullptr, "SetComponentSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::PropPointers), sizeof(SaveActorInterface_eventSetComponentSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveActorInterface_eventSetComponentSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveActorInterface::execSetComponentSaveData)
{
	P_GET_STRUCT(FSaveComponentData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetComponentSaveData_Implementation(Z_Param_Data);
	P_NATIVE_END;
}
// End Interface USaveActorInterface Function SetComponentSaveData

// Begin Interface USaveActorInterface
void USaveActorInterface::StaticRegisterNativesUSaveActorInterface()
{
	UClass* Class = USaveActorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorSaveID", &ISaveActorInterface::execGetActorSaveID },
		{ "GetComponentSaveData", &ISaveActorInterface::execGetComponentSaveData },
		{ "GetSaveData", &ISaveActorInterface::execGetSaveData },
		{ "SetActorGUID", &ISaveActorInterface::execSetActorGUID },
		{ "SetComponentSaveData", &ISaveActorInterface::execSetComponentSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveActorInterface_GetActorSaveID, "GetActorSaveID" }, // 2172819389
		{ &Z_Construct_UFunction_USaveActorInterface_GetComponentSaveData, "GetComponentSaveData" }, // 585129578
		{ &Z_Construct_UFunction_USaveActorInterface_GetSaveData, "GetSaveData" }, // 1948906570
		{ &Z_Construct_UFunction_USaveActorInterface_SetActorGUID, "SetActorGUID" }, // 865962969
		{ &Z_Construct_UFunction_USaveActorInterface_SetComponentSaveData, "SetComponentSaveData" }, // 3328726718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ FSaveComponentData::StaticStruct, Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewStructOps, TEXT("SaveComponentData"), &Z_Registration_Info_UScriptStruct_SaveComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveComponentData), 3505926419U) },
		{ FSaveActorData::StaticStruct, Z_Construct_UScriptStruct_FSaveActorData_Statics::NewStructOps, TEXT("SaveActorData"), &Z_Registration_Info_UScriptStruct_SaveActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveActorData), 279375981U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveActorInterface, USaveActorInterface::StaticClass, TEXT("USaveActorInterface"), &Z_Registration_Info_UClass_USaveActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveActorInterface), 3057924945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_4239169221(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_SaveActorInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
