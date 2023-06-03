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
	 * 		RVA    -> 0x04B2AFD0
	 * 		Name   -> Function DynamicPlayRate.DynamicPlayRateLibrary.DynamicPlayRateAdjustment
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTrajectorySampleRange                      Trajectory                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDynamicPlayRateSettings                    Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AccumulatedTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLooping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDynamicPlayRateLibrary::STATIC_DynamicPlayRateAdjustment(const struct FAnimUpdateContext& Context, const struct FTrajectorySampleRange& Trajectory, const struct FDynamicPlayRateSettings& Settings, class UAnimSequenceBase* Sequence, float AccumulatedTime, float PlayRate, bool bLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicPlayRate.DynamicPlayRateLibrary.DynamicPlayRateAdjustment");
		
		UDynamicPlayRateLibrary_DynamicPlayRateAdjustment_Params params {};
		params.Context = Context;
		params.Trajectory = Trajectory;
		params.Settings = Settings;
		params.Sequence = Sequence;
		params.AccumulatedTime = AccumulatedTime;
		params.PlayRate = PlayRate;
		params.bLooping = bLooping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicPlayRateLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicPlayRateLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicPlayRate.DynamicPlayRateLibrary");
		return ptr;
	}

}


