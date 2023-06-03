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
	 * 		Name   -> PredefinedFunction UPoseSearchSchema.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoseSearchSchema::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PoseSearch.PoseSearchSchema");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoseSearchSequenceMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoseSearchSequenceMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PoseSearch.PoseSearchSequenceMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoseSearchDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoseSearchDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PoseSearch.PoseSearchDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01732850
	 * 		Name   -> Function PoseSearch.PoseSearchLibrary.UpdateMotionMatchingForSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          AnimUpdateContext                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPoseSearchDatabase*                         Database                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTrajectorySampleRange                      Trajectory                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FMotionMatchingSettings                     Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMotionMatchingState                        InOutMotionMatchingState                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPoseSearchLibrary::STATIC_UpdateMotionMatchingForSequencePlayer(const struct FAnimUpdateContext& AnimUpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UPoseSearchDatabase* Database, const struct FTrajectorySampleRange& Trajectory, const struct FMotionMatchingSettings& Settings, struct FMotionMatchingState* InOutMotionMatchingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoseSearch.PoseSearchLibrary.UpdateMotionMatchingForSequencePlayer");
		
		UPoseSearchLibrary_UpdateMotionMatchingForSequencePlayer_Params params {};
		params.AnimUpdateContext = AnimUpdateContext;
		params.SequencePlayer = SequencePlayer;
		params.Database = Database;
		params.Trajectory = Trajectory;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutMotionMatchingState != nullptr)
			*InOutMotionMatchingState = params.InOutMotionMatchingState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoseSearchLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoseSearchLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PoseSearch.PoseSearchLibrary");
		return ptr;
	}

}


