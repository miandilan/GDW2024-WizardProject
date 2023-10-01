// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GDW5_WizardProject/MyCharacter1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GDW5_WIZARDPROJECT_API UClass* Z_Construct_UClass_AMyCharacter1();
	GDW5_WIZARDPROJECT_API UClass* Z_Construct_UClass_AMyCharacter1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GDW5_WizardProject();
// End Cross Module References
	void AMyCharacter1::StaticRegisterNativesAMyCharacter1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter1);
	UClass* Z_Construct_UClass_AMyCharacter1_NoRegister()
	{
		return AMyCharacter1::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GDW5_WizardProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter1.h" },
		{ "ModuleRelativePath", "MyCharacter1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter1_Statics::ClassParams = {
		&AMyCharacter1::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyCharacter1()
	{
		if (!Z_Registration_Info_UClass_AMyCharacter1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter1.OuterSingleton, Z_Construct_UClass_AMyCharacter1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCharacter1.OuterSingleton;
	}
	template<> GDW5_WIZARDPROJECT_API UClass* StaticClass<AMyCharacter1>()
	{
		return AMyCharacter1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter1);
	AMyCharacter1::~AMyCharacter1() {}
	struct Z_CompiledInDeferFile_FID_GDW5_WizardProject_Source_GDW5_WizardProject_MyCharacter1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GDW5_WizardProject_Source_GDW5_WizardProject_MyCharacter1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter1, AMyCharacter1::StaticClass, TEXT("AMyCharacter1"), &Z_Registration_Info_UClass_AMyCharacter1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter1), 2114871648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GDW5_WizardProject_Source_GDW5_WizardProject_MyCharacter1_h_875214393(TEXT("/Script/GDW5_WizardProject"),
		Z_CompiledInDeferFile_FID_GDW5_WizardProject_Source_GDW5_WizardProject_MyCharacter1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GDW5_WizardProject_Source_GDW5_WizardProject_MyCharacter1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
