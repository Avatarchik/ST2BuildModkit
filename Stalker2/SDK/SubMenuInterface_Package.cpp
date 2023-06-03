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
	 * 		Name   -> Function SubMenuInterface.SubMenuInterface_C.CallButtonIndex2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USubMenuInterface_C::CallButtonIndex2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubMenuInterface.SubMenuInterface_C.CallButtonIndex2");
		
		USubMenuInterface_C_CallButtonIndex2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function SubMenuInterface.SubMenuInterface_C.CallButtonIndex0
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USubMenuInterface_C::CallButtonIndex0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubMenuInterface.SubMenuInterface_C.CallButtonIndex0");
		
		USubMenuInterface_C_CallButtonIndex0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubMenuInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubMenuInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SubMenuInterface.SubMenuInterface_C");
		return ptr;
	}

}


