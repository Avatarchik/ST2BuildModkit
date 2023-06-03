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
	 * Class StreamlineBlueprint.StreamlineLibraryDLSSG
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetDLSSGMode(EUStreamlineDLSSGMode DLSSGMode);
		void STATIC_SetDLSSGFrames(int32_t Frames);
		EUStreamlineDLSSGSupport STATIC_QueryDLSSGSupport();
		bool STATIC_IsDLSSGSupported();
		bool STATIC_IsDLSSGModeSupported(EUStreamlineDLSSGMode DLSSGMode);
		TArray<EUStreamlineDLSSGMode> STATIC_GetSupportedDLSSGModes();
		void STATIC_GetDLSSGSupportedFramesRange(int32_t* MinFrames, int32_t* MaxFrames);
		EUStreamlineDLSSGMode STATIC_GetDLSSGMode();
		void STATIC_GetDLSSGMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor);
		int32_t STATIC_GetDLSSGFrames();
		EUStreamlineDLSSGMode STATIC_GetDefaultDLSSGMode();
		static UClass* StaticClass();
	};

	/**
	 * Class StreamlineBlueprint.StreamlineLibraryReflex
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetReflexMode(EUStreamlineReflexMode Mode);
		EUStreamlineReflexSupport STATIC_QueryReflexSupport();
		bool STATIC_IsReflexSupported();
		float STATIC_GetRenderLatencyInMs();
		EUStreamlineReflexMode STATIC_GetReflexMode();
		float STATIC_GetGameToRenderLatencyInMs();
		float STATIC_GetGameLatencyInMs();
		EUStreamlineReflexMode STATIC_GetDefaultReflexMode();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
