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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_GameMenuElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_GameMenuElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GameMenuElement.W_GameMenuElement_C");
		return ptr;
	}

}


