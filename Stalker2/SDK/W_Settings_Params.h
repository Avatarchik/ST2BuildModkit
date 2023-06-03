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
	 * Function W_Settings.W_Settings_C.SetInitialValues
	 */
	struct UW_Settings_C_SetInitialValues_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.PopulateLanguageBox
	 */
	struct UW_Settings_C_PopulateLanguageBox_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.Accept
	 */
	struct UW_Settings_C_Accept_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.CachedKeyAction
	 */
	struct UW_Settings_C_CachedKeyAction_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.Cancel
	 */
	struct UW_Settings_C_Cancel_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.OnKeyDown
	 */
	struct UW_Settings_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0040(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Slider_180_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Slider_180_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Slider_344_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Slider_344_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Button_146_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Button_146_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Button_338_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Button_338_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Audio_BTN_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Audio_BTN_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Video_BTN_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Video_BTN_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Game_BTN_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Game_BTN_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Control_BTN_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Control_BTN_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Slider_MouseSensitive_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Slider_MouseSensitive_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Slider_MouseAimSensitive_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Slider_MouseAimSensitive_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Button_No_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Slider_VolumeVoice_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Slider_VolumeVoice_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__Slider_VolumeMutant_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__Slider_VolumeMutant_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__CheckBox_Volume_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__CheckBox_Volume_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__CheckBox_VolumeMusic_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__CheckBox_VolumeMusic_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__CheckBox_VolumeVoice_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__CheckBox_VolumeVoice_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__CheckBox_VolumeMutant_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__CheckBox_VolumeMutant_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.BndEvt__LanguageComboBoxString_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UW_Settings_C_BndEvt__LanguageComboBoxString_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Settings.W_Settings_C.ExecuteUbergraph_W_Settings
	 */
	struct UW_Settings_C_ExecuteUbergraph_W_Settings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
