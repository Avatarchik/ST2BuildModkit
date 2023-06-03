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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MetasoundEngine.EMetaSoundMessageLevel
	 */
	enum class EMetaSoundMessageLevel : uint8_t
	{
		Error   = 0,
		Warning = 1,
		Info    = 2,
		MAX     = 3
	};

	/**
	 * Enum MetasoundEngine.EMetasoundSourceAudioFormat
	 */
	enum class EMetasoundSourceAudioFormat : uint8_t
	{
		Mono   = 0,
		Stereo = 1,
		COUNT  = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
	 * Size -> 0x0018
	 */
	struct FDefaultMetaSoundAssetAutoUpdateSettings
	{
	public:
		struct FSoftObjectPath                                     MetaSound;                                               // 0x0000(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
	 * Size -> 0x0010
	 */
	struct FMetaSoundAssetDirectory
	{
	public:
		struct FDirectoryPath                                      Directory;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
