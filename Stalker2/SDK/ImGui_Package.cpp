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
	 * 		Name   -> PredefinedFunction UImGuiInputHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImGuiInputHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImGui.ImGuiInputHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImGuiSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImGuiSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImGui.ImGuiSettings");
		return ptr;
	}

}


