// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InterfaceTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InterfaceTest()
	{
		if (!Z_Registration_Info_UPackage__Script_InterfaceTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InterfaceTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x81E5E968,
				0x10B4821B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InterfaceTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InterfaceTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InterfaceTest(Z_Construct_UPackage__Script_InterfaceTest, TEXT("/Script/InterfaceTest"), Z_Registration_Info_UPackage__Script_InterfaceTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x81E5E968, 0x10B4821B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
