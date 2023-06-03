#pragma once

/**
 * Name: Stalker2
 * Version: 0.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PoseSearch.PoseSearchLibrary.UpdateMotionMatchingForSequencePlayer
	 */
	struct UPoseSearchLibrary_UpdateMotionMatchingForSequencePlayer_Params
	{
	public:
		struct FAnimUpdateContext                                  AnimUpdateContext;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSequencePlayerReference                            SequencePlayer;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPoseSearchDatabase*                                 Database;                                                // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTrajectorySampleRange                              Trajectory;                                              // 0x0028(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FMotionMatchingSettings                             Settings;                                                // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FMotionMatchingState                                InOutMotionMatchingState;                                // 0x0070(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
