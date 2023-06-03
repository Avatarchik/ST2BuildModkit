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
	 * 		Name   -> PredefinedFunction UDebugToolGUIWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugToolGUIWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugGUI.DebugToolGUIWrapper");
		return ptr;
	}

}


