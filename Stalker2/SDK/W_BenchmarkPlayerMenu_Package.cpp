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
	 * 		Name   -> Function W_BenchmarkPlayerMenu.W_BenchmarkPlayerMenu_C.BndEvt__W_BP_BenchmarkPlayerMenu_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UW_BenchmarkPlayerMenu_C::BndEvt__W_BP_BenchmarkPlayerMenu_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BenchmarkPlayerMenu.W_BenchmarkPlayerMenu_C.BndEvt__W_BP_BenchmarkPlayerMenu_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_BenchmarkPlayerMenu_C_BndEvt__W_BP_BenchmarkPlayerMenu_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function W_BenchmarkPlayerMenu.W_BenchmarkPlayerMenu_C.ExecuteUbergraph_W_BenchmarkPlayerMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BenchmarkPlayerMenu_C::ExecuteUbergraph_W_BenchmarkPlayerMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BenchmarkPlayerMenu.W_BenchmarkPlayerMenu_C.ExecuteUbergraph_W_BenchmarkPlayerMenu");
		
		UW_BenchmarkPlayerMenu_C_ExecuteUbergraph_W_BenchmarkPlayerMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_BenchmarkPlayerMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_BenchmarkPlayerMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BenchmarkPlayerMenu.W_BenchmarkPlayerMenu_C");
		return ptr;
	}

}


