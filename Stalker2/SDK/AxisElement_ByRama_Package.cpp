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
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.SetValues2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVictoryInputAxis                           VictoryKeybind                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAxisElement_ByRama_C::SetValues2(const struct FVictoryInputAxis& VictoryKeybind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.SetValues2");
		
		UAxisElement_ByRama_C_SetValues2_Params params {};
		params.VictoryKeybind = VictoryKeybind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.SetValues
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVictoryInputAxis                           VictoryKeybind                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAxisElement_ByRama_C::SetValues(const struct FVictoryInputAxis& VictoryKeybind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.SetValues");
		
		UAxisElement_ByRama_C_SetValues_Params params {};
		params.VictoryKeybind = VictoryKeybind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAxisElement_ByRama_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.Tick");
		
		UAxisElement_ByRama_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.BndEvt__KeyButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAxisElement_ByRama_C::BndEvt__KeyButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.BndEvt__KeyButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UAxisElement_ByRama_C_BndEvt__KeyButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.BndEvt__KeyButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAxisElement_ByRama_C::BndEvt__KeyButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.BndEvt__KeyButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UAxisElement_ByRama_C_BndEvt__KeyButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.Remove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAxisElement_ByRama_C::Remove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.Remove");
		
		UAxisElement_ByRama_C_Remove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function AxisElement_ByRama.AxisElement_ByRama_C.ExecuteUbergraph_AxisElement_ByRama
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAxisElement_ByRama_C::ExecuteUbergraph_AxisElement_ByRama(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisElement_ByRama.AxisElement_ByRama_C.ExecuteUbergraph_AxisElement_ByRama");
		
		UAxisElement_ByRama_C_ExecuteUbergraph_AxisElement_ByRama_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisElement_ByRama_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisElement_ByRama_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AxisElement_ByRama.AxisElement_ByRama_C");
		return ptr;
	}

}


