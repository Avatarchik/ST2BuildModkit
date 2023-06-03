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
	 * 		Name   -> PredefinedFunction UGamepadCursorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadCursorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GamepadUMGPlugin.GamepadCursorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B56CF0
	 * 		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UVirtualCursorFunctionLibrary::STATIC_IsCursorOverInteractableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget");
		
		UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B56C70
	 * 		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVirtualCursorFunctionLibrary::STATIC_EnableVirtualCursor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor");
		
		UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B56BF0
	 * 		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVirtualCursorFunctionLibrary::STATIC_DisableVirtualCursor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor");
		
		UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVirtualCursorFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVirtualCursorFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GamepadUMGPlugin.VirtualCursorFunctionLibrary");
		return ptr;
	}

}


