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
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.LoadAndAplayRefraction
	 */
	struct UWTFSettingsGraphics_C_LoadAndAplayRefraction_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateRefractionArray
	 */
	struct UWTFSettingsGraphics_C_PopulateRefractionArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.CheckedGlobalCheckedBox
	 */
	struct UWTFSettingsGraphics_C_CheckedGlobalCheckedBox_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.LoadAndApplyMotionBlur
	 */
	struct UWTFSettingsGraphics_C_LoadAndApplyMotionBlur_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateMotionBlurArray
	 */
	struct UWTFSettingsGraphics_C_PopulateMotionBlurArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.Cancel
	 */
	struct UWTFSettingsGraphics_C_Cancel_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.Accept
	 */
	struct UWTFSettingsGraphics_C_Accept_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.ValidateSettings
	 */
	struct UWTFSettingsGraphics_C_ValidateSettings_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.ToggleOverallQualityCustomButton
	 */
	struct UWTFSettingsGraphics_C_ToggleOverallQualityCustomButton_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateOverallQualityArray
	 */
	struct UWTFSettingsGraphics_C_PopulateOverallQualityArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.GetNewVideoSettings
	 */
	struct UWTFSettingsGraphics_C_GetNewVideoSettings_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateFoliageArray
	 */
	struct UWTFSettingsGraphics_C_PopulateFoliageArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateAntiAliasingArray
	 */
	struct UWTFSettingsGraphics_C_PopulateAntiAliasingArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulatePostProcessingArray
	 */
	struct UWTFSettingsGraphics_C_PopulatePostProcessingArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateTexturesArray
	 */
	struct UWTFSettingsGraphics_C_PopulateTexturesArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateShadowArray
	 */
	struct UWTFSettingsGraphics_C_PopulateShadowArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateEffectsArray
	 */
	struct UWTFSettingsGraphics_C_PopulateEffectsArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateViewDistanceArray
	 */
	struct UWTFSettingsGraphics_C_PopulateViewDistanceArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateFrameRateLimitArray
	 */
	struct UWTFSettingsGraphics_C_PopulateFrameRateLimitArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.LoadAndApplyInitialSettings
	 */
	struct UWTFSettingsGraphics_C_LoadAndApplyInitialSettings_Params
	{
	public:
		bool                                                       ShouldApply;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQEJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.ToggleFullscreenTypeOptions
	 */
	struct UWTFSettingsGraphics_C_ToggleFullscreenTypeOptions_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateDisplayResolutionsComboBox
	 */
	struct UWTFSettingsGraphics_C_PopulateDisplayResolutionsComboBox_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateFullscreenTypeArray
	 */
	struct UWTFSettingsGraphics_C_PopulateFullscreenTypeArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PopulateWindowModeArray
	 */
	struct UWTFSettingsGraphics_C_PopulateWindowModeArray_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.HandleToggleGroup
	 */
	struct UWTFSettingsGraphics_C_HandleToggleGroup_Params
	{
	public:
		TArray<class UCheckBox*>                                   InputArray;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCheckBox*                                           InputOptionSelected;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__EffectsLowCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__EffectsLowCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__EffectsMediumCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__EffectsMediumCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__EffectsHighCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__EffectsHighCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__EffectsEpicCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__EffectsEpicCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ShadowEpicCheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ShadowEpicCheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ShadowLowCheckBox_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ShadowLowCheckBox_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ShadowMediumCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ShadowMediumCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ShadowHighCheckBox_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ShadowHighCheckBox_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__TexturesLowCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__TexturesLowCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__TexturesMediumCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__TexturesMediumCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__TexturesHighCheckBox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__TexturesHighCheckBox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__TexturesEpicCheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__TexturesEpicCheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__PostProcessingLowCheckBox_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__PostProcessingLowCheckBox_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__PostProcessingMediumCheckBox_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__PostProcessingMediumCheckBox_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__PostProcessingHighCheckBox_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__PostProcessingHighCheckBox_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__PostProcessingEpicCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__PostProcessingEpicCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AntiAliasingEpicCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AntiAliasingEpicCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AntiAliasingHighCheckBox_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AntiAliasingHighCheckBox_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AntiAliasingLowCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AntiAliasingLowCheckBox_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AntiAliasingMediumCheckBox_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AntiAliasingMediumCheckBox_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FoliageLowCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FoliageLowCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FoliageMediumCheckBox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FoliageMediumCheckBox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FoliageHighCheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FoliageHighCheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FoliageEpicCheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FoliageEpicCheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ViewDistanceEpicCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ViewDistanceEpicCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ViewDistanceFarCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ViewDistanceFarCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ViewDistanceMediumCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ViewDistanceMediumCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ViewDistanceNearCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ViewDistanceNearCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__VerticalSyncCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__VerticalSyncCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__120FPSCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__120FPSCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__UnlimitedFPSCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__UnlimitedFPSCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__60FPSCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__60FPSCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FullscreenNativeCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FullscreenNativeCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FullscreenMaxWindowCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FullscreenMaxWindowCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__30FPSCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.Construct
	 */
	struct UWTFSettingsGraphics_C_Construct_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__WindowedCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__WindowedCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__VideoOptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__VideoOptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__GameplayOptionsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__GameplayOptionsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__AudioOptionsButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__AudioOptionsButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__OverallQualityLowCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__OverallQualityLowCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__OverallQualityMediumCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__OverallQualityMediumCheckBox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__OverallQualityHighCheckBox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__OverallQualityHighCheckBox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__OverallQualityEpicCheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__OverallQualityEpicCheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__OverallQualityCustomCheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__OverallQualityCustomCheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.PauseButtonPressed
	 */
	struct UWTFSettingsGraphics_C_PauseButtonPressed_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__3DResolutionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__3DResolutionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.CallButtonIndex0
	 */
	struct UWTFSettingsGraphics_C_CallButtonIndex0_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.CallButtonIndex2
	 */
	struct UWTFSettingsGraphics_C_CallButtonIndex2_Params
	{	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__Slider_Brightness_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__Slider_Brightness_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_12_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_12_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_MotionBlurLow_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_MotionBlurLow_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_MotionBlurMedium_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_MotionBlurMedium_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_MotionBlurHigh_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_MotionBlurHigh_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_MotionBlurEpic_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_MotionBlurEpic_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__FullscreenCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__FullscreenCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_RefractionOff_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_RefractionOff_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_RefractionLow_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_RefractionLow_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_RefractionNormal_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_RefractionNormal_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.BndEvt__CheckBox_RefractionHigh_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWTFSettingsGraphics_C_BndEvt__CheckBox_RefractionHigh_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WTF-Settings-Graphics.WTF-Settings-Graphics_C.ExecuteUbergraph_WTF-Settings-Graphics
	 */
	struct UWTFSettingsGraphics_C_ExecuteUbergraph_WTFSettingsGraphics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
