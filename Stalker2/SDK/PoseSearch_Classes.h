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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class PoseSearch.PoseSearchSchema
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UPoseSearchSchema : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_28RS[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeleton*                                           Skeleton;                                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SampleRate;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBoneVelocities;                                      // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBonePositions;                                       // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTrajectoryPositions;                                 // 0x0046(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTrajectoryRotations;                                 // 0x0047(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTrajectoryLinearVelocities;                          // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTrajectoryAngularVelocities;                         // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8IK[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              Bones;                                                   // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              PoseSampleTimes;                                         // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              TrajectorySampleTimes;                                   // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              TrajectorySampleDistances;                               // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EPoseSearchDataPreprocessor                                DataPreprocessor;                                        // 0x0090(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EJF[0x3];                                   // 0x0091(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPoseSearchDataPreprocessor                                EffectiveDataPreprocessor;                               // 0x0094(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7S7[0x3];                                   // 0x0095(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      SamplingInterval;                                        // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C2F[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSearchFeatureVectorLayout                      Layout;                                                  // 0x00A0(0x0018) NativeAccessSpecifierPublic
		TArray<uint16_t>                                           BoneIndices;                                             // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<uint16_t>                                           BoneIndicesWithParents;                                  // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PoseSearch.PoseSearchSequenceMetaData
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UPoseSearchSequenceMetaData : public UAnimMetaData
	{
	public:
		class UPoseSearchSchema*                                   Schema;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      SamplingRange;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSearchExtrapolationParameters                  ExtrapolationParameters;                                 // 0x0038(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05DG[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSearchIndex                                    SearchIndex;                                             // 0x0048(0x0058) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PoseSearch.PoseSearchDatabase
	 * Size -> 0x0260 (FullSize[0x0290] - InheritedSize[0x0030])
	 */
	class UPoseSearchDatabase : public UDataAsset
	{
	public:
		class UPoseSearchSchema*                                   Schema;                                                  // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSearchWeightParams                             Weights;                                                 // 0x0038(0x00F0) Edit, NativeAccessSpecifierPublic
		struct FPoseSearchExtrapolationParameters                  ExtrapolationParameters;                                 // 0x0128(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTFS[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               SimpleSequences;                                         // 0x0138(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FGSCPoseSearchDatabaseModel                         Model;                                                   // 0x0148(0x00E0) Edit, NativeAccessSpecifierPublic
		TArray<struct FPoseSearchDatabaseSequence>                 Sequences;                                               // 0x0228(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FPoseSearchIndex                                    SearchIndex;                                             // 0x0238(0x0058) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PoseSearch.PoseSearchLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPoseSearchLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateMotionMatchingForSequencePlayer(const struct FAnimUpdateContext& AnimUpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UPoseSearchDatabase* Database, const struct FTrajectorySampleRange& Trajectory, const struct FMotionMatchingSettings& Settings, struct FMotionMatchingState* InOutMotionMatchingState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
