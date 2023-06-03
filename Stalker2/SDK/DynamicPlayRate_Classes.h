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
	 * Class DynamicPlayRate.DynamicPlayRateLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamicPlayRateLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_DynamicPlayRateAdjustment(const struct FAnimUpdateContext& Context, const struct FTrajectorySampleRange& Trajectory, const struct FDynamicPlayRateSettings& Settings, class UAnimSequenceBase* Sequence, float AccumulatedTime, float PlayRate, bool bLooping);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
