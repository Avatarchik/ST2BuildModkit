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
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	 */
	struct UStreamlineLibraryDLSSG_SetDLSSGMode_Params
	{
	public:
		EUStreamlineDLSSGMode                                      DLSSGMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames
	 */
	struct UStreamlineLibraryDLSSG_SetDLSSGFrames_Params
	{
	public:
		int32_t                                                    Frames;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	 */
	struct UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params
	{
	public:
		EUStreamlineDLSSGSupport                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	 */
	struct UStreamlineLibraryDLSSG_IsDLSSGSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	 */
	struct UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params
	{
	public:
		EUStreamlineDLSSGMode                                      DLSSGMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	 */
	struct UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params
	{
	public:
		TArray<EUStreamlineDLSSGMode>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange
	 */
	struct UStreamlineLibraryDLSSG_GetDLSSGSupportedFramesRange_Params
	{
	public:
		int32_t                                                    MinFrames;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxFrames;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	 */
	struct UStreamlineLibraryDLSSG_GetDLSSGMode_Params
	{
	public:
		EUStreamlineDLSSGMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion
	 */
	struct UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Params
	{
	public:
		int32_t                                                    MinDriverVersionMajor;                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinDriverVersionMinor;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames
	 */
	struct UStreamlineLibraryDLSSG_GetDLSSGFrames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	 */
	struct UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params
	{
	public:
		EUStreamlineDLSSGMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	 */
	struct UStreamlineLibraryReflex_SetReflexMode_Params
	{
	public:
		EUStreamlineReflexMode                                     Mode;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	 */
	struct UStreamlineLibraryReflex_QueryReflexSupport_Params
	{
	public:
		EUStreamlineReflexSupport                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	 */
	struct UStreamlineLibraryReflex_IsReflexSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	 */
	struct UStreamlineLibraryReflex_GetRenderLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	 */
	struct UStreamlineLibraryReflex_GetReflexMode_Params
	{
	public:
		EUStreamlineReflexMode                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	 */
	struct UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	 */
	struct UStreamlineLibraryReflex_GetGameLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	 */
	struct UStreamlineLibraryReflex_GetDefaultReflexMode_Params
	{
	public:
		EUStreamlineReflexMode                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
