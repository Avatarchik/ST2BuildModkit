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
	 * Enum HoudiniNiagara.EHoudiniAttributes
	 */
	enum class EHoudiniAttributes : uint8_t
	{
		HOUDINI_ATTR_BEGIN = 0,
		position           = 1,
		Normal             = 2,
		Time               = 3,
		POINTID            = 4,
		LIFE               = 5,
		Color              = 6,
		ALPHA              = 7,
		Velocity           = 8,
		Type               = 9,
		Impulse            = 10,
		AGE                = 11,
		HOUDINI_ATTR_SIZE  = 12,
		HOUDINI_ATTR_END   = 13,
		MAX                = 14
	};

	/**
	 * Enum HoudiniNiagara.EHoudiniPointCacheFileType
	 */
	enum class EHoudiniPointCacheFileType : uint8_t
	{
		Invalid = 0,
		CSV     = 1,
		JSON    = 2,
		BJSON   = 3,
		MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HoudiniNiagara.PointIndexes
	 * Size -> 0x0010
	 */
	struct FPointIndexes
	{
	public:
		TArray<int32_t>                                            SampleIndexes;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniNiagara.HoudiniEvent
	 * Size -> 0x0070
	 */
	struct FHoudiniEvent
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0018(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Impulse;                                                 // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2XL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Velocity;                                                // 0x0038(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    POINTID;                                                 // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LIFE;                                                    // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x005C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
