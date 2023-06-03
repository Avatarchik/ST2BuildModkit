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
	 * 		RVA    -> 0x016CA340
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.TestParameters
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_TestParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.TestParameters");
		
		UDirectLinkTestLibrary_TestParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA310
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.StopSender
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_StopSender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StopSender");
		
		UDirectLinkTestLibrary_StopSender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA2E0
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.StopReceiver
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_StopReceiver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StopReceiver");
		
		UDirectLinkTestLibrary_StopReceiver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA2B0
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.StartSender
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_StartSender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StartSender");
		
		UDirectLinkTestLibrary_StartSender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA280
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.StartReceiver
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_StartReceiver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StartReceiver");
		
		UDirectLinkTestLibrary_StartReceiver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA250
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.SetupSender
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_SetupSender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.SetupSender");
		
		UDirectLinkTestLibrary_SetupSender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA220
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.SetupReceiver
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_SetupReceiver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.SetupReceiver");
		
		UDirectLinkTestLibrary_SetupReceiver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA180
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.SendScene
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFilePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDirectLinkTestLibrary::STATIC_SendScene(const class FString& InFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.SendScene");
		
		UDirectLinkTestLibrary_SendScene_Params params {};
		params.InFilePath = InFilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA0A0
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.MakeEndpoint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NiceName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVerbose                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDirectLinkTestLibrary::STATIC_MakeEndpoint(const class FString& NiceName, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.MakeEndpoint");
		
		UDirectLinkTestLibrary_MakeEndpoint_Params params {};
		params.NiceName = NiceName;
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CA070
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.DumpReceivedScene
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_DumpReceivedScene()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.DumpReceivedScene");
		
		UDirectLinkTestLibrary_DumpReceivedScene_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016C9FE0
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.DeleteEndpoint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            EndpointId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDirectLinkTestLibrary::STATIC_DeleteEndpoint(int32_t EndpointId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.DeleteEndpoint");
		
		UDirectLinkTestLibrary_DeleteEndpoint_Params params {};
		params.EndpointId = EndpointId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016C9FB0
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.DeleteAllEndpoint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDirectLinkTestLibrary::STATIC_DeleteAllEndpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.DeleteAllEndpoint");
		
		UDirectLinkTestLibrary_DeleteAllEndpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016C9E80
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.AddPublicSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            EndpointId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SourceName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDirectLinkTestLibrary::STATIC_AddPublicSource(int32_t EndpointId, const class FString& SourceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.AddPublicSource");
		
		UDirectLinkTestLibrary_AddPublicSource_Params params {};
		params.EndpointId = EndpointId;
		params.SourceName = SourceName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016C9D50
	 * 		Name   -> Function DirectLinkTest.DirectLinkTestLibrary.AddPublicDestination
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            EndpointId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DestName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDirectLinkTestLibrary::STATIC_AddPublicDestination(int32_t EndpointId, const class FString& DestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.AddPublicDestination");
		
		UDirectLinkTestLibrary_AddPublicDestination_Params params {};
		params.EndpointId = EndpointId;
		params.DestName = DestName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDirectLinkTestLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDirectLinkTestLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DirectLinkTest.DirectLinkTestLibrary");
		return ptr;
	}

}


