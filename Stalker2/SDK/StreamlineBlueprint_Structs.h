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
	 * Enum StreamlineBlueprint.UStreamlineDLSSGSupport
	 */
	enum class EUStreamlineDLSSGSupport : uint8_t
	{
		UStreamlineDLSSGSupportSupported                                    = 0,
		UStreamlineDLSSGSupportNotSupported                                 = 1,
		UStreamlineDLSSGSupportNotSupportedIncompatibleHardware             = 2,
		UStreamlineDLSSGSupportNotSupportedDriverOutOfDate                  = 3,
		UStreamlineDLSSGSupportNotSupportedOperatingSystemOutOfDate         = 4,
		UStreamlineDLSSGSupportNotSupportedByPlatformAtBuildTime            = 5,
		UStreamlineDLSSGSupportNotSupportedIncompatibleAPICaptureToolActive = 6,
		UStreamlineDLSSGSupportUStreamlineDLSSGSupport_MAX                  = 7
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineDLSSGMode
	 */
	enum class EUStreamlineDLSSGMode : uint8_t
	{
		UStreamlineDLSSGModeOff                      = 0,
		UStreamlineDLSSGModeOn                       = 1,
		UStreamlineDLSSGModeUStreamlineDLSSGMode_MAX = 2
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineReflexMode
	 */
	enum class EUStreamlineReflexMode : uint8_t
	{
		UStreamlineReflexModeDisabled                  = 0,
		UStreamlineReflexModeEnabled                   = 1,
		UStreamlineReflexModeEnabledPlusBoost          = 2,
		UStreamlineReflexModeUStreamlineReflexMode_MAX = 3
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineReflexSupport
	 */
	enum class EUStreamlineReflexSupport : uint8_t
	{
		UStreamlineReflexSupportSupported                    = 0,
		UStreamlineReflexSupportNotSupported                 = 1,
		UStreamlineReflexSupportUStreamlineReflexSupport_MAX = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
