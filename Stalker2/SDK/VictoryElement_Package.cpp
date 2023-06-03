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
	 * 		Name   -> Function VictoryElement.VictoryElement_C.SetValues2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVictoryInput                               KeyBind                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UVictoryElement_C::SetValues2(const struct FVictoryInput& KeyBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryElement.VictoryElement_C.SetValues2");
		
		UVictoryElement_C_SetValues2_Params params {};
		params.KeyBind = KeyBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function VictoryElement.VictoryElement_C.SetValues
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVictoryInput                               KeyBind                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UVictoryElement_C::SetValues(const struct FVictoryInput& KeyBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryElement.VictoryElement_C.SetValues");
		
		UVictoryElement_C_SetValues_Params params {};
		params.KeyBind = KeyBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function VictoryElement.VictoryElement_C.Remove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVictoryElement_C::Remove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryElement.VictoryElement_C.Remove");
		
		UVictoryElement_C_Remove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function VictoryElement.VictoryElement_C.BndEvt__KeyButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UVictoryElement_C::BndEvt__KeyButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryElement.VictoryElement_C.BndEvt__KeyButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature");
		
		UVictoryElement_C_BndEvt__KeyButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function VictoryElement.VictoryElement_C.BndEvt__KeyButton2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UVictoryElement_C::BndEvt__KeyButton2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryElement.VictoryElement_C.BndEvt__KeyButton2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UVictoryElement_C_BndEvt__KeyButton2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function VictoryElement.VictoryElement_C.ExecuteUbergraph_VictoryElement
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVictoryElement_C::ExecuteUbergraph_VictoryElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryElement.VictoryElement_C.ExecuteUbergraph_VictoryElement");
		
		UVictoryElement_C_ExecuteUbergraph_VictoryElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VictoryElement.VictoryElement_C");
		return ptr;
	}

}


