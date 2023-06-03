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
	 * Enum DatasmithCore.EDatasmithLightShape
	 */
	enum class EDatasmithLightShape : uint8_t
	{
		Rectangle = 0,
		Disc      = 1,
		Sphere    = 2,
		Cylinder  = 3,
		None      = 4,
		MAX       = 5
	};

	/**
	 * Enum DatasmithCore.EDatasmithTextureMode
	 */
	enum class EDatasmithTextureMode : uint8_t
	{
		Diffuse         = 0,
		Specular        = 1,
		Normal          = 2,
		NormalGreenInv  = 3,
		UNUSED_Displace = 4,
		Other           = 5,
		Bump            = 6,
		Ies             = 7,
		MAX             = 8
	};

	/**
	 * Enum DatasmithCore.EDatasmithTextureFilter
	 */
	enum class EDatasmithTextureFilter : uint8_t
	{
		Nearest   = 0,
		Bilinear  = 1,
		Trilinear = 2,
		Default   = 3,
		MAX       = 4
	};

	/**
	 * Enum DatasmithCore.EDatasmithTextureAddress
	 */
	enum class EDatasmithTextureAddress : uint8_t
	{
		Wrap   = 0,
		Clamp  = 1,
		Mirror = 2,
		MAX    = 3
	};

	/**
	 * Enum DatasmithCore.EDatasmithTextureFormat
	 */
	enum class EDatasmithTextureFormat : uint8_t
	{
		PNG  = 0,
		JPEG = 1,
		MAX  = 2
	};

	/**
	 * Enum DatasmithCore.EDatasmithColorSpace
	 */
	enum class EDatasmithColorSpace : uint8_t
	{
		Default = 0,
		sRGB    = 1,
		Linear  = 2,
		MAX     = 3
	};

	/**
	 * Enum DatasmithCore.EDatasmithKeyValuePropertyType
	 */
	enum class EDatasmithKeyValuePropertyType : uint8_t
	{
		String  = 0,
		Color   = 1,
		Float   = 2,
		Bool    = 3,
		Texture = 4,
		Vector  = 5,
		Integer = 6,
		MAX     = 7
	};

	/**
	 * Enum DatasmithCore.EDatasmithActorRemovalRule
	 */
	enum class EDatasmithActorRemovalRule : uint8_t
	{
		RemoveChildren                       = 0,
		KeepChildrenAndKeepRelativeTransform = 1,
		MAX                                  = 2
	};

	/**
	 * Enum DatasmithCore.EDatasmithActorAttachmentRule
	 */
	enum class EDatasmithActorAttachmentRule : uint8_t
	{
		KeepRelativeTransform = 0,
		KeepWorldTransform    = 1,
		MAX                   = 2
	};

	/**
	 * Enum DatasmithCore.EDatasmithCompletionMode
	 */
	enum class EDatasmithCompletionMode : uint8_t
	{
		KeepState      = 0,
		RestoreState   = 1,
		ProjectDefault = 2,
		MAX            = 3
	};

	/**
	 * Enum DatasmithCore.EDatasmithPropertyCategory
	 */
	enum class EDatasmithPropertyCategory : uint8_t
	{
		Undefined        = 0,
		Generic          = 1,
		RelativeLocation = 2,
		RelativeRotation = 3,
		RelativeScale3D  = 4,
		Visibility       = 5,
		Material         = 6,
		Color            = 7,
		Option           = 8,
		MAX              = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DatasmithCore.DatasmithMeshSourceModel
	 * Size -> 0x0040
	 */
	struct FDatasmithMeshSourceModel
	{
	public:
		unsigned char                                              UnknownData_LW4J[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
