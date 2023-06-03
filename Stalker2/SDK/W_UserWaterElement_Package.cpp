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
	 * 		Name   -> PredefinedFunction UW_UserWaterElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_UserWaterElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_UserWaterElement.W_UserWaterElement_C");
		return ptr;
	}

}


