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
	 * 		RVA    -> 0x0175DFA0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUStreamlineDLSSGMode                              DLSSGMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryDLSSG::STATIC_SetDLSSGMode(EUStreamlineDLSSGMode DLSSGMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode");
		
		UStreamlineLibraryDLSSG_SetDLSSGMode_Params params {};
		params.DLSSGMode = DLSSGMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DF20
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Frames                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryDLSSG::STATIC_SetDLSSGFrames(int32_t Frames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames");
		
		UStreamlineLibraryDLSSG_SetDLSSGFrames_Params params {};
		params.Frames = Frames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DEC0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineDLSSGSupport UStreamlineLibraryDLSSG::STATIC_QueryDLSSGSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport");
		
		UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DE60
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UStreamlineLibraryDLSSG::STATIC_IsDLSSGSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported");
		
		UStreamlineLibraryDLSSG_IsDLSSGSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DDE0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUStreamlineDLSSGMode                              DLSSGMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UStreamlineLibraryDLSSG::STATIC_IsDLSSGModeSupported(EUStreamlineDLSSGMode DLSSGMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported");
		
		UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params params {};
		params.DLSSGMode = DLSSGMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DD60
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<EUStreamlineDLSSGMode> UStreamlineLibraryDLSSG::STATIC_GetSupportedDLSSGModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes");
		
		UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DB60
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinFrames                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxFrames                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryDLSSG::STATIC_GetDLSSGSupportedFramesRange(int32_t* MinFrames, int32_t* MaxFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange");
		
		UStreamlineLibraryDLSSG_GetDLSSGSupportedFramesRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinFrames != nullptr)
			*MinFrames = params.MinFrames;
		if (MaxFrames != nullptr)
			*MaxFrames = params.MaxFrames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DB30
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::STATIC_GetDLSSGMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode");
		
		UStreamlineLibraryDLSSG_GetDLSSGMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DA50
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinDriverVersionMajor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinDriverVersionMinor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryDLSSG::STATIC_GetDLSSGMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion");
		
		UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinDriverVersionMajor != nullptr)
			*MinDriverVersionMajor = params.MinDriverVersionMajor;
		if (MinDriverVersionMinor != nullptr)
			*MinDriverVersionMinor = params.MinDriverVersionMinor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DA20
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UStreamlineLibraryDLSSG::STATIC_GetDLSSGFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames");
		
		UStreamlineLibraryDLSSG_GetDLSSGFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DC40
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::STATIC_GetDefaultDLSSGMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode");
		
		UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamlineLibraryDLSSG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineLibraryDLSSG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineBlueprint.StreamlineLibraryDLSSG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175E010
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUStreamlineReflexMode                             Mode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryReflex::STATIC_SetReflexMode(EUStreamlineReflexMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode");
		
		UStreamlineLibraryReflex_SetReflexMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DEF0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineReflexSupport UStreamlineLibraryReflex::STATIC_QueryReflexSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport");
		
		UStreamlineLibraryReflex_QueryReflexSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DE90
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UStreamlineLibraryReflex::STATIC_IsReflexSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported");
		
		UStreamlineLibraryReflex_IsReflexSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DD30
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UStreamlineLibraryReflex::STATIC_GetRenderLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs");
		
		UStreamlineLibraryReflex_GetRenderLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DD00
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineReflexMode UStreamlineLibraryReflex::STATIC_GetReflexMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode");
		
		UStreamlineLibraryReflex_GetReflexMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DCD0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UStreamlineLibraryReflex::STATIC_GetGameToRenderLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs");
		
		UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DCA0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UStreamlineLibraryReflex::STATIC_GetGameLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs");
		
		UStreamlineLibraryReflex_GetGameLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DC70
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineReflexMode UStreamlineLibraryReflex::STATIC_GetDefaultReflexMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode");
		
		UStreamlineLibraryReflex_GetDefaultReflexMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamlineLibraryReflex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineLibraryReflex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineBlueprint.StreamlineLibraryReflex");
		return ptr;
	}

}


