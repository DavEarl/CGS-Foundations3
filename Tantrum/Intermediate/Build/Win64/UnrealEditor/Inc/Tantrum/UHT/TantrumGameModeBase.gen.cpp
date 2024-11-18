// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumGameModeBase();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tantrum();
// End Cross Module References

// Begin Class ATantrumGameModeBase
void ATantrumGameModeBase::StaticRegisterNativesATantrumGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATantrumGameModeBase);
UClass* Z_Construct_UClass_ATantrumGameModeBase_NoRegister()
{
	return ATantrumGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ATantrumGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TantrumGameModeBase.h" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATantrumGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATantrumGameModeBase_Statics::ClassParams = {
	&ATantrumGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATantrumGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATantrumGameModeBase()
{
	if (!Z_Registration_Info_UClass_ATantrumGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATantrumGameModeBase.OuterSingleton, Z_Construct_UClass_ATantrumGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATantrumGameModeBase.OuterSingleton;
}
template<> TANTRUM_API UClass* StaticClass<ATantrumGameModeBase>()
{
	return ATantrumGameModeBase::StaticClass();
}
ATantrumGameModeBase::ATantrumGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumGameModeBase);
ATantrumGameModeBase::~ATantrumGameModeBase() {}
// End Class ATantrumGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATantrumGameModeBase, ATantrumGameModeBase::StaticClass, TEXT("ATantrumGameModeBase"), &Z_Registration_Info_UClass_ATantrumGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATantrumGameModeBase), 403162460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumGameModeBase_h_1203928499(TEXT("/Script/Tantrum"),
	Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
