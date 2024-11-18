// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tantrum();
// End Cross Module References

// Begin Class ATantrumCharacterBase
void ATantrumCharacterBase::StaticRegisterNativesATantrumCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATantrumCharacterBase);
UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister()
{
	return ATantrumCharacterBase::StaticClass();
}
struct Z_Construct_UClass_ATantrumCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TantrumCharacterBase.h" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATantrumCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams = {
	&ATantrumCharacterBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATantrumCharacterBase()
{
	if (!Z_Registration_Info_UClass_ATantrumCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATantrumCharacterBase.OuterSingleton, Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATantrumCharacterBase.OuterSingleton;
}
template<> TANTRUM_API UClass* StaticClass<ATantrumCharacterBase>()
{
	return ATantrumCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumCharacterBase);
ATantrumCharacterBase::~ATantrumCharacterBase() {}
// End Class ATantrumCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATantrumCharacterBase, ATantrumCharacterBase::StaticClass, TEXT("ATantrumCharacterBase"), &Z_Registration_Info_UClass_ATantrumCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATantrumCharacterBase), 576278599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_1499833013(TEXT("/Script/Tantrum"),
	Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
