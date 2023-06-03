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
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.GetAllUnusedAxis
	 */
	struct UAxisMain_ByRama_C_GetAllUnusedAxis_Params
	{
	public:
		TArray<struct FVictoryInputAxis>                           Out;                                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.UseCash
	 */
	struct UAxisMain_ByRama_C_UseCash_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.CachedCurrentAxisBinds
	 */
	struct UAxisMain_ByRama_C_CachedCurrentAxisBinds_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.CheckOldInput
	 */
	struct UAxisMain_ByRama_C_CheckOldInput_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Out;                                                     // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Continue;                                                // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.CustomOnMouseMove
	 */
	struct UAxisMain_ByRama_C_CustomOnMouseMove_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.CustomOnMouseWheel
	 */
	struct UAxisMain_ByRama_C_CustomOnMouseWheel_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.CustomOnKeyDown
	 */
	struct UAxisMain_ByRama_C_CustomOnKeyDown_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.CustomOnMouseButtonDown
	 */
	struct UAxisMain_ByRama_C_CustomOnMouseButtonDown_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.SetCurrentBinds
	 */
	struct UAxisMain_ByRama_C_SetCurrentBinds_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.SetDefaultBinds_Steam
	 */
	struct UAxisMain_ByRama_C_SetDefaultBinds_Steam_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.SetDefaultBinds_XBox
	 */
	struct UAxisMain_ByRama_C_SetDefaultBinds_XBox_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.ChangeAxisScale
	 */
	struct UAxisMain_ByRama_C_ChangeAxisScale_Params
	{
	public:
		struct FVictoryInputAxis                                   VictoryInputAxis;                                        // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		double                                                     NewBindingScale;                                         // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAxisElement_ByRama_C*                               AxisElement;                                             // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.SetDefaultBinds
	 */
	struct UAxisMain_ByRama_C_SetDefaultBinds_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.OnMouseMove
	 */
	struct UAxisMain_ByRama_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.OnMouseWheel
	 */
	struct UAxisMain_ByRama_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.OnMouseButtonDown
	 */
	struct UAxisMain_ByRama_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.OnKeyDown
	 */
	struct UAxisMain_ByRama_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0040(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.Construct
	 */
	struct UAxisMain_ByRama_C_Construct_Params
	{	};

	/**
	 * Function AxisMain_ByRama.AxisMain_ByRama_C.ExecuteUbergraph_AxisMain_ByRama
	 */
	struct UAxisMain_ByRama_C_ExecuteUbergraph_AxisMain_ByRama_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
