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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum PoseSearch.EPoseSearchFeatureType
	 */
	enum class EPoseSearchFeatureType : uint8_t
	{
		Invalid         = 0,
		Position        = 1,
		Rotation        = 2,
		LinearVelocity  = 3,
		AngularVelocity = 4,
		Num             = 5,
		MAX             = 6
	};

	/**
	 * Enum PoseSearch.EPoseSearchFeatureDomain
	 */
	enum class EPoseSearchFeatureDomain : uint8_t
	{
		Invalid  = 0,
		Time     = 1,
		Distance = 2,
		Num      = 3,
		MAX      = 4
	};

	/**
	 * Enum PoseSearch.EPoseSearchDataPreprocessor
	 */
	enum class EPoseSearchDataPreprocessor : uint8_t
	{
		None      = 0,
		Automatic = 1,
		Normalize = 2,
		Sphere    = 3,
		Invalid   = 4,
		MAX       = 5
	};

	/**
	 * Enum PoseSearch.EMotionMatchingFlags
	 */
	enum class EMotionMatchingFlags : uint8_t
	{
		None         = 0,
		JumpedToPose = 1,
		MAX          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PoseSearch.PoseSearchFeatureDesc
	 * Size -> 0x0014
	 */
	struct FPoseSearchFeatureDesc
	{
	public:
		int32_t                                                    SchemaBoneIdx;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsampleIdx;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPoseSearchFeatureType                                     Type;                                                    // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO4X[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPoseSearchFeatureDomain                                   Domain;                                                  // 0x000C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8UA[0x3];                                   // 0x000D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    ValueOffset;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchFeatureVectorLayout
	 * Size -> 0x0018
	 */
	struct FPoseSearchFeatureVectorLayout
	{
	public:
		TArray<struct FPoseSearchFeatureDesc>                      Features;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumFloats;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOKT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchExtrapolationParameters
	 * Size -> 0x000C
	 */
	struct FPoseSearchExtrapolationParameters
	{
	public:
		float                                                      AngularSpeedThreshold;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearSpeedThreshold;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SampleTime;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchIndexPreprocessInfo
	 * Size -> 0x0038
	 */
	struct FPoseSearchIndexPreprocessInfo
	{
	public:
		int32_t                                                    NumDimensions;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3LM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              TransformationMatrix;                                    // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              InverseTransformationMatrix;                             // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SampleMean;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchIndex
	 * Size -> 0x0058
	 */
	struct FPoseSearchIndex
	{
	public:
		int32_t                                                    NumPoses;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6V1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UPoseSearchSchema*                                   Schema;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSearchIndexPreprocessInfo                      PreprocessInfo;                                          // 0x0020(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchChannelHorizonParams
	 * Size -> 0x0010
	 */
	struct FPoseSearchChannelHorizonParams
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolate;                                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O62I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialValue;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          InterpolationMethod;                                     // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUYF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchChannelWeightParams
	 * Size -> 0x0078
	 */
	struct FPoseSearchChannelWeightParams
	{
	public:
		float                                                      ChannelWeight;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSearchChannelHorizonParams                     HistoryParams;                                           // 0x0004(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseSearchChannelHorizonParams                     PredictionParams;                                        // 0x0014(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXGJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPoseSearchFeatureType, float>                        TypeWeights;                                             // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchWeightParams
	 * Size -> 0x00F0
	 */
	struct FPoseSearchWeightParams
	{
	public:
		struct FPoseSearchChannelWeightParams                      PoseWeight;                                              // 0x0000(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPoseSearchChannelWeightParams                      TrajectoryWeight;                                        // 0x0078(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.GSCPoseSearchDatabaseMoveset
	 * Size -> 0x0030
	 */
	struct FGSCPoseSearchDatabaseMoveset
	{
	public:
		TArray<class UAnimSequence*>                               Starts;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Moves;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Stops;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.GSCPoseSearchDatabaseModel
	 * Size -> 0x00E0
	 */
	struct FGSCPoseSearchDatabaseModel
	{
	public:
		TArray<class UAnimSequence*>                               Idles;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FGSCPoseSearchDatabaseMoveset                       Walk;                                                    // 0x0010(0x0030) Edit, NativeAccessSpecifierPublic
		struct FGSCPoseSearchDatabaseMoveset                       Run;                                                     // 0x0040(0x0030) Edit, NativeAccessSpecifierPublic
		struct FGSCPoseSearchDatabaseMoveset                       Sprint;                                                  // 0x0070(0x0030) Edit, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               WalkToRun;                                               // 0x00A0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               RunToSprint;                                             // 0x00B0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               SprintToRun;                                             // 0x00C0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               RunToWalk;                                               // 0x00D0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchDatabaseSequence
	 * Size -> 0x0040
	 */
	struct FPoseSearchDatabaseSequence
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      SamplingRange;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopAnimation;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1HX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       LeadInSequence;                                          // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopLeadInAnimation;                                    // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICAX[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       FollowUpSequence;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopFollowUpAnimation;                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US0C[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FirstPoseIdx;                                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPoses;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QG1H[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchChannelDynamicWeightParams
	 * Size -> 0x000C
	 */
	struct FPoseSearchChannelDynamicWeightParams
	{
	public:
		float                                                      ChannelWeightScale;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HistoryWeightScale;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PredictionWeightScale;                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchDynamicWeightParams
	 * Size -> 0x001C
	 */
	struct FPoseSearchDynamicWeightParams
	{
	public:
		struct FPoseSearchChannelDynamicWeightParams               PoseDynamicWeights;                                      // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseSearchChannelDynamicWeightParams               TrajectoryDynamicWeights;                                // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugDisableWeights;                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0C2N[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.MotionMatchingSettings
	 * Size -> 0x0030
	 */
	struct FMotionMatchingSettings
	{
	public:
		struct FPoseSearchDynamicWeightParams                      Weights;                                                 // 0x0000(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseJumpThresholdTime;                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchThrottleTime;                                      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPercentImprovement;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequenceEndExlusionTime;                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.AnimNode_MotionMatching
	 * Size -> 0x01F0 (FullSize[0x0228] - InheritedSize[0x0038])
	 */
	struct FAnimNode_MotionMatching : public FAnimNode_AssetPlayerBase
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0038(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class UPoseSearchDatabase*                                 Database;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTrajectorySampleRange                              Trajectory;                                              // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDynamicPlayRateSettings                            DynamicPlayRateSettings;                                 // 0x0068(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMotionMatchingSettings                             Settings;                                                // 0x00B8(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEZW[0x140];                                 // 0x00E8(0x0140) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector
	 * Size -> 0x00E0 (FullSize[0x00F0] - InheritedSize[0x0010])
	 */
	struct FAnimNode_PoseSearchHistoryCollector : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PoseCount;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseDuration;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C22J[0xC8];                                  // 0x0028(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchWeights
	 * Size -> 0x0010
	 */
	struct FPoseSearchWeights
	{
	public:
		TArray<float>                                              Weights;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchWeightsContext
	 * Size -> 0x0038
	 */
	struct FPoseSearchWeightsContext
	{
	public:
		TWeakObjectPtr<class UPoseSearchDatabase>                  Database;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPoseSearchDynamicWeightParams                      DynamicWeights;                                          // 0x0008(0x001C) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M3LY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPoseSearchWeights>                          ComputedGroupWeights;                                    // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct PoseSearch.PoseSearchFeatureVectorBuilder
	 * Size -> 0x0050
	 */
	struct FPoseSearchFeatureVectorBuilder
	{
	public:
		TWeakObjectPtr<class UPoseSearchSchema>                    Schema;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UOQ9[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PoseSearch.MotionMatchingState
	 * Size -> 0x00A8
	 */
	struct FMotionMatchingState
	{
	public:
		int32_t                                                    DbPoseIdx;                                               // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DbSequenceIdx;                                           // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSearchFeatureVectorBuilder                     ComposedQuery;                                           // 0x0008(0x0050) Transient, NativeAccessSpecifierPublic
		struct FPoseSearchWeightsContext                           WeightsContext;                                          // 0x0058(0x0038) Transient, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPoseSearchDatabase>                  CurrentDatabase;                                         // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedPoseJumpTime;                                     // 0x0098(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AssetPlayerTime;                                         // 0x009C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMotionMatchingFlags                                       Flags;                                                   // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHON[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
