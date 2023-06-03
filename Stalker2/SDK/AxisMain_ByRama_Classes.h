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
	 * WidgetBlueprintGeneratedClass AxisMain_ByRama.AxisMain_ByRama_C
	 * Size -> 0x00D9 (FullSize[0x0369] - InheritedSize[0x0290])
	 */
	class UAxisMain_ByRama_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VerticalBox_Main;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAxisElement_ByRama_C*                               FocussedKeyBindButton;                                   // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVictoryInputAxis>                           DefaultAxisBinds;                                        // 0x02A8(0x0010) Edit, BlueprintVisible
		TArray<struct FVictoryInputAxis>                           CurrentAxisBinds;                                        // 0x02B8(0x0010) Edit, BlueprintVisible
		TArray<struct FVictoryInputAxis>                           DefaultAxisBindsXbox;                                    // 0x02C8(0x0010) Edit, BlueprintVisible
		TArray<struct FVictoryInputAxis>                           DefaultAxisBindsSteam;                                   // 0x02D8(0x0010) Edit, BlueprintVisible
		class FString                                              ActionName;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UAxisElement_ByRama_C*                               AxisElement;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVictoryInputAxis                                   CurrentKey;                                              // 0x0300(0x0040) Edit, BlueprintVisible
		class UTextBlock*                                          CurrentText;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScrollBox*                                          MainScroll;                                              // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UControlsSettingsDetails_C*                          ControlsSettings;                                        // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVictoryInputAxis>                           CachedAxisBind;                                          // 0x0358(0x0010) Edit, BlueprintVisible
		EKeyCategory                                               KeyCategory;                                             // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAllUnusedAxis(TArray<struct FVictoryInputAxis>* Out);
		void UseCash();
		void CachedCurrentAxisBinds();
		void CheckOldInput(const struct FKey& InputKey, int32_t Index, bool* Out, bool* Continue);
		void CustomOnMouseMove(const struct FPointerEvent& MouseEvent);
		void CustomOnMouseWheel(const struct FPointerEvent& MouseEvent);
		void CustomOnKeyDown(const struct FKeyEvent& InKeyEvent);
		void CustomOnMouseButtonDown(const struct FPointerEvent& MouseEvent);
		void SetCurrentBinds();
		void SetDefaultBinds_Steam();
		void SetDefaultBinds_XBox();
		void ChangeAxisScale(struct FVictoryInputAxis* VictoryInputAxis, double NewBindingScale, class UAxisElement_ByRama_C* AxisElement);
		void SetDefaultBinds();
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Construct();
		void ExecuteUbergraph_AxisMain_ByRama(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
