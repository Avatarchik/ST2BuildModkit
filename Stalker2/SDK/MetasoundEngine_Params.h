#pragma once

/**
 * Name: Stalker2
 * Version: 0.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	 */
	struct UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params
	{
	public:
		TArray<struct FMetaSoundAssetDirectory>                    Directories;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	 */
	struct UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params
	{
	public:
		TArray<struct FMetaSoundAssetDirectory>                    Directories;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
