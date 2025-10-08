// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Public/BaseClass/TFCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTFCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter_NoRegister();
THEFALL_API UClass* Z_Construct_UClass_USaveActorInterface_NoRegister();
THEFALL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin Class ATFCharacter
void ATFCharacter::StaticRegisterNativesATFCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATFCharacter);
UClass* Z_Construct_UClass_ATFCharacter_NoRegister()
{
	return ATFCharacter::StaticClass();
}
struct Z_Construct_UClass_ATFCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClass/TFCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TFCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveActorID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TFCharacter" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WasSpawned_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TFCharacter" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveActorID;
	static void NewProp_WasSpawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WasSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATFCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFCharacter_Statics::NewProp_Statline = { "Statline", nullptr, (EPropertyFlags)0x00400000010a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFCharacter, Statline), Z_Construct_UClass_UStatlineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statline_MetaData), NewProp_Statline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATFCharacter_Statics::NewProp_SaveActorID = { "SaveActorID", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFCharacter, SaveActorID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveActorID_MetaData), NewProp_SaveActorID_MetaData) };
void Z_Construct_UClass_ATFCharacter_Statics::NewProp_WasSpawned_SetBit(void* Obj)
{
	((ATFCharacter*)Obj)->WasSpawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATFCharacter_Statics::NewProp_WasSpawned = { "WasSpawned", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATFCharacter), &Z_Construct_UClass_ATFCharacter_Statics::NewProp_WasSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WasSpawned_MetaData), NewProp_WasSpawned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATFCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFCharacter_Statics::NewProp_Statline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFCharacter_Statics::NewProp_SaveActorID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFCharacter_Statics::NewProp_WasSpawned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATFCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATFCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveActorInterface_NoRegister, (int32)VTABLE_OFFSET(ATFCharacter, ISaveActorInterface), false },  // 3484272103
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATFCharacter_Statics::ClassParams = {
	&ATFCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATFCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATFCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATFCharacter()
{
	if (!Z_Registration_Info_UClass_ATFCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATFCharacter.OuterSingleton, Z_Construct_UClass_ATFCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATFCharacter.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<ATFCharacter>()
{
	return ATFCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATFCharacter);
ATFCharacter::~ATFCharacter() {}
// End Class ATFCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATFCharacter, ATFCharacter::StaticClass, TEXT("ATFCharacter"), &Z_Registration_Info_UClass_ATFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATFCharacter), 975382064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_3646146509(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
