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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MetasoundEngine.MetasoundEditorGraphBase
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMetasoundEditorGraphBase : public UEdGraph
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSound
	 * Size -> 0x0300 (FullSize[0x0328] - InheritedSize[0x0028])
	 */
	class UMetaSound : public UObject
	{
	public:
		unsigned char                                              UnknownData_4ZHL[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMetasoundFrontendDocument                          RootMetaSoundDocument;                                   // 0x0080(0x01F8) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ReferencedAssetClassKeys[0x50];                          // 0x0278(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ReferenceAssetClassCache[0x50];                          // 0x02C8(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FGuid                                               AssetClassID;                                            // 0x0318(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundAssetSubsystem
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UMetaSoundAssetSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_CW6E[0xB0];                                  // 0x0030(0x00B0) MISSED OFFSET (PADDING)

	public:
		void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories);
		void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories);
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundSettings
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UMetaSoundSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bAutoUpdateEnabled;                                      // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RE8[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMetasoundFrontendClassName>                 AutoUpdateDenylist;                                      // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings>    AutoUpdateAssetDenylist;                                 // 0x0050(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoUpdateLogWarningOnDroppedConnection;                // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R249[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDirectoryPath>                              DirectoriesToRegister;                                   // 0x0068(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		int32_t                                                    DenyListCacheChangeID;                                   // 0x0078(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JCU[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundSource
	 * Size -> 0x0310 (FullSize[0x06A0] - InheritedSize[0x0390])
	 */
	class UMetaSoundSource : public USoundWaveProcedural
	{
	public:
		unsigned char                                              UnknownData_HG67[0x58];                                  // 0x0390(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMetasoundFrontendDocument                          RootMetaSoundDocument;                                   // 0x03E8(0x01F8) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ReferencedAssetClassKeys[0x50];                          // 0x05E0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ReferenceAssetClassCache[0x50];                          // 0x0630(0x0050) UNKNOWN PROPERTY: SetProperty
		EMetasoundSourceAudioFormat                                OutputFormat;                                            // 0x0680(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCE1[0x3];                                   // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               AssetClassID;                                            // 0x0684(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WUL[0xC];                                   // 0x0694(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
