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
	 * Function W_SaveGame.W_SaveGame_C.Back
	 */
	struct UW_SaveGame_C_Back_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.OnKeyDown
	 */
	struct UW_SaveGame_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0040(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.PreConstruct
	 */
	struct UW_SaveGame_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.Tick
	 */
	struct UW_SaveGame_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Save_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Save_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Cancel_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Cancel_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Delete_BTN_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Delete_BTN_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__EditableText_130_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__EditableText_130_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Button_No_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Button_Yes_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Button_Yes_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Button_No_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Button_No_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Load_BTN_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Load_BTN_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Button_Yes_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Button_Yes_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.BndEvt__Button_No_4_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_SaveGame_C_BndEvt__Button_No_4_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_SaveGame.W_SaveGame_C.ExecuteUbergraph_W_SaveGame
	 */
	struct UW_SaveGame_C_ExecuteUbergraph_W_SaveGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
