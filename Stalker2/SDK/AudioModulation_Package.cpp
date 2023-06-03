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
	 * 		Name   -> PredefinedFunction UAudioModulationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioModulationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.AudioModulationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5CD0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.UpdateModulator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundModulatorBase*                         Modulator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.UpdateModulator");
		
		UAudioModulationStatics_UpdateModulator_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5BC0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.UpdateMixFromObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.UpdateMixFromObject");
		
		UAudioModulationStatics_UpdateMixFromObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5930
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.UpdateMixByFilter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AddressFilter                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ParamClassFilter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundModulationParameter*                   ParamFilter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const class FString& AddressFilter, class UClass* ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.UpdateMixByFilter");
		
		UAudioModulationStatics_UpdateMixByFilter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		params.AddressFilter = AddressFilter;
		params.ParamClassFilter = ParamClassFilter;
		params.ParamFilter = ParamFilter;
		params.Value = Value;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5790
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.UpdateMix
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSoundControlBusMixStage>            Stages                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, TArray<struct FSoundControlBusMixStage> Stages, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.UpdateMix");
		
		UAudioModulationStatics_UpdateMix_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		params.Stages = Stages;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5620
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBus*                            Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue");
		
		UAudioModulationStatics_SetGlobalBusMixValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Bus = Bus;
		params.Value = Value;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5500
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.SaveMixToProfile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProfileIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32_t ProfileIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.SaveMixToProfile");
		
		UAudioModulationStatics_SaveMixToProfile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		params.ProfileIndex = ProfileIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5330
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.LoadMixFromProfile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bActivate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProfileIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundControlBusMixStage> UAudioModulationStatics::STATIC_LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32_t ProfileIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.LoadMixFromProfile");
		
		UAudioModulationStatics_LoadMixFromProfile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		params.bActivate = bActivate;
		params.ProfileIndex = ProfileIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5160
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.DeactivateGenerator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundModulationGenerator*                   Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.DeactivateGenerator");
		
		UAudioModulationStatics_DeactivateGenerator_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC50A0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.DeactivateBusMix
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.DeactivateBusMix");
		
		UAudioModulationStatics_DeactivateBusMix_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4FE0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.DeactivateBus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBus*                            Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.DeactivateBus");
		
		UAudioModulationStatics_DeactivateBus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Bus = Bus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4DF0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.CreateBusMixStage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBus*                            Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AttackTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReleaseTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSoundControlBusMixStage UAudioModulationStatics::STATIC_CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.CreateBusMixStage");
		
		UAudioModulationStatics_CreateBusMixStage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Bus = Bus;
		params.Value = Value;
		params.AttackTime = AttackTime;
		params.ReleaseTime = ReleaseTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4C50
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.CreateBusMix
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSoundControlBusMixStage>            Stages                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundControlBusMix* UAudioModulationStatics::STATIC_CreateBusMix(class UObject* WorldContextObject, const class FName& Name, TArray<struct FSoundControlBusMixStage> Stages, bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.CreateBusMix");
		
		UAudioModulationStatics_CreateBusMix_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Name = Name;
		params.Stages = Stages;
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4B00
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.CreateBus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundModulationParameter*                   Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundControlBus* UAudioModulationStatics::STATIC_CreateBus(class UObject* WorldContextObject, const class FName& Name, class USoundModulationParameter* Parameter, bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.CreateBus");
		
		UAudioModulationStatics_CreateBus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Name = Name;
		params.Parameter = Parameter;
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC49F0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBus*                            Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue");
		
		UAudioModulationStatics_ClearGlobalBusMixValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Bus = Bus;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4930
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues");
		
		UAudioModulationStatics_ClearAllGlobalBusMixValues_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4850
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.ActivateGenerator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundModulationGenerator*                   Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.ActivateGenerator");
		
		UAudioModulationStatics_ActivateGenerator_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4790
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.ActivateBusMix
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBusMix*                         Mix                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.ActivateBusMix");
		
		UAudioModulationStatics_ActivateBusMix_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Mix = Mix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC46D0
	 * 		Name   -> Function AudioModulation.AudioModulationStatics.ActivateBus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundControlBus*                            Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioModulationStatics::STATIC_ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStatics.ActivateBus");
		
		UAudioModulationStatics_ActivateBus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Bus = Bus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioModulationStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioModulationStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.AudioModulationStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5300
	 * 		Name   -> Function AudioModulation.AudioModulationStyle.GetPatchColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FColor UAudioModulationStyle::STATIC_GetPatchColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStyle.GetPatchColor");
		
		UAudioModulationStyle_GetPatchColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC52D0
	 * 		Name   -> Function AudioModulation.AudioModulationStyle.GetParameterColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FColor UAudioModulationStyle::STATIC_GetParameterColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStyle.GetParameterColor");
		
		UAudioModulationStyle_GetParameterColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC52A0
	 * 		Name   -> Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FColor UAudioModulationStyle::STATIC_GetModulationGeneratorColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor");
		
		UAudioModulationStyle_GetModulationGeneratorColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5270
	 * 		Name   -> Function AudioModulation.AudioModulationStyle.GetControlBusMixColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FColor UAudioModulationStyle::STATIC_GetControlBusMixColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStyle.GetControlBusMixColor");
		
		UAudioModulationStyle_GetControlBusMixColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5240
	 * 		Name   -> Function AudioModulation.AudioModulationStyle.GetControlBusColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FColor UAudioModulationStyle::STATIC_GetControlBusColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.AudioModulationStyle.GetControlBusColor");
		
		UAudioModulationStyle_GetControlBusColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioModulationStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioModulationStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.AudioModulationStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundControlBus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundControlBus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundControlBus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5770
	 * 		Name   -> Function AudioModulation.SoundControlBusMix.SoloMix
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USoundControlBusMix::SoloMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.SoundControlBusMix.SoloMix");
		
		USoundControlBusMix_SoloMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5600
	 * 		Name   -> Function AudioModulation.SoundControlBusMix.SaveMixToProfile
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USoundControlBusMix::SaveMixToProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.SoundControlBusMix.SaveMixToProfile");
		
		USoundControlBusMix_SaveMixToProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC54E0
	 * 		Name   -> Function AudioModulation.SoundControlBusMix.LoadMixFromProfile
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USoundControlBusMix::LoadMixFromProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.SoundControlBusMix.LoadMixFromProfile");
		
		USoundControlBusMix_LoadMixFromProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC5220
	 * 		Name   -> Function AudioModulation.SoundControlBusMix.DeactivateMix
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USoundControlBusMix::DeactivateMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.SoundControlBusMix.DeactivateMix");
		
		USoundControlBusMix_DeactivateMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4FC0
	 * 		Name   -> Function AudioModulation.SoundControlBusMix.DeactivateAllMixes
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USoundControlBusMix::DeactivateAllMixes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.SoundControlBusMix.DeactivateAllMixes");
		
		USoundControlBusMix_DeactivateAllMixes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4910
	 * 		Name   -> Function AudioModulation.SoundControlBusMix.ActivateMix
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USoundControlBusMix::ActivateMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioModulation.SoundControlBusMix.ActivateMix");
		
		USoundControlBusMix_ActivateMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundControlBusMix.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundControlBusMix::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundControlBusMix");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationGeneratorEnvelopeFollower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationGeneratorEnvelopeFollower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationGeneratorEnvelopeFollower");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationGeneratorLFO.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationGeneratorLFO::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationGeneratorLFO");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterScaled.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterScaled::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterScaled");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterFrequencyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterFrequencyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterFrequencyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterFrequency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterFrequency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterFrequency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterFilterFrequency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterFilterFrequency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterFilterFrequency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterLPFFrequency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterLPFFrequency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterLPFFrequency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterHPFFrequency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterHPFFrequency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterHPFFrequency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterBipolar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterBipolar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterBipolar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationParameterVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationParameterVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationParameterVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationPatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationPatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioModulation.SoundModulationPatch");
		return ptr;
	}

}


