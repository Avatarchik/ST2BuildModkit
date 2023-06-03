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
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.SetValues2
	 */
	struct UAxisElement_ByRama_C_SetValues2_Params
	{
	public:
		struct FVictoryInputAxis                                   VictoryKeybind;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.SetValues
	 */
	struct UAxisElement_ByRama_C_SetValues_Params
	{
	public:
		struct FVictoryInputAxis                                   VictoryKeybind;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.Tick
	 */
	struct UAxisElement_ByRama_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.BndEvt__KeyButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAxisElement_ByRama_C_BndEvt__KeyButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.BndEvt__KeyButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAxisElement_ByRama_C_BndEvt__KeyButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.Remove
	 */
	struct UAxisElement_ByRama_C_Remove_Params
	{	};

	/**
	 * Function AxisElement_ByRama.AxisElement_ByRama_C.ExecuteUbergraph_AxisElement_ByRama
	 */
	struct UAxisElement_ByRama_C_ExecuteUbergraph_AxisElement_ByRama_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E2HH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
