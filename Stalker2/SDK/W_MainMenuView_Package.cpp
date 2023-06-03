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
	 * 		Name   -> Function W_MainMenuView.W_MainMenuView_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UW_MainMenuView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenuView.W_MainMenuView_C.Construct");
		
		UW_MainMenuView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function W_MainMenuView.W_MainMenuView_C.PostGamepadButtonClick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InButtonIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenuView_C::PostGamepadButtonClick(int32_t InButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenuView.W_MainMenuView_C.PostGamepadButtonClick");
		
		UW_MainMenuView_C_PostGamepadButtonClick_Params params {};
		params.InButtonIndex = InButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function W_MainMenuView.W_MainMenuView_C.PostButtonClickBack
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UW_MainMenuView_C::PostButtonClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenuView.W_MainMenuView_C.PostButtonClickBack");
		
		UW_MainMenuView_C_PostButtonClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function W_MainMenuView.W_MainMenuView_C.ExecuteUbergraph_W_MainMenuView
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenuView_C::ExecuteUbergraph_W_MainMenuView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenuView.W_MainMenuView_C.ExecuteUbergraph_W_MainMenuView");
		
		UW_MainMenuView_C_ExecuteUbergraph_W_MainMenuView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MainMenuView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MainMenuView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MainMenuView.W_MainMenuView_C");
		return ptr;
	}

}


