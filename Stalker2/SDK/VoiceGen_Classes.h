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
	 * Class VoiceGen.VoiceGenActor
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoiceGenActor : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVoiceGenParams                                     Params;                                                  // 0x0038(0x000C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RQ22[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoiceGen.VoiceGenSoundWave
	 * Size -> 0x0048 (FullSize[0x0380] - InheritedSize[0x0338])
	 */
	class UVoiceGenSoundWave : public USoundWave
	{
	public:
		class UVoiceGenActor*                                      RequestedActor;                                          // 0x0338(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              RequestedText;                                           // 0x0340(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVoiceGenParams                                     CachedParams;                                            // 0x0350(0x000C) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CEV7[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CachedText;                                              // 0x0360(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SPEI[0x10];                                  // 0x0370(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
