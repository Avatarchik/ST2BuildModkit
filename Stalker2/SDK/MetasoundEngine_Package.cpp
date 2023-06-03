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
	 * 		Name   -> PredefinedFunction UMetasoundEditorGraphBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetasoundEditorGraphBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetasoundEditorGraphBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50D40
	 * 		Name   -> Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMetaSoundAssetDirectory>            Directories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories");
		
		UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params params {};
		params.Directories = Directories;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50C70
	 * 		Name   -> Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMetaSoundAssetDirectory>            Directories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories");
		
		UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params params {};
		params.Directories = Directories;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundAssetSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundAssetSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundAssetSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundSource");
		return ptr;
	}

}


