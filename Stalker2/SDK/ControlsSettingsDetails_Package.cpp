/**
 * Name: Stalker2
 * Version: 0.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.FillDefaultActionBinds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::FillDefaultActionBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.FillDefaultActionBinds");
		
		UControlsSettingsDetails_C_FillDefaultActionBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.GetAllUnusedAction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVictoryInput>                       UnusedAction                                               (Parm, OutParm)
	 */
	void UControlsSettingsDetails_C::GetAllUnusedAction(TArray<struct FVictoryInput>* UnusedAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.GetAllUnusedAction");
		
		UControlsSettingsDetails_C_GetAllUnusedAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnusedAction != nullptr)
			*UnusedAction = params.UnusedAction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.UseCache
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::UseCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.UseCache");
		
		UControlsSettingsDetails_C_UseCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CachedCurrentBinds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::CachedCurrentBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CachedCurrentBinds");
		
		UControlsSettingsDetails_C_CachedCurrentBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CheckOldInput
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            Indexinput                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Continue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsSettingsDetails_C::CheckOldInput(const struct FKey& InputKey, int32_t Indexinput, bool* Out, bool* Continue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CheckOldInput");
		
		UControlsSettingsDetails_C_CheckOldInput_Params params {};
		params.InputKey = InputKey;
		params.Indexinput = Indexinput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (Continue != nullptr)
			*Continue = params.Continue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnMouseWheel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UControlsSettingsDetails_C::CustomOnMouseWheel(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnMouseWheel");
		
		UControlsSettingsDetails_C_CustomOnMouseWheel_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnMouseButtonDown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UControlsSettingsDetails_C::CustomOnMouseButtonDown(const struct FPointerEvent& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnMouseButtonDown");
		
		UControlsSettingsDetails_C_CustomOnMouseButtonDown_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnKeyDown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UControlsSettingsDetails_C::CustomOnKeyDown(const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CustomOnKeyDown");
		
		UControlsSettingsDetails_C_CustomOnKeyDown_Params params {};
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetCurrentBinds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::SetCurrentBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetCurrentBinds");
		
		UControlsSettingsDetails_C_SetCurrentBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UControlsSettingsDetails_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnMouseWheel");
		
		UControlsSettingsDetails_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds_Steam
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::SetDefaultsBinds_Steam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds_Steam");
		
		UControlsSettingsDetails_C_SetDefaultsBinds_Steam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::SetDefaultsBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds");
		
		UControlsSettingsDetails_C_SetDefaultsBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds_XBox
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::SetDefaultsBinds_XBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.SetDefaultsBinds_XBox");
		
		UControlsSettingsDetails_C_SetDefaultsBinds_XBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UControlsSettingsDetails_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnKeyDown");
		
		UControlsSettingsDetails_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UControlsSettingsDetails_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.OnMouseButtonDown");
		
		UControlsSettingsDetails_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CallButtonIndex0
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::CallButtonIndex0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CallButtonIndex0");
		
		UControlsSettingsDetails_C_CallButtonIndex0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.Construct");
		
		UControlsSettingsDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.CallButtonIndex2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::CallButtonIndex2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.CallButtonIndex2");
		
		UControlsSettingsDetails_C_CallButtonIndex2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsSettingsDetails_C::BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsSettingsDetails_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__CheckBox_Steam_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsSettingsDetails_C::BndEvt__CheckBox_Steam_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__CheckBox_Steam_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__CheckBox_Steam_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::BndEvt__Button_Move_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__Button_Move_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_PDA_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::BndEvt__Button_PDA_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_PDA_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__Button_PDA_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_General_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UControlsSettingsDetails_C::BndEvt__Button_General_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.BndEvt__Button_General_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UControlsSettingsDetails_C_BndEvt__Button_General_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function ControlsSettingsDetails.ControlsSettingsDetails_C.ExecuteUbergraph_ControlsSettingsDetails
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsSettingsDetails_C::ExecuteUbergraph_ControlsSettingsDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsSettingsDetails.ControlsSettingsDetails_C.ExecuteUbergraph_ControlsSettingsDetails");
		
		UControlsSettingsDetails_C_ExecuteUbergraph_ControlsSettingsDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlsSettingsDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlsSettingsDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControlsSettingsDetails.ControlsSettingsDetails_C");
		return ptr;
	}

}


