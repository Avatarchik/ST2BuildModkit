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
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.FillDefaultActionBinds
	 */
	struct UControlsSettingsDetails_C_FillDefaultActionBinds_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.GetAllUnusedAction
	 */
	struct UControlsSettingsDetails_C_GetAllUnusedAction_Params
	{
	public:
		TArray<struct FVictoryInput>                               UnusedAction;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.UseCache
	 */
	struct UControlsSettingsDetails_C_UseCache_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CachedCurrentBinds
	 */
	struct UControlsSettingsDetails_C_CachedCurrentBinds_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CheckOldInput
	 */
	struct UControlsSettingsDetails_C_CheckOldInput_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    Indexinput;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Out;                                                     // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Continue;                                                // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnMouseWheel
	 */
	struct UControlsSettingsDetails_C_CustomOnMouseWheel_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnMouseButtonDown
	 */
	struct UControlsSettingsDetails_C_CustomOnMouseButtonDown_Params
	{
	public:
		struct FPointerEvent                                       Input;                                                   // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnKeyDown
	 */
	struct UControlsSettingsDetails_C_CustomOnKeyDown_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetCurrentBinds
	 */
	struct UControlsSettingsDetails_C_SetCurrentBinds_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnMouseWheel
	 */
	struct UControlsSettingsDetails_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds_Steam
	 */
	struct UControlsSettingsDetails_C_SetDefaultsBinds_Steam_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds
	 */
	struct UControlsSettingsDetails_C_SetDefaultsBinds_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds_XBox
	 */
	struct UControlsSettingsDetails_C_SetDefaultsBinds_XBox_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnKeyDown
	 */
	struct UControlsSettingsDetails_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0040(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnMouseButtonDown
	 */
	struct UControlsSettingsDetails_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CallButtonIndex0
	 */
	struct UControlsSettingsDetails_C_CallButtonIndex0_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.Construct
	 */
	struct UControlsSettingsDetails_C_Construct_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.CallButtonIndex2
	 */
	struct UControlsSettingsDetails_C_CallButtonIndex2_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__CheckBox_Steam_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__CheckBox_Steam_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__Button_Move_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_PDA_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__Button_PDA_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_General_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UControlsSettingsDetails_C_BndEvt__Button_General_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ControlsSettingsDetails.ControlsSettingsDetails_C.ExecuteUbergraph_ControlsSettingsDetails
	 */
	struct UControlsSettingsDetails_C_ExecuteUbergraph_ControlsSettingsDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
