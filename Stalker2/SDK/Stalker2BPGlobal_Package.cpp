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
	 * 		Name   -> PredefinedFunction UStalker2BPGlobal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStalker2BPGlobal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stalker2BPGlobal.Stalker2BPGlobal_C");
		return ptr;
	}

}


