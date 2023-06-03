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
	 * 		Name   -> PredefinedFunction ULevelBookmarksSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelBookmarksSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelBookmarks.LevelBookmarksSettings");
		return ptr;
	}

}


