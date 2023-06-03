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
	 * Class AudioModulation.AudioModulationSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAudioModulationSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FSoftObjectPath>                             Parameters;                                              // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.AudioModulationStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioModulationStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator);
		void STATIC_UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime);
		void STATIC_UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const class FString& AddressFilter, class UClass* ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime);
		void STATIC_UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, TArray<struct FSoundControlBusMixStage> Stages, float FadeTime);
		void STATIC_SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime);
		void STATIC_SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32_t ProfileIndex);
		TArray<struct FSoundControlBusMixStage> STATIC_LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32_t ProfileIndex);
		void STATIC_DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);
		void STATIC_DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);
		void STATIC_DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);
		struct FSoundControlBusMixStage STATIC_CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime);
		class USoundControlBusMix* STATIC_CreateBusMix(class UObject* WorldContextObject, const class FName& Name, TArray<struct FSoundControlBusMixStage> Stages, bool Activate);
		class USoundControlBus* STATIC_CreateBus(class UObject* WorldContextObject, const class FName& Name, class USoundModulationParameter* Parameter, bool Activate);
		void STATIC_ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime);
		void STATIC_ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime);
		void STATIC_ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);
		void STATIC_ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);
		void STATIC_ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.AudioModulationStyle
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioModulationStyle : public UBlueprintFunctionLibrary
	{
	public:
		struct FColor STATIC_GetPatchColor();
		struct FColor STATIC_GetParameterColor();
		struct FColor STATIC_GetModulationGeneratorColor();
		struct FColor STATIC_GetControlBusMixColor();
		struct FColor STATIC_GetControlBusColor();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundControlBus
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class USoundControlBus : public USoundModulatorBase
	{
	public:
		bool                                                       bBypass;                                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94EN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Address;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundModulationGenerator*>                   Generators;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class USoundModulationParameter*                           Parameter;                                               // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundControlBusMix
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USoundControlBusMix : public UObject
	{
	public:
		uint32_t                                                   ProfileIndex;                                            // 0x0028(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTR9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoundControlBusMixStage>                    MixStages;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SoloMix();
		void SaveMixToProfile();
		void LoadMixFromProfile();
		void DeactivateMix();
		void DeactivateAllMixes();
		void ActivateMix();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationGenerator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USoundModulationGenerator : public USoundModulatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationGeneratorEnvelopeFollower
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
	{
	public:
		struct FEnvelopeFollowerGeneratorParams                    Params;                                                  // 0x0030(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationGeneratorLFO
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USoundModulationGeneratorLFO : public USoundModulationGenerator
	{
	public:
		struct FSoundModulationLFOParams                           Params;                                                  // 0x0030(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUKP[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USoundModulationParameter : public UObject
	{
	public:
		unsigned char                                              UnknownData_5WWU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundModulationParameterSettings                   Settings;                                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_578V[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterScaled
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterScaled : public USoundModulationParameter
	{
	public:
		float                                                      UnitMin;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnitMax;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterFrequencyBase
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterFrequencyBase : public USoundModulationParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterFrequency
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase
	{
	public:
		float                                                      UnitMin;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnitMax;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterFilterFrequency
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterLPFFrequency
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterHPFFrequency
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterBipolar
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterBipolar : public USoundModulationParameter
	{
	public:
		float                                                      UnitRange;                                               // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IEK[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationParameterVolume
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USoundModulationParameterVolume : public USoundModulationParameter
	{
	public:
		float                                                      MinVolume;                                               // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9IL[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioModulation.SoundModulationPatch
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USoundModulationPatch : public USoundModulatorBase
	{
	public:
		struct FSoundControlModulationPatch                        PatchSettings;                                           // 0x0030(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
