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
	 * 		Name   -> PredefinedFunction UW_UserWaterElementText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_UserWaterElementText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_UserWaterElementText.W_UserWaterElementText_C");
		return ptr;
	}

}


