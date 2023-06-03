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
	 * DelegateFunction Stalker2.Obj.OnObjTurnedToTarget__DelegateSignature
	 */
	struct AObj_OnObjTurnedToTarget__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Obj.AimTimelineFinished
	 */
	struct AObj_AimTimelineFinished_Params
	{	};

	/**
	 * Function Stalker2.ALifeSpawnLocationRandom.GenerateSpawnLocation
	 */
	struct AALifeSpawnLocationRandom_GenerateSpawnLocation_Params
	{	};

	/**
	 * Function Stalker2.WidgetBase.UpdateWidget
	 */
	struct UWidgetBase_UpdateWidget_Params
	{	};

	/**
	 * Function Stalker2.WidgetBase.DestructClearWidget
	 */
	struct UWidgetBase_DestructClearWidget_Params
	{	};

	/**
	 * Function Stalker2.AnimNotify_PlayInteractablesFX.GetAvailableBones
	 */
	struct UAnimNotify_PlayInteractablesFX_GetAvailableBones_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Anomaly.OnRechargeStateStarted
	 */
	struct AAnomaly_OnRechargeStateStarted_Params
	{	};

	/**
	 * Function Stalker2.Anomaly.OnIdleStateStarted
	 */
	struct AAnomaly_OnIdleStateStarted_Params
	{	};

	/**
	 * Function Stalker2.Anomaly.OnEndOverlap
	 */
	struct AAnomaly_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Anomaly.OnBeginOverlap
	 */
	struct AAnomaly_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E3G9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Anomaly.OnActiveStateStarted
	 */
	struct AAnomaly_OnActiveStateStarted_Params
	{	};

	/**
	 * Function Stalker2.Anomaly.OnActivationStateStarted
	 */
	struct AAnomaly_OnActivationStateStarted_Params
	{	};

	/**
	 * Function Stalker2.Anomaly.ForceDeactivate
	 */
	struct AAnomaly_ForceDeactivate_Params
	{	};

	/**
	 * Function Stalker2.Anomaly.ForceActivateOnce
	 */
	struct AAnomaly_ForceActivateOnce_Params
	{	};

	/**
	 * Function Stalker2.Anomaly.ForceActivateEndless
	 */
	struct AAnomaly_ForceActivateEndless_Params
	{	};

	/**
	 * Function Stalker2.UIDActorComponent.GetGUID
	 */
	struct UUIDActorComponent_GetGUID_Params
	{
	public:
		struct FGuid                                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractionComponent.SetInteractionActive
	 */
	struct UInteractionComponent_SetInteractionActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.BarbedWireComponent.OnOverlapEnd
	 */
	struct UBarbedWireComponent_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.BarbedWireComponent.OnOverlapBegin
	 */
	struct UBarbedWireComponent_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlapComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NIC3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.BarbedWireComponent.OnCompHit
	 */
	struct UBarbedWireComponent_OnCompHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0030(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.BaseInteractableAction.RunAlternativeAction
	 */
	struct UBaseInteractableAction_RunAlternativeAction_Params
	{	};

	/**
	 * Function Stalker2.BaseInteractableAction.RunAction
	 */
	struct UBaseInteractableAction_RunAction_Params
	{	};

	/**
	 * Function Stalker2.BaseInteractableAction.CanInteract
	 */
	struct UBaseInteractableAction_CanInteract_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.BedView.Interact
	 */
	struct ABedView_Interact_Params
	{	};

	/**
	 * Function Stalker2.Bolt.OnComponentHit
	 */
	struct ABolt_OnComponentHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0030(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ViewBase.UIClose
	 */
	struct UViewBase_UIClose_Params
	{	};

	/**
	 * Function Stalker2.ViewBase.PreCloseUpdateView
	 */
	struct UViewBase_PreCloseUpdateView_Params
	{	};

	/**
	 * Function Stalker2.BookViewBase.ClickMenuButton
	 */
	struct UBookViewBase_ClickMenuButton_Params
	{
	public:
		int32_t                                                    InButtonIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.BookViewBase.ChangeSelectButton
	 */
	struct UBookViewBase_ChangeSelectButton_Params
	{	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.WidgetIsChildOf
	 */
	struct UVictoryBPFunctionLibrary_WidgetIsChildOf_Params
	{
	public:
		class UWidget*                                             ChildWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             PossibleParent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	 */
	struct UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params
	{
	public:
		class UWidget*                                             ChildWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	 */
	struct UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params
	{
	public:
		class APlayerController*                                   ThePC;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PosX;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PosY;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	 */
	struct UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params
	{
	public:
		class USoundClass*                                         SoundClassObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewVolume;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	 */
	struct UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params
	{
	public:
		struct FVictoryInputAxis                                   ToRemove;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	 */
	struct UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params
	{
	public:
		struct FVictoryInput                                       ToRemove;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	 */
	struct UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params
	{
	public:
		struct FVictoryInputAxis                                   Original;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FVictoryInputAxis                                   NewBinding;                                              // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryReBindActionKey
	 */
	struct UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params
	{
	public:
		struct FVictoryInput                                       Original;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FVictoryInput                                       NewBinding;                                              // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	 */
	struct UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	 */
	struct UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	 */
	struct UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVictoryInputAxis                                   ReturnValue;                                             // 0x0038(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	 */
	struct UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVictoryInput                                       ReturnValue;                                             // 0x0038(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	 */
	struct UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params
	{
	public:
		TArray<struct FVictoryInputAxis>                           Bindings;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	 */
	struct UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVictoryInput>                               ActionBindings;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FVictoryInputAxis>                           AxisBindings;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	 */
	struct UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params
	{
	public:
		TArray<struct FVictoryInput>                               Bindings;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	 */
	struct UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params
	{
	public:
		class FString                                              OriginalFileName;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewName;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewAbsoluteFolderPath;                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HighResolution;                                          // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	 */
	struct UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params
	{
	public:
		TArray<class FString>                                      FileNames;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.SaveConfigToFile
	 */
	struct UVictoryBPFunctionLibrary_SaveConfigToFile_Params
	{
	public:
		TArray<struct FVictoryInput>                               VictoryInputs;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	 */
	struct UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.MapRangeClamped
	 */
	struct UVictoryBPFunctionLibrary_MapRangeClamped_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRangeA;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRangeB;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutRangeA;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutRangeB;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	 */
	struct UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params
	{
	public:
		class UClass*                                              ObjectClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Path;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S187[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	 */
	struct UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.GetObjectPath
	 */
	struct UVictoryBPFunctionLibrary_GetObjectPath_Params
	{
	public:
		class UObject*                                             Obj;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	 */
	struct UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TopLevelOnly;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NCFB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
	 */
	struct UVictoryBPFunctionLibrary_GetAllWidgetsOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UUserWidget*>                                 FoundWidgets;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       TopLevelOnly;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ButtonBase.ButtonClicked
	 */
	struct UButtonBase_ButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.ChangeWidgetSwitcher.PreDestructUpdate
	 */
	struct UChangeWidgetSwitcher_PreDestructUpdate_Params
	{	};

	/**
	 * Function Stalker2.ChangeWidgetSwitcher.PreConstructUpdate
	 */
	struct UChangeWidgetSwitcher_PreConstructUpdate_Params
	{	};

	/**
	 * Function Stalker2.CheckBoxWidget.SetChecked
	 */
	struct UCheckBoxWidget_SetChecked_Params
	{
	public:
		bool                                                       bInChecked;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBrodcastOnChangeCheck;                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CheckBoxWidget.GetChecked
	 */
	struct UCheckBoxWidget_GetChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ChemicalAnomaly.OnDecalSpawn
	 */
	struct AChemicalAnomaly_OnDecalSpawn_Params
	{	};

	/**
	 * Function Stalker2.CinematicDelegateToken.OnCinematicStopped
	 */
	struct UCinematicDelegateToken_OnCinematicStopped_Params
	{	};

	/**
	 * Function Stalker2.CinematicDelegateToken.OnCinematicStarted
	 */
	struct UCinematicDelegateToken_OnCinematicStarted_Params
	{	};

	/**
	 * Function Stalker2.CinematicManager.OnFadeScreenEnd
	 */
	struct UCinematicManager_OnFadeScreenEnd_Params
	{
	public:
		bool                                                       bFadeOut;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZUO8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        FadeTargetColor;                                         // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeAmount;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTime;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ClassicFireAnomaly.OnStateChanged
	 */
	struct AClassicFireAnomaly_OnStateChanged_Params
	{	};

	/**
	 * Function Stalker2.ClickerAnomaly.OnBeginParticleOverlap
	 */
	struct AClickerAnomaly_OnBeginParticleOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TSGT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableComponent.SetEnabled
	 */
	struct UInteractableComponent_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableComponent.SetDisplayPriority
	 */
	struct UInteractableComponent_SetDisplayPriority_Params
	{
	public:
		EDisplayPriority                                           NewPriority;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableComponent.GetPreventDefaultInteract
	 */
	struct UInteractableComponent_GetPreventDefaultInteract_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableComponent.GetInteractionType
	 */
	struct UInteractableComponent_GetInteractionType_Params
	{
	public:
		EInteractionType                                           ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableComponent.GetDisplayPriority
	 */
	struct UInteractableComponent_GetDisplayPriority_Params
	{
	public:
		EDisplayPriority                                           ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.HintBase.UpdateHintWidget
	 */
	struct UHintBase_UpdateHintWidget_Params
	{	};

	/**
	 * Function Stalker2.HintBase.SetText
	 */
	struct UHintBase_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.HintBase.SetStylePrefix
	 */
	struct UHintBase_SetStylePrefix_Params
	{
	public:
		class FString                                              InStylePrefix;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.HintBase.PostShowHover
	 */
	struct UHintBase_PostShowHover_Params
	{
	public:
		bool                                                       bInShow;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.HintBase.HoverChangeHintTextColor
	 */
	struct UHintBase_HoverChangeHintTextColor_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LPNL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InStylePrefix;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.HintBase.GetHoverSettings
	 */
	struct UHintBase_GetHoverSettings_Params
	{
	public:
		TArray<struct FHoverAction>                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CompassWidget.ToggleOpacityState
	 */
	struct UCompassWidget_ToggleOpacityState_Params
	{
	public:
		EOpasityState                                              InOpasityState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPreviousStateMode                                         InPreviousStateMode;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayForward;                                            // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CompassWidget.GetCompassCenterBorders
	 */
	struct UCompassWidget_GetCompassCenterBorders_Params
	{
	public:
		bool                                                       bIsRightBorder;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RFM5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ContextualNavLinkProxy.OnStartUsingCustomLink
	 */
	struct AContextualNavLinkProxy_OnStartUsingCustomLink_Params
	{
	public:
		class AActor*                                              MovingActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DestinationPoint;                                        // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.UIManagerOnQuestDeselected
	 */
	struct UCppMediator_UIManagerOnQuestDeselected_Params
	{
	public:
		int32_t                                                    PrototypeID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.UIManagerGenerateAndGetDefaultNameSave
	 */
	struct UCppMediator_UIManagerGenerateAndGetDefaultNameSave_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SpawnTriplanarDecalAtLocation
	 */
	struct UCppMediator_SpawnTriplanarDecalAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DecalSize;                                               // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0028(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0040(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      LifeSpan;                                                // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H94M[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTriplanarDecalComponent*                            ReturnValue;                                             // 0x0060(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.ShouldUpdateSolarTime
	 */
	struct UCppMediator_ShouldUpdateSolarTime_Params
	{
	public:
		float                                                      PrevSolarTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SolarTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UpdateSunDeltaTime;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetVoiceVolume
	 */
	struct UCppMediator_SetVoiceVolume_Params
	{
	public:
		float                                                      InVoiceVolume;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetTurnOnVoiceVolume
	 */
	struct UCppMediator_SetTurnOnVoiceVolume_Params
	{
	public:
		bool                                                       bInTurnOnVoiceVolume;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetTurnOnMutantsVolume
	 */
	struct UCppMediator_SetTurnOnMutantsVolume_Params
	{
	public:
		bool                                                       bInTurnOnMutantsVolume;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetTurnOnMusicVolume
	 */
	struct UCppMediator_SetTurnOnMusicVolume_Params
	{
	public:
		bool                                                       bInTurnOnMusicVolume;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetTurnOnAllVolume
	 */
	struct UCppMediator_SetTurnOnAllVolume_Params
	{
	public:
		bool                                                       bInTurnOnAllVolume;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SettingsManagerRestoreCachedSettings
	 */
	struct UCppMediator_SettingsManagerRestoreCachedSettings_Params
	{	};

	/**
	 * Function Stalker2.CppMediator.SettingsManagerCacheCurrentSettings
	 */
	struct UCppMediator_SettingsManagerCacheCurrentSettings_Params
	{	};

	/**
	 * Function Stalker2.CppMediator.SettingsManagerApplySettings
	 */
	struct UCppMediator_SettingsManagerApplySettings_Params
	{	};

	/**
	 * Function Stalker2.CppMediator.SetSelectedLanguage
	 */
	struct UCppMediator_SetSelectedLanguage_Params
	{
	public:
		ELocalizationLanguage                                      InSelectedLanguage;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetMutantsVolume
	 */
	struct UCppMediator_SetMutantsVolume_Params
	{
	public:
		float                                                      InMutantsVolume;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetMusicVolume
	 */
	struct UCppMediator_SetMusicVolume_Params
	{
	public:
		float                                                      InMusicVolume;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetMouseSensitivityCoef
	 */
	struct UCppMediator_SetMouseSensitivityCoef_Params
	{
	public:
		float                                                      InMouseSensitivityCoef;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetMeshNaniteSettings
	 */
	struct UCppMediator_SetMeshNaniteSettings_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetAudiologPlaybackPercent
	 */
	struct UCppMediator_SetAudiologPlaybackPercent_Params
	{
	public:
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetAllVolume
	 */
	struct UCppMediator_SetAllVolume_Params
	{
	public:
		float                                                      InVolume;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SetAimMouseSensitivityCoef
	 */
	struct UCppMediator_SetAimMouseSensitivityCoef_Params
	{
	public:
		float                                                      InAimMouseSensitivityCoef;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.SaveCharacter
	 */
	struct UCppMediator_SaveCharacter_Params
	{
	public:
		class FString                                              CharacterSID;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshGeneratorEditor*                                MeshGenerator;                                           // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSaveObj;                                                // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4DG7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SaveObjConfigPath;                                       // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.RuntimeGetWorld
	 */
	struct UCppMediator_RuntimeGetWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.ResetSaveForGuidActor
	 */
	struct UCppMediator_ResetSaveForGuidActor_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.ReloadConfigPrototypes
	 */
	struct UCppMediator_ReloadConfigPrototypes_Params
	{	};

	/**
	 * Function Stalker2.CppMediator.ReadSaveForGuidActor_Bool
	 */
	struct UCppMediator_ReadSaveForGuidActor_Bool_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RTAS[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Seek;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.QuestInteractionFinishAction
	 */
	struct UCppMediator_QuestInteractionFinishAction_Params
	{
	public:
		class UInteractableComponent*                              InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LauncherName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.QuestInteractionComponentFinishAction
	 */
	struct UCppMediator_QuestInteractionComponentFinishAction_Params
	{
	public:
		class UInteractionComponent*                               InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LauncherName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.OnToggleAudiolog
	 */
	struct UCppMediator_OnToggleAudiolog_Params
	{
	public:
		bool                                                       bPlayAudiolog;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.ObjGetHP
	 */
	struct UCppMediator_ObjGetHP_Params
	{
	public:
		class AObj*                                                Obj;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.MusicPlaySoundCurve
	 */
	struct UCppMediator_MusicPlaySoundCurve_Params
	{
	public:
		int32_t                                                    IndexNextWave;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.MakeItemUID
	 */
	struct UCppMediator_MakeItemUID_Params
	{
	public:
		int32_t                                                    RawInt32;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemUID                                            ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.MakeItemContainerUID
	 */
	struct UCppMediator_MakeItemContainerUID_Params
	{
	public:
		int32_t                                                    RawInt32;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemContainerUID                                   ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.MakeInvalidGUID
	 */
	struct UCppMediator_MakeInvalidGUID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.LogError
	 */
	struct UCppMediator_LogError_Params
	{
	public:
		class AActor*                                              Sender;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsWalking
	 */
	struct UCppMediator_IsWalking_Params
	{
	public:
		class AObj*                                                Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsRunningWorldPartitionMigrationFromCommandlet
	 */
	struct UCppMediator_IsRunningWorldPartitionMigrationFromCommandlet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsQuestSelected
	 */
	struct UCppMediator_IsQuestSelected_Params
	{
	public:
		struct FJournalQuest                                       JournalQuest;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsPendingLoadQuickSave
	 */
	struct UCppMediator_IsPendingLoadQuickSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsObjAlive
	 */
	struct UCppMediator_IsObjAlive_Params
	{
	public:
		class AObj*                                                Obj;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsNaniteEnabledForMesh
	 */
	struct UCppMediator_IsNaniteEnabledForMesh_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsMoving
	 */
	struct UCppMediator_IsMoving_Params
	{
	public:
		class AObj*                                                Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsGamePlaying
	 */
	struct UCppMediator_IsGamePlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsFarAwayFromPlayer
	 */
	struct UCppMediator_IsFarAwayFromPlayer_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsEmissionActive
	 */
	struct UCppMediator_IsEmissionActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.IsActorInGameWorld
	 */
	struct UCppMediator_IsActorInGameWorld_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.HasValidGUID
	 */
	struct UCppMediator_HasValidGUID_Params
	{
	public:
		class AObj*                                                Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.HasSaveForGuidActor
	 */
	struct UCppMediator_HasSaveForGuidActor_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetSkyLightUpdateDeltaTime
	 */
	struct UCppMediator_GetSkyLightUpdateDeltaTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetPrototypeID
	 */
	struct UCppMediator_GetPrototypeID_Params
	{
	public:
		class AObj*                                                Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetObjPrototypes
	 */
	struct UCppMediator_GetObjPrototypes_Params
	{
	public:
		TMap<class FString, class UFileObjPrototypesEditor*>       ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetNotePrototypeIDs
	 */
	struct UCppMediator_GetNotePrototypeIDs_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetMeshGenerators
	 */
	struct UCppMediator_GetMeshGenerators_Params
	{
	public:
		TArray<class UMeshGeneratorEditor*>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetGUID
	 */
	struct UCppMediator_GetGUID_Params
	{
	public:
		class AObj*                                                Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetFocusedEnemy
	 */
	struct UCppMediator_GetFocusedEnemy_Params
	{
	public:
		class AObj*                                                Obj;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AObj*                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetFinishedQuests
	 */
	struct UCppMediator_GetFinishedQuests_Params
	{
	public:
		TArray<struct FJournalQuest>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetFailedQuests
	 */
	struct UCppMediator_GetFailedQuests_Params
	{
	public:
		TArray<struct FJournalQuest>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetEmissionLocation
	 */
	struct UCppMediator_GetEmissionLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetCurrentSettings
	 */
	struct UCppMediator_GetCurrentSettings_Params
	{
	public:
		struct FSettingsVariables                                  ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetCurrentAudiologPlayedTime
	 */
	struct UCppMediator_GetCurrentAudiologPlayedTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetCurrentAudiologDuration
	 */
	struct UCppMediator_GetCurrentAudiologDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetAnomalyCullingRadius
	 */
	struct UCppMediator_GetAnomalyCullingRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetActiveSecondaryQuests
	 */
	struct UCppMediator_GetActiveSecondaryQuests_Params
	{
	public:
		TArray<struct FJournalQuest>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.GetActiveMainQuests
	 */
	struct UCppMediator_GetActiveMainQuests_Params
	{
	public:
		TArray<struct FJournalQuest>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.CreateAIVoiceEvent
	 */
	struct UCppMediator_CreateAIVoiceEvent_Params
	{
	public:
		class AObj*                                                SenderObj;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x0020(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.CanPlayAudiolog
	 */
	struct UCppMediator_CanPlayAudiolog_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.AppendSaveForGuidActor_Bool
	 */
	struct UCppMediator_AppendSaveForGuidActor_Bool_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CppMediator.AmbientPlaySoundCurve
	 */
	struct UCppMediator_AmbientPlaySoundCurve_Params
	{
	public:
		int32_t                                                    IndexNextWave;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomButton.OnPress
	 */
	struct UCustomButton_OnPress_Params
	{	};

	/**
	 * Function Stalker2.CustomButton.OnClick
	 */
	struct UCustomButton_OnClick_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManager.XRunEngineCommand
	 */
	struct UCustomConsoleManager_XRunEngineCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManager.XExecuteAdditionalScript
	 */
	struct UCustomConsoleManager_XExecuteAdditionalScript_Params
	{
	public:
		class FString                                              ScriptKeyName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManager.ExecuteScripts
	 */
	struct UCustomConsoleManager_ExecuteScripts_Params
	{
	public:
		TArray<class FString>                                      ScriptArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XToggleArtifactSpawnerDebugInfo
	 */
	struct UCustomConsoleManagerAA_XToggleArtifactSpawnerDebugInfo_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XTeleportNPCToSpawn
	 */
	struct UCustomConsoleManagerAA_XTeleportNPCToSpawn_Params
	{
	public:
		class FString                                              NPCSID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XTeleportNPCToPlayer
	 */
	struct UCustomConsoleManagerAA_XTeleportNPCToPlayer_Params
	{
	public:
		class FString                                              NPCSID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XStartQuestNodeBySID
	 */
	struct UCustomConsoleManagerAA_XStartQuestNodeBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XStartQuestNode
	 */
	struct UCustomConsoleManagerAA_XStartQuestNode_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XStartQuestBySID
	 */
	struct UCustomConsoleManagerAA_XStartQuestBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XStartQuest
	 */
	struct UCustomConsoleManagerAA_XStartQuest_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSkipToQuestNode
	 */
	struct UCustomConsoleManagerAA_XSkipToQuestNode_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSkipInfotopicRefreshCooldown
	 */
	struct UCustomConsoleManagerAA_XSkipInfotopicRefreshCooldown_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XShowSpawnDebugInfo
	 */
	struct UCustomConsoleManagerAA_XShowSpawnDebugInfo_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XShowQuestTriggers
	 */
	struct UCustomConsoleManagerAA_XShowQuestTriggers_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XShowCurrentLocation
	 */
	struct UCustomConsoleManagerAA_XShowCurrentLocation_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSetTimeSpeed
	 */
	struct UCustomConsoleManagerAA_XSetTimeSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSetSearchpointDebugState
	 */
	struct UCustomConsoleManagerAA_XSetSearchpointDebugState_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSetRelationsInRadius
	 */
	struct UCustomConsoleManagerAA_XSetRelationsInRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RelationValue;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSetRandomNodeDefinedPinBySID
	 */
	struct UCustomConsoleManagerAA_XSetRandomNodeDefinedPinBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PinNumber;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSetRandomNodeDefinedPin
	 */
	struct UCustomConsoleManagerAA_XSetRandomNodeDefinedPin_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PinNumber;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XSetGameTime
	 */
	struct UCustomConsoleManagerAA_XSetGameTime_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Second;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XRestartCurrentDialog
	 */
	struct UCustomConsoleManagerAA_XRestartCurrentDialog_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XResetRandomNodeBySID
	 */
	struct UCustomConsoleManagerAA_XResetRandomNodeBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XResetRandomNode
	 */
	struct UCustomConsoleManagerAA_XResetRandomNode_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XResetQuestBySID
	 */
	struct UCustomConsoleManagerAA_XResetQuestBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XRemoveArtifactMarker
	 */
	struct UCustomConsoleManagerAA_XRemoveArtifactMarker_Params
	{
	public:
		class FString                                              ArtifactSpawnerGuidString;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XPlayDialogFromPool
	 */
	struct UCustomConsoleManagerAA_XPlayDialogFromPool_Params
	{
	public:
		class FString                                              DialogEventTypeName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NPCUIDValue1;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NPCUIDValue2;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XPlayCommentFromPool
	 */
	struct UCustomConsoleManagerAA_XPlayCommentFromPool_Params
	{
	public:
		class FString                                              DialogEventTypeName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NPCUIDValue;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XKillNPCInRadius
	 */
	struct UCustomConsoleManagerAA_XKillNPCInRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinimalReputationToKill;                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxReputationToKill;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XFindNonEndingDialogs
	 */
	struct UCustomConsoleManagerAA_XFindNonEndingDialogs_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XExcludeQuestNodeBySID
	 */
	struct UCustomConsoleManagerAA_XExcludeQuestNodeBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XExcludeQuestNode
	 */
	struct UCustomConsoleManagerAA_XExcludeQuestNode_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XExcludeQuestBySID
	 */
	struct UCustomConsoleManagerAA_XExcludeQuestBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XExcludeQuest
	 */
	struct UCustomConsoleManagerAA_XExcludeQuest_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XEndQuestNodeBySID
	 */
	struct UCustomConsoleManagerAA_XEndQuestNodeBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XEndQuestNode
	 */
	struct UCustomConsoleManagerAA_XEndQuestNode_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XEndQuestBySID
	 */
	struct UCustomConsoleManagerAA_XEndQuestBySID_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XEndQuest
	 */
	struct UCustomConsoleManagerAA_XEndQuest_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XDespawnNPCsAtRadius
	 */
	struct UCustomConsoleManagerAA_XDespawnNPCsAtRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XDespawnDeadNPCsAtRadius
	 */
	struct UCustomConsoleManagerAA_XDespawnDeadNPCsAtRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XDespawnAliveNPCsAtRadius
	 */
	struct UCustomConsoleManagerAA_XDespawnAliveNPCsAtRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XDebugAddHelloDialogsToQueue
	 */
	struct UCustomConsoleManagerAA_XDebugAddHelloDialogsToQueue_Params
	{
	public:
		int32_t                                                    TargetUID;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DialogsCount;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XClearDialogQueue
	 */
	struct UCustomConsoleManagerAA_XClearDialogQueue_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XCheckGamedata
	 */
	struct UCustomConsoleManagerAA_XCheckGamedata_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XAddMoneyToPlayer
	 */
	struct UCustomConsoleManagerAA_XAddMoneyToPlayer_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAA.XAddArtifactMarker
	 */
	struct UCustomConsoleManagerAA_XAddArtifactMarker_Params
	{
	public:
		class FString                                              ArtifactSpawnerGuidString;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMainQuestMarker;                                        // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAI2.XSetVisionParamsOverride
	 */
	struct UCustomConsoleManagerAI2_XSetVisionParamsOverride_Params
	{
	public:
		int32_t                                                    ModelUID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_62ZY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PrototypeSID;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAI2.XSetRelation
	 */
	struct UCustomConsoleManagerAI2_XSetRelation_Params
	{
	public:
		int32_t                                                    FirstUID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SecondUID;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Relation;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAI2.XSetHearingParamsOverride
	 */
	struct UCustomConsoleManagerAI2_XSetHearingParamsOverride_Params
	{
	public:
		int32_t                                                    ModelUID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CSXZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PrototypeSID;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAK.XSuicide
	 */
	struct UCustomConsoleManagerAK_XSuicide_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAK.XPrintInventory
	 */
	struct UCustomConsoleManagerAK_XPrintInventory_Params
	{
	public:
		int32_t                                                    UnitUID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAK.XKillThemAll
	 */
	struct UCustomConsoleManagerAK_XKillThemAll_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XToggleDebugTool
	 */
	struct UCustomConsoleManagerAM_XToggleDebugTool_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XSetFocus
	 */
	struct UCustomConsoleManagerAM_XSetFocus_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XResetAI
	 */
	struct UCustomConsoleManagerAM_XResetAI_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XMoveToPlayer
	 */
	struct UCustomConsoleManagerAM_XMoveToPlayer_Params
	{
	public:
		int32_t                                                    NPC_UID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         Behaviour;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XClearFocus
	 */
	struct UCustomConsoleManagerAM_XClearFocus_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XCallQuickSave
	 */
	struct UCustomConsoleManagerAM_XCallQuickSave_Params
	{
	public:
		float                                                      Angular;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XCallQuickLoad
	 */
	struct UCustomConsoleManagerAM_XCallQuickLoad_Params
	{
	public:
		float                                                      Angular;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerAM.XAddMoveTo
	 */
	struct UCustomConsoleManagerAM_XAddMoveTo_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSpawnItemNearPlayerBySID
	 */
	struct UCustomConsoleManagerBuild_XSpawnItemNearPlayerBySID_Params
	{
	public:
		class FString                                              ItemPrototypeSID;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSpawnItemNearPlayerByPrototypeID
	 */
	struct UCustomConsoleManagerBuild_XSpawnItemNearPlayerByPrototypeID_Params
	{
	public:
		int32_t                                                    ItemPrototypeID;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSpawnItemInCoordinatesBySID
	 */
	struct UCustomConsoleManagerBuild_XSpawnItemInCoordinatesBySID_Params
	{
	public:
		class FString                                              ItemPrototypeSID;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Px;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Py;                                                      // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pz;                                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSpawnItemInCoordinatesByPrototypeID
	 */
	struct UCustomConsoleManagerBuild_XSpawnItemInCoordinatesByPrototypeID_Params
	{
	public:
		int32_t                                                    ItemPrototypeID;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Px;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Py;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pz;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XShowPlayerCoordinates
	 */
	struct UCustomConsoleManagerBuild_XShowPlayerCoordinates_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetPlayerSpeedMultiplier
	 */
	struct UCustomConsoleManagerBuild_XSetPlayerSpeedMultiplier_Params
	{
	public:
		float                                                      SpeedMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetNoClipGSC
	 */
	struct UCustomConsoleManagerBuild_XSetNoClipGSC_Params
	{
	public:
		bool                                                       bNoClipGSC;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WHXL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Speed;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetGodModeByUID
	 */
	struct UCustomConsoleManagerBuild_XSetGodModeByUID_Params
	{
	public:
		int32_t                                                    EntityUID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGodModeState;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetGodModeAllFactions
	 */
	struct UCustomConsoleManagerBuild_XSetGodModeAllFactions_Params
	{
	public:
		bool                                                       bGodModeState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetFreeCameraSpeedMultiplier
	 */
	struct UCustomConsoleManagerBuild_XSetFreeCameraSpeedMultiplier_Params
	{
	public:
		float                                                      SpeedMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetFactionGodMode
	 */
	struct UCustomConsoleManagerBuild_XSetFactionGodMode_Params
	{
	public:
		class FString                                              CurrentFactionSelector;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGodModeState;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XSetEntityUnkillableByUID
	 */
	struct UCustomConsoleManagerBuild_XSetEntityUnkillableByUID_Params
	{
	public:
		int32_t                                                    EntityUID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGodModeState;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XResetCurrentWeaponDurabilityToZero
	 */
	struct UCustomConsoleManagerBuild_XResetCurrentWeaponDurabilityToZero_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XRepairCurrentWeapon
	 */
	struct UCustomConsoleManagerBuild_XRepairCurrentWeapon_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerBuild.XDisplayFocusingPlayerEnemiesCount
	 */
	struct UCustomConsoleManagerBuild_XDisplayFocusingPlayerEnemiesCount_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XToggleDebugPlayerArmorInfo
	 */
	struct UCustomConsoleManagerDC_XToggleDebugPlayerArmorInfo_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XToggleDebugBulletDistanceScaling
	 */
	struct UCustomConsoleManagerDC_XToggleDebugBulletDistanceScaling_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XShowDebugInfoForStash
	 */
	struct UCustomConsoleManagerDC_XShowDebugInfoForStash_Params
	{
	public:
		class FString                                              InStashIdentifier;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XSetWeatherTransitionTimeMultiplier
	 */
	struct UCustomConsoleManagerDC_XSetWeatherTransitionTimeMultiplier_Params
	{
	public:
		float                                                      WeatherTransitionTimeMultiplier;                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XRegenerateItemsInStashes
	 */
	struct UCustomConsoleManagerDC_XRegenerateItemsInStashes_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XKillNpcByUID
	 */
	struct UCustomConsoleManagerDC_XKillNpcByUID_Params
	{
	public:
		int32_t                                                    NpcUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDC.XChangeDropBodyMethod
	 */
	struct UCustomConsoleManagerDC_XChangeDropBodyMethod_Params
	{
	public:
		bool                                                       bShouldDrop;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XTestDialogFolders
	 */
	struct UCustomConsoleManagerDK_XTestDialogFolders_Params
	{
	public:
		int32_t                                                    Members;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Answers;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadNavigationParams
	 */
	struct UCustomConsoleManagerDK_XSetInventoryGamepadNavigationParams_Params
	{
	public:
		float                                                      InputDelay;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InputThreshold;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SelectionDelay;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadNavigationByAxises
	 */
	struct UCustomConsoleManagerDK_XSetInventoryGamepadNavigationByAxises_Params
	{
	public:
		bool                                                       bAxes;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputThreshold
	 */
	struct UCustomConsoleManagerDK_XSetInventoryGamepadInputThreshold_Params
	{
	public:
		float                                                      InputThreshold;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputSelectionDelay
	 */
	struct UCustomConsoleManagerDK_XSetInventoryGamepadInputSelectionDelay_Params
	{
	public:
		float                                                      InputSelectionDelay;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputDelay
	 */
	struct UCustomConsoleManagerDK_XSetInventoryGamepadInputDelay_Params
	{
	public:
		float                                                      InputDelay;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XSetGamepadNavigationBorderSpeed
	 */
	struct UCustomConsoleManagerDK_XSetGamepadNavigationBorderSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XGridNavigationVar
	 */
	struct UCustomConsoleManagerDK_XGridNavigationVar_Params
	{
	public:
		int32_t                                                    InVar;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDrawDebugInventoryNavigation
	 */
	struct UCustomConsoleManagerDK_XDrawDebugInventoryNavigation_Params
	{
	public:
		bool                                                       bDraw;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDKStartTwoQuestStage
	 */
	struct UCustomConsoleManagerDK_XDKStartTwoQuestStage_Params
	{
	public:
		class FString                                              QSID;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDKStartQuestStage
	 */
	struct UCustomConsoleManagerDK_XDKStartQuestStage_Params
	{
	public:
		class FString                                              QSID;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SSID;                                                    // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDKStartQuest
	 */
	struct UCustomConsoleManagerDK_XDKStartQuest_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDKStartAndFinishQuestStage
	 */
	struct UCustomConsoleManagerDK_XDKStartAndFinishQuestStage_Params
	{
	public:
		class FString                                              QSID;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDKFinishQuestStage
	 */
	struct UCustomConsoleManagerDK_XDKFinishQuestStage_Params
	{
	public:
		class FString                                              QSID;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SSID;                                                    // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWin;                                                    // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.XDKFinishQuest
	 */
	struct UCustomConsoleManagerDK_XDKFinishQuest_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWin;                                                    // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.UseStackSplitContextual
	 */
	struct UCustomConsoleManagerDK_UseStackSplitContextual_Params
	{
	public:
		bool                                                       bInUse;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.MoveItemsInTrade
	 */
	struct UCustomConsoleManagerDK_MoveItemsInTrade_Params
	{
	public:
		bool                                                       bMoveTraderItems;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMoveOwnItems;                                           // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMoveBarterItems;                                        // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.HideCursorInMouseDrag
	 */
	struct UCustomConsoleManagerDK_HideCursorInMouseDrag_Params
	{
	public:
		bool                                                       bHide;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDK.AllwaysShowDropHere
	 */
	struct UCustomConsoleManagerDK_AllwaysShowDropHere_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XTestCrashStackOverflow
	 */
	struct UCustomConsoleManagerDP_XTestCrashStackOverflow_Params
	{
	public:
		int32_t                                                    Counter;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XTestCrashReturnIfFalse
	 */
	struct UCustomConsoleManagerDP_XTestCrashReturnIfFalse_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XTestCrashRandomAddress
	 */
	struct UCustomConsoleManagerDP_XTestCrashRandomAddress_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XTestCrashNullptr
	 */
	struct UCustomConsoleManagerDP_XTestCrashNullptr_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XTestCrashLambda
	 */
	struct UCustomConsoleManagerDP_XTestCrashLambda_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XPrintLocalizedTextByKey
	 */
	struct UCustomConsoleManagerDP_XPrintLocalizedTextByKey_Params
	{
	public:
		class FString                                              StringKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDP.XInitializeLocalizationManager
	 */
	struct UCustomConsoleManagerDP_XInitializeLocalizationManager_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDR.XInitializeBenchmarkSequence
	 */
	struct UCustomConsoleManagerDR_XInitializeBenchmarkSequence_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AssetName;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerDR.XEnableCinematicMode
	 */
	struct UCustomConsoleManagerDR_XEnableCinematicMode_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerDR.XDisableCinematicMode
	 */
	struct UCustomConsoleManagerDR_XDisableCinematicMode_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerEG.XGarbageCollector
	 */
	struct UCustomConsoleManagerEG_XGarbageCollector_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerIK.XStartSequenceOnLevel
	 */
	struct UCustomConsoleManagerIK_XStartSequenceOnLevel_Params
	{
	public:
		int32_t                                                    SequenceIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerIM.XMigrateSquadToPlayerAlife
	 */
	struct UCustomConsoleManagerIM_XMigrateSquadToPlayerAlife_Params
	{
	public:
		float                                                      StartX;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartY;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerIM.XHighlightCovers
	 */
	struct UCustomConsoleManagerIM_XHighlightCovers_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowTriggerCapsuleView
	 */
	struct UCustomConsoleManagerMB_XToggleShowTriggerCapsuleView_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowProtection
	 */
	struct UCustomConsoleManagerMB_XToggleShowProtection_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerRequestedMainHandWeaponType
	 */
	struct UCustomConsoleManagerMB_XToggleShowPlayerRequestedMainHandWeaponType_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerLocation
	 */
	struct UCustomConsoleManagerMB_XToggleShowPlayerLocation_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerLastHeldItem
	 */
	struct UCustomConsoleManagerMB_XToggleShowPlayerLastHeldItem_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowModels
	 */
	struct UCustomConsoleManagerMB_XToggleShowModels_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleShowLightningBallAnomalyDebugInfo
	 */
	struct UCustomConsoleManagerMB_XToggleShowLightningBallAnomalyDebugInfo_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XToggleDebugExpulsionAnomaly
	 */
	struct UCustomConsoleManagerMB_XToggleDebugExpulsionAnomaly_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XSwitchAnomalySpawnerPreset
	 */
	struct UCustomConsoleManagerMB_XSwitchAnomalySpawnerPreset_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XSetDrawDebugExplosion
	 */
	struct UCustomConsoleManagerMB_XSetDrawDebugExplosion_Params
	{
	public:
		bool                                                       bDebug;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0EXV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DebugTime;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMB.XDrawDebugRadiation
	 */
	struct UCustomConsoleManagerMB_XDrawDebugRadiation_Params
	{
	public:
		bool                                                       InDrawDebugRadiation;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XToggleSoapBubbleDebug
	 */
	struct UCustomConsoleManagerMH_XToggleSoapBubbleDebug_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerShootingDebug
	 */
	struct UCustomConsoleManagerMH_XToggleDrawPlayerShootingDebug_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerRecoilDebug
	 */
	struct UCustomConsoleManagerMH_XToggleDrawPlayerRecoilDebug_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerDispersionDebug
	 */
	struct UCustomConsoleManagerMH_XToggleDrawPlayerDispersionDebug_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XToggleDrawAIShootingDebug
	 */
	struct UCustomConsoleManagerMH_XToggleDrawAIShootingDebug_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XRemoveEffectFromPlayer
	 */
	struct UCustomConsoleManagerMH_XRemoveEffectFromPlayer_Params
	{
	public:
		class FString                                              EffectPrototypeSID;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMH.XApplyMainHandWeaponUpgradeBySID
	 */
	struct UCustomConsoleManagerMH_XApplyMainHandWeaponUpgradeBySID_Params
	{
	public:
		class FString                                              UpgradePrototypeSID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMP.XTriggerAutoSave
	 */
	struct UCustomConsoleManagerMP_XTriggerAutoSave_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMP.XToggleLogLoadingProgress
	 */
	struct UCustomConsoleManagerMP_XToggleLogLoadingProgress_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMP.XStartSleep
	 */
	struct UCustomConsoleManagerMP_XStartSleep_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMS.XShowMaterial
	 */
	struct UCustomConsoleManagerMS_XShowMaterial_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaterialID;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    LODId;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMS.XSetCameraShakeScale
	 */
	struct UCustomConsoleManagerMS_XSetCameraShakeScale_Params
	{
	public:
		float                                                      NewScale;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMS.XSetAIStayGoal
	 */
	struct UCustomConsoleManagerMS_XSetAIStayGoal_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QXCW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AnimPath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMS.XLaunchCustomAnimation
	 */
	struct UCustomConsoleManagerMS_XLaunchCustomAnimation_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OU4S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AnimPath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AnimSlotName;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XSimulatePhysicsOnBoneForObj
	 */
	struct UCustomConsoleManagerMY_XSimulatePhysicsOnBoneForObj_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E9SA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              BoneName;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XSetXRayMode
	 */
	struct UCustomConsoleManagerMY_XSetXRayMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XSetDebugMode
	 */
	struct UCustomConsoleManagerMY_XSetDebugMode_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XPossessToCharacterByUID
	 */
	struct UCustomConsoleManagerMY_XPossessToCharacterByUID_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem
	 */
	struct UCustomConsoleManagerMY_XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         InMovementBehaviour;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToPlayerPositionByObjUID
	 */
	struct UCustomConsoleManagerMY_XForceAIMoveToPlayerPositionByObjUID_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         InMovementBehaviour;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToObjectByObjUID
	 */
	struct UCustomConsoleManagerMY_XForceAIMoveToObjectByObjUID_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_72I9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SceneActor;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         InMovementBehaviour;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XForceAIMoveFaceToFaceByObjUIDs
	 */
	struct UCustomConsoleManagerMY_XForceAIMoveFaceToFaceByObjUIDs_Params
	{
	public:
		int32_t                                                    FirstObjUID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SecondObjUID;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         InMovementBehaviourFirst;                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         InMovementBehaviourSecond;                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerMY.XForceAIDogsMoveToObject
	 */
	struct UCustomConsoleManagerMY_XForceAIDogsMoveToObject_Params
	{
	public:
		class FString                                              SceneActor;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementBehaviour                                         InMovementBehaviour;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TSKS[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SpreadRadius;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselTimeToCenter
	 */
	struct UCustomConsoleManagerOM_XSetCarouselTimeToCenter_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselRotation
	 */
	struct UCustomConsoleManagerOM_XSetCarouselRotation_Params
	{
	public:
		float                                                      Rotation;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselLiftUpTime
	 */
	struct UCustomConsoleManagerOM_XSetCarouselLiftUpTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselForce
	 */
	struct UCustomConsoleManagerOM_XSetCarouselForce_Params
	{
	public:
		float                                                      Force;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselDuration
	 */
	struct UCustomConsoleManagerOM_XSetCarouselDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselDebugTrajectory
	 */
	struct UCustomConsoleManagerOM_XSetCarouselDebugTrajectory_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerOM.XSetCarouselAngle
	 */
	struct UCustomConsoleManagerOM_XSetCarouselAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerPA.XTogglePhysicalMaterialDebug
	 */
	struct UCustomConsoleManagerPA_XTogglePhysicalMaterialDebug_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerPA.XToggleGrenadeDebug
	 */
	struct UCustomConsoleManagerPA_XToggleGrenadeDebug_Params
	{
	public:
		EGrenadeDebugFlag                                          FlagValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerPS.XShowInventoryDebugItmesStats
	 */
	struct UCustomConsoleManagerPS_XShowInventoryDebugItmesStats_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerPS.XChangeInventoryScroll
	 */
	struct UCustomConsoleManagerPS_XChangeInventoryScroll_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerPS.XChangeCompasMarkers
	 */
	struct UCustomConsoleManagerPS_XChangeCompasMarkers_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerPS.XAddMapMarkersByIdAndAmount
	 */
	struct UCustomConsoleManagerPS_XAddMapMarkersByIdAndAmount_Params
	{
	public:
		int32_t                                                    InMarkerPrototypeID;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XUnlockDoor
	 */
	struct UCustomConsoleManagerRK_XUnlockDoor_Params
	{
	public:
		int32_t                                                    DoorUID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XTogglePsyPhantomDebugMode
	 */
	struct UCustomConsoleManagerRK_XTogglePsyPhantomDebugMode_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XTogglePlayerRadiationSphereVisibility
	 */
	struct UCustomConsoleManagerRK_XTogglePlayerRadiationSphereVisibility_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleNPCFlashlight
	 */
	struct UCustomConsoleManagerRK_XToggleNPCFlashlight_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleHUDElements
	 */
	struct UCustomConsoleManagerRK_XToggleHUDElements_Params
	{
	public:
		EHUDElements                                               ElementsToHide;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleFreeCamera
	 */
	struct UCustomConsoleManagerRK_XToggleFreeCamera_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleDrawPlayerStats
	 */
	struct UCustomConsoleManagerRK_XToggleDrawPlayerStats_Params
	{
	public:
		float                                                      ValueFontXSizeCoef;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueFontYSizeCoef;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleDrawItemStats
	 */
	struct UCustomConsoleManagerRK_XToggleDrawItemStats_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleDrawInteractNPCStats
	 */
	struct UCustomConsoleManagerRK_XToggleDrawInteractNPCStats_Params
	{
	public:
		float                                                      ValueFontXSizeCoef;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueFontYSizeCoef;                                      // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XToggleDetailedVitalsStat
	 */
	struct UCustomConsoleManagerRK_XToggleDetailedVitalsStat_Params
	{
	public:
		EVitalType                                                 VitalType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XTestOrchestrator
	 */
	struct UCustomConsoleManagerRK_XTestOrchestrator_Params
	{
	public:
		class FString                                              DialogPrototypeSID;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XTeleportToObjUID
	 */
	struct UCustomConsoleManagerRK_XTeleportToObjUID_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XTeleportTo
	 */
	struct UCustomConsoleManagerRK_XTeleportTo_Params
	{
	public:
		float                                                      XCoord;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YCoord;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ZCoord;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XStopBenchmark
	 */
	struct UCustomConsoleManagerRK_XStopBenchmark_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XStartGSCBackgroundProfiler
	 */
	struct UCustomConsoleManagerRK_XStartGSCBackgroundProfiler_Params
	{
	public:
		float                                                      MsecThreshold;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RamMBThreshold;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   InFramesToCaptureOnSpike;                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   InFrameCountToComputeAverage;                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XStartBenchmark
	 */
	struct UCustomConsoleManagerRK_XStartBenchmark_Params
	{
	public:
		float                                                      CameraHeight;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CircleRadius;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InitialPitch;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InitialYaw;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BenchRuns;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProfileCsv;                                             // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSpawnPsyNPC
	 */
	struct UCustomConsoleManagerRK_XSpawnPsyNPC_Params
	{
	public:
		bool                                                       bIsPsyPhantom;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P3ZR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ObjPrototypeSID;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSpawnObjBySID
	 */
	struct UCustomConsoleManagerRK_XSpawnObjBySID_Params
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Px;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Py;                                                      // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pz;                                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Roll;                                                    // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSpawnObj
	 */
	struct UCustomConsoleManagerRK_XSpawnObj_Params
	{
	public:
		int32_t                                                    PrototypeID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Px;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Py;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pz;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Roll;                                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSpawnItemContainerBySID
	 */
	struct UCustomConsoleManagerRK_XSpawnItemContainerBySID_Params
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Px;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Py;                                                      // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pz;                                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Gold;                                                    // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Roll;                                                    // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSpawnItemContainer
	 */
	struct UCustomConsoleManagerRK_XSpawnItemContainer_Params
	{
	public:
		int32_t                                                    PrototypeID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Px;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Py;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pz;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Gold;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Roll;                                                    // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSetPsyNPCFilterParams
	 */
	struct UCustomConsoleManagerRK_XSetPsyNPCFilterParams_Params
	{
	public:
		bool                                                       bIsPsyPhantom;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X6WR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EAgentType                                                 AgentType1;                                              // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAgentType                                                 AgentType2;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SR35[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ObjPrototypeFilter1;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ObjPrototypeFilter2;                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ObjPrototypeFilter3;                                     // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSetGodMode
	 */
	struct UCustomConsoleManagerRK_XSetGodMode_Params
	{
	public:
		bool                                                       bGodMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSetGlobalObjectPath
	 */
	struct UCustomConsoleManagerRK_XSetGlobalObjectPath_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValue;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSetGlobalBool
	 */
	struct UCustomConsoleManagerRK_XSetGlobalBool_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XSetDebugBulletLogParams
	 */
	struct UCustomConsoleManagerRK_XSetDebugBulletLogParams_Params
	{
	public:
		EDebugBulletLog                                            BulletLogParams;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XRevertUpgradeBySID
	 */
	struct UCustomConsoleManagerRK_XRevertUpgradeBySID_Params
	{
	public:
		class FString                                              ItemPrototypeSID;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UpgradePrototypeSID;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XOpenDoor
	 */
	struct UCustomConsoleManagerRK_XOpenDoor_Params
	{
	public:
		int32_t                                                    DoorUID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XObjRecalcAllEquipment
	 */
	struct UCustomConsoleManagerRK_XObjRecalcAllEquipment_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XObjRecalcAllCachedStats
	 */
	struct UCustomConsoleManagerRK_XObjRecalcAllCachedStats_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XModifyStamina
	 */
	struct UCustomConsoleManagerRK_XModifyStamina_Params
	{
	public:
		int32_t                                                    TargetUID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FPSpent;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XModifyBleeding
	 */
	struct UCustomConsoleManagerRK_XModifyBleeding_Params
	{
	public:
		int32_t                                                    TargetUID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AddBleeding;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XIncreaseEnsuresLimit
	 */
	struct UCustomConsoleManagerRK_XIncreaseEnsuresLimit_Params
	{
	public:
		int32_t                                                    IncreaseLimit;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XGenerateItemsForPlayerWithPerfLog
	 */
	struct UCustomConsoleManagerRK_XGenerateItemsForPlayerWithPerfLog_Params
	{
	public:
		int32_t                                                    ItemGeneratorPrototypeID;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XForceActorInteract
	 */
	struct UCustomConsoleManagerRK_XForceActorInteract_Params
	{
	public:
		int32_t                                                    ActorUID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InteractableUID;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XFileExists
	 */
	struct UCustomConsoleManagerRK_XFileExists_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XDrawPsyFieldVolumes
	 */
	struct UCustomConsoleManagerRK_XDrawPsyFieldVolumes_Params
	{
	public:
		bool                                                       bInDrawPsyField;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XDetachItem
	 */
	struct UCustomConsoleManagerRK_XDetachItem_Params
	{
	public:
		int32_t                                                    ItemUID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XDealDurabilityDamage
	 */
	struct UCustomConsoleManagerRK_XDealDurabilityDamage_Params
	{
	public:
		int32_t                                                    ItemUID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurabilityDamage;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XDealDamage
	 */
	struct UCustomConsoleManagerRK_XDealDamage_Params
	{
	public:
		int32_t                                                    TargetUID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ArmorDamage;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ArmorPiercing;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Bleeding;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BleedingChanceIncrement;                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDamageType                                                Type;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3YU5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              BoneHit;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XCreateItemInInventoryByID
	 */
	struct UCustomConsoleManagerRK_XCreateItemInInventoryByID_Params
	{
	public:
		int32_t                                                    PrototypeID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ObjUID;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Durability;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XAttachItem
	 */
	struct UCustomConsoleManagerRK_XAttachItem_Params
	{
	public:
		int32_t                                                    EquipmentSlot;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttachmentUID;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OwnerUID;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XApplyUpgradeBySID
	 */
	struct UCustomConsoleManagerRK_XApplyUpgradeBySID_Params
	{
	public:
		class FString                                              ItemPrototypeSID;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UpgradePrototypeSID;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XApplyUpgrade
	 */
	struct UCustomConsoleManagerRK_XApplyUpgrade_Params
	{
	public:
		int32_t                                                    ItemUID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UpgradePrototypeID;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnPlayer
	 */
	struct UCustomConsoleManagerRK_XApplyEffectOnPlayer_Params
	{
	public:
		class FString                                              EffectPrototypeSID;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnNPCByUID
	 */
	struct UCustomConsoleManagerRK_XApplyEffectOnNPCByUID_Params
	{
	public:
		class FString                                              EffectPrototypeSID;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UID;                                                     // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnInteractNPC
	 */
	struct UCustomConsoleManagerRK_XApplyEffectOnInteractNPC_Params
	{
	public:
		class FString                                              EffectPrototypeSID;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerRK.TransformUID
	 */
	struct UCustomConsoleManagerRK_TransformUID_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XTeleportToPlacesOfInterest
	 */
	struct UCustomConsoleManagerSD_XTeleportToPlacesOfInterest_Params
	{
	public:
		class FString                                              SID;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XTeleport
	 */
	struct UCustomConsoleManagerSD_XTeleport_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XShowCompass
	 */
	struct UCustomConsoleManagerSD_XShowCompass_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XShowAllWidget
	 */
	struct UCustomConsoleManagerSD_XShowAllWidget_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XHideCompass
	 */
	struct UCustomConsoleManagerSD_XHideCompass_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XHideAllWidget
	 */
	struct UCustomConsoleManagerSD_XHideAllWidget_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XGetActorNameByUID
	 */
	struct UCustomConsoleManagerSD_XGetActorNameByUID_Params
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerSD.XBeginPlay
	 */
	struct UCustomConsoleManagerSD_XBeginPlay_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XSVFriendlyFire
	 */
	struct UCustomConsoleManagerSM_XSVFriendlyFire_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XStopEmission
	 */
	struct UCustomConsoleManagerSM_XStopEmission_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XStartEmissionBySID
	 */
	struct UCustomConsoleManagerSM_XStartEmissionBySID_Params
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XStartEmission
	 */
	struct UCustomConsoleManagerSM_XStartEmission_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XShowProjectileTrajectory
	 */
	struct UCustomConsoleManagerSM_XShowProjectileTrajectory_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XResumeScheduledEmission
	 */
	struct UCustomConsoleManagerSM_XResumeScheduledEmission_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XPauseScheduledEmission
	 */
	struct UCustomConsoleManagerSM_XPauseScheduledEmission_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSM.XGetEmissionState
	 */
	struct UCustomConsoleManagerSM_XGetEmissionState_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSS.XALifeKillAll
	 */
	struct UCustomConsoleManagerSS_XALifeKillAll_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSS.XALifeEnable
	 */
	struct UCustomConsoleManagerSS_XALifeEnable_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerSS.XALifeDisable
	 */
	struct UCustomConsoleManagerSS_XALifeDisable_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XTestPDA
	 */
	struct UCustomConsoleManagerVC_XTestPDA_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XTestNotes
	 */
	struct UCustomConsoleManagerVC_XTestNotes_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XTestMapMarker
	 */
	struct UCustomConsoleManagerVC_XTestMapMarker_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XTestJournalFinishQuest
	 */
	struct UCustomConsoleManagerVC_XTestJournalFinishQuest_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XTestJournal
	 */
	struct UCustomConsoleManagerVC_XTestJournal_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XShowUIDebugInput
	 */
	struct UCustomConsoleManagerVC_XShowUIDebugInput_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XShowStatProgres
	 */
	struct UCustomConsoleManagerVC_XShowStatProgres_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XShowPDANavigationCenter
	 */
	struct UCustomConsoleManagerVC_XShowPDANavigationCenter_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XShowPDABook
	 */
	struct UCustomConsoleManagerVC_XShowPDABook_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XShowGameDataAndTime
	 */
	struct UCustomConsoleManagerVC_XShowGameDataAndTime_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XShowCompassAngle
	 */
	struct UCustomConsoleManagerVC_XShowCompassAngle_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XHideGameDataAndTime
	 */
	struct UCustomConsoleManagerVC_XHideGameDataAndTime_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XDialogFontSizeSubtitle
	 */
	struct UCustomConsoleManagerVC_XDialogFontSizeSubtitle_Params
	{
	public:
		int32_t                                                    InTextSize;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XDialogFontSizeAnswer
	 */
	struct UCustomConsoleManagerVC_XDialogFontSizeAnswer_Params
	{
	public:
		int32_t                                                    InTextSize;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XChangeTestWidgetOnHUD
	 */
	struct UCustomConsoleManagerVC_XChangeTestWidgetOnHUD_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XChangeLanguageRU
	 */
	struct UCustomConsoleManagerVC_XChangeLanguageRU_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XChangeLanguageEN
	 */
	struct UCustomConsoleManagerVC_XChangeLanguageEN_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XChangeLanguage
	 */
	struct UCustomConsoleManagerVC_XChangeLanguage_Params
	{
	public:
		int32_t                                                    LanguageIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XChangeHUDWidget
	 */
	struct UCustomConsoleManagerVC_XChangeHUDWidget_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XAddNotesById
	 */
	struct UCustomConsoleManagerVC_XAddNotesById_Params
	{
	public:
		int32_t                                                    InNotePrototypeID;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XAddMapMarkerById
	 */
	struct UCustomConsoleManagerVC_XAddMapMarkerById_Params
	{
	public:
		int32_t                                                    InMarkerPrototypeID;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.XAddItemDragToQuickSlot
	 */
	struct UCustomConsoleManagerVC_XAddItemDragToQuickSlot_Params
	{
	public:
		int32_t                                                    IndexSlot;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVC.DebugUIShowTextSize
	 */
	struct UCustomConsoleManagerVC_DebugUIShowTextSize_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XSpawnTwoAlifeSquadsCloseEnoughToBattle
	 */
	struct UCustomConsoleManagerVD_XSpawnTwoAlifeSquadsCloseEnoughToBattle_Params
	{
	public:
		class FString                                              Faction1;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Faction2;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Faction1UnitsCount;                                      // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Faction2UnitsCount;                                      // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XSpawnDeadNpc
	 */
	struct UCustomConsoleManagerVD_XSpawnDeadNpc_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XShowUnitAndSquadUIDs
	 */
	struct UCustomConsoleManagerVD_XShowUnitAndSquadUIDs_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XSetALifeGridVisionRadius
	 */
	struct UCustomConsoleManagerVD_XSetALifeGridVisionRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XSetALifeBattleTickTime
	 */
	struct UCustomConsoleManagerVD_XSetALifeBattleTickTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XProtectSquad
	 */
	struct UCustomConsoleManagerVD_XProtectSquad_Params
	{
	public:
		class FString                                              SquadUID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProtect;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVD.XProtectItemContainer
	 */
	struct UCustomConsoleManagerVD_XProtectItemContainer_Params
	{
	public:
		class FString                                              ContainerUID;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProtect;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XWoundNpcByUID
	 */
	struct UCustomConsoleManagerVP_XWoundNpcByUID_Params
	{
	public:
		int32_t                                                    NpcUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XShootAttach
	 */
	struct UCustomConsoleManagerVP_XShootAttach_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XResurrectNPCAsZombie
	 */
	struct UCustomConsoleManagerVP_XResurrectNPCAsZombie_Params
	{
	public:
		int32_t                                                    NpcUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XReloadAttachTactical
	 */
	struct UCustomConsoleManagerVP_XReloadAttachTactical_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XReloadAttach
	 */
	struct UCustomConsoleManagerVP_XReloadAttach_Params
	{	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XNpcLookAt
	 */
	struct UCustomConsoleManagerVP_XNpcLookAt_Params
	{
	public:
		int32_t                                                    NpcUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XLaunchFacialAnimation
	 */
	struct UCustomConsoleManagerVP_XLaunchFacialAnimation_Params
	{
	public:
		int32_t                                                    ObjUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7KMA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AnimPath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XKnockDownNpcByAnotherNpc
	 */
	struct UCustomConsoleManagerVP_XKnockDownNpcByAnotherNpc_Params
	{
	public:
		int32_t                                                    NpcUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttackerNpcUID;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XKnockDownNpc
	 */
	struct UCustomConsoleManagerVP_XKnockDownNpc_Params
	{
	public:
		int32_t                                                    NpcUID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerVP.XInstallAttachBySID
	 */
	struct UCustomConsoleManagerVP_XInstallAttachBySID_Params
	{
	public:
		class FString                                              AttachSID;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerYK.XTestSetDiscount
	 */
	struct UCustomConsoleManagerYK_XTestSetDiscount_Params
	{
	public:
		bool                                                       InbDiscount;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerYK.XBlockItemSelectorSlots
	 */
	struct UCustomConsoleManagerYK_XBlockItemSelectorSlots_Params
	{
	public:
		bool                                                       InBlock;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomConsoleManagerYK.XBlockItemSelectorSlot
	 */
	struct UCustomConsoleManagerYK_XBlockItemSelectorSlot_Params
	{
	public:
		bool                                                       InBlock;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N6O2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSlotNum;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomGrid.OnScrollBarScrolled
	 */
	struct UCustomGrid_OnScrollBarScrolled_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.CustomGrid.OnGamepadSelectItemForMove
	 */
	struct UCustomGrid_OnGamepadSelectItemForMove_Params
	{	};

	/**
	 * Function Stalker2.CustomGrid.OnGamepadPutItem
	 */
	struct UCustomGrid_OnGamepadPutItem_Params
	{	};

	/**
	 * Function Stalker2.DealDamageComponent.DealDamage
	 */
	struct UDealDamageComponent_DealDamage_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DebugTextWidgetBase.FindRengeSettings
	 */
	struct UDebugTextWidgetBase_FindRengeSettings_Params
	{
	public:
		struct FUIWarningSettings                                  ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DebugTextWidgetBase.CheckDebugTextBluprint
	 */
	struct UDebugTextWidgetBase_CheckDebugTextBluprint_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UUserWidget*                                         InOwnerWidget;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DebugTextLenWidget.GetWarningIndex
	 */
	struct UDebugTextLenWidget_GetWarningIndex_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TextLen;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DebugTextLineWidget.GetIndecRowSettings
	 */
	struct UDebugTextLineWidget_GetIndecRowSettings_Params
	{
	public:
		int32_t                                                    CurrentRow;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U7FL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRengeSettings>                              RowSettings;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DestructibleItemContainer.OnBreak
	 */
	struct ADestructibleItemContainer_OnBreak_Params
	{
	public:
		struct FChaosBreakEvent                                    BreakEvent;                                              // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DestructibleObject.StartDestructActions
	 */
	struct ADestructibleObject_StartDestructActions_Params
	{	};

	/**
	 * Function Stalker2.DestructibleObject.OnHit
	 */
	struct ADestructibleObject_OnHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DestructibleObject.GSCFramework_OnPreTransition
	 */
	struct ADestructibleObject_GSCFramework_OnPreTransition_Params
	{	};

	/**
	 * Function Stalker2.DestructibleObject.GSCFramework_OnPostTransition
	 */
	struct ADestructibleObject_GSCFramework_OnPostTransition_Params
	{	};

	/**
	 * Function Stalker2.DestructibleObject.GSCFramework_GetObjectPhases
	 */
	struct ADestructibleObject_GSCFramework_GetObjectPhases_Params
	{
	public:
		TArray<struct FObjectPhaseSettings>                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DestructibleObject.GSCFramework_GetCurrentPhase
	 */
	struct ADestructibleObject_GSCFramework_GetCurrentPhase_Params
	{
	public:
		struct FObjectPhaseSettings                                ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DestructibleObject.GetCurrentPhaseIndex
	 */
	struct ADestructibleObject_GetCurrentPhaseIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DialogManager.OnToggleAudiolog
	 */
	struct UDialogManager_OnToggleAudiolog_Params
	{
	public:
		bool                                                       bPlayAudiolog;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DialogueAnswer.AnswerWidgetClick
	 */
	struct UDialogueAnswer_AnswerWidgetClick_Params
	{	};

	/**
	 * Function Stalker2.DialogueFastAnswer.SelectAnswer
	 */
	struct UDialogueFastAnswer_SelectAnswer_Params
	{	};

	/**
	 * Function Stalker2.DialogueFastAnswer.PostSelectAnswer
	 */
	struct UDialogueFastAnswer_PostSelectAnswer_Params
	{	};

	/**
	 * Function Stalker2.DialogueFastAnswer.EndSelectAnswer
	 */
	struct UDialogueFastAnswer_EndSelectAnswer_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.UIDialogOpenUpgrade
	 */
	struct UDialogueViewFolder_UIDialogOpenUpgrade_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.UIDialogOpenTrade
	 */
	struct UDialogueViewFolder_UIDialogOpenTrade_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.UIDialogClose
	 */
	struct UDialogueViewFolder_UIDialogClose_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.UIDialogAnswerUp
	 */
	struct UDialogueViewFolder_UIDialogAnswerUp_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.UIDialogAnswerDown
	 */
	struct UDialogueViewFolder_UIDialogAnswerDown_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.UIDialogAnswerConfirm
	 */
	struct UDialogueViewFolder_UIDialogAnswerConfirm_Params
	{	};

	/**
	 * Function Stalker2.DialogueViewFolder.ChangeSelectFolder
	 */
	struct UDialogueViewFolder_ChangeSelectFolder_Params
	{
	public:
		int32_t                                                    IndexOldFolder;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AxisMove;                                                // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDialogueAnswer*                                     ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Door.OnDoorMeshHit
	 */
	struct UDoor_OnDoorMeshHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0030(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DoorView.UnlockDoor
	 */
	struct ADoorView_UnlockDoor_Params
	{	};

	/**
	 * Function Stalker2.DoorView.RebuildDoorView
	 */
	struct ADoorView_RebuildDoorView_Params
	{	};

	/**
	 * Function Stalker2.DoorView.PeekDoor
	 */
	struct ADoorView_PeekDoor_Params
	{	};

	/**
	 * Function Stalker2.DoorView.OpenDoor
	 */
	struct ADoorView_OpenDoor_Params
	{	};

	/**
	 * Function Stalker2.DoorView.OnComponentHit
	 */
	struct ADoorView_OnComponentHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0030(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.DoorView.LockDoor
	 */
	struct ADoorView_LockDoor_Params
	{	};

	/**
	 * Function Stalker2.DoorView.InvertDoorState
	 */
	struct ADoorView_InvertDoorState_Params
	{	};

	/**
	 * Function Stalker2.DoorView.InvertDoorLock
	 */
	struct ADoorView_InvertDoorLock_Params
	{	};

	/**
	 * Function Stalker2.DoorView.ForceOpenDoor
	 */
	struct ADoorView_ForceOpenDoor_Params
	{	};

	/**
	 * Function Stalker2.DoorView.ForceCloseDoor
	 */
	struct ADoorView_ForceCloseDoor_Params
	{	};

	/**
	 * Function Stalker2.DoorView.CloseDoor
	 */
	struct ADoorView_CloseDoor_Params
	{	};

	/**
	 * Function Stalker2.DPadWidget.OpenUpdate
	 */
	struct UDPadWidget_OpenUpdate_Params
	{	};

	/**
	 * Function Stalker2.DPadWidget.EmuletClick
	 */
	struct UDPadWidget_EmuletClick_Params
	{
	public:
		EDPadClickType                                             InClickType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.EditorTools.XVerifyAllActorsForBrokenReference
	 */
	struct AEditorTools_XVerifyAllActorsForBrokenReference_Params
	{	};

	/**
	 * Function Stalker2.EditorTools.XRemoveRestoredLabelFromActors
	 */
	struct AEditorTools_XRemoveRestoredLabelFromActors_Params
	{	};

	/**
	 * Function Stalker2.EditorTools.UpdateVoiceSounds
	 */
	struct AEditorTools_UpdateVoiceSounds_Params
	{	};

	/**
	 * Function Stalker2.EditorTools.RemoveEditorContainers
	 */
	struct AEditorTools_RemoveEditorContainers_Params
	{	};

	/**
	 * Function Stalker2.EditorTools.IsGameWorld
	 */
	struct AEditorTools_IsGameWorld_Params
	{
	public:
		class UWorld*                                              GameWorld;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.EditorTools.IsActorInGameWorld
	 */
	struct AEditorTools_IsActorInGameWorld_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.EditorTools.GetSkyLightUpdateDeltaTime
	 */
	struct AEditorTools_GetSkyLightUpdateDeltaTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.EditorTools.FixAttachMeshes
	 */
	struct AEditorTools_FixAttachMeshes_Params
	{	};

	/**
	 * Function Stalker2.EditorTools.CheckAllPrototypes
	 */
	struct AEditorTools_CheckAllPrototypes_Params
	{	};

	/**
	 * Function Stalker2.EditorTools.ChangeNotesToTeleportPoints
	 */
	struct AEditorTools_ChangeNotesToTeleportPoints_Params
	{	};

	/**
	 * Function Stalker2.ElectroAnomaly.GetRadius
	 */
	struct AElectroAnomaly_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ElectroAnomaly.GetParticleSpawnLocation
	 */
	struct AElectroAnomaly_GetParticleSpawnLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ElectroAnomaly.GetElectroBakedData
	 */
	struct AElectroAnomaly_GetElectroBakedData_Params
	{
	public:
		struct FElectroAnomalyBakedData                            ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ElectroAnomaly.BPSetActiveIdleVFX
	 */
	struct AElectroAnomaly_BPSetActiveIdleVFX_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ElectroAnomaly.BPDoLightningStrikeAfterPauseTime
	 */
	struct AElectroAnomaly_BPDoLightningStrikeAfterPauseTime_Params
	{	};

	/**
	 * Function Stalker2.EquipmentSlots.OnItemMouseLeave
	 */
	struct UEquipmentSlots_OnItemMouseLeave_Params
	{
	public:
		class UItemSlotBaseWidget*                                 ItemWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.EquipmentSlots.OnItemMouseEnter
	 */
	struct UEquipmentSlots_OnItemMouseEnter_Params
	{
	public:
		class UItemSlotBaseWidget*                                 ItemWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.EquipmentSlots.OnGamepadNavigateUp
	 */
	struct UEquipmentSlots_OnGamepadNavigateUp_Params
	{	};

	/**
	 * Function Stalker2.EquipmentSlots.OnGamepadNavigateRight
	 */
	struct UEquipmentSlots_OnGamepadNavigateRight_Params
	{	};

	/**
	 * Function Stalker2.EquipmentSlots.OnGamepadNavigateLeft
	 */
	struct UEquipmentSlots_OnGamepadNavigateLeft_Params
	{	};

	/**
	 * Function Stalker2.EquipmentSlots.OnGamepadNavigateDown
	 */
	struct UEquipmentSlots_OnGamepadNavigateDown_Params
	{	};

	/**
	 * Function Stalker2.ExplosionComponent.Explode
	 */
	struct UExplosionComponent_Explode_Params
	{	};

	/**
	 * Function Stalker2.ExpulsionAnomaly.OnBoltCollided
	 */
	struct AExpulsionAnomaly_OnBoltCollided_Params
	{
	public:
		struct FVector                                             LocalPoint;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.FadeoutScreen.UISkipFadeoutScreen
	 */
	struct UFadeoutScreen_UISkipFadeoutScreen_Params
	{	};

	/**
	 * Function Stalker2.FastDialogueView.UpdateAfterClick
	 */
	struct UFastDialogueView_UpdateAfterClick_Params
	{	};

	/**
	 * Function Stalker2.FastDialogueView.UIFastDialogSecondAnswer
	 */
	struct UFastDialogueView_UIFastDialogSecondAnswer_Params
	{	};

	/**
	 * Function Stalker2.FastDialogueView.UIFastDialogFirstAnswer
	 */
	struct UFastDialogueView_UIFastDialogFirstAnswer_Params
	{	};

	/**
	 * Function Stalker2.FastDialogueView.PostSelectAnswer
	 */
	struct UFastDialogueView_PostSelectAnswer_Params
	{
	public:
		bool                                                       bIsRightAnswer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.FastDialogueView.EndSelectAnswer
	 */
	struct UFastDialogueView_EndSelectAnswer_Params
	{
	public:
		bool                                                       bIsRightAnswer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.FastDialogueView.BlockInput
	 */
	struct UFastDialogueView_BlockInput_Params
	{	};

	/**
	 * Function Stalker2.GameGraphRenderingComponent.ShowAllComponents
	 */
	struct UGameGraphRenderingComponent_ShowAllComponents_Params
	{	};

	/**
	 * Function Stalker2.Global.GoToMap
	 */
	struct UGlobal_GoToMap_Params
	{
	public:
		class FName                                                MapName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Grenade.Explode
	 */
	struct AGrenade_Explode_Params
	{	};

	/**
	 * Function Stalker2.GSCAblityBlueprintFunctions.ExecuteAbilityByActivationTagAttackPayload
	 */
	struct UGSCAblityBlueprintFunctions_ExecuteAbilityByActivationTagAttackPayload_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActivationTag;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
	 */
	struct UGSCTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params
	{
	public:
		class UGSCTimeSynthVolumeGroup*                            InVolumeGroup;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGSCTimeSynthEventClipQuantization                         EventQuantization;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R9GM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGSCTimeSynthTimeDef                                FadeTime;                                                // 0x000C(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.StopSoundsOnVolumeGroup
	 */
	struct UGSCTimeSynthComponent_StopSoundsOnVolumeGroup_Params
	{
	public:
		class UGSCTimeSynthVolumeGroup*                            InVolumeGroup;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGSCTimeSynthEventClipQuantization                         EventQuantization;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.StopClipWithFadeOverride
	 */
	struct UGSCTimeSynthComponent_StopClipWithFadeOverride_Params
	{
	public:
		struct FGSCTimeSynthClipHandle                             InClipHandle;                                            // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EGSCTimeSynthEventClipQuantization                         EventQuantization;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YQDB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGSCTimeSynthTimeDef                                FadeTime;                                                // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.StopClip
	 */
	struct UGSCTimeSynthComponent_StopClip_Params
	{
	public:
		struct FGSCTimeSynthClipHandle                             InClipHandle;                                            // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EGSCTimeSynthEventClipQuantization                         EventQuantization;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetVolumeGroup
	 */
	struct UGSCTimeSynthComponent_SetVolumeGroup_Params
	{
	public:
		class UGSCTimeSynthVolumeGroup*                            InVolumeGroup;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VolumeDb;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTimeSec;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetSeed
	 */
	struct UGSCTimeSynthComponent_SetSeed_Params
	{
	public:
		int32_t                                                    InSeed;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetQuantizationSettings
	 */
	struct UGSCTimeSynthComponent_SetQuantizationSettings_Params
	{
	public:
		struct FGSCTimeSynthQuantizationSettings                   InQuantizationSettings;                                  // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetFilterSettings
	 */
	struct UGSCTimeSynthComponent_SetFilterSettings_Params
	{
	public:
		EGSCTimeSynthFilter                                        Filter;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3GSM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGSCTimeSynthFilterSettings                         InSettings;                                              // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetFilterEnabled
	 */
	struct UGSCTimeSynthComponent_SetFilterEnabled_Params
	{
	public:
		EGSCTimeSynthFilter                                        Filter;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsEnabled;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetFFTSize
	 */
	struct UGSCTimeSynthComponent_SetFFTSize_Params
	{
	public:
		EGSCTimeSynthFFTSize                                       InFFTSize;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetEnvelopeFollowerSettings
	 */
	struct UGSCTimeSynthComponent_SetEnvelopeFollowerSettings_Params
	{
	public:
		struct FGSCTimeSynthEnvelopeFollowerSettings               InSettings;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetEnvelopeFollowerEnabled
	 */
	struct UGSCTimeSynthComponent_SetEnvelopeFollowerEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.SetBPM
	 */
	struct UGSCTimeSynthComponent_SetBPM_Params
	{
	public:
		float                                                      BeatsPerMinute;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.ResetSeed
	 */
	struct UGSCTimeSynthComponent_ResetSeed_Params
	{	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.PlayClip
	 */
	struct UGSCTimeSynthComponent_PlayClip_Params
	{
	public:
		class UGSCTimeSynthClip*                                   InClip;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGSCTimeSynthVolumeGroup*                            InVolumeGroup;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGSCTimeSynthClipHandle                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.HasActiveClips
	 */
	struct UGSCTimeSynthComponent_HasActiveClips_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.GetSpectralData
	 */
	struct UGSCTimeSynthComponent_GetSpectralData_Params
	{
	public:
		TArray<struct FGSCTimeSynthSpectralData>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.GetMaxActiveClipLimit
	 */
	struct UGSCTimeSynthComponent_GetMaxActiveClipLimit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.GetEnvelopeFollowerValue
	 */
	struct UGSCTimeSynthComponent_GetEnvelopeFollowerValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.GetBPM
	 */
	struct UGSCTimeSynthComponent_GetBPM_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GSCTimeSynthComponent.AddQuantizationEventDelegate
	 */
	struct UGSCTimeSynthComponent_AddQuantizationEventDelegate_Params
	{
	public:
		EGSCTimeSynthEventQuantization                             QuantizationType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LU2F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnQuantizationEvent;                                     // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.GUIDActorSavable.SaveGUIDActor
	 */
	struct UGUIDActorSavable_SaveGUIDActor_Params
	{	};

	/**
	 * Function Stalker2.GUIDActorSavable.LoadGUIDActor
	 */
	struct UGUIDActorSavable_LoadGUIDActor_Params
	{	};

	/**
	 * Function Stalker2.HintDecoratorBase.GetCurrentPlatform
	 */
	struct UHintDecoratorBase_GetCurrentPlatform_Params
	{
	public:
		EGSCPlatformType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.HintKey.PlayHintAnimation
	 */
	struct UHintKey_PlayHintAnimation_Params
	{
	public:
		bool                                                       bSingleClick;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ImageWidget.UpdateIcon
	 */
	struct UImageWidget_UpdateIcon_Params
	{	};

	/**
	 * Function Stalker2.ImageWidget.UpdateController
	 */
	struct UImageWidget_UpdateController_Params
	{	};

	/**
	 * Function Stalker2.ImageWidget.UpdateColour
	 */
	struct UImageWidget_UpdateColour_Params
	{	};

	/**
	 * Function Stalker2.ImageWidget.SetBrushTextureInIconSettings
	 */
	struct UImageWidget_SetBrushTextureInIconSettings_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ImpulseComponent.ApplyImpulse
	 */
	struct UImpulseComponent_ApplyImpulse_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InImpulse;                                               // 0x0008(0x0018)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.Toggle
	 */
	struct AInteractableObject_Toggle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.SetUnbreakable
	 */
	struct AInteractableObject_SetUnbreakable_Params
	{
	public:
		bool                                                       bInUnbreakable;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.SetSelfSufficient
	 */
	struct AInteractableObject_SetSelfSufficient_Params
	{
	public:
		bool                                                       bInSelfSufficient;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.SetPrerequisiteRequired
	 */
	struct AInteractableObject_SetPrerequisiteRequired_Params
	{
	public:
		bool                                                       bInPrerequisiteRequired;                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.SetEnabled
	 */
	struct AInteractableObject_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.SetBroken
	 */
	struct AInteractableObject_SetBroken_Params
	{
	public:
		bool                                                       bInBroken;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.OnNightStart
	 */
	struct AInteractableObject_OnNightStart_Params
	{	};

	/**
	 * Function Stalker2.InteractableObject.OnEmissionStart
	 */
	struct AInteractableObject_OnEmissionStart_Params
	{	};

	/**
	 * Function Stalker2.InteractableObject.OnEmissionFinish
	 */
	struct AInteractableObject_OnEmissionFinish_Params
	{	};

	/**
	 * Function Stalker2.InteractableObject.OnDayStart
	 */
	struct AInteractableObject_OnDayStart_Params
	{	};

	/**
	 * Function Stalker2.InteractableObject.IsUnbreakable
	 */
	struct AInteractableObject_IsUnbreakable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.IsSelfSufficient
	 */
	struct AInteractableObject_IsSelfSufficient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.IsPrerequisiteRequired
	 */
	struct AInteractableObject_IsPrerequisiteRequired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.IsEnabled
	 */
	struct AInteractableObject_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractableObject.IsBroken
	 */
	struct AInteractableObject_IsBroken_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractView.UpdateInteractHints
	 */
	struct UInteractView_UpdateInteractHints_Params
	{	};

	/**
	 * Function Stalker2.InteractView.UpdateInteractClick
	 */
	struct UInteractView_UpdateInteractClick_Params
	{
	public:
		EInteractionType                                           InteractionType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3P9S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Progress;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InteractView.UpdateHintState
	 */
	struct UInteractView_UpdateHintState_Params
	{	};

	/**
	 * Function Stalker2.InteractViewHint.OnRunAction
	 */
	struct UInteractViewHint_OnRunAction_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UpdateInputDependent
	 */
	struct UInventoryNew_UpdateInputDependent_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryToggleItemInfo
	 */
	struct UInventoryNew_UIInventoryToggleItemInfo_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryToggleEquipmentPC
	 */
	struct UInventoryNew_UIInventoryToggleEquipmentPC_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryToggleEquipment
	 */
	struct UInventoryNew_UIInventoryToggleEquipment_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryTakeItem
	 */
	struct UInventoryNew_UIInventoryTakeItem_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventorySplitStepRight
	 */
	struct UInventoryNew_UIInventorySplitStepRight_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventorySplitStepLeft
	 */
	struct UInventoryNew_UIInventorySplitStepLeft_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventorySort
	 */
	struct UInventoryNew_UIInventorySort_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateUp
	 */
	struct UInventoryNew_UIInventoryNavigateUp_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateRight
	 */
	struct UInventoryNew_UIInventoryNavigateRight_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateLeft
	 */
	struct UInventoryNew_UIInventoryNavigateLeft_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateDown
	 */
	struct UInventoryNew_UIInventoryNavigateDown_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateComparingUp
	 */
	struct UInventoryNew_UIInventoryNavigateComparingUp_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateComparingRight
	 */
	struct UInventoryNew_UIInventoryNavigateComparingRight_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateComparingLeft
	 */
	struct UInventoryNew_UIInventoryNavigateComparingLeft_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryNavigateComparingDown
	 */
	struct UInventoryNew_UIInventoryNavigateComparingDown_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryItemAction
	 */
	struct UInventoryNew_UIInventoryItemAction_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryDropItem
	 */
	struct UInventoryNew_UIInventoryDropItem_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.UIInventoryCompareItem
	 */
	struct UInventoryNew_UIInventoryCompareItem_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.SortInventory
	 */
	struct UInventoryNew_SortInventory_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.ShowTooltip
	 */
	struct UInventoryNew_ShowTooltip_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnVisibilityChangedEvent
	 */
	struct UInventoryNew_OnVisibilityChangedEvent_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnTrade
	 */
	struct UInventoryNew_OnTrade_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnToggleEquipment
	 */
	struct UInventoryNew_OnToggleEquipment_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnSplitConfirmed
	 */
	struct UInventoryNew_OnSplitConfirmed_Params
	{
	public:
		int32_t                                                    ItemAmountSplitForDrop;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnSplitCanceled
	 */
	struct UInventoryNew_OnSplitCanceled_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnRightClickMenuItemSelected
	 */
	struct UInventoryNew_OnRightClickMenuItemSelected_Params
	{
	public:
		struct FRightClickMenuItemData                             ItemData;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnRightClickMenuItemHover
	 */
	struct UInventoryNew_OnRightClickMenuItemHover_Params
	{
	public:
		struct FRightClickMenuItemData                             ItemData;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bInHover;                                                // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnRightClickMenuCanceled
	 */
	struct UInventoryNew_OnRightClickMenuCanceled_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnRejectDrop
	 */
	struct UInventoryNew_OnRejectDrop_Params
	{
	public:
		struct FVector2D                                           Pos;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadSelectItemRelease
	 */
	struct UInventoryNew_OnGamepadSelectItemRelease_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadSelectItemForMoveRepeat
	 */
	struct UInventoryNew_OnGamepadSelectItemForMoveRepeat_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadSelectItemForMovePress
	 */
	struct UInventoryNew_OnGamepadSelectItemForMovePress_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadPutItem
	 */
	struct UInventoryNew_OnGamepadPutItem_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadEquipItem
	 */
	struct UInventoryNew_OnGamepadEquipItem_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadDropItemRepeat
	 */
	struct UInventoryNew_OnGamepadDropItemRepeat_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadDropItemRelease
	 */
	struct UInventoryNew_OnGamepadDropItemRelease_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadDropItemPress
	 */
	struct UInventoryNew_OnGamepadDropItemPress_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadDropItem
	 */
	struct UInventoryNew_OnGamepadDropItem_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadContextMenu
	 */
	struct UInventoryNew_OnGamepadContextMenu_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadCompareItemRepeat
	 */
	struct UInventoryNew_OnGamepadCompareItemRepeat_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadCompareItemRelease
	 */
	struct UInventoryNew_OnGamepadCompareItemRelease_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnGamepadCompareItemPress
	 */
	struct UInventoryNew_OnGamepadCompareItemPress_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.OnExitClick
	 */
	struct UInventoryNew_OnExitClick_Params
	{
	public:
		class FName                                                ButtonId;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnDropToEmptyPlace
	 */
	struct UInventoryNew_OnDropToEmptyPlace_Params
	{
	public:
		struct FVector2D                                           Pos;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.OnDragDropCanceled
	 */
	struct UInventoryNew_OnDragDropCanceled_Params
	{
	public:
		struct FVector2D                                           Pos;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.InventoryNew.InventoryWidgetTakeAllItems
	 */
	struct UInventoryNew_InventoryWidgetTakeAllItems_Params
	{	};

	/**
	 * Function Stalker2.InventoryNew.HideRightClickMenu
	 */
	struct UInventoryNew_HideRightClickMenu_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UpdateSlotsFromGamepadAxis
	 */
	struct UItemSelectorView_UpdateSlotsFromGamepadAxis_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorNVD
	 */
	struct UItemSelectorView_UIItemSelectorNVD_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorLentern
	 */
	struct UItemSelectorView_UIItemSelectorLentern_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotUp
	 */
	struct UItemSelectorView_UIItemSelectorFastChangeSlotUp_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotRight
	 */
	struct UItemSelectorView_UIItemSelectorFastChangeSlotRight_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotLeft
	 */
	struct UItemSelectorView_UIItemSelectorFastChangeSlotLeft_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotDown
	 */
	struct UItemSelectorView_UIItemSelectorFastChangeSlotDown_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorFastCancelChang
	 */
	struct UItemSelectorView_UIItemSelectorFastCancelChang_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorDetector
	 */
	struct UItemSelectorView_UIItemSelectorDetector_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorChangeSlotPrevious
	 */
	struct UItemSelectorView_UIItemSelectorChangeSlotPrevious_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorChangeSlotNext
	 */
	struct UItemSelectorView_UIItemSelectorChangeSlotNext_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.UIItemSelectorBinocular
	 */
	struct UItemSelectorView_UIItemSelectorBinocular_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.GetSlotsBP
	 */
	struct UItemSelectorView_GetSlotsBP_Params
	{
	public:
		TArray<class UItemSelectorWeaponSlot*>                     ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemSelectorView.GetEquipSlotsBP
	 */
	struct UItemSelectorView_GetEquipSlotsBP_Params
	{
	public:
		TArray<class UItemSelectorEquipSlot*>                      ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemSelectorView.ChangeFireType
	 */
	struct UItemSelectorView_ChangeFireType_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorView.ChangeAmmoType
	 */
	struct UItemSelectorView_ChangeAmmoType_Params
	{	};

	/**
	 * Function Stalker2.ItemSelectorWeaponSlot.IsWeaponSlot
	 */
	struct UItemSelectorWeaponSlot_IsWeaponSlot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemSelectorWeaponSlot.IsGrenadeSlot
	 */
	struct UItemSelectorWeaponSlot_IsGrenadeSlot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemSelectorWeaponSlot.IsAlternativeSlot
	 */
	struct UItemSelectorWeaponSlot_IsAlternativeSlot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemSelectorWeaponSlot.GetHoveredWidgets
	 */
	struct UItemSelectorWeaponSlot_GetHoveredWidgets_Params
	{
	public:
		TArray<class UUserWidget*>                                 ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemSelectorWeaponSlot.ConstructUpdateSlotScale
	 */
	struct UItemSelectorWeaponSlot_ConstructUpdateSlotScale_Params
	{	};

	/**
	 * Function Stalker2.ItemUsageComponent.HasRequiredItems
	 */
	struct UItemUsageComponent_HasRequiredItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ItemUsageComponent.ConsumeRequiredItems
	 */
	struct UItemUsageComponent_ConsumeRequiredItems_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UpdateStageOnDetailed
	 */
	struct UJournalPage_UpdateStageOnDetailed_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UpdateHoverDetailsElement
	 */
	struct UJournalPage_UpdateHoverDetailsElement_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDetailsElementType                                        ElementType;                                             // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.JournalPage.UpdateButton
	 */
	struct UJournalPage_UpdateButton_Params
	{
	public:
		int32_t                                                    IndexUpdateButton;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.JournalPage.UIPDATransitionToMarkerPosition
	 */
	struct UJournalPage_UIPDATransitionToMarkerPosition_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationUp
	 */
	struct UJournalPage_UIPDANavigationUp_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationStageUp
	 */
	struct UJournalPage_UIPDANavigationStageUp_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationStageDown
	 */
	struct UJournalPage_UIPDANavigationStageDown_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationSelectPanelRight
	 */
	struct UJournalPage_UIPDANavigationSelectPanelRight_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationSelectPanelLeft
	 */
	struct UJournalPage_UIPDANavigationSelectPanelLeft_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationSelect
	 */
	struct UJournalPage_UIPDANavigationSelect_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationRight
	 */
	struct UJournalPage_UIPDANavigationRight_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationReleased
	 */
	struct UJournalPage_UIPDANavigationReleased_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationMouseUp
	 */
	struct UJournalPage_UIPDANavigationMouseUp_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationMouseDown
	 */
	struct UJournalPage_UIPDANavigationMouseDown_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationLeft
	 */
	struct UJournalPage_UIPDANavigationLeft_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.UIPDANavigationDown
	 */
	struct UJournalPage_UIPDANavigationDown_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.StageSlotHover
	 */
	struct UJournalPage_StageSlotHover_Params
	{	};

	/**
	 * Function Stalker2.JournalPage.ShowDetails
	 */
	struct UJournalPage_ShowDetails_Params
	{
	public:
		bool                                                       bEmpty;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.JournalPage.ClickButtonQuest
	 */
	struct UJournalPage_ClickButtonQuest_Params
	{
	public:
		class FName                                                ButtonId;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LavaLampAnomaly.OnLavaStaticObjectCollision
	 */
	struct ALavaLampAnomaly_OnLavaStaticObjectCollision_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalDirection;                                         // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LavaLampAnomaly.OnLavaCollision
	 */
	struct ALavaLampAnomaly_OnLavaCollision_Params
	{
	public:
		struct FBasicParticleData                                  BasicParticleData;                                       // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LavaLampAnomaly.OnFollowPositionChanged
	 */
	struct ALavaLampAnomaly_OnFollowPositionChanged_Params
	{
	public:
		struct FVector                                             FollowPosition;                                          // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Lever.ChangeLeverPosition
	 */
	struct ULever_ChangeLeverPosition_Params
	{	};

	/**
	 * Function Stalker2.LightBulbComponent.SetFlicker
	 */
	struct ULightBulbComponent_SetFlicker_Params
	{
	public:
		bool                                                       bInFlicker;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LightBulbComponent.SetAutoLightOnNight
	 */
	struct ULightBulbComponent_SetAutoLightOnNight_Params
	{
	public:
		bool                                                       bInAutoLightOnNight;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LightBulbComponent.IsFlicker
	 */
	struct ULightBulbComponent_IsFlicker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LightBulbComponent.IsAutoLightOnNight
	 */
	struct ULightBulbComponent_IsAutoLightOnNight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LocomotionTestComponent.SetTarget
	 */
	struct ULocomotionTestComponent_SetTarget_Params
	{
	public:
		struct FVector                                             InTargetVelocity;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XSCD[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               InTargetOrientation;                                     // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.LocomotionTestComponent.GetTrajectory
	 */
	struct ULocomotionTestComponent_GetTrajectory_Params
	{
	public:
		struct FTrajectorySampleRange                              ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.MarkerCompassWidget.IsShowDistance
	 */
	struct UMarkerCompassWidget_IsShowDistance_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.MarkerCompassWidget.IsQuestMarker
	 */
	struct UMarkerCompassWidget_IsQuestMarker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ModifiableRichText.GetNextLine
	 */
	struct UModifiableRichText_GetNextLine_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.MouthComponent.OnBreathFinished
	 */
	struct UMouthComponent_OnBreathFinished_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GOJE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.NavigationPanel.MoveSelectSlotToPreviousSlot
	 */
	struct UNavigationPanel_MoveSelectSlotToPreviousSlot_Params
	{	};

	/**
	 * Function Stalker2.NavigationPanel.MoveSelectSlotToNextSlot
	 */
	struct UNavigationPanel_MoveSelectSlotToNextSlot_Params
	{	};

	/**
	 * Function Stalker2.NavigationPanel.ClickMenuButton
	 */
	struct UNavigationPanel_ClickMenuButton_Params
	{
	public:
		class FName                                                InButtonId;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationUp
	 */
	struct UNotesPage_UIPDANavigationUp_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationRight
	 */
	struct UNotesPage_UIPDANavigationRight_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationPlayAudio
	 */
	struct UNotesPage_UIPDANavigationPlayAudio_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigatioNoteUp
	 */
	struct UNotesPage_UIPDANavigatioNoteUp_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigatioNoteDown
	 */
	struct UNotesPage_UIPDANavigatioNoteDown_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationMouseUp
	 */
	struct UNotesPage_UIPDANavigationMouseUp_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationMouseDown
	 */
	struct UNotesPage_UIPDANavigationMouseDown_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationLeft
	 */
	struct UNotesPage_UIPDANavigationLeft_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.UIPDANavigationDown
	 */
	struct UNotesPage_UIPDANavigationDown_Params
	{	};

	/**
	 * Function Stalker2.NotesPage.ShowDetails
	 */
	struct UNotesPage_ShowDetails_Params
	{
	public:
		bool                                                       bEmpty;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.NotesPage.ShowBlockListNavigstion
	 */
	struct UNotesPage_ShowBlockListNavigstion_Params
	{
	public:
		bool                                                       bBlock;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.NotesPage.ClickButtonMenu
	 */
	struct UNotesPage_ClickButtonMenu_Params
	{
	public:
		class FName                                                ButtonId;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.NotificationWidget.TryShowNextNotify
	 */
	struct UNotificationWidget_TryShowNextNotify_Params
	{	};

	/**
	 * Function Stalker2.NotificationWidget.OnQuestStatusAnimFinished
	 */
	struct UNotificationWidget_OnQuestStatusAnimFinished_Params
	{	};

	/**
	 * Function Stalker2.OnAKEventFinished_Proxy.OnSoundFinished
	 */
	struct UOnAKEventFinished_Proxy_OnSoundFinished_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4RYB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PauseGameView.UpdateShowDebugMenu
	 */
	struct UPauseGameView_UpdateShowDebugMenu_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.UIMenuMoveUp
	 */
	struct UPauseGameView_UIMenuMoveUp_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.UIMenuMoveToGameMap
	 */
	struct UPauseGameView_UIMenuMoveToGameMap_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.UIMenuMoveDown
	 */
	struct UPauseGameView_UIMenuMoveDown_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.UIMenuConfirm
	 */
	struct UPauseGameView_UIMenuConfirm_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.UIMenuBack
	 */
	struct UPauseGameView_UIMenuBack_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.ShowHoverOnButton
	 */
	struct UPauseGameView_ShowHoverOnButton_Params
	{
	public:
		class UGameMenuElement*                                    InHoverButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShow;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PauseGameView.SetCurrentSelectButtonIndex
	 */
	struct UPauseGameView_SetCurrentSelectButtonIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PauseGameView.PostUpdateShowDebugMenu
	 */
	struct UPauseGameView_PostUpdateShowDebugMenu_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.PostMoveToGameMap
	 */
	struct UPauseGameView_PostMoveToGameMap_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.PostGamepadButtonClick
	 */
	struct UPauseGameView_PostGamepadButtonClick_Params
	{
	public:
		int32_t                                                    InButtonIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PauseGameView.PostButtonClickBack
	 */
	struct UPauseGameView_PostButtonClickBack_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnItemHovered
	 */
	struct UPauseGameView_OnItemHovered_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickSave
	 */
	struct UPauseGameView_OnClickSave_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickPlay
	 */
	struct UPauseGameView_OnClickPlay_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickOptions
	 */
	struct UPauseGameView_OnClickOptions_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickOnline
	 */
	struct UPauseGameView_OnClickOnline_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickLoad
	 */
	struct UPauseGameView_OnClickLoad_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickExit
	 */
	struct UPauseGameView_OnClickExit_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickDebugMaps
	 */
	struct UPauseGameView_OnClickDebugMaps_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickContinue
	 */
	struct UPauseGameView_OnClickContinue_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.OnClickBack
	 */
	struct UPauseGameView_OnClickBack_Params
	{	};

	/**
	 * Function Stalker2.PauseGameView.MoveInButtonContainer
	 */
	struct UPauseGameView_MoveInButtonContainer_Params
	{
	public:
		int32_t                                                    AxisMove;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PC.PlayerEndHandleInteractiveOverlaps
	 */
	struct APC_PlayerEndHandleInteractiveOverlaps_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PC.PlayerBeginHandleInteractiveOverlaps
	 */
	struct APC_PlayerBeginHandleInteractiveOverlaps_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OZ15[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PC.AimTimelineTick
	 */
	struct APC_AimTimelineTick_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDASlotPanelBase.ClickSlot
	 */
	struct UPDASlotPanelBase_ClickSlot_Params
	{
	public:
		int32_t                                                    QuestSlotIndex;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDASlotPanelBase.ClickArrowButton
	 */
	struct UPDASlotPanelBase_ClickArrowButton_Params
	{
	public:
		class FName                                                ButtonId;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDASlotPanelBase.ChangeActiveQuestSlot
	 */
	struct UPDASlotPanelBase_ChangeActiveQuestSlot_Params
	{
	public:
		bool                                                       bActiveted;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CNTN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InJournalQuestID;                                        // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSlotIndex;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDASlotBase.SetSelectPointTint
	 */
	struct UPDASlotBase_SetSelectPointTint_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDASlotBase.ChangeActive
	 */
	struct UPDASlotBase_ChangeActive_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAQuestDetails.UpdateStageSlotHover
	 */
	struct UPDAQuestDetails_UpdateStageSlotHover_Params
	{	};

	/**
	 * Function Stalker2.PDAQuestDetails.UpdateStageHover
	 */
	struct UPDAQuestDetails_UpdateStageHover_Params
	{
	public:
		bool                                                       bIsStageHovered;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAQuestDetails.UpdateDescriptionHover
	 */
	struct UPDAQuestDetails_UpdateDescriptionHover_Params
	{
	public:
		bool                                                       bIsHovered;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAQuestDetails.StageClick
	 */
	struct UPDAQuestDetails_StageClick_Params
	{
	public:
		class UPDAQuestTaskSlot*                                   InSlot;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAQuestPanel.ChangeSelectedQuestSlot
	 */
	struct UPDAQuestPanel_ChangeSelectedQuestSlot_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DNWL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InJournalQuestID;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSlotIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAQuestTaskContainer.StageClick
	 */
	struct UPDAQuestTaskContainer_StageClick_Params
	{
	public:
		class UPDAQuestTaskSlot*                                   InSlot;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAQuestTaskContainer.MouseHoverStage
	 */
	struct UPDAQuestTaskContainer_MouseHoverStage_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YZQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    IndexOnParent;                                           // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PDAView.UpdateQuestList
	 */
	struct UPDAView_UpdateQuestList_Params
	{	};

	/**
	 * Function Stalker2.PDAView.CloseUpdateView
	 */
	struct UPDAView_CloseUpdateView_Params
	{	};

	/**
	 * Function Stalker2.PlatformManager.UpdateInputManager
	 */
	struct UPlatformManager_UpdateInputManager_Params
	{
	public:
		bool                                                       IsGamepadInput;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PlatformSwitcher.UpdateWidget
	 */
	struct UPlatformSwitcher_UpdateWidget_Params
	{	};

	/**
	 * Function Stalker2.PlatformSwitcher.InitWidget
	 */
	struct UPlatformSwitcher_InitWidget_Params
	{	};

	/**
	 * Function Stalker2.PlaySoundQuestNodeListener.OnSoundFinished
	 */
	struct UPlaySoundQuestNodeListener_OnSoundFinished_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U1OG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PlayVideoWidget.PlayVideo
	 */
	struct UPlayVideoWidget_PlayVideo_Params
	{
	public:
		class UMediaSource*                                        VideoToPlay;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PlayVideoWidget.EndVideo
	 */
	struct UPlayVideoWidget_EndVideo_Params
	{	};

	/**
	 * Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnEndOverlapFlowers
	 */
	struct UPoppyFieldAnomalyBehaviorComponent_OnEndOverlapFlowers_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnEndOverlap
	 */
	struct UPoppyFieldAnomalyBehaviorComponent_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnBeginOverlapFlowers
	 */
	struct UPoppyFieldAnomalyBehaviorComponent_OnBeginOverlapFlowers_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QENE[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnBeginOverlap
	 */
	struct UPoppyFieldAnomalyBehaviorComponent_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_62V1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ProgressBarWidget.SetProgresValue
	 */
	struct UProgressBarWidget_SetProgresValue_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Projectile.OnOverlap
	 */
	struct AProjectile_OnOverlap_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.Projectile.OnHit
	 */
	struct AProjectile_OnHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PsyPhantom.OnBeginOverlap
	 */
	struct APsyPhantom_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X2HX[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PsyVolumeComponent.OnEndOverlap
	 */
	struct UPsyVolumeComponent_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.PsyVolumeComponent.OnBeginOverlap
	 */
	struct UPsyVolumeComponent_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3LLL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.QuestNotification.FinishAnimation
	 */
	struct UQuestNotification_FinishAnimation_Params
	{
	public:
		bool                                                       bHide;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.QuestNotification.CheckTasksAnimFinishedAndHide
	 */
	struct UQuestNotification_CheckTasksAnimFinishedAndHide_Params
	{	};

	/**
	 * Function Stalker2.QuestNotification.CancelHideAnim
	 */
	struct UQuestNotification_CancelHideAnim_Params
	{	};

	/**
	 * Function Stalker2.QuestTaskNotification.PostPlayTaskAnimation
	 */
	struct UQuestTaskNotification_PostPlayTaskAnimation_Params
	{
	public:
		EQuestTaskAnimationType                                    AnimationType;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Stalker2.QuestTaskNotification.OnAnimStarted__DelegateSignature
	 */
	struct UQuestTaskNotification_OnAnimStarted__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Stalker2.QuestTaskNotification.OnAnimFinished__DelegateSignature
	 */
	struct UQuestTaskNotification_OnAnimFinished__DelegateSignature_Params
	{	};

	/**
	 * Function Stalker2.QuestTaskNotification.FinishAnimmation
	 */
	struct UQuestTaskNotification_FinishAnimmation_Params
	{
	public:
		bool                                                       bHide;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.QuickPanel.OnQuickSlotMouseLeave
	 */
	struct UQuickPanel_OnQuickSlotMouseLeave_Params
	{
	public:
		class UQuickSlot*                                          HoveredWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.QuickPanel.OnQuickSlotMouseEnter
	 */
	struct UQuickPanel_OnQuickSlotMouseEnter_Params
	{
	public:
		class UQuickSlot*                                          ItemWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.RadiationFieldComponent.OnEndOverlap
	 */
	struct URadiationFieldComponent_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.RadiationFieldComponent.OnBeginOverlap
	 */
	struct URadiationFieldComponent_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V84O[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ReferenceHolderBase.UpdateObjectReferences
	 */
	struct AReferenceHolderBase_UpdateObjectReferences_Params
	{	};

	/**
	 * Function Stalker2.ReferenceHolderBase.CheckAssetReferences
	 */
	struct AReferenceHolderBase_CheckAssetReferences_Params
	{	};

	/**
	 * Function Stalker2.RightClickMenuItemWidget.OnButtonUnHovered
	 */
	struct URightClickMenuItemWidget_OnButtonUnHovered_Params
	{	};

	/**
	 * Function Stalker2.RightClickMenuItemWidget.OnButtonHovered
	 */
	struct URightClickMenuItemWidget_OnButtonHovered_Params
	{	};

	/**
	 * Function Stalker2.RightClickMenuItemWidget.OnButtonClick
	 */
	struct URightClickMenuItemWidget_OnButtonClick_Params
	{	};

	/**
	 * Function Stalker2.RightClickMenuWidget.OnNoItemClick
	 */
	struct URightClickMenuWidget_OnNoItemClick_Params
	{	};

	/**
	 * Function Stalker2.RightClickMenuWidget.OnItemHover
	 */
	struct URightClickMenuWidget_OnItemHover_Params
	{
	public:
		struct FRightClickMenuItemData                             Data;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bInHover;                                                // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.RightClickMenuWidget.OnItemClicked
	 */
	struct URightClickMenuWidget_OnItemClicked_Params
	{
	public:
		struct FRightClickMenuItemData                             Data;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.SequenceSpeechComponent.OnSequenceStarted
	 */
	struct USequenceSpeechComponent_OnSequenceStarted_Params
	{	};

	/**
	 * Function Stalker2.SequenceSpeechComponent.OnSequenceFinished
	 */
	struct USequenceSpeechComponent_OnSequenceFinished_Params
	{	};

	/**
	 * Function Stalker2.SequenceStartQuestNodeListener.OnEvent
	 */
	struct USequenceStartQuestNodeListener_OnEvent_Params
	{	};

	/**
	 * Function Stalker2.ShootingWeaponComponent.Shoot
	 */
	struct UShootingWeaponComponent_Shoot_Params
	{	};

	/**
	 * Function Stalker2.SignalSenderComponent.Send
	 */
	struct USignalSenderComponent_Send_Params
	{
	public:
		class UObject*                                             DataObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.SoapBubbleAnomaly.OnActorCollided
	 */
	struct ASoapBubbleAnomaly_OnActorCollided_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_91LK[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.SoundManager.MusicStopVolumeChange
	 */
	struct USoundManager_MusicStopVolumeChange_Params
	{	};

	/**
	 * Function Stalker2.SoundManager.AmbientStopVolumeChange
	 */
	struct USoundManager_AmbientStopVolumeChange_Params
	{	};

	/**
	 * Function Stalker2.SoundTriggerVolume.OnEndOverlap
	 */
	struct ASoundTriggerVolume_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.SoundTriggerVolume.BeginOverlap
	 */
	struct ASoundTriggerVolume_BeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7O8L[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.StackSplitContextual.PressChangeAmmount
	 */
	struct UStackSplitContextual_PressChangeAmmount_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnSplitValueChanged
	 */
	struct UStackSplitContextual_OnSplitValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Stalker2.StackSplitContextual.OnSplitConfirmed__DelegateSignature
	 */
	struct UStackSplitContextual_OnSplitConfirmed__DelegateSignature_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Stalker2.StackSplitContextual.OnSplitCanceled__DelegateSignature
	 */
	struct UStackSplitContextual_OnSplitCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnSplitButtonClicked
	 */
	struct UStackSplitContextual_OnSplitButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnPlusButtonReleased
	 */
	struct UStackSplitContextual_OnPlusButtonReleased_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnPlusButtonPressed
	 */
	struct UStackSplitContextual_OnPlusButtonPressed_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnPlusButtonClicked
	 */
	struct UStackSplitContextual_OnPlusButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnMinusButtonReleased
	 */
	struct UStackSplitContextual_OnMinusButtonReleased_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnMinusButtonPressed
	 */
	struct UStackSplitContextual_OnMinusButtonPressed_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnMinusButtonClicked
	 */
	struct UStackSplitContextual_OnMinusButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnDropAllButtonClicked
	 */
	struct UStackSplitContextual_OnDropAllButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StackSplitContextual.OnCancelButtonClicked
	 */
	struct UStackSplitContextual_OnCancelButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StackSplittingWidget.OnSplitValueChanged
	 */
	struct UStackSplittingWidget_OnSplitValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.StackSplittingWidget.OnSplitButtonClicked
	 */
	struct UStackSplittingWidget_OnSplitButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StackSplittingWidget.OnCancelButtonClicked
	 */
	struct UStackSplittingWidget_OnCancelButtonClicked_Params
	{	};

	/**
	 * Function Stalker2.StatPanel.UpdateAllStats
	 */
	struct UStatPanel_UpdateAllStats_Params
	{	};

	/**
	 * Function Stalker2.StatPanelDebug.UpdateAllStats
	 */
	struct UStatPanelDebug_UpdateAllStats_Params
	{	};

	/**
	 * Function Stalker2.StrandGenerator.GetFinalStrandData
	 */
	struct AStrandGenerator_GetFinalStrandData_Params
	{
	public:
		struct FStrandFinalData                                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.SystemNotificationItem.SetModel
	 */
	struct USystemNotificationItem_SetModel_Params
	{	};

	/**
	 * Function Stalker2.SystemNotificationWidget.NotificationClickHandler
	 */
	struct USystemNotificationWidget_NotificationClickHandler_Params
	{	};

	/**
	 * Function Stalker2.TextWidget.SetText
	 */
	struct UTextWidget_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.TextWidget.GetText
	 */
	struct UTextWidget_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.ToggleButton.ChangeToggleButtonPosition
	 */
	struct UToggleButton_ChangeToggleButtonPosition_Params
	{	};

	/**
	 * Function Stalker2.UIManagerEx.OnOpenLootMenu
	 */
	struct UUIManagerEx_OnOpenLootMenu_Params
	{
	public:
		struct FItemContainerUID                                   InStorageItemContainerUID;                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.UIStyleManager.GetCurrentPlatform
	 */
	struct UUIStyleManager_GetCurrentPlatform_Params
	{
	public:
		EGSCPlatformType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.UpgradeItemWidget.OnUpgradeButtonClick
	 */
	struct UUpgradeItemWidget_OnUpgradeButtonClick_Params
	{	};

	/**
	 * Function Stalker2.UpgradeMenuWidget.OnUpgradeMouseExit
	 */
	struct UUpgradeMenuWidget_OnUpgradeMouseExit_Params
	{	};

	/**
	 * Function Stalker2.UpgradeMenuWidget.OnUpgradeMouseEnter
	 */
	struct UUpgradeMenuWidget_OnUpgradeMouseEnter_Params
	{
	public:
		int32_t                                                    UpgradeID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.UpgradeMenuWidget.OnRevertLastUpgrade
	 */
	struct UUpgradeMenuWidget_OnRevertLastUpgrade_Params
	{	};

	/**
	 * Function Stalker2.UpgradeMenuWidget.OnRepair
	 */
	struct UUpgradeMenuWidget_OnRepair_Params
	{	};

	/**
	 * Function Stalker2.UpgradeMenuWidget.OnApplyUpgrade
	 */
	struct UUpgradeMenuWidget_OnApplyUpgrade_Params
	{
	public:
		int32_t                                                    UpgradeID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5GEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpgradeItemWidget*                                  InCurrentSlot;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.UpgradeMenuWidget.ChangeUpgradeModule
	 */
	struct UUpgradeMenuWidget_ChangeUpgradeModule_Params
	{	};

	/**
	 * Function Stalker2.UpgradePage.UpdatePanel
	 */
	struct UUpgradePage_UpdatePanel_Params
	{	};

	/**
	 * Function Stalker2.UpgradePage.UIPDANavigationUp
	 */
	struct UUpgradePage_UIPDANavigationUp_Params
	{	};

	/**
	 * Function Stalker2.UpgradePage.UIPDANavigationRight
	 */
	struct UUpgradePage_UIPDANavigationRight_Params
	{	};

	/**
	 * Function Stalker2.UpgradePage.UIPDANavigationLeft
	 */
	struct UUpgradePage_UIPDANavigationLeft_Params
	{	};

	/**
	 * Function Stalker2.UpgradePage.UIPDANavigationDown
	 */
	struct UUpgradePage_UIPDANavigationDown_Params
	{	};

	/**
	 * Function Stalker2.UpgradePage.ClickButtonMenu
	 */
	struct UUpgradePage_ClickButtonMenu_Params
	{
	public:
		class FName                                                ButtonId;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.ProtectMeshLock
	 */
	struct AVerticalLadder_ProtectMeshLock_Params
	{
	public:
		ECollisionEnabled                                          CollisionType;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.OnTopClimbZoneEndOverlap
	 */
	struct AVerticalLadder_OnTopClimbZoneEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.OnTopClimbZoneBeginOverlap
	 */
	struct AVerticalLadder_OnTopClimbZoneBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M0YF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.OnClimbZoneEndOverlap
	 */
	struct AVerticalLadder_OnClimbZoneEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.OnClimbZoneBeginOverlap
	 */
	struct AVerticalLadder_OnClimbZoneBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PH40[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.OnBottomClimbZoneEndOverlap
	 */
	struct AVerticalLadder_OnBottomClimbZoneEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VerticalLadder.OnBottomClimbZoneBeginOverlap
	 */
	struct AVerticalLadder_OnBottomClimbZoneBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VTD6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.VoicegenSpeechComponent.OnVoicegenFinished
	 */
	struct UVoicegenSpeechComponent_OnVoicegenFinished_Params
	{	};

	/**
	 * Function Stalker2.VoiceoverSpeechComponent.OnAKEventFinished
	 */
	struct UVoiceoverSpeechComponent_OnAKEventFinished_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W4BB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WanderingLightsArchiAnomaly.CreateVFX
	 */
	struct AWanderingLightsArchiAnomaly_CreateVFX_Params
	{	};

	/**
	 * Function Stalker2.WeatherController.UpdateDay
	 */
	struct AWeatherController_UpdateDay_Params
	{	};

	/**
	 * Function Stalker2.WeatherController.SetWeather
	 */
	struct AWeatherController_SetWeather_Params
	{	};

	/**
	 * Function Stalker2.WeatherController.SetMaterials
	 */
	struct AWeatherController_SetMaterials_Params
	{	};

	/**
	 * Function Stalker2.WeatherController.SelectWeather
	 */
	struct AWeatherController_SelectWeather_Params
	{	};

	/**
	 * Function Stalker2.WidgetPool.CreateWidgetByPool
	 */
	struct UWidgetPool_CreateWidgetByPool_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldCompositionAnalyzer.OnLevelLoaded
	 */
	struct UWorldCompositionAnalyzer_OnLevelLoaded_Params
	{	};

	/**
	 * Function Stalker2.WorldMap.MarkerHover
	 */
	struct UWorldMap_MarkerHover_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UVZW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWorldMapMarker*                                     InHoverMarkerWidget;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMap.MarkerClick
	 */
	struct UWorldMap_MarkerClick_Params
	{
	public:
		class UWorldMapMarker*                                     HoverMarkerWidget;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapMarker.OnMouseUnhover
	 */
	struct UWorldMapMarker_OnMouseUnhover_Params
	{	};

	/**
	 * Function Stalker2.WorldMapMarker.OnMouseHover
	 */
	struct UWorldMapMarker_OnMouseHover_Params
	{	};

	/**
	 * Function Stalker2.WorldMapMarker.MarkerClick
	 */
	struct UWorldMapMarker_MarkerClick_Params
	{	};

	/**
	 * Function Stalker2.WorldMapMarkerTracker.GetTrackerName
	 */
	struct AWorldMapMarkerTracker_GetTrackerName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapMarkerTracker.CollisionTriggerTracker
	 */
	struct AWorldMapMarkerTracker_CollisionTriggerTracker_Params
	{
	public:
		class UPrimitiveComponent*                                 InOverlappedComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOtherActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InOtherComp;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InOtherBodyIndex;                                        // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KHJU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          InSweepResult;                                           // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapMarkerTracker.CollisionTriggerKnown
	 */
	struct AWorldMapMarkerTracker_CollisionTriggerKnown_Params
	{
	public:
		class UPrimitiveComponent*                                 InOverlappedComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOtherActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InOtherComp;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InOtherBodyIndex;                                        // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5M82[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          InSweepResult;                                           // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDAToggleMarkTracking
	 */
	struct UWorldMapPage_UIPDAToggleMarkTracking_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDAOpenQuestInJournal
	 */
	struct UWorldMapPage_UIPDAOpenQuestInJournal_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDAOpenPlayerMarkerSelector
	 */
	struct UWorldMapPage_UIPDAOpenPlayerMarkerSelector_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationUpReleased
	 */
	struct UWorldMapPage_UIPDANavigationUpReleased_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationUp
	 */
	struct UWorldMapPage_UIPDANavigationUp_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationRightReleased
	 */
	struct UWorldMapPage_UIPDANavigationRightReleased_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationRight
	 */
	struct UWorldMapPage_UIPDANavigationRight_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationMouseUp
	 */
	struct UWorldMapPage_UIPDANavigationMouseUp_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationMouseDown
	 */
	struct UWorldMapPage_UIPDANavigationMouseDown_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationLeftReleased
	 */
	struct UWorldMapPage_UIPDANavigationLeftReleased_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationLeft
	 */
	struct UWorldMapPage_UIPDANavigationLeft_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationDownReleased
	 */
	struct UWorldMapPage_UIPDANavigationDownReleased_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDANavigationDown
	 */
	struct UWorldMapPage_UIPDANavigationDown_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDAMoveToPlayerPosition
	 */
	struct UWorldMapPage_UIPDAMoveToPlayerPosition_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDADeletePlayerMarker
	 */
	struct UWorldMapPage_UIPDADeletePlayerMarker_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDACreatePlayerMarker
	 */
	struct UWorldMapPage_UIPDACreatePlayerMarker_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.UIPDAChangeVisibilityPlayerMarkers
	 */
	struct UWorldMapPage_UIPDAChangeVisibilityPlayerMarkers_Params
	{	};

	/**
	 * Function Stalker2.WorldMapPage.MarkerHover
	 */
	struct UWorldMapPage_MarkerHover_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UOHK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWorldMapMarker*                                     HoverMarkerWidget;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapPage.MarkerClick
	 */
	struct UWorldMapPage_MarkerClick_Params
	{
	public:
		class UWorldMapMarker*                                     HoverMarkerWidget;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapPage.ChangeWorldMapZoom
	 */
	struct UWorldMapPage_ChangeWorldMapZoom_Params
	{
	public:
		int32_t                                                    CurrZoomLVL;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviousZoomLVL;                                         // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFast;                                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Stalker2.WorldMapZoomContainer.ShowHandCursor
	 */
	struct UWorldMapZoomContainer_ShowHandCursor_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
