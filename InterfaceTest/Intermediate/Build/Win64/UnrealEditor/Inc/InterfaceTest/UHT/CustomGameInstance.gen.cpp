// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterfaceTest/CustomGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	INTERFACETEST_API UClass* Z_Construct_UClass_UCustomGameInstance();
	INTERFACETEST_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterfaceTest();
// End Cross Module References
	void UCustomGameInstance::StaticRegisterNativesUCustomGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGameInstance);
	UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister()
	{
		return UCustomGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_InterfaceTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomGameInstance.h" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams = {
		&UCustomGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomGameInstance()
	{
		if (!Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton, Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton;
	}
	template<> INTERFACETEST_API UClass* StaticClass<UCustomGameInstance>()
	{
		return UCustomGameInstance::StaticClass();
	}
	UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameInstance);
	UCustomGameInstance::~UCustomGameInstance() {}
	struct Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_CustomGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_CustomGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGameInstance, UCustomGameInstance::StaticClass, TEXT("UCustomGameInstance"), &Z_Registration_Info_UClass_UCustomGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameInstance), 3761123405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_CustomGameInstance_h_2256951052(TEXT("/Script/InterfaceTest"),
		Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_CustomGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_CustomGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
