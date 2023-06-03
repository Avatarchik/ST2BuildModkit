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
	 * Class Stalker2.ActorEyesCameraActor
	 * Size -> 0x0020 (FullSize[0x0990] - InheritedSize[0x0970])
	 */
	class AActorEyesCameraActor : public ACameraActor
	{
	public:
		unsigned char                                              UnknownData_L5I7[0x20];                                  // 0x0970(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ActorInteractionDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorInteractionDataInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ModelCharacter
	 * Size -> 0x0018 (FullSize[0x0620] - InheritedSize[0x0608])
	 */
	class AModelCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_RHF1[0x8];                                   // 0x0608(0x0008) Fix Super Size
		unsigned char                                              UnknownData_0MO8[0x10];                                  // 0x0610(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Obj
	 * Size -> 0x0110 (FullSize[0x0730] - InheritedSize[0x0620])
	 */
	class AObj : public AModelCharacter
	{
	public:
		unsigned char                                              UnknownData_SIY0[0x60];                                  // 0x0620(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemAppearanceComponent*                            ItemAppearanceComponent;                                 // 0x0680(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsInteractionComponent*                        PhysicsInteractionComponent;                             // 0x0688(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W3WU[0x8];                                   // 0x0690(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        AkAudioComponent;                                        // 0x0698(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovementComponentExt*                               MovementComponentExt;                                    // 0x06A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicalAnimationComponent*                         PhysicalAnimationComponent;                              // 0x06A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHeadFlashlightComponent*                            FlashlightComponent;                                     // 0x06B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTacticalFlashlightComponent*                        TacticalFlashlightComponent;                             // 0x06B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x06C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveVector*                                        FallingDamageCurve;                                      // 0x06C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       FallingDamageSound;                                      // 0x06D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      FallingDamageEasySoundSwitch;                            // 0x06D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      FallingDamageMediumSoundSwitch;                          // 0x06E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      FallingDamageHighSoundSwitch;                            // 0x06E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XGIH[0x20];                                  // 0x06F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAttackComponent*                                    AttackComponent;                                         // 0x0710(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_95EL[0x18];                                  // 0x0718(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnObjTurnedToTarget__DelegateSignature(bool bSuccess);
		void AimTimelineFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Agent
	 * Size -> 0x01D8 (FullSize[0x0908] - InheritedSize[0x0730])
	 */
	class AAgent : public AObj
	{
	public:
		unsigned char                                              UnknownData_M2AC[0x148];                                 // 0x0730(0x0148) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USmoothPathFollowingComponent*                       SmoothPathFollowingComponent;                            // 0x0878(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNPCComponent*                                       NPCComponent;                                            // 0x0880(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWoundedHoldComponent*                               WoundedHoldComponent;                                    // 0x0888(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStealthKillComponent*                               StealthKillComponent;                                    // 0x0890(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTickMotion;                                             // 0x0898(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CH40[0x6F];                                  // 0x0899(0x006F) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AICoreSubsystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAICoreSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_PSKY[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AIDebugSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIDebugSubsystem : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AIFeatureSubsystem
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAIFeatureSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_ZRHH[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AirWalkCheat
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UAirWalkCheat : public UActorComponent
	{
	public:
		float                                                      LastValidZCoordinate;                                    // 0x00B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KY9Y[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaitingForGroundSpawnAtLocation;                         // 0x00B8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BaseManager
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBaseManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_MJ5J[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BaseTickableManager
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBaseTickableManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_83I0[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ALifeManager
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UALifeManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_Y0D7[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ALifeSpawnLocation
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class AALifeSpawnLocation : public AActor
	{
	public:
		struct FFactionSelectorArray                               Factions;                                                // 0x0280(0x0010) Edit, NativeAccessSpecifierPublic
		struct FFactionSelector                                    OwnerFaction;                                            // 0x0290(0x0060) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ALifeSpawnLocationRandom
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class AALifeSpawnLocationRandom : public AActor
	{
	public:
		int32_t                                                    SpawnLocationsTotalCount;                                // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10H6[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      UnitSpawnLocationsTypes;                                 // 0x0288(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class AALifeSpawnLocation*>                         UnitSpawnLocations;                                      // 0x0298(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		void GenerateSpawnLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WidgetBase
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class UWidgetBase : public UUserWidget
	{
	public:
		void UpdateWidget();
		void DestructClearWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ChildViewBase
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UChildViewBase : public UWidgetBase
	{
	public:
		bool                                                       bShouldAutoBindEvent;                                    // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JGH[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AmmoWidget
	 * Size -> 0x01C0 (FullSize[0x0458] - InheritedSize[0x0298])
	 */
	class UAmmoWidget : public UChildViewBase
	{
	public:
		int32_t                                                    MinAmmoToBlockAnim;                                      // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMTX[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EFireTypeSlotType, struct FFireTypeSlotSettings>      FireTypeSlotSettings;                                    // 0x02A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EFireType, class UTexture*>                           FireIcons;                                               // 0x02F0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      AnimAmmoHideSpeed;                                       // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimAmmoShowSpeed;                                       // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AnimAmmoColor;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          AmmoCount;                                               // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          AmmoCountMax;                                            // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         CaliberText;                                             // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              AmmoIcon;                                                // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        AmmoCounter;                                             // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      FireTypeCounter;                                         // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            Divider;                                                 // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              AmmoBorder;                                              // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              AmmoBorderShadow;                                        // 0x0398(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AnimAmmoHide;                                            // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AnimAmmoShow;                                            // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TABL[0xA8];                                  // 0x03B0(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerWeaponAnimCollectionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerWeaponAnimCollectionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceBase
	 * Size -> 0x0080 (FullSize[0x03E8] - InheritedSize[0x0368])
	 */
	class UAnimInstanceBase : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_83P7[0x8];                                   // 0x0368(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WDE4[0x28];                                  // 0x0370(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AObj*                                                Owner;                                                   // 0x0398(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       DummyAnimation;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DummyBlueprint;                                          // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U44U[0x30];                                  // 0x03B8(0x0030) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceMutant
	 * Size -> 0x00F0 (FullSize[0x04D8] - InheritedSize[0x03E8])
	 */
	class UAnimInstanceMutant : public UAnimInstanceBase
	{
	public:
		struct FAnimLocomotionData                                 LocomotionData;                                          // 0x03E8(0x0098) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimHitData                                        HitData;                                                 // 0x0480(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimMutantStateData                                StateData;                                               // 0x04C8(0x0007) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4WTT[0x1];                                   // 0x04CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimMutantCollectionsData                          CollectionData;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceBlindDog
	 * Size -> 0x0388 (FullSize[0x0860] - InheritedSize[0x04D8])
	 */
	class UAnimInstanceBlindDog : public UAnimInstanceMutant
	{
	public:
		struct FFourLegIKData                                      LegsIKData;                                              // 0x04D8(0x0388) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceBloodsucker
	 * Size -> 0x01A8 (FullSize[0x0680] - InheritedSize[0x04D8])
	 */
	class UAnimInstanceBloodsucker : public UAnimInstanceMutant
	{
	public:
		struct FTwoLegIKData                                       LegsIKData;                                              // 0x04D8(0x01A8) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceBoar
	 * Size -> 0x0388 (FullSize[0x0860] - InheritedSize[0x04D8])
	 */
	class UAnimInstanceBoar : public UAnimInstanceMutant
	{
	public:
		struct FFourLegIKData                                      LegsIKData;                                              // 0x04D8(0x0388) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceFace
	 * Size -> 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
	 */
	class UAnimInstanceFace : public UAnimInstanceBase
	{
	public:
		struct FAnimHumanFaceData                                  FaceData;                                                // 0x03E8(0x0018) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceFlesh
	 * Size -> 0x0388 (FullSize[0x0860] - InheritedSize[0x04D8])
	 */
	class UAnimInstanceFlesh : public UAnimInstanceMutant
	{
	public:
		struct FFourLegIKData                                      LegsIKData;                                              // 0x04D8(0x0388) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceHuman
	 * Size -> 0x07E8 (FullSize[0x0BD0] - InheritedSize[0x03E8])
	 */
	class UAnimInstanceHuman : public UAnimInstanceBase
	{
	public:
		struct FAnimLocomotionData                                 LocomotionData;                                          // 0x03E8(0x0098) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimHumanWeaponData                                WeaponData;                                              // 0x0480(0x0010) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAnimHitData                                        HitData;                                                 // 0x0490(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimWoundedData                                    WoundedData;                                             // 0x04D8(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimHumanCollectionsData                           CollectionsData;                                         // 0x0520(0x0018) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimHumanStateData                                 StateData;                                               // 0x0538(0x0014) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KIL8[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimTwoHandsIKData                                 HandsIKData;                                             // 0x0550(0x0078) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTwoLegIKData                                       LegsIKData;                                              // 0x05C8(0x01A8) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FAnimHumanFaceData                                  FaceData;                                                // 0x0770(0x0018) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAnimHumanLookAtData                                LookAtData;                                              // 0x0788(0x0448) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceHumanFirearm
	 * Size -> 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
	 */
	class UAnimInstanceHumanFirearm : public UAnimInstanceBase
	{
	public:
		class UHumanFirearmAnimCollection*                         WeaponAnimCollection;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHumanFirearmAnimCollection*                         ZombieWeaponAnimCollection;                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimHumanAimingData                                AimingData;                                              // 0x03F8(0x0001) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QOQU[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayer
	 * Size -> 0x0DD8 (FullSize[0x11C0] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayer : public UAnimInstanceBase
	{
	public:
		struct FAnimLocomotionData                                 LocomotionData;                                          // 0x03E8(0x0098) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerWeaponData                               WeaponData;                                              // 0x0480(0x0048) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WLI3[0x8];                                   // 0x04C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimPlayerCameraData                               CameraData;                                              // 0x04D0(0x0070) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerTransitionData                           TransitionData;                                          // 0x0540(0x0005) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_43PK[0x3];                                   // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimPlayerStateData                                StateData;                                               // 0x0548(0x0018) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerCollectionsData                          CollectionData;                                          // 0x0560(0x0590) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FAnimTwoHandsIKData                                 HandsIKData;                                             // 0x0AF0(0x0078) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTwoLegIKData                                       LegsIKData;                                              // 0x0B68(0x01A8) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerIdleSwayData                             IdleSwayData;                                            // 0x0D10(0x00E8) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerClimbingData                             ClimbingData;                                            // 0x0DF8(0x00F0) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerWeaponSwingData                          WeaponSwingData;                                         // 0x0EE8(0x0080) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerWeaponInertiaData                        WeaponInertiaData;                                       // 0x0F68(0x0060) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerWeaponPushbackData                       WeaponPushbackData;                                      // 0x0FC8(0x0080) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerDetectorData                             DetectorData;                                            // 0x1048(0x0010) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAnimHandItemData                                   HandItemData;                                            // 0x1058(0x0018) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerMaterialData                             MaterialData;                                            // 0x1070(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerLookAtData                               LookAtData;                                              // 0x1078(0x00B8) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerAutoCoverData                            AutoCoverData;                                           // 0x1130(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimHitData                                        HitData;                                                 // 0x1178(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerDetector
	 * Size -> 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerDetector : public UAnimInstanceBase
	{
	public:
		class UPlayerDetectorAnimCollection*                       DetectorAnimCollection;                                  // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerInjector
	 * Size -> 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerInjector : public UAnimInstanceBase
	{
	public:
		struct FInjectorAnimations                                 InjectorAnimations;                                      // 0x03E8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FSEH[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerFirearm
	 * Size -> 0x0028 (FullSize[0x0410] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerFirearm : public UAnimInstanceBase
	{
	public:
		class UPlayerFirearmAnimCollection*                        WeaponAnimCollection;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimPlayerAimingData                               AimingData;                                              // 0x03F0(0x0014) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimPlayerFirearmData                              FirearmData;                                             // 0x0404(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerThrowable
	 * Size -> 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerThrowable : public UAnimInstanceBase
	{
	public:
		class UPlayerThrowableItemAnimCollection*                  WeaponAnimCollection;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerKnife
	 * Size -> 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerKnife : public UAnimInstanceBase
	{
	public:
		class UPlayerKnifeAnimCollection*                          WeaponAnimCollection;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerPDA
	 * Size -> 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerPDA : public UAnimInstanceBase
	{
	public:
		class UPlayerPDAAnimCollection*                            WeaponAnimCollection;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstanceItem
	 * Size -> 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
	 */
	class UAnimInstanceItem : public UAnimInstanceBase
	{
	public:
		class UItemAnimCollection*                                 ItemAnimCollection;                                      // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimInstancePlayerWeaponAttach
	 * Size -> 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
	 */
	class UAnimInstancePlayerWeaponAttach : public UAnimInstanceBase
	{
	public:
		class UWeaponAttachAnimCollection*                         AttachAnimCollection;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimPlayerFirearmData                              FirearmData;                                             // 0x03F0(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O49H[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotifyBase
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotifyBase : public UAnimNotify
	{
	public:
		ENotifyTriggerType                                         NotifyTriggerType;                                       // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZGMR[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotifyState_AgentEnableRootMotion
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_AgentEnableRootMotion : public UAnimNotifyState
	{
	public:
		EAgentRootMotionState                                      RootMotionMode;                                          // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K1JL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotifyState_ApplyDurationalEffectContextualAction
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_ApplyDurationalEffectContextualAction : public UAnimNotifyState
	{
	public:
		TArray<struct FModifyVFXValue>                             ModifyVFXAttachmentsValue;                               // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotifyState_LookAt
	 * Size -> 0x00E8 (FullSize[0x0118] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_LookAt : public UAnimNotifyState
	{
	public:
		EAttractionPointType                                       AttractionPointType;                                     // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLookAtPlayer;                                           // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ7N[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LookAtPlaceholderQuestGuid;                              // 0x0034(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LookAtActorFName;                                        // 0x003C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWXY[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionTime;                                            // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EApplyRestrictionType                                      ApplyRestrictionType;                                    // 0x0071(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF9J[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ERotationPartType, struct FBodyPartRestriction>       HorizontalRestrictions;                                  // 0x0078(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic
		TMap<ERotationPartType, struct FBodyPartRestriction>       VerticalRestrictions;                                    // 0x00C8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotifyState_MotionAudioEnveloper
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_MotionAudioEnveloper : public UAnimNotifyState
	{
	public:
		class UAkAudioEvent*                                       PlayAkEvent;                                             // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopAkEvent;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             MotionSpeedRTPC;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBoneVelocity;                                         // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBoneVelocity;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InterpolationTime;                                       // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBoneVelocityInfo;                                   // 0x005C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGZA[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        AttachedAudioComponent;                                  // 0x0060(0x0008) ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BCG9[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_AIAnimationAction
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_AIAnimationAction : public UAnimNotifyBase
	{
	public:
		EAIAnimationAction                                         AnimationAction;                                         // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJIO[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_AnyFootOnGround
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UAnimNotify_AnyFootOnGround : public UAnimNotify
	{
	public:
		EFootType                                                  Foot;                                                    // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C47C[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x003C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachedParticle;                                       // 0x0044(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLG8[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationOffset;                                          // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0078(0x0018) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      DummyPreviewParticleSystem;                              // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPreviewDebugSphere;                                 // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCBQ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_AttachItem
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAnimNotify_AttachItem : public UAnimNotifyBase
	{
	public:
		EAttachAction                                              AttachAction;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPBU[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0044(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachType                                                AttachedItem;                                            // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WASH[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BindedAttachSid;                                         // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       AttachMesh;                                              // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_AttachItemContextualAction
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAnimNotify_AttachItemContextualAction : public UAnimNotifyBase
	{
	public:
		TArray<struct FContextualItemAttachment>                   ContextualItemAttachments;                               // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_AttackHitDetection
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimNotify_AttackHitDetection : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_ChangeWeaponIdle
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAnimNotify_ChangeWeaponIdle : public UAnimNotifyBase
	{
	public:
		EWeaponIdleState                                           WeaponIdle;                                              // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShutterState                                              NewShutterState;                                         // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T90X[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NewJamIndex;                                             // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponIdleType                                            NewUnderbarrelState;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimationAimState                                         NewAimState;                                             // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponCustomAdditionalIdle                                AdditionalType;                                          // 0x004A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UW8[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_ClimbingActions
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_ClimbingActions : public UAnimNotifyBase
	{
	public:
		EAnimationType                                             AnimationType;                                           // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNOR[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocusCameraTime;                                         // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_CopyNiagaraValueFromAnotherContextualAction
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAnimNotify_CopyNiagaraValueFromAnotherContextualAction : public UAnimNotifyBase
	{
	public:
		struct FNiagaraValueCopyFromTo                             CopyFromTo;                                              // 0x0040(0x0018) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_DetachItemContextualAction
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAnimNotify_DetachItemContextualAction : public UAnimNotifyBase
	{
	public:
		TArray<struct FContextualItemDetachment>                   ContextualItemAttachments;                               // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_GSCPlayMontageNotify
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_GSCPlayMontageNotify : public UAnimNotify
	{
	public:
		struct FGameplayTag                                        NotifyTag;                                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_GSCPlayMontageNotifyWindow
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotify_GSCPlayMontageNotifyWindow : public UAnimNotifyState
	{
	public:
		struct FGameplayTag                                        NotifyTag;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_HandIK
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAnimNotify_HandIK : public UAnimNotifyBase
	{
	public:
		EAnimationHands                                            HandToApply;                                             // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSetStartValue;                                     // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIV4[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartValue;                                              // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndValue;                                                // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendOption;                                             // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU2V[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_HideBones
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAnimNotify_HideBones : public UAnimNotifyBase
	{
	public:
		EBoneInteractionType                                       BoneInteractionType;                                     // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V97Z[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentBoneName;                                          // 0x0044(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChildAttachName;                                         // 0x004C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideBone;                                               // 0x0055(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA1E[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_Jump
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_Jump : public UAnimNotifyBase
	{
	public:
		EJumpState                                                 JumpState;                                               // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQRT[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_LookAt
	 * Size -> 0x00E8 (FullSize[0x0128] - InheritedSize[0x0040])
	 */
	class UAnimNotify_LookAt : public UAnimNotifyBase
	{
	public:
		ELookAtAction                                              LookAtAction;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttractionPointType                                       AttractionPointType;                                     // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLookAtPlayer;                                           // 0x0042(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLOM[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LookAtPlaceholderQuestGuid;                              // 0x0044(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LookAtActorFName;                                        // 0x004C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03R9[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x0058(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionTime;                                            // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EApplyRestrictionType                                      ApplyRestrictionType;                                    // 0x0081(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNLN[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ERotationPartType, struct FBodyPartRestriction>       HorizontalRestrictions;                                  // 0x0088(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic
		TMap<ERotationPartType, struct FBodyPartRestriction>       VerticalRestrictions;                                    // 0x00D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_MakeAttack
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_MakeAttack : public UAnimNotifyBase
	{
	public:
		bool                                                       bInstantAttack;                                          // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2A46[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_PlayAnimationOnAttachedItemContextualAction
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PlayAnimationOnAttachedItemContextualAction : public UAnimNotifyBase
	{
	public:
		TArray<struct FPlayAnimationOnAttachedItemData>            PlayAnimationOnAttachedItemData;                         // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_PlayerAction
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PlayerAction : public UAnimNotifyBase
	{
	public:
		EPlayerActionResult                                        PlayerActionResult;                                      // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActionType                                                PlayerActionType;                                        // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCQE[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_PlayerActionTrigger
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PlayerActionTrigger : public UAnimNotifyBase
	{
	public:
		EPlayerActionTriggerState                                  TriggerNewState;                                         // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNMZ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPlayerTriggerState                                        ActionTrigger;                                           // 0x0044(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EBX[0x3];                                   // 0x0045(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_PlayInteractablesFX
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PlayInteractablesFX : public UAnimNotifyBase
	{
	public:
		class FName                                                BoneName;                                                // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CustomBoneName;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractFXType                                            InteractFXType;                                          // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7MM[0x3];                                   // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_AC0G[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> STATIC_GetAvailableBones();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_RagdollAction
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_RagdollAction : public UAnimNotifyBase
	{
	public:
		ERagdollAction                                             RagdollAction;                                           // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGCY[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_SpawnNiagaraSystemAtLocationContextualAction
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction : public UAnimNotifyBase
	{
	public:
		struct FSpawnNiagaraSystemAtLocation                       SpawnNiagaraSystemAtLocation;                            // 0x0040(0x0018) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_UpdateMagazineVisibililty
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_UpdateMagazineVisibililty : public UAnimNotifyBase
	{
	public:
		bool                                                       bShowMagazine;                                           // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachedMagazineType                                      TargetAttachedMagazineType;                              // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpdateSource                                              UpdateSource;                                            // 0x0042(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBJ7[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnimNotify_WeaponAction
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAnimNotify_WeaponAction : public UAnimNotifyBase
	{
	public:
		EWeaponAction                                              WeaponAction;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTwinMagazineShift;                                // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GGW[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_Anomaly
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AUIDActor_Anomaly : public AActor
	{
	public:
		unsigned char                                              UnknownData_5XBQ[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Anomaly
	 * Size -> 0x00B0 (FullSize[0x0340] - InheritedSize[0x0290])
	 */
	class AAnomaly : public AUIDActor_Anomaly
	{
	public:
		unsigned char                                              UnknownData_N2C1[0x60];                                  // 0x0290(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     DefaultRootComponent;                                    // 0x02F0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        AnomalyAkComponent;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkSwitchValue*                                      IdleSwitch;                                              // 0x0308(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkSwitchValue*                                      FadeSwitch;                                              // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkSwitchValue*                                      ActiveSwitch;                                            // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkSwitchValue*                                      TriggerSwitch;                                           // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkSwitchValue*                                      FirstPersonSwitch;                                       // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkSwitchValue*                                      ThirdPersonSwitch;                                       // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U6X4[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRechargeStateStarted();
		void OnIdleStateStarted();
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnActiveStateStarted();
		void OnActivationStateStarted();
		void ForceDeactivate();
		void ForceActivateOnce();
		void ForceActivateEndless();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AnomalyDetectorComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UAnomalyDetectorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RMF9[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkRtpc*                                             DangerLevelSoundParameter;                               // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       DetectorWorkSFX;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         DetectorWorkCurve;                                       // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         AnomalySignalCurve;                                      // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6U0A[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_ItemContainer
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AUIDActor_ItemContainer : public AActor
	{
	public:
		unsigned char                                              UnknownData_K0Z4[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Artifact
	 * Size -> 0x0108 (FullSize[0x0398] - InheritedSize[0x0290])
	 */
	class AArtifact : public AUIDActor_ItemContainer
	{
	public:
		unsigned char                                              UnknownData_D4KL[0x18];                                  // 0x0290(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    SphereComponent;                                         // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   StrafeParticle;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UArtifactInteractableComponent*                      ArtifactInteractableComponent;                           // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsInteractionComponent*                        PhysicsInteractionComponent;                             // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsSoundsComponent*                             PhysicsSoundsComponent;                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDetectorRequired;                                       // 0x02D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PXI2[0x17];                                  // 0x02D1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ChargingEvent;                                           // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       JumpEvent;                                               // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       Sound;                                                   // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       SoundStop;                                               // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       SoundStateTransitionOnHide;                              // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       SoundStateTransitionOnShow;                              // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      ArtifactTypeSwitchValue;                                 // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      ParticleOnShow;                                          // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       FakeArtifactDistortionSound;                             // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      FakeArtifactDistortionVFX;                               // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraSystem*                                      ParticleStateTransitionFadeIn;                           // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraSystem*                                      ParticleStateTransitionFadeOut;                          // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraSystem*                                      ParticleOnImpact;                                        // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TJ4V[0x40];                                  // 0x0350(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFXSystemComponent*                                  ActiveParticleOnShow;                                    // 0x0390(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActorComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UUIDActorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_E667[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x00B8(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		struct FGuid GetGUID();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractionComponent
	 * Size -> 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
	 */
	class UInteractionComponent : public UUIDActorComponent
	{
	public:
		float                                                      InteractionRange;                                        // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnStartQuestNode;                                        // 0x00CC(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnFinishQuestNode;                                       // 0x00CD(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnExcludeQuestNode;                                      // 0x00CE(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMGD[0x1];                                   // 0x00CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInteractedEvent;                                       // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndInteractedEvent;                                    // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI8O[0x28];                                  // 0x00F0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsInteractionActive;                                    // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8M42[0x17];                                  // 0x0119(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetInteractionActive(bool bActive);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SingleClickComponent
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class USingleClickComponent : public UInteractionComponent
	{
	public:
		struct FSingleClickInteractionData                         InteractionData;                                         // 0x0130(0x0018) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ArtifactInteractableComponent
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UArtifactInteractableComponent : public USingleClickComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ArtifactStrafeBehaviourComponent
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UArtifactStrafeBehaviourComponent : public UActorComponent
	{
	public:
		bool                                                       bHasScheduledJump;                                       // 0x00B0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZF8W[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeTillJump;                                            // 0x00B4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XY95[0x80];                                  // 0x00B8(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AttackComponent
	 * Size -> 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
	 */
	class UAttackComponent : public UActorComponent
	{
	public:
		EAttackActionType                                          ActiveState;                                             // 0x00B0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZC0H[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShootData                                          ShootData;                                               // 0x00B8(0x0088) Edit, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9D6W[0x30];                                  // 0x0140(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AudioRoomBakedReflectionComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UAudioRoomBakedReflectionComponent : public UActorComponent
	{
	public:
		class UAkSwitchValue*                                      AudioRoomBakedReflection;                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AudioRoomBandwidthComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UAudioRoomBandwidthComponent : public UActorComponent
	{
	public:
		class UAkStateValue*                                       AudioRoomBandwidth;                                      // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AudioScattererDataAsset
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAudioScattererDataAsset : public UDataAsset
	{
	public:
		class UTileBitmapAdapter*                                  TileBitmap2DEvents;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTileBitmapAdapter*                                  TileBitmap3DEvents;                                      // 0x0038(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldTopLeftCoords;                                      // 0x0040(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldWidth;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldHeight;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AutoInteractionComponent
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UAutoInteractionComponent : public UInteractionComponent
	{
	public:
		struct FAutoInteractionData                                InteractionData;                                         // 0x0130(0x0018) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AutoSaveManager
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UAutoSaveManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_KHT0[0x38];                                  // 0x0060(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BarbedWireComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UBarbedWireComponent : public UUIDActorComponent
	{
	public:
		unsigned char                                              UnknownData_WY5M[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BarbedWirePrototypeSID;                                  // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68QJ[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BaseConsoleManager
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBaseConsoleManager : public UBaseTickableManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BaseInteractableAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseInteractableAction : public UObject
	{
	public:
		void RunAlternativeAction();
		void RunAction();
		bool CanInteract();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BaseVolumeComponent
	 * Size -> 0x0058 (FullSize[0x0648] - InheritedSize[0x05F0])
	 */
	class UBaseVolumeComponent : public UStaticMeshComponent
	{
	public:
		ECollisionFormType                                         MeshType;                                                // 0x05F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlockNegativeScale;                                     // 0x05F1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForceRoundCylinderBase;                                 // 0x05F2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForceUniformSphereScale;                                // 0x05F3(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q8XS[0x54];                                  // 0x05F4(0x0054) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_Bed
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AUIDActor_Bed : public AActor
	{
	public:
		unsigned char                                              UnknownData_SKRV[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BedView
	 * Size -> 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
	 */
	class ABedView : public AUIDActor_Bed
	{
	public:
		struct FPrototypeSID                                       HappyHoursSID;                                           // 0x0290(0x0030) Edit, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                BedMeshComponent;                                        // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHoldComponent*                                      SleepComponent;                                          // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USingleClickComponent*                               CantSleepComponent;                                      // 0x02D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               Guid;                                                    // 0x02D8(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KDHO[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		void Interact();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InputProcessingUnit
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputProcessingUnit : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y56K[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputBufferIPUStruct>                       InputBuffer;                                             // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BestiaryIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UBestiaryIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BiomeScatterToolConfig
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UBiomeScatterToolConfig : public UObject
	{
	public:
		int32_t                                                    MaxSounds;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnRadius;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceBetweenSounds;                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DAK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkRtpc*                                             DaytimeHoursParameter;                                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   BlurOffsetPositions;                                     // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSRLEMapStruct>                              Maps;                                                    // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       PlayerSphereSound;                                       // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GDF[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Bloodsucker
	 * Size -> 0x0008 (FullSize[0x0910] - InheritedSize[0x0908])
	 */
	class ABloodsucker : public AAgent
	{
	public:
		class UNiagaraComponent*                                   InvisibilityTransferParticles;                           // 0x0908(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BloodsuckerInvisibilityComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UBloodsuckerInvisibilityComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VVU1[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         InvisibilityChangeCurve;                                 // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Bolt
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class ABolt : public AActor
	{
	public:
		class UStaticMeshComponent*                                BoltComponent;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       ImpactSound;                                             // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_61JR[0x18];                                  // 0x0290(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Bonfire
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class UBonfire : public UUIDActorComponent
	{
	public:
		unsigned char                                              UnknownData_RO61[0x30];                                  // 0x00C8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ViewBase
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UViewBase : public UWidgetBase
	{
	public:
		struct FViewOpenSettings                                   ViewOpenSettings;                                        // 0x0290(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWidgetNameEx                                              WidgetName;                                              // 0x02B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5UG[0x3];                                   // 0x02B9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bShouldAutoBindEvent;                                    // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B25C[0xB];                                   // 0x02BD(0x000B) MISSED OFFSET (PADDING)

	public:
		void UIClose();
		void PreCloseUpdateView();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ViewBaseExtended
	 * Size -> 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
	 */
	class UViewBaseExtended : public UViewBase
	{
	public:
		unsigned char                                              UnknownData_8SWC[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BookViewBase
	 * Size -> 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
	 */
	class UBookViewBase : public UViewBaseExtended
	{
	public:
		int32_t                                                    DefaultPageIndex;                                        // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldOpenDefaultPage;                                  // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableNavigation;                                 // 0x02D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableClick;                                      // 0x02D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIOJ[0x1];                                   // 0x02D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetSwitcher*                                     Switcher;                                                // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNavigationPanel*                                    NavigationPanel;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ClickMenuButton(int32_t InButtonIndex);
		void ChangeSelectButton();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.VictoryBPFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
		class UUserWidget* STATIC_WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);
		bool STATIC_Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY);
		bool STATIC_VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
		void STATIC_VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove);
		void STATIC_VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove);
		bool STATIC_VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding);
		bool STATIC_VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding);
		class FString STATIC_VictoryPaths__ScreenShotsDir();
		class FString STATIC_VictoryPaths__SavedDir();
		struct FVictoryInputAxis STATIC_VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent);
		struct FVictoryInput STATIC_VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent);
		void STATIC_VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings);
		void STATIC_VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings);
		void STATIC_VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings);
		bool STATIC_ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution);
		void STATIC_SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames);
		void STATIC_SaveConfigToFile(TArray<struct FVictoryInput> VictoryInputs, const class FString& Filename);
		void STATIC_RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass);
		float STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
		class UObject* STATIC_LoadObjectFromAssetPath(class UClass* ObjectClass, const class FName& Path, bool* IsValid);
		bool STATIC_IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass);
		class FName STATIC_GetObjectPath(class UObject* Obj);
		class UUserWidget* STATIC_GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly);
		void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.VehicleSoundPlacement
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class UVehicleSoundPlacement : public USceneComponent
	{
	public:
		class UAkAudioEvent*                                       VehiclePullSound;                                        // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       VehicleReleaseSound;                                     // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.BulbAnomaly
	 * Size -> 0x0048 (FullSize[0x0388] - InheritedSize[0x0340])
	 */
	class ABulbAnomaly : public AAnomaly
	{
	public:
		class UAkAudioEvent*                                       PullSound;                                               // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ReleaseSound;                                            // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       IdleSound;                                               // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    SphereComponent;                                         // 0x0358(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UVehicleSoundPlacement*>                      VehicleSoundLocations;                                   // 0x0360(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         DamageCurve;                                             // 0x0370(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         GravityCurve;                                            // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0380(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ButtonBase
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UButtonBase : public UWidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UButton*                                             Button;                                                  // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableClick;                                      // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableHover;                                      // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SDO[0x2];                                   // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ButtonId;                                                // 0x02AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6HM[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)

	public:
		void ButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CameraManager
	 * Size -> 0x0290 (FullSize[0x0300] - InheritedSize[0x0070])
	 */
	class UCameraManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_XZI4[0x88];                                  // 0x0070(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    FirstPersonCameraComponent;                              // 0x00F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    ThirdPersonCameraComponent;                              // 0x0100(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    TopDownCameraComponent;                                  // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneCaptureComponent2D*                            ScopeCaptureComponent2D;                                 // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraShakeBase*                                    CurrentCameraShake;                                      // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VDM0[0x58];                                  // 0x0128(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeline                                           AimTimeline;                                             // 0x0180(0x0098) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D12Z[0x18];                                  // 0x0218(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FirstPersonCameraDefaultLocation;                        // 0x0230(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NSD9[0xB8];                                  // 0x0248(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CameraModifier_LookAt
	 * Size -> 0x00B0 (FullSize[0x00F8] - InheritedSize[0x0048])
	 */
	class UCameraModifier_LookAt : public UCameraModifier
	{
	public:
		unsigned char                                              UnknownData_7815[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   PlayerController;                                        // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M74A[0x48];                                  // 0x00B0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CarouselAnomaly
	 * Size -> 0x0168 (FullSize[0x04A8] - InheritedSize[0x0340])
	 */
	class ACarouselAnomaly : public AAnomaly
	{
	public:
		unsigned char                                              UnknownData_AE36[0xF0];                                  // 0x0340(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                RootComponentPtr;                                        // 0x0430(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                CollisionMeshPtr;                                        // 0x0438(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   IdleParticle;                                            // 0x0440(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   ActivateParticle;                                        // 0x0448(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      InteractionParticle;                                     // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      ActionDamagePlayerParticle;                              // 0x0458(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      ActionDamageNPCParticle;                                 // 0x0460(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              InteractionSoundEvent[0x28];                             // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_OKWJ[0x18];                                  // 0x0490(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ChangeMagazineToRoundIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UChangeMagazineToRoundIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ChangeMagazineToTwinIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UChangeMagazineToTwinIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ChangeWidgetSwitcher
	 * Size -> 0x0010 (FullSize[0x0168] - InheritedSize[0x0158])
	 */
	class UChangeWidgetSwitcher : public UWidgetSwitcher
	{
	public:
		class FName                                                SwitcherId;                                              // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITMF[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)

	public:
		void PreDestructUpdate();
		void PreConstructUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CharacterStatSlot
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UCharacterStatSlot : public UWidgetBase
	{
	public:
		class UImage*                                              StatImage;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ProgressImage;                                           // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ProgressBeckground;                                      // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowProgress;                                     // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TUR[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          StatIcon;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CheckBoxWidget
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class UCheckBoxWidget : public UWidgetBase
	{
	public:
		class UImageWidget*                                        ImageObj;                                                // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldStartChecked;                                     // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMouseEvent;                                       // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoverRecolor;                                     // 0x029A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OX5N[0x1];                                   // 0x029B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        HoverTint;                                               // 0x029C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NormalTint;                                              // 0x02AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStyleManager;                                     // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCIX[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CheckedStyleId;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UnCheckedStyleId;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChangeCheck;                                           // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCheckBoxClick;                                         // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3OF[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetChecked(bool bInChecked, bool bBrodcastOnChangeCheck);
		bool GetChecked();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ChemicalAnomaly
	 * Size -> 0x0028 (FullSize[0x0368] - InheritedSize[0x0340])
	 */
	class AChemicalAnomaly : public AAnomaly
	{
	public:
		unsigned char                                              UnknownData_JG31[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                RootComponentPtr;                                        // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                CollisionMeshPtr;                                        // 0x0350(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      SplashImpact;                                            // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      GrenadeExplosion;                                        // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnDecalSpawn();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CinematicDelegateToken
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UCinematicDelegateToken : public UObject
	{
	public:
		unsigned char                                              UnknownData_6305[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnCinematicStopped();
		void OnCinematicStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CinematicManager
	 * Size -> 0x01C8 (FullSize[0x0238] - InheritedSize[0x0070])
	 */
	class UCinematicManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_ZK63[0x1B0];                                 // 0x0070(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollectionInstance*                PlayerParametersMPC;                                     // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FV0[0x10];                                  // 0x0228(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnFadeScreenEnd(bool bFadeOut, const struct FLinearColor& FadeTargetColor, float FadeAmount, float FadeTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ClassicFireAnomaly
	 * Size -> 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
	 */
	class AClassicFireAnomaly : public AAnomaly
	{
	public:
		class UStaticMeshComponent*                                CollisionMeshPtr;                                        // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   FlamePillarCapsule;                                      // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraComponent*                                   IdleVFX;                                                 // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnStateChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ClickerAnomaly
	 * Size -> 0x0088 (FullSize[0x03C8] - InheritedSize[0x0340])
	 */
	class AClickerAnomaly : public AAnomaly
	{
	public:
		class UStaticMeshComponent*                                RootComponentPtr;                                        // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                CollisionMeshPtr;                                        // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraSystem*                                      ChargeParticle;                                          // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraSystem*                                      ExplosionParticle;                                       // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ChargeSoundEvent;                                        // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ExplosionSoundEvent;                                     // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DamageCurve;                                             // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S93C[0x50];                                  // 0x0378(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnBeginParticleOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CombatMusicConfig
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCombatMusicConfig : public UObject
	{
	public:
		float                                                      TickInterval;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    EnemySearchRadius;                                       // 0x002C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VTZ[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCompositionData>                            Compositions;                                            // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CombatSynchronizerSubsystem
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UCombatSynchronizerSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_PG3T[0x68];                                  // 0x0030(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractableComponent
	 * Size -> 0x00F0 (FullSize[0x01B8] - InheritedSize[0x00C8])
	 */
	class UInteractableComponent : public UUIDActorComponent
	{
	public:
		class FMulticastSparseDelegate                             OnStartQuestNode;                                        // 0x00C8(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnFinishQuestNode;                                       // 0x00C9(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnExcludeQuestNode;                                      // 0x00CA(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BG5C[0x5];                                   // 0x00CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRunAction;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRunAlternativeAction;                                  // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndInteract;                                           // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGWM[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdateInteract;                                        // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateProgress;                                        // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YRW9[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBaseInteractableAction*>                     InteractableActions;                                     // 0x0140(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      TriggerActorsList;                                       // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      AlternativeTriggerActorsList;                            // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    TriggerUserData;                                         // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TriggerAlternativeUserData;                              // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionType                                           InteractionType;                                         // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDisplayPriority                                           DisplayPriority;                                         // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JS48[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionProgressDurationTime;                         // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InteractionProgressIncreasingSpeed;                      // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H3SC[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionProgressFillTimeInSeconds;                    // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X6YN[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OverrideInteractionPromptText;                           // 0x0190(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTickableInteractable;                                   // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInteractableWithDeadBody;                               // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J9XC[0x16];                                  // 0x01A2(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetEnabled(bool bInEnabled);
		void SetDisplayPriority(EDisplayPriority NewPriority);
		bool GetPreventDefaultInteract();
		EInteractionType GetInteractionType();
		EDisplayPriority GetDisplayPriority();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CombinationLock
	 * Size -> 0x0010 (FullSize[0x01C8] - InheritedSize[0x01B8])
	 */
	class UCombinationLock : public UInteractableComponent
	{
	public:
		bool                                                       bAvailableToPlayer;                                      // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6F9X[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Code;                                                    // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       Opened;                                                  // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_44B1[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HintBase
	 * Size -> 0x0090 (FullSize[0x0320] - InheritedSize[0x0290])
	 */
	class UHintBase : public UWidgetBase
	{
	public:
		EInteractionType                                           InteractionType;                                         // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V47I[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultStylePrefix;                                      // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StylePrefix;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Text;                                                    // 0x02B8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                FirstPlanStyle;                                          // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BackgroundStyle;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HintSize;                                                // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStyleManager;                                     // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckInputKey;                                          // 0x02E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGamepadKey;                                             // 0x02E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BNP[0x1];                                   // 0x02E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InputActionName;                                         // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HintFontStyle;                                           // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HintActionStyle;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateHintWidget();
		void SetText(const class FText& InText);
		void SetStylePrefix(const class FString& InStylePrefix);
		void PostShowHover(bool bInShow);
		void HoverChangeHintTextColor(bool bShow, const class FString& InStylePrefix);
		TArray<struct FHoverAction> GetHoverSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CommonHint
	 * Size -> 0x0030 (FullSize[0x0350] - InheritedSize[0x0320])
	 */
	class UCommonHint : public UHintBase
	{
	public:
		class ULocalizationWidget*                                 LocalizationWidget;                                      // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintSwitcher*                                       HintSwitcherWidget;                                      // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URichTextWidget*                                     RichTextWidget;                                          // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateLocalization;                                     // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81X0[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocalizationSID;                                         // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CompassWidget
	 * Size -> 0x0258 (FullSize[0x04F0] - InheritedSize[0x0298])
	 */
	class UCompassWidget : public UChildViewBase
	{
	public:
		class UImage*                                              StealthNoiseIndicator;                                   // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BackgroundImage;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              CompassCardinalDirectionImage;                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BodyCompassLine;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              LineRight;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              LineLeft;                                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        MarkerContainer;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            CompassSize;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            LineSizeBox;                                             // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EMarkType, struct FCompassMarkerSettings>             MarkersSettings;                                         // 0x02E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCompassMarkerSettings                              DefaultMarkerSettins;                                    // 0x0330(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MultiplyBodyLineSpeedPercent;                            // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CenterZoneWidth;                                         // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaskZoneWidth;                                           // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HiddeMarkerZone;                                         // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CenterCompassBorder;                                     // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateBackgroundTime;                                    // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopMarkerHeight;                                         // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BottomMarkerHeigth;                                      // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveMarkerSpeed;                                         // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSpeedAcceleration;                                // 0x037C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSmalAcceleration;                                 // 0x037D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INR0[0x2];                                   // 0x037E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmalAccelerationAngle;                                   // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkerCollisionBorder;                                   // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkerCollisionBorderFinish;                             // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkerQuestStopBorder;                                   // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         MoveMarkerAccelerationCurve;                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportMarkerDistance;                                  // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableAutoUpdate;                                 // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWeakVisibility;                                   // 0x039D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K2V[0x2];                                   // 0x039E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitForActivatingWaveAnimation;                         // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableAutoHideCompaas;                            // 0x03A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZW5[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeUpdateHideCompaasMax;                                // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeUpdateHideCompaas;                                   // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableTurnAngleAutoHide;                          // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXNU[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerTurnAngleMax;                                      // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproximationPlayerLocation;                             // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveDistanceMax;                                         // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShowMainQuestMarkerDistance;                             // 0x03C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShowSecondaryQuestMarkerDistance;                        // 0x03C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorInRadiasMain;                                       // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorInRadiasSecondary;                                  // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableNoiseIndicator;                                  // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IA9W[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    AnimFullToHalf;                                          // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AnimNoneToHalf;                                          // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AnimFullToNone;                                          // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    StealthNoiseWavingAnimation;                             // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampBottomMarkerPosition;                              // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQSV[0x3];                                   // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedPriority;                                        // 0x0414(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedQuestPriority;                                   // 0x0418(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedSecondaryQuestPriority;                          // 0x041C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedLandMarkPriority;                                // 0x0420(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QuestPriority;                                           // 0x0424(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryQuestPriority;                                  // 0x0428(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LandMarkPriority;                                        // 0x042C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugEnableCollision;                                    // 0x0430(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW8M[0xBF];                                  // 0x0431(0x00BF) MISSED OFFSET (PADDING)

	public:
		void ToggleOpacityState(EOpasityState InOpasityState, EPreviousStateMode InPreviousStateMode, bool bPlayForward);
		float GetCompassCenterBorders(bool bIsRightBorder);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActorOwnsModel
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class AUIDActorOwnsModel : public AActor
	{
	public:
		unsigned char                                              UnknownData_UXAV[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_ContextualAction
	 * Size -> 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
	 */
	class AUIDActor_ContextualAction : public AUIDActorOwnsModel
	{
	public:
		unsigned char                                              UnknownData_8AIS[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualAction
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class AContextualAction : public AUIDActor_ContextualAction
	{
	public:
		unsigned char                                              UnknownData_9ITQ[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualActionAssetDataShared
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UContextualActionAssetDataShared : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_QVTB[0xB0];                                  // 0x0060(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualActionComponent
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UContextualActionComponent : public UUIDActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualActionPrecondition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UContextualActionPrecondition : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NPCNeedPrecondition
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UNPCNeedPrecondition : public UContextualActionPrecondition
	{
	public:
		EContextualActionNeeds                                     Need;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContextualActionComparisonOperator                        ShouldBe;                                                // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6ZP[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EquippedItemPrecondition
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UEquippedItemPrecondition : public UContextualActionPrecondition
	{
	public:
		EItemPreconditionType                                      ItemPreconditionType;                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEquipped;                                             // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMOE[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrototypeSID                                       SuitableItemPrototypeSID;                                // 0x0030(0x0030) Edit, NativeAccessSpecifierPublic
		struct FBodyMeshSIDSelector                                BodyMeshSIDSelector;                                     // 0x0060(0x0010) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NPCPrototypePrecondition
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UNPCPrototypePrecondition : public UContextualActionPrecondition
	{
	public:
		struct FPrototypeSID                                       AllowedUserRestriction;                                  // 0x0028(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AllowedAgentTypePrecondition
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAllowedAgentTypePrecondition : public UContextualActionPrecondition
	{
	public:
		int32_t                                                    AllowedAgentType;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48Q1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ZombifiedAgentPrecondition
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UZombifiedAgentPrecondition : public UContextualActionPrecondition
	{
	public:
		EZombifiedPreconditionType                                 AllowedForType;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_08PU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemInInventoryPrecondition
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UItemInInventoryPrecondition : public UContextualActionPrecondition
	{
	public:
		struct FPrototypeSID                                       ItemPrototypeSID;                                        // 0x0028(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualActionEffect
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UContextualActionEffect : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualActionNeedEffect
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UContextualActionNeedEffect : public UContextualActionEffect
	{
	public:
		EContextualActionNeeds                                     ContextualActionNeed;                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4G2F[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChangeValuePerSelector;                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.AddNeedEffect
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAddNeedEffect : public UContextualActionEffect
	{
	public:
		EContextualActionNeeds                                     ContextualActionNeedForAdd;                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUMO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RemoveNeedEffect
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URemoveNeedEffect : public UContextualActionEffect
	{
	public:
		EContextualActionNeeds                                     ContextualActionNeedForRemove;                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4ZS[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ContextualNavLinkProxy
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class AContextualNavLinkProxy : public ANavLinkProxy
	{
	public:
		void OnStartUsingCustomLink(class AActor* MovingActor, const struct FVector& DestinationPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CoverGenerator
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class ACoverGenerator : public AActor
	{
	public:
		class USmartCoverRenderingComponent*                       DebugRenderingComp;                                      // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CoversStorage
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UCoversStorage : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_HCX1[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SmartCoverRenderingComponent
	 * Size -> 0x0004 (FullSize[0x0550] - InheritedSize[0x054C])
	 */
	class USmartCoverRenderingComponent : public UDebugDrawComponent
	{
	public:
		unsigned char                                              UnknownData_NJ5Q[0x4];                                   // 0x054C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CppMediator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCppMediator : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UIManagerOnQuestDeselected(int32_t PrototypeID);
		class FString STATIC_UIManagerGenerateAndGetDefaultNameSave();
		class UTriplanarDecalComponent* STATIC_SpawnTriplanarDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
		bool STATIC_ShouldUpdateSolarTime(float PrevSolarTime, float SolarTime, float UpdateSunDeltaTime);
		void STATIC_SetVoiceVolume(float InVoiceVolume);
		void STATIC_SetTurnOnVoiceVolume(bool bInTurnOnVoiceVolume);
		void STATIC_SetTurnOnMutantsVolume(bool bInTurnOnMutantsVolume);
		void STATIC_SetTurnOnMusicVolume(bool bInTurnOnMusicVolume);
		void STATIC_SetTurnOnAllVolume(bool bInTurnOnAllVolume);
		void STATIC_SettingsManagerRestoreCachedSettings();
		void STATIC_SettingsManagerCacheCurrentSettings();
		void STATIC_SettingsManagerApplySettings();
		void STATIC_SetSelectedLanguage(ELocalizationLanguage InSelectedLanguage);
		void STATIC_SetMutantsVolume(float InMutantsVolume);
		void STATIC_SetMusicVolume(float InMusicVolume);
		void STATIC_SetMouseSensitivityCoef(float InMouseSensitivityCoef);
		void STATIC_SetMeshNaniteSettings(class UStaticMesh* Mesh, bool bEnable);
		void STATIC_SetAudiologPlaybackPercent(float PlaybackPercent);
		void STATIC_SetAllVolume(float InVolume);
		void STATIC_SetAimMouseSensitivityCoef(float InAimMouseSensitivityCoef);
		void STATIC_SaveCharacter(const class FString& CharacterSID, class UMeshGeneratorEditor* MeshGenerator, bool bSaveObj, const class FString& SaveObjConfigPath);
		class UWorld* STATIC_RuntimeGetWorld();
		void STATIC_ResetSaveForGuidActor(const struct FGuid& Guid);
		void STATIC_ReloadConfigPrototypes();
		int32_t STATIC_ReadSaveForGuidActor_Bool(const struct FGuid& Guid, bool* Value, int32_t Seek);
		void STATIC_QuestInteractionFinishAction(class UInteractableComponent* InteractionComponent, const class FString& LauncherName);
		void STATIC_QuestInteractionComponentFinishAction(class UInteractionComponent* InteractionComponent, const class FString& LauncherName);
		void STATIC_OnToggleAudiolog(bool bPlayAudiolog);
		float STATIC_ObjGetHP(class AObj* Obj);
		void STATIC_MusicPlaySoundCurve(int32_t IndexNextWave);
		struct FItemUID STATIC_MakeItemUID(int32_t RawInt32);
		struct FItemContainerUID STATIC_MakeItemContainerUID(int32_t RawInt32);
		int32_t STATIC_MakeInvalidGUID();
		void STATIC_LogError(class AActor* Sender, const class FString& ErrorMessage);
		bool STATIC_IsWalking(class AObj* Actor);
		bool STATIC_IsRunningWorldPartitionMigrationFromCommandlet();
		bool STATIC_IsQuestSelected(const struct FJournalQuest& JournalQuest);
		bool STATIC_IsPendingLoadQuickSave();
		bool STATIC_IsObjAlive(class AObj* Obj);
		bool STATIC_IsNaniteEnabledForMesh(class UStaticMesh* Mesh);
		bool STATIC_IsMoving(class AObj* Actor);
		bool STATIC_IsGamePlaying();
		bool STATIC_IsFarAwayFromPlayer(const struct FVector& Location);
		bool STATIC_IsEmissionActive();
		bool STATIC_IsActorInGameWorld(class AActor* ActorToCheck);
		bool STATIC_HasValidGUID(class AObj* Actor);
		bool STATIC_HasSaveForGuidActor(const struct FGuid& Guid, class AActor* Actor);
		float STATIC_GetSkyLightUpdateDeltaTime();
		int32_t STATIC_GetPrototypeID(class AObj* Actor);
		TMap<class FString, class UFileObjPrototypesEditor*> STATIC_GetObjPrototypes();
		TArray<int32_t> STATIC_GetNotePrototypeIDs();
		TArray<class UMeshGeneratorEditor*> STATIC_GetMeshGenerators();
		int32_t STATIC_GetGUID(class AObj* Actor);
		class AObj* STATIC_GetFocusedEnemy(class AObj* Obj);
		TArray<struct FJournalQuest> STATIC_GetFinishedQuests();
		TArray<struct FJournalQuest> STATIC_GetFailedQuests();
		struct FVector STATIC_GetEmissionLocation();
		struct FSettingsVariables STATIC_GetCurrentSettings();
		float STATIC_GetCurrentAudiologPlayedTime();
		float STATIC_GetCurrentAudiologDuration();
		float STATIC_GetAnomalyCullingRadius();
		TArray<struct FJournalQuest> STATIC_GetActiveSecondaryQuests();
		TArray<struct FJournalQuest> STATIC_GetActiveMainQuests();
		void STATIC_CreateAIVoiceEvent(class AObj* SenderObj, const struct FVector& Location, const struct FVector& Direction);
		bool STATIC_CanPlayAudiolog();
		void STATIC_AppendSaveForGuidActor_Bool(const struct FGuid& Guid, bool Value);
		void STATIC_AmbientPlaySoundCurve(int32_t IndexNextWave);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Creator
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UCreator : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_ZPAT[0x38];                                  // 0x0060(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CrosshairWidgetBase
	 * Size -> 0x0050 (FullSize[0x02E8] - InheritedSize[0x0298])
	 */
	class UCrosshairWidgetBase : public UChildViewBase
	{
	public:
		float                                                      DelayInterpol;                                           // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64Q3[0x14];                                  // 0x029C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    ShowCrosshairAnim;                                       // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    HideCrosshairAnim;                                       // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableCrosshairAnimation;                               // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CO91[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrosshairAnimationSpeed;                                 // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TSXL[0x20];                                  // 0x02C8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CrosshairWidgetCircle
	 * Size -> 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
	 */
	class UCrosshairWidgetCircle : public UCrosshairWidgetBase
	{
	public:
		class UImage*                                              Point;                                                   // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              circle;                                                  // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            Container;                                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            CircleMaterial;                                          // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableDespersionLimit;                                  // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W7BO[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RadiuseParametr;                                         // 0x030C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RadiuseParametrMax;                                      // 0x0314(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F0V8[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CrosshairWidgetCross
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UCrosshairWidgetCross : public UCrosshairWidgetBase
	{
	public:
		float                                                      shift;                                                   // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDespersionLimit;                                  // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIC6[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              DownLine;                                                // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              LeftLine;                                                // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              RightLine;                                               // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              UpLine;                                                  // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              Point;                                                   // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CrosshairWidgetPoint
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UCrosshairWidgetPoint : public UCrosshairWidgetBase
	{
	public:
		class UImage*                                              Point;                                                   // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CrosshairWidgetSwitcher
	 * Size -> 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
	 */
	class UCrosshairWidgetSwitcher : public UChildViewBase
	{
	public:
		class UWidgetSwitcher*                                     CrosshairSwitcher;                                       // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    ShowCrosshairAnim;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    HideCrosshairAnim;                                       // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    BlockHideCrosshairAnim;                                  // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UQO1[0x28];                                  // 0x02B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableLoadCrosshairType;                                // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECrosshairType                                             DefaultCrosshairType;                                    // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SU6Y[0x2];                                   // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrosshairAnimationAimSpeed;                              // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OXOW[0x10];                                  // 0x02E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CrouchIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UCrouchIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomButton
	 * Size -> 0x0034 (FullSize[0x0600] - InheritedSize[0x05CC])
	 */
	class UCustomButton : public UButton
	{
	public:
		int32_t                                                    CustomIntParam1;                                         // 0x05CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomIntParam2;                                         // 0x05D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomFloatParam3;                                       // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomFloatParam4;                                       // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKM4[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringTag;                                               // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatTag;                                                // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B79G[0xC];                                   // 0x05F4(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnPress();
		void OnClick();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManager
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManager : public UBaseConsoleManager
	{
	public:
		TArray<class UBaseConsoleManager*>                         PersonalConsoleManagers;                                 // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNKO[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		void XRunEngineCommand(const class FString& Command);
		void XExecuteAdditionalScript(const class FString& ScriptKeyName);
		void ExecuteScripts(TArray<class FString> ScriptArray);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerAA
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerAA : public UBaseConsoleManager
	{
	public:
		void XToggleArtifactSpawnerDebugInfo();
		void XTeleportNPCToSpawn(const class FString& NPCSID);
		void XTeleportNPCToPlayer(const class FString& NPCSID);
		void XStartQuestNodeBySID(const class FString& SID);
		void XStartQuestNode(int32_t ID);
		void XStartQuestBySID(const class FString& SID);
		void XStartQuest(int32_t ID);
		void XSkipToQuestNode(const class FString& SID);
		void XSkipInfotopicRefreshCooldown();
		void XShowSpawnDebugInfo(bool Show);
		void XShowQuestTriggers(bool bShow);
		void XShowCurrentLocation();
		void XSetTimeSpeed(float Speed);
		void XSetSearchpointDebugState(bool bState);
		void XSetRelationsInRadius(float Radius, int32_t RelationValue);
		void XSetRandomNodeDefinedPinBySID(const class FString& SID, int32_t PinNumber);
		void XSetRandomNodeDefinedPin(int32_t ID, int32_t PinNumber);
		void XSetGameTime(int32_t Hour, int32_t Minute, int32_t Second);
		void XRestartCurrentDialog();
		void XResetRandomNodeBySID(const class FString& SID);
		void XResetRandomNode(int32_t ID);
		void XResetQuestBySID(const class FString& SID);
		void XRemoveArtifactMarker(const class FString& ArtifactSpawnerGuidString);
		void XPlayDialogFromPool(const class FString& DialogEventTypeName, int32_t NPCUIDValue1, int32_t NPCUIDValue2);
		void XPlayCommentFromPool(const class FString& DialogEventTypeName, int32_t NPCUIDValue);
		void XKillNPCInRadius(float Radius, int32_t MinimalReputationToKill, int32_t MaxReputationToKill);
		void XFindNonEndingDialogs();
		void XExcludeQuestNodeBySID(const class FString& SID);
		void XExcludeQuestNode(int32_t ID);
		void XExcludeQuestBySID(const class FString& SID);
		void XExcludeQuest(int32_t ID);
		void XEndQuestNodeBySID(const class FString& SID);
		void XEndQuestNode(int32_t ID);
		void XEndQuestBySID(const class FString& SID);
		void XEndQuest(int32_t ID);
		void XDespawnNPCsAtRadius(float Radius);
		void XDespawnDeadNPCsAtRadius(float Radius);
		void XDespawnAliveNPCsAtRadius(float Radius);
		void XDebugAddHelloDialogsToQueue(int32_t TargetUID, int32_t DialogsCount);
		void XClearDialogQueue();
		void XCheckGamedata();
		void XAddMoneyToPlayer(float Value);
		void XAddArtifactMarker(const class FString& ArtifactSpawnerGuidString, bool bMainQuestMarker);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerAI2
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerAI2 : public UBaseConsoleManager
	{
	public:
		void XSetVisionParamsOverride(int32_t ModelUID, const class FString& PrototypeSID);
		void XSetRelation(int32_t FirstUID, int32_t SecondUID, int32_t Relation);
		void XSetHearingParamsOverride(int32_t ModelUID, const class FString& PrototypeSID);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerAK
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerAK : public UBaseConsoleManager
	{
	public:
		void XSuicide();
		void XPrintInventory(int32_t UnitUID);
		void XKillThemAll();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerAM
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerAM : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_PVUD[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		void XToggleDebugTool();
		void XSetFocus(int32_t UID);
		void XResetAI(int32_t UID);
		void XMoveToPlayer(int32_t NPC_UID, EMovementBehaviour Behaviour);
		void XClearFocus(int32_t UID);
		void XCallQuickSave(float Angular);
		void XCallQuickLoad(float Angular);
		void XAddMoveTo(int32_t UID);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerBuild
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerBuild : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_0KJL[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		void XSpawnItemNearPlayerBySID(const class FString& ItemPrototypeSID);
		void XSpawnItemNearPlayerByPrototypeID(int32_t ItemPrototypeID);
		void XSpawnItemInCoordinatesBySID(const class FString& ItemPrototypeSID, float Px, float Py, float Pz);
		void XSpawnItemInCoordinatesByPrototypeID(int32_t ItemPrototypeID, float Px, float Py, float Pz);
		void XShowPlayerCoordinates();
		void XSetPlayerSpeedMultiplier(float SpeedMultiplier);
		void XSetNoClipGSC(bool bNoClipGSC, float Speed);
		void XSetGodModeByUID(int32_t EntityUID, bool bGodModeState);
		void XSetGodModeAllFactions(bool bGodModeState);
		void XSetFreeCameraSpeedMultiplier(float SpeedMultiplier);
		void XSetFactionGodMode(const class FString& CurrentFactionSelector, bool bGodModeState);
		void XSetEntityUnkillableByUID(int32_t EntityUID, bool bGodModeState);
		void XResetCurrentWeaponDurabilityToZero();
		void XRepairCurrentWeapon();
		void XDisplayFocusingPlayerEnemiesCount();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerDC
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerDC : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_ECXJ[0x50];                                  // 0x0070(0x0050) MISSED OFFSET (PADDING)

	public:
		void XToggleDebugPlayerArmorInfo();
		void XToggleDebugBulletDistanceScaling();
		void XShowDebugInfoForStash(const class FString& InStashIdentifier);
		void XSetWeatherTransitionTimeMultiplier(float WeatherTransitionTimeMultiplier);
		void XRegenerateItemsInStashes();
		void XKillNpcByUID(int32_t NpcUID);
		void XChangeDropBodyMethod(bool bShouldDrop);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerDK
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerDK : public UBaseConsoleManager
	{
	public:
		void XTestDialogFolders(int32_t Members, int32_t Answers);
		void XSetInventoryGamepadNavigationParams(float InputDelay, float InputThreshold, float SelectionDelay);
		void XSetInventoryGamepadNavigationByAxises(bool bAxes);
		void XSetInventoryGamepadInputThreshold(float InputThreshold);
		void XSetInventoryGamepadInputSelectionDelay(float InputSelectionDelay);
		void XSetInventoryGamepadInputDelay(float InputDelay);
		void XSetGamepadNavigationBorderSpeed(float Speed);
		void XGridNavigationVar(int32_t InVar);
		void XDrawDebugInventoryNavigation(bool bDraw);
		void XDKStartTwoQuestStage(const class FString& QSID);
		void XDKStartQuestStage(const class FString& QSID, const class FString& SSID);
		void XDKStartQuest(const class FString& SID);
		void XDKStartAndFinishQuestStage(const class FString& QSID);
		void XDKFinishQuestStage(const class FString& QSID, const class FString& SSID, bool bWin);
		void XDKFinishQuest(const class FString& SID, bool bWin);
		void UseStackSplitContextual(bool bInUse);
		void MoveItemsInTrade(bool bMoveTraderItems, bool bMoveOwnItems, bool bMoveBarterItems);
		void HideCursorInMouseDrag(bool bHide);
		void AllwaysShowDropHere(bool bShow);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerDP
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerDP : public UBaseConsoleManager
	{
	public:
		void XTestCrashStackOverflow(int32_t Counter);
		void XTestCrashReturnIfFalse();
		void XTestCrashRandomAddress();
		void XTestCrashNullptr();
		void XTestCrashLambda();
		void XPrintLocalizedTextByKey(const class FString& StringKey);
		void XInitializeLocalizationManager();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerDR
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerDR : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_3NUH[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		void XInitializeBenchmarkSequence(const class FString& AssetPath, const class FString& AssetName);
		void XEnableCinematicMode();
		void XDisableCinematicMode();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerEG
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerEG : public UBaseConsoleManager
	{
	public:
		void XGarbageCollector();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerIK
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerIK : public UBaseConsoleManager
	{
	public:
		void XStartSequenceOnLevel(int32_t SequenceIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerIM
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerIM : public UBaseConsoleManager
	{
	public:
		void XMigrateSquadToPlayerAlife(float StartX, float StartY);
		void XHighlightCovers();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerMB
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerMB : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_MERM[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		void XToggleShowTriggerCapsuleView();
		void XToggleShowProtection();
		void XToggleShowPlayerRequestedMainHandWeaponType();
		void XToggleShowPlayerLocation();
		void XToggleShowPlayerLastHeldItem();
		void XToggleShowModels();
		void XToggleShowLightningBallAnomalyDebugInfo();
		void XToggleDebugExpulsionAnomaly();
		void XSwitchAnomalySpawnerPreset();
		void XSetDrawDebugExplosion(bool bDebug, float DebugTime);
		void XDrawDebugRadiation(bool InDrawDebugRadiation);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerMH
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerMH : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_YTWP[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)

	public:
		void XToggleSoapBubbleDebug();
		void XToggleDrawPlayerShootingDebug();
		void XToggleDrawPlayerRecoilDebug();
		void XToggleDrawPlayerDispersionDebug();
		void XToggleDrawAIShootingDebug();
		void XRemoveEffectFromPlayer(const class FString& EffectPrototypeSID);
		void XApplyMainHandWeaponUpgradeBySID(const class FString& UpgradePrototypeSID);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerMP
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerMP : public UBaseConsoleManager
	{
	public:
		void XTriggerAutoSave();
		void XToggleLogLoadingProgress();
		void XStartSleep();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerMS
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerMS : public UBaseConsoleManager
	{
	public:
		void XShowMaterial(int32_t ObjUID, int32_t MaterialID, int32_t LODId);
		void XSetCameraShakeScale(float NewScale);
		void XSetAIStayGoal(int32_t ObjUID, const class FString& AnimPath);
		void XLaunchCustomAnimation(int32_t ObjUID, const class FString& AnimPath, const class FString& AnimSlotName);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerMY
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerMY : public UBaseConsoleManager
	{
	public:
		void XSimulatePhysicsOnBoneForObj(int32_t ObjUID, const class FString& BoneName);
		void XSetXRayMode(bool bEnabled);
		void XSetDebugMode();
		void XPossessToCharacterByUID(int32_t UID);
		void XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem(int32_t ObjUID, EMovementBehaviour InMovementBehaviour);
		void XForceAIMoveToPlayerPositionByObjUID(int32_t ObjUID, EMovementBehaviour InMovementBehaviour);
		void XForceAIMoveToObjectByObjUID(int32_t ObjUID, const class FString& SceneActor, EMovementBehaviour InMovementBehaviour);
		void XForceAIMoveFaceToFaceByObjUIDs(int32_t FirstObjUID, int32_t SecondObjUID, EMovementBehaviour InMovementBehaviourFirst, EMovementBehaviour InMovementBehaviourSecond);
		void XForceAIDogsMoveToObject(const class FString& SceneActor, EMovementBehaviour InMovementBehaviour, float SpreadRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerOM
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerOM : public UBaseConsoleManager
	{
	public:
		void XSetCarouselTimeToCenter(float Time);
		void XSetCarouselRotation(float Rotation);
		void XSetCarouselLiftUpTime(float Time);
		void XSetCarouselForce(float Force);
		void XSetCarouselDuration(float Duration);
		void XSetCarouselDebugTrajectory(bool bEnable);
		void XSetCarouselAngle(float Angle);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerPA
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerPA : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_RWGY[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		void XTogglePhysicalMaterialDebug(float Distance);
		void XToggleGrenadeDebug(EGrenadeDebugFlag FlagValue);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerPS
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerPS : public UBaseConsoleManager
	{
	public:
		void XShowInventoryDebugItmesStats(bool bShow);
		void XChangeInventoryScroll(int32_t Index);
		void XChangeCompasMarkers(int32_t Index);
		void XAddMapMarkersByIdAndAmount(int32_t InMarkerPrototypeID, int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerRK
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerRK : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_EO2K[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)

	public:
		void XUnlockDoor(int32_t DoorUID);
		void XTogglePsyPhantomDebugMode();
		void XTogglePlayerRadiationSphereVisibility();
		void XToggleNPCFlashlight(int32_t UID);
		void XToggleHUDElements(EHUDElements ElementsToHide);
		void XToggleFreeCamera();
		void XToggleDrawPlayerStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef);
		void XToggleDrawItemStats();
		void XToggleDrawInteractNPCStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef);
		void XToggleDetailedVitalsStat(EVitalType VitalType);
		void XTestOrchestrator(const class FString& DialogPrototypeSID, float Radius);
		void XTeleportToObjUID(int32_t ObjUID);
		void XTeleportTo(float XCoord, float YCoord, float ZCoord);
		void XStopBenchmark();
		void XStartGSCBackgroundProfiler(float MsecThreshold, float RamMBThreshold, uint32_t InFramesToCaptureOnSpike, uint32_t InFrameCountToComputeAverage);
		void XStartBenchmark(float CameraHeight, float CircleRadius, float InitialPitch, float InitialYaw, int32_t BenchRuns, bool bProfileCsv);
		void XSpawnPsyNPC(bool bIsPsyPhantom, const class FString& ObjPrototypeSID, int32_t Count);
		void XSpawnObjBySID(const class FString& PrototypeSID, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll);
		void XSpawnObj(int32_t PrototypeID, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll);
		int32_t XSpawnItemContainerBySID(const class FString& PrototypeSID, float Px, float Py, float Pz, int32_t Gold, float Pitch, float Yaw, float Roll);
		int32_t XSpawnItemContainer(int32_t PrototypeID, float Px, float Py, float Pz, int32_t Gold, float Pitch, float Yaw, float Roll);
		void XSetPsyNPCFilterParams(bool bIsPsyPhantom, EAgentType AgentType1, EAgentType AgentType2, const class FString& ObjPrototypeFilter1, const class FString& ObjPrototypeFilter2, const class FString& ObjPrototypeFilter3);
		void XSetGodMode(bool bGodMode);
		void XSetGlobalObjectPath(const class FString& SID, const class FString& InValue);
		void XSetGlobalBool(const class FString& SID, bool InValue);
		void XSetDebugBulletLogParams(EDebugBulletLog BulletLogParams);
		void XRevertUpgradeBySID(const class FString& ItemPrototypeSID, const class FString& UpgradePrototypeSID);
		void XOpenDoor(int32_t DoorUID);
		void XObjRecalcAllEquipment(int32_t ObjUID);
		void XObjRecalcAllCachedStats(int32_t ObjUID);
		void XModifyStamina(int32_t TargetUID, float FPSpent);
		void XModifyBleeding(int32_t TargetUID, int32_t AddBleeding);
		void XIncreaseEnsuresLimit(int32_t IncreaseLimit);
		void XGenerateItemsForPlayerWithPerfLog(int32_t ItemGeneratorPrototypeID);
		void XForceActorInteract(int32_t ActorUID, int32_t InteractableUID);
		void XFileExists(const class FString& FilePath);
		void XDrawPsyFieldVolumes(bool bInDrawPsyField);
		void XDetachItem(int32_t ItemUID, int32_t Index);
		void XDealDurabilityDamage(int32_t ItemUID, float DurabilityDamage);
		void XDealDamage(int32_t TargetUID, float Damage, float ArmorDamage, float ArmorPiercing, float Bleeding, float BleedingChanceIncrement, EDamageType Type, const class FString& BoneHit);
		void XCreateItemInInventoryByID(int32_t PrototypeID, int32_t ObjUID, int32_t Count, float Durability);
		void XAttachItem(int32_t EquipmentSlot, int32_t AttachmentUID, int32_t OwnerUID);
		void XApplyUpgradeBySID(const class FString& ItemPrototypeSID, const class FString& UpgradePrototypeSID);
		void XApplyUpgrade(int32_t ItemUID, int32_t UpgradePrototypeID);
		void XApplyEffectOnPlayer(const class FString& EffectPrototypeSID);
		void XApplyEffectOnNPCByUID(const class FString& EffectPrototypeSID, int32_t UID);
		void XApplyEffectOnInteractNPC(const class FString& EffectPrototypeSID);
		void TransformUID(int32_t UID);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerSD
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerSD : public UBaseConsoleManager
	{
	public:
		void XTeleportToPlacesOfInterest(const class FString& SID);
		void XTeleport();
		void XShowCompass();
		void XShowAllWidget();
		void XHideCompass();
		void XHideAllWidget();
		void XGetActorNameByUID(int32_t UID);
		void XBeginPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerSM
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerSM : public UBaseConsoleManager
	{
	public:
		void XSVFriendlyFire(bool bEnabled);
		void XStopEmission();
		void XStartEmissionBySID(const class FString& PrototypeSID);
		void XStartEmission();
		void XShowProjectileTrajectory(bool bShow);
		void XResumeScheduledEmission();
		void XPauseScheduledEmission();
		void XGetEmissionState();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerSS
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerSS : public UBaseConsoleManager
	{
	public:
		void XALifeKillAll();
		void XALifeEnable();
		void XALifeDisable();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerVC
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerVC : public UBaseConsoleManager
	{
	public:
		void XTestPDA();
		void XTestNotes();
		void XTestMapMarker();
		void XTestJournalFinishQuest();
		void XTestJournal();
		void XShowUIDebugInput(bool bEnabled);
		void XShowStatProgres(bool bEnabled);
		void XShowPDANavigationCenter(bool bIsShow);
		void XShowPDABook(bool bEnabled);
		void XShowGameDataAndTime();
		void XShowCompassAngle(bool bEnabled);
		void XHideGameDataAndTime();
		void XDialogFontSizeSubtitle(int32_t InTextSize);
		void XDialogFontSizeAnswer(int32_t InTextSize);
		void XChangeTestWidgetOnHUD();
		void XChangeLanguageRU();
		void XChangeLanguageEN();
		void XChangeLanguage(int32_t LanguageIndex);
		void XChangeHUDWidget();
		void XAddNotesById(int32_t InNotePrototypeID);
		void XAddMapMarkerById(int32_t InMarkerPrototypeID);
		void XAddItemDragToQuickSlot(int32_t IndexSlot);
		void DebugUIShowTextSize(bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerVD
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerVD : public UBaseConsoleManager
	{
	public:
		void XSpawnTwoAlifeSquadsCloseEnoughToBattle(const class FString& Faction1, const class FString& Faction2, int32_t Faction1UnitsCount, int32_t Faction2UnitsCount);
		void XSpawnDeadNpc();
		void XShowUnitAndSquadUIDs(float Radius);
		void XSetALifeGridVisionRadius(float Radius);
		void XSetALifeBattleTickTime(float Time);
		void XProtectSquad(const class FString& SquadUID, bool bProtect);
		void XProtectItemContainer(const class FString& ContainerUID, bool bProtect);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerVP
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerVP : public UBaseConsoleManager
	{
	public:
		void XWoundNpcByUID(int32_t NpcUID);
		void XShootAttach();
		void XResurrectNPCAsZombie(int32_t NpcUID);
		void XReloadAttachTactical();
		void XReloadAttach();
		void XNpcLookAt(int32_t NpcUID, float X, float Y, float Z);
		void XLaunchFacialAnimation(int32_t ObjUID, const class FString& AnimPath);
		void XKnockDownNpcByAnotherNpc(int32_t NpcUID, int32_t AttackerNpcUID);
		void XKnockDownNpc(int32_t NpcUID);
		void XInstallAttachBySID(const class FString& AttachSID);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomConsoleManagerYK
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UCustomConsoleManagerYK : public UBaseConsoleManager
	{
	public:
		unsigned char                                              UnknownData_V00A[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		void XTestSetDiscount(bool InbDiscount);
		void XBlockItemSelectorSlots(bool InBlock);
		void XBlockItemSelectorSlot(bool InBlock, int32_t InSlotNum);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomGrid
	 * Size -> 0x0290 (FullSize[0x0520] - InheritedSize[0x0290])
	 */
	class UCustomGrid : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTilingGridBack*                                     TilingBack;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SizeY;                                                   // 0x02A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SizeX;                                                   // 0x02A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<int32_t, class UCustomGridSlot*>                      Widgets;                                                 // 0x02A8(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCustomGridSlot*>                             CachedWidgets;                                           // 0x02F8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    GamepadCurrPosX;                                         // 0x0308(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    GamepadCurrPosY;                                         // 0x030C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        ItemPlacementPanel;                                      // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         OwnerMoney;                                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScrollBox*                                          GridScrollBox;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         HeaderText;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            GridSizeBox;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             ItemPlaceBorder;                                         // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        ScrollCanvasPanel;                                       // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             NavBorder;                                               // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        VerticalBoxScroll;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDefaultScrollEnd;                                       // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowHeader;                                             // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OUP2[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeaderLocSID;                                            // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D4DR[0x60];                                  // 0x0370(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomGridSlot*                                     CurrPickedWidget;                                        // 0x03D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryNew*                                       InventoryNew;                                            // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         WeightText;                                              // 0x03E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         MaxWeightText;                                           // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         LootSeparator;                                           // 0x03F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              WeightIcon;                                              // 0x03F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2G6P[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeforeGamepadNavigationDelay;                            // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadNavigationThreshold;                              // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadNavigationDelay;                                  // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebugNavigationLines;                               // 0x0414(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NOS[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         NavCurve;                                                // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           VisibleCells;                                            // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemSlotWidgetClass;                                     // 0x0430(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryScrollChangeConsole;                            // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36GF[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemDragWidget*                                     CurrMovingWidget;                                        // 0x0448(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUserWidget*                                         MousePosTargetWidget;                                    // 0x0450(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_520W[0xC8];                                  // 0x0458(0x00C8) MISSED OFFSET (PADDING)

	public:
		void OnScrollBarScrolled(float Offset);
		void OnGamepadSelectItemForMove();
		void OnGamepadPutItem();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSlotBaseWidget
	 * Size -> 0x0128 (FullSize[0x03B8] - InheritedSize[0x0290])
	 */
	class UItemSlotBaseWidget : public UWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NCFR[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SlotIndex;                                               // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2334[0xF4];                                  // 0x02A4(0x00F4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemSlotState*                                      SlotState;                                               // 0x0398(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_03TD[0x18];                                  // 0x03A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomGridSlot
	 * Size -> 0x0068 (FullSize[0x0420] - InheritedSize[0x03B8])
	 */
	class UCustomGridSlot : public UItemSlotBaseWidget
	{
	public:
		class UImage*                                              ItemImage;                                               // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Background;                                              // 0x03C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         StackAmount;                                             // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Broken;                                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Attach;                                                  // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Quest;                                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinSlotSize;                                             // 0x03E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTQ2[0x34];                                  // 0x03EC(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DamageInteractableComponent
	 * Size -> 0x0068 (FullSize[0x0220] - InheritedSize[0x01B8])
	 */
	class UDamageInteractableComponent : public UInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_T183[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DamageSources[0x50];                                     // 0x01C0(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bOnlyPlayerDamage;                                       // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInteractOnce;                                           // 0x0211(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9Y99[0x2];                                   // 0x0212(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionDamageThreshold;                              // 0x0214(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MYDA[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DamagableLockComponent
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UDamagableLockComponent : public UDamageInteractableComponent
	{
	public:
		class AActor*                                              TargetObject;                                            // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMesh*                                         AlternativeMesh;                                         // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DeadBody
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UDeadBody : public USingleClickComponent
	{
	public:
		unsigned char                                              UnknownData_SAF4[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HoldComponent
	 * Size -> 0x0038 (FullSize[0x0168] - InheritedSize[0x0130])
	 */
	class UHoldComponent : public UInteractionComponent
	{
	public:
		struct FHoldInteractionData                                InteractionData;                                         // 0x0130(0x0028) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W23O[0x10];                                  // 0x0158(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DeadBodyHoldComponent
	 * Size -> 0x0008 (FullSize[0x0170] - InheritedSize[0x0168])
	 */
	class UDeadBodyHoldComponent : public UHoldComponent
	{
	public:
		unsigned char                                              UnknownData_AIQS[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DealDamageComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UDealDamageComponent : public UActorComponent
	{
	public:
		float                                                      Damage;                                                  // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ArmorDamage;                                             // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ArmorPiercing;                                           // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDamageType                                                DamageType;                                              // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDamageSource                                              DamageSource;                                            // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EXHL[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (PADDING)

	public:
		void DealDamage(class AActor* InTargetActor);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DeathScreen
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class UDeathScreen : public UChildViewBase
	{
	public:
		unsigned char                                              UnknownData_9AHK[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DebugHUDView
	 * Size -> 0x0050 (FullSize[0x0318] - InheritedSize[0x02C8])
	 */
	class UDebugHUDView : public UViewBase
	{
	public:
		class UTextBlock*                                          HourText;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          MinutesText;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          DataText;                                                // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      MiniMapPanel;                                            // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      DataTimePanel;                                           // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStatPanelDebug*                                     StatPanelDebug;                                          // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_133R[0x20];                                  // 0x02F8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DebugWidgetBase
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UDebugWidgetBase : public UWidgetBase
	{
	public:
		bool                                                       bShouldDisabledOnStart;                                  // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAH8[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DebugTextWidgetBase
	 * Size -> 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
	 */
	class UDebugTextWidgetBase : public UDebugWidgetBase
	{
	public:
		class FName                                                WidgetWarningId;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          TextWarningDT;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShouldEnableInWidget;                                  // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVAS[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              DebugImage;                                              // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGSCTextBlock*                                       DebugText;                                               // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		struct FUIWarningSettings FindRengeSettings();
		void CheckDebugTextBluprint(const class FText& Text, class UUserWidget* InOwnerWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DebugTextLenWidget
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UDebugTextLenWidget : public UDebugTextWidgetBase
	{
	public:
		int32_t GetWarningIndex(const class FString& Text, int32_t TextLen);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DebugTextLineWidget
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UDebugTextLineWidget : public UDebugTextWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0ORR[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		int32_t GetIndecRowSettings(int32_t CurrentRow, TArray<struct FRengeSettings> RowSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DestroyableComponent
	 * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
	 */
	class UDestroyableComponent : public UUIDActorComponent
	{
	public:
		unsigned char                                              UnknownData_OFO6[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HP;                                                      // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Armor;                                                   // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LD19[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound;                                                   // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UFXSystemAsset*>                              Particles;                                               // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UStaticMesh*>                                 MeshesToSpawn;                                           // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class USkeletalMesh*>                               SkeletalMeshesToSpawn;                                   // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      ActorsToSpawn;                                           // 0x0110(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DestructabilityMetaInfoComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UDestructabilityMetaInfoComponent : public UActorComponent
	{
	public:
		bool                                                       bAllowConvertionToDestructibleObject;                    // 0x00B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FMKJ[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_DestructibleItemContainer
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class AUIDActor_DestructibleItemContainer : public AGeometryCollectionActor
	{
	public:
		unsigned char                                              UnknownData_H0U7[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DestructibleItemContainer
	 * Size -> 0x0020 (FullSize[0x02C0] - InheritedSize[0x02A0])
	 */
	class ADestructibleItemContainer : public AUIDActor_DestructibleItemContainer
	{
	public:
		unsigned char                                              UnknownData_5YSX[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitReceiverComponent*                               HitReceiverComponent;                                    // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHittableComponent*                                  HittableComponent;                                       // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnBreak(const struct FChaosBreakEvent& BreakEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_DestructibleObject
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AUIDActor_DestructibleObject : public AActor
	{
	public:
		unsigned char                                              UnknownData_IYOE[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DestructibleObject
	 * Size -> 0x00D8 (FullSize[0x0368] - InheritedSize[0x0290])
	 */
	class ADestructibleObject : public AUIDActor_DestructibleObject
	{
	public:
		unsigned char                                              UnknownData_UNAE[0x20];                                  // 0x0290(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       DestructAudioEvent;                                      // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsInteractionComponent*                        PhysicsInteractionComponent;                             // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsSoundsComponent*                             PhysicsSoundsComponent;                                  // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UExplosionComponent*                                 ExplosionComponent;                                      // 0x02D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C6TF[0x90];                                  // 0x02D8(0x0090) MISSED OFFSET (PADDING)

	public:
		void StartDestructActions();
		void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void GSCFramework_OnPreTransition();
		void GSCFramework_OnPostTransition();
		TArray<struct FObjectPhaseSettings> GSCFramework_GetObjectPhases();
		struct FObjectPhaseSettings GSCFramework_GetCurrentPhase();
		int32_t GetCurrentPhaseIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DeveloperSpectator
	 * Size -> 0x0038 (FullSize[0x0640] - InheritedSize[0x0608])
	 */
	class ADeveloperSpectator : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_LOSL[0x4];                                   // 0x0608(0x0004) Fix Super Size
		float                                                      BaseLookUpRate;                                          // 0x060C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpeedMultiplier;                                         // 0x0610(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FXK9[0x4];                                   // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    CameraComponent;                                         // 0x0618(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LA2N[0x20];                                  // 0x0620(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogActionWidget
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UDialogActionWidget : public UWidgetBase
	{
	public:
		class UImageWidget*                                        Icon;                                                    // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MDI3[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogFolder
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class UDialogFolder : public UWidgetBase
	{
	public:
		class UClass*                                              AnswerSlotClass;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HoverFolderStyleId;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UnhoverFolderStyleId;                                    // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         NameText;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        AnswerContainer;                                         // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        ImageSpeaker;                                            // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USelectedAnswerMark*                                 SelectedAnswerMark;                                      // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBarWidget*                                  WFRTimer;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlider*                                             WFRSlider;                                               // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XFK[0x20];                                  // 0x02D8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogManager
	 * Size -> 0x02B0 (FullSize[0x0320] - InheritedSize[0x0070])
	 */
	class UDialogManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_TMNM[0x2B0];                                 // 0x0070(0x02B0) MISSED OFFSET (PADDING)

	public:
		void OnToggleAudiolog(bool bPlayAudiolog);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogOrchestrator
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UDialogOrchestrator : public UBaseManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogSelectAnswerIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDialogSelectAnswerIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueSpeaker
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UDialogueSpeaker : public UWidgetBase
	{
	public:
		class URichTextWidget*                                     SpeakerText;                                             // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldResetTexture;                                     // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTPA[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BackgrounTexture;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MoveWidgetOffset;                                        // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_456E[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueAnswer
	 * Size -> 0x0040 (FullSize[0x0308] - InheritedSize[0x02C8])
	 */
	class UDialogueAnswer : public UDialogueSpeaker
	{
	public:
		class UButton*                                             Button;                                                  // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogActionWidget*                                 Action;                                                  // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabledHoverEvents;                                   // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UF5[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderPadding;                                           // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDebugTextWidgetBase*                                DebugTextLen;                                            // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDebugTextWidgetBase*                                DebugTextRow;                                            // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HoverStyleId;                                            // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NormalStyleId;                                           // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KLU[0x8];                                   // 0x0300(0x0008) MISSED OFFSET (PADDING)

	public:
		void AnswerWidgetClick();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueButton
	 * Size -> 0x0058 (FullSize[0x0310] - InheritedSize[0x02B8])
	 */
	class UDialogueButton : public UButtonBase
	{
	public:
		class UTextWidget*                                         Text;                                                    // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URichTextWidget*                                     RichTextWidget;                                          // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStyleManager;                                     // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7HJ[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StylePrefix;                                             // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HoverStyleId;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NormalStyleId;                                           // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActionId;                                                // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ButtonText;                                              // 0x02F8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueFastAnswer
	 * Size -> 0x0058 (FullSize[0x0360] - InheritedSize[0x0308])
	 */
	class UDialogueFastAnswer : public UDialogueAnswer
	{
	public:
		class UHintSwitcher*                                       HintSwitcher;                                            // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldMoveOnRight;                                      // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4RJ[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionName;                                              // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StylePrefix;                                             // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClickFastAnswer;                                       // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWOY[0x18];                                  // 0x0348(0x0018) MISSED OFFSET (PADDING)

	public:
		void SelectAnswer();
		void PostSelectAnswer();
		void EndSelectAnswer();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueView
	 * Size -> 0x0170 (FullSize[0x0440] - InheritedSize[0x02D0])
	 */
	class UDialogueView : public UViewBaseExtended
	{
	public:
		struct FDialogAswersStyles                                 AswersStyles;                                            // 0x02D0(0x00C0) Edit, NativeAccessSpecifierPublic
		float                                                      DialogTimeDelay;                                         // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VXH6[0xAC];                                  // 0x0394(0x00AC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueViewArc
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UDialogueViewArc : public UDialogueView
	{
	public:
		class UClass*                                              AnswerSlotClass;                                         // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueSpeaker*                                    DialogueSpeaker1;                                        // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueSpeaker*                                    DialogueSpeaker2;                                        // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueSpeaker*                                    DialogueSpeaker3;                                        // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DialogueViewFolder
	 * Size -> 0x00B8 (FullSize[0x04F8] - InheritedSize[0x0440])
	 */
	class UDialogueViewFolder : public UDialogueView
	{
	public:
		float                                                      InputDelayTime;                                          // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultFolderIndex;                                      // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStartSelectFolderType                                     DefaultSelectFolderSlot;                                 // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFQS[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogFolder*                                       FolderSlot1;                                             // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogFolder*                                       FolderSlot2;                                             // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogFolder*                                       FolderSlot3;                                             // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogFolder*                                       FolderSlot4;                                             // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogFolder*                                       FolderSlot5;                                             // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogFolder*                                       FolderSlot6;                                             // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          AnswerContainer;                                         // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      ReplicContainer;                                         // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        LeftButtonsContainer;                                    // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        RightButtonsContainer;                                   // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         ButtonHintExit;                                          // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         ButtonHintUpgrade;                                       // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         ButtonHintTrade;                                         // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNZT[0x40];                                  // 0x04B8(0x0040) MISSED OFFSET (PADDING)

	public:
		void UIDialogOpenUpgrade();
		void UIDialogOpenTrade();
		void UIDialogClose();
		void UIDialogAnswerUp();
		void UIDialogAnswerDown();
		void UIDialogAnswerConfirm();
		class UDialogueAnswer* ChangeSelectFolder(int32_t IndexOldFolder, int32_t AxisMove);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LockableComponent
	 * Size -> 0x0080 (FullSize[0x01C8] - InheritedSize[0x0148])
	 */
	class ULockableComponent : public USingleClickComponent
	{
	public:
		unsigned char                                              UnknownData_55R7[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayAlternativeText;                                  // 0x0150(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLockStruct                                         LockStruct;                                              // 0x0160(0x0060) Edit, NativeAccessSpecifierPrivate
		bool                                                       bLocked;                                                 // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q7CX[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Door
	 * Size -> 0x0048 (FullSize[0x0210] - InheritedSize[0x01C8])
	 */
	class UDoor : public ULockableComponent
	{
	public:
		unsigned char                                              UnknownData_KLA9[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDoorMovableData>                            Doors;                                                   // 0x01D0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bShouldRestoreAngle;                                     // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTaskCanBeInterrupted;                                   // 0x01E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoorCanBePushed;                                        // 0x01E2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_257H[0x1];                                   // 0x01E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialPushImpulseMultiplier;                            // 0x01E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleRestoreSpeed;                                       // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleRestoreDelay;                                       // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDoorState                                                 CurrentState;                                            // 0x01F0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX0U[0x1F];                                  // 0x01F1(0x001F) MISSED OFFSET (PADDING)

	public:
		void OnDoorMeshHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_Door
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AUIDActor_Door : public AActor
	{
	public:
		unsigned char                                              UnknownData_UHSV[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DoorView
	 * Size -> 0x0310 (FullSize[0x05A0] - InheritedSize[0x0290])
	 */
	class ADoorView : public AUIDActor_Door
	{
	public:
		unsigned char                                              UnknownData_TXX0[0xE0];                                  // 0x0290(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRebuildComponentData>                       RebuildComponents;                                       // 0x0370(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FRebuildData>                                ViewRebuildMap;                                          // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPrivate
		struct FVector                                             OverrideInteractHintLocation;                            // 0x0390(0x0018) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInteractable;                                         // 0x03A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLocked;                                               // 0x03A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDoubleDoor;                                           // 0x03AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANGH[0x1];                                   // 0x03AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OpenAngleThreshold;                                      // 0x03AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OpenAngle;                                               // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OpenAngularSpeed;                                        // 0x03B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CloseAngularSpeed;                                       // 0x03B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DoorCloseTime;                                           // 0x03BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SilentOpenAngle;                                         // 0x03C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SilentOpenAngularSpeed;                                  // 0x03C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FirstLeafAngleOnStart;                                   // 0x03C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SecondLeafAngleOnStart;                                  // 0x03CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               Guid;                                                    // 0x03D0(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     DefaultRoot;                                             // 0x03E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                FrameMeshComponent;                                      // 0x03E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                FirstLeafMeshComponent;                                  // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                SecondLeafMeshComponent;                                 // 0x03F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsConstraintComponent*                         FirstLeafPhysicsConstraintComponent;                     // 0x0400(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsConstraintComponent*                         SecondLeafPhysicsConstraintComponent;                    // 0x0408(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHittableComponent*                                  HittableComponent;                                       // 0x0410(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USingleClickComponent*                               OpenDoorSingleClick;                                     // 0x0418(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USingleClickComponent*                               CloseDoorSingleClick;                                    // 0x0420(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USingleClickComponent*                               LockedSingleClick;                                       // 0x0428(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHoldComponent*                                      PeekDoorHold;                                            // 0x0430(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            InvertDoorStateReceiver;                                 // 0x0438(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            InvertDoorLockReceiver;                                  // 0x0440(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            OpenDoorReceiver;                                        // 0x0448(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            CloseDoorReceiver;                                       // 0x0450(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            LockDoorReceiver;                                        // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            UnlockDoorReceiver;                                      // 0x0460(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            PeekDoorReceiver;                                        // 0x0468(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            ActivateDoorReceiver;                                    // 0x0470(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            DeactivateDoorReceiver;                                  // 0x0478(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            ForceOpenDoorReceiver;                                   // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalReceiverComponent*                            ForceCloseDoorReceiver;                                  // 0x0488(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              OpenDoorSender;                                          // 0x0490(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              CloseDoorSender;                                         // 0x0498(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              LockDoorSender;                                          // 0x04A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              UnlockDoorSender;                                        // 0x04A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              ActivateDoorSender;                                      // 0x04B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              DeactivateDoorSender;                                    // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              ForceOpenDoorSender;                                     // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USignalSenderComponent*                              ForceCloseDoorSender;                                    // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkPortalComponent*                                  Portal;                                                  // 0x04D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              DoorMovementSFX[0x28];                                   // 0x04D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorConstraintSFX[0x28];                                 // 0x0500(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorOpenSFX[0x28];                                       // 0x0528(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorCloseSFX[0x28];                                      // 0x0550(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SilentDoorOpenSFX[0x28];                                 // 0x0578(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void UnlockDoor();
		void RebuildDoorView();
		void PeekDoor();
		void OpenDoor();
		void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void LockDoor();
		void InvertDoorState();
		void InvertDoorLock();
		void ForceOpenDoor();
		void ForceCloseDoor();
		void CloseDoor();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadLeftIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDPadLeftIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadOpenDownIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDPadOpenDownIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadOpenUpIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDPadOpenUpIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadRightIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDPadRightIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPADSelection
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UDPADSelection : public UWidgetBase
	{
	public:
		class USizeBox*                                            SizeContainer;                                           // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDpadNavigation                                            DpadNavigation;                                          // 0x0298(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZHI[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DPadStyleId;                                             // 0x029C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLoadWidgetSize;                                   // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA2P[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidgetSize;                                              // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6LH[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImageWidget*                                        Dpad_Active;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadSelectPanel
	 * Size -> 0x0108 (FullSize[0x03D0] - InheritedSize[0x02C8])
	 */
	class UDPadSelectPanel : public UViewBase
	{
	public:
		bool                                                       bIsTopPanel;                                             // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldFindItemToMorePrio;                               // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldHideBackground;                                   // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTFD[0x1];                                   // 0x02CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             SlotPadding;                                             // 0x02CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             LinePadding;                                             // 0x02DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ESortGroup                                                 UseGroup;                                                // 0x02EC(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CY5[0x3];                                   // 0x02ED(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    DefoultPrio;                                             // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveAnimSpeed;                                           // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBlockClick;                                       // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXHM[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDPadSlot*                                           LeftSlot;                                                // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSlot*                                           RightSlot;                                               // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSlot*                                           SelectedSlot;                                            // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSlot*                                           LeftSlotHide;                                            // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSlot*                                           RightSlotHide;                                           // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              LeftArrow;                                               // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              RightArrow;                                              // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            LoadArrowBox;                                            // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBar*                                        OpenProgress;                                            // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            PanelContainer;                                          // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BackgroundIcon;                                          // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      MovePanel;                                               // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ShowPanelAnim;                                           // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ClickArrowLeft;                                          // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ClickArrowRight;                                         // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    MoveNextSlotRight;                                       // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    MoveNextSlotLeft;                                        // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68RD[0x48];                                  // 0x0388(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadSlot
	 * Size -> 0x0080 (FullSize[0x0310] - InheritedSize[0x0290])
	 */
	class UDPadSlot : public UWidgetBase
	{
	public:
		bool                                                       bShouldShowBackground;                                   // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowDirt;                                         // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5G75[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SlotAngle;                                               // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallSlotScale;                                          // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallSlotOpacity;                                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelectedSlotOpacity;                                     // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDPadSlotType                                              DPadSlotType;                                            // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI40[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             IconPadding;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UOverlay*                                            ItemContainer;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            OverlayBox;                                              // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ItemIcon;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         ItemCount;                                               // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Dirt;                                                    // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BackgroundClick;                                         // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ClickAnimation;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMK8[0x18];                                  // 0x02F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DPadWidget
	 * Size -> 0x00E8 (FullSize[0x0380] - InheritedSize[0x0298])
	 */
	class UDPadWidget : public UChildViewBase
	{
	public:
		bool                                                       bShouldEnableHoldOpen;                                   // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOWR[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OpenPanelOffset;                                         // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenPanelOffsetTop;                                      // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenPanelOffsetDown;                                     // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenPanelScale;                                          // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAutoClosePanel;                                    // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M9Y[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoCloseTime;                                           // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldDelay;                                               // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldDelayMax;                                            // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldDelayMin;                                            // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ToggleSpeed;                                             // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowOnStart;                                      // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QYY[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoToggleTime;                                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMRN[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDPadSlot*                                           LeftSlot;                                                // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSlot*                                           RightSlot;                                               // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSelectPanel*                                    TopPanel;                                                // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPadSelectPanel*                                    BottomPanel;                                             // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   ConsoleSwitcher;                                         // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefoltDetectorIcon;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EmptyDetectorIcon;                                       // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefoltBoltIcon;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ToggleDPadAnimHide;                                      // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ToggleDPadAnimShow;                                      // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ToggleDPadZetoToHalfAnim;                                // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ToggleDPadOneToHalfAnim;                                 // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PY31[0x50];                                  // 0x0330(0x0050) MISSED OFFSET (PADDING)

	public:
		void OpenUpdate();
		void EmuletClick(EDPadClickType InClickType);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DragDropZone
	 * Size -> 0x0048 (FullSize[0x02D8] - InheritedSize[0x0290])
	 */
	class UDragDropZone : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_F6YK[0x48];                                  // 0x0290(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DraggableComponent
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UDraggableComponent : public USingleClickComponent
	{
	public:
		unsigned char                                              UnknownData_BNPE[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DynamicPathBuilder
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UDynamicPathBuilder : public UBaseManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.DynamicPathBuilderSubscriber
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamicPathBuilderSubscriber : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EditorItemContainer
	 * Size -> 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
	 */
	class AEditorItemContainer : public AActor
	{
	public:
		class FString                                              ConfigSID;                                               // 0x0280(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BaseItemContainerPrototypeSID;                           // 0x0290(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              MeshPath;                                                // 0x02A0(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FSpawnedItem>                                SimpleItems;                                             // 0x02B0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EMeshSubType                                               ItemContainerType;                                       // 0x02C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LSKW[0x3];                                   // 0x02C1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_PQLV[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EditorTools
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AEditorTools : public AActor
	{
	public:
		bool                                                       bEmptyGroupsOutputToMessageLog;                          // 0x0280(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEmptyGroupsOutputToConsole;                             // 0x0281(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRemoveEmptyGroupActors;                                 // 0x0282(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EZeroBoundsFilter                                          ZeroBoundsFilter;                                        // 0x0283(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bZeroBoundsOutputToConsole;                              // 0x0284(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bZeroBoundsOutputToMessageLog;                           // 0x0285(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBigClustersOutputToConsole;                             // 0x0286(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBigClustersOutputToMessageLog;                          // 0x0287(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBigClustersExcludeEmptyGroupActors;                     // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PPK8[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (PADDING)

	public:
		void XVerifyAllActorsForBrokenReference();
		void XRemoveRestoredLabelFromActors();
		void UpdateVoiceSounds();
		void RemoveEditorContainers();
		bool STATIC_IsGameWorld(class UWorld* GameWorld);
		bool STATIC_IsActorInGameWorld(class AActor* ActorToCheck);
		float STATIC_GetSkyLightUpdateDeltaTime();
		void FixAttachMeshes();
		void CheckAllPrototypes();
		void ChangeNotesToTeleportPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ElectricComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UElectricComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnStartEMIEvent;                                         // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnEndEMIEvent;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsTurnedOn;                                             // 0x00D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CU5C[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ElectroAnomaly
	 * Size -> 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
	 */
	class AElectroAnomaly : public AAnomaly
	{
	public:
		class UStaticMeshComponent*                                RootComponentPtr;                                        // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                CollisionMeshPtr;                                        // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		float GetRadius();
		struct FVector GetParticleSpawnLocation();
		struct FElectroAnomalyBakedData GetElectroBakedData();
		void BPSetActiveIdleVFX(bool bNewActive);
		void BPDoLightningStrikeAfterPauseTime();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EmissionManager
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UEmissionManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_CKOF[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EmptyObject
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class AEmptyObject : public AActor
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       BoxCollision;                                            // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EquipmentSlot
	 * Size -> 0x00B8 (FullSize[0x0470] - InheritedSize[0x03B8])
	 */
	class UEquipmentSlot : public UItemSlotBaseWidget
	{
	public:
		class UImage*                                              Background;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              DefaultImage;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ItemImage;                                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Broken;                                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Attach;                                                  // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScaleBox*                                           ItemImageScaleBox;                                       // 0x03E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             HighlightBorder;                                         // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        DefaultImageColor;                                       // 0x03F0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        TransparentDefaultImageColor;                            // 0x0400(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          DefaultIcon;                                             // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          BackgroundIcon;                                          // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bArtifact;                                               // 0x0420(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Q0J[0x4F];                                  // 0x0421(0x004F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EquipmentSlots
	 * Size -> 0x0190 (FullSize[0x0468] - InheritedSize[0x02D8])
	 */
	class UEquipmentSlots : public UDragDropZone
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      MainHand;                                                // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      SecondHand;                                              // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Head;                                                    // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Detector;                                                // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Artifact1;                                               // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Artifact2;                                               // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Artifact3;                                               // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Artifact4;                                               // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Artifact5;                                               // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Pistol;                                                  // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlot*                                      Torso;                                                   // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             NavBorder;                                               // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         HeaderText;                                              // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1DSO[0x120];                                 // 0x0348(0x0120) MISSED OFFSET (PADDING)

	public:
		void OnItemMouseLeave(class UItemSlotBaseWidget* ItemWidget);
		void OnItemMouseEnter(class UItemSlotBaseWidget* ItemWidget);
		void OnGamepadNavigateUp();
		void OnGamepadNavigateRight();
		void OnGamepadNavigateLeft();
		void OnGamepadNavigateDown();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.EventManager
	 * Size -> 0x0528 (FullSize[0x0598] - InheritedSize[0x0070])
	 */
	class UEventManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_WM13[0x528];                                 // 0x0070(0x0528) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ExplosionComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UExplosionComponent : public UActorComponent
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      ExplosionParticles;                                      // 0x00B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DamageCurveFloat;                                        // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ImpulseDamageCurveFloat;                                 // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrototypeSID                                       PrototypeSID;                                            // 0x00D0(0x0030) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WFCH[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void Explode();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ExpulsionAnomaly
	 * Size -> 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
	 */
	class AExpulsionAnomaly : public AAnomaly
	{
	public:
		class USphereComponent*                                    ActivationSphere;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         PushDistanceDelayCurve;                                  // 0x0348(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnBoltCollided(const struct FVector& LocalPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FadeoutScreen
	 * Size -> 0x0030 (FullSize[0x02F8] - InheritedSize[0x02C8])
	 */
	class UFadeoutScreen : public UViewBase
	{
	public:
		class UTextWidget*                                         SpeakerNameText;                                         // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         SubtitleText;                                            // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            SpeakerNameContainer;                                    // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              FadeoutImage;                                            // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCHU[0x10];                                  // 0x02E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void UISkipFadeoutScreen();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FastDialogueView
	 * Size -> 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
	 */
	class UFastDialogueView : public UDialogueView
	{
	public:
		class UVerticalBox*                                        AnswerContainer;                                         // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBarWidget*                                  TimerWidget;                                             // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueFastAnswer*                                 DialogueAnswerFastLeft;                                  // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueFastAnswer*                                 DialogueAnswerFastRight;                                 // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1MI[0x10];                                  // 0x0460(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateAfterClick();
		void UIFastDialogSecondAnswer();
		void UIFastDialogFirstAnswer();
		void PostSelectAnswer(bool bIsRightAnswer);
		void EndSelectAnswer(bool bIsRightAnswer);
		void BlockInput();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FastTravelManager
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UFastTravelManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_4O08[0x50];                                  // 0x0060(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FireTypeWidget
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UFireTypeWidget : public UWidgetBase
	{
	public:
		struct FLinearColor                                        NormalBackgroundColor;                                   // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HoveredBackgroundColor;                                  // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Icon;                                                    // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZZP[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FlashlightComponent
	 * Size -> 0x0080 (FullSize[0x0160] - InheritedSize[0x00E0])
	 */
	class UFlashlightComponent : public UElectricComponent
	{
	public:
		unsigned char                                              UnknownData_5NDU[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0110(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0118(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpotLightComponent*                                 SpotLightComponent;                                      // 0x0120(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PrototypeID;                                             // 0x0128(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZHHJ[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshComponent*                                      ParentMeshComponent;                                     // 0x0130(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         InnerRadiusCurve;                                        // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         OuterRadiusCurve;                                        // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G407[0x18];                                  // 0x0148(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FlycatcherAnomaly
	 * Size -> 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
	 */
	class AFlycatcherAnomaly : public AAnomaly
	{
	public:
		class USphereComponent*                                    OverlapSphereComponent;                                  // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                VFXEffectSphere;                                         // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GameGraphRenderingComponent
	 * Size -> 0x0054 (FullSize[0x05A0] - InheritedSize[0x054C])
	 */
	class UGameGraphRenderingComponent : public UDebugDrawComponent
	{
	public:
		uint32_t                                                   ShowComponentId;                                         // 0x054C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDebugMinMaxPath;                                        // 0x0550(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3GJZ[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   GameGraphMaterial;                                       // 0x0558(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBoxSphereBounds                                    GameGraphBoundsBox;                                      // 0x0560(0x0038) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V0TG[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowAllComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GameGraphData
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AGameGraphData : public AActor
	{
	public:
		unsigned char                                              UnknownData_8VPF[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameGraphRenderingComponent*                        DebugRenderingComp;                                      // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GameGraphSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGameGraphSubsystem : public UWorldSubsystem
	{
	public:
		class AGameGraphData*                                      GameGraphData;                                           // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PTQ7[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GameManager
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UGameManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_1D6X[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADeveloperSpectator*                                 DeveloperSpectator;                                      // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JTCO[0x28];                                  // 0x0088(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GameMenuElement
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UGameMenuElement : public UWidgetBase
	{
	public:
		class FText                                                LocName;                                                 // 0x0290(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             Button;                                                  // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         Caption;                                                 // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVX6[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GaussDisplay
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class AGaussDisplay : public AActor
	{
	public:
		unsigned char                                              UnknownData_3YHX[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DisplayMaterial;                                         // 0x0288(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGaussWeaponDisplayState                                   CurrentState;                                            // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5GZP[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DischargeAnimationTime;                                  // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChargeAnimationTime;                                     // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentValue;                                            // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimationStartTimeStamp;                                 // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ODM9[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerEffectsSFXComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UPlayerEffectsSFXComponent : public UActorComponent
	{
	public:
		class UAkAudioEvent*                                       SFXStartEvent;                                           // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       SFXStopEvent;                                            // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkRtpc*                                             SFXParameter;                                            // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EEQ8[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GeigerCounterComponent
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UGeigerCounterComponent : public UPlayerEffectsSFXComponent
	{
	public:
		unsigned char                                              UnknownData_9JOB[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GilkaDisplay
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AGilkaDisplay : public AActor
	{
	public:
		float                                                      DistanceRaw;                                             // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L64Y[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DisplayMaterial;                                         // 0x0288(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Global
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class UGlobal : public UGameInstance
	{
	public:
		void GoToMap(const class FName& MapName);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GlobalLoadingSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGlobalLoadingSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_G3AN[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GlobalVariableManager
	 * Size -> 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
	 */
	class UGlobalVariableManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_EJN7[0x58];                                  // 0x0060(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GranularSynthComponent
	 * Size -> 0x0540 (FullSize[0x0CE0] - InheritedSize[0x07A0])
	 */
	class UGranularSynthComponent : public USynthComponent
	{
	public:
		class USoundWave*                                          SoundSource;                                             // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SynthVolume;                                             // 0x07A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3QS[0x4];                                   // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   Attenuation;                                             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeClose;                                              // 0x07B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeFar;                                                // 0x07BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntensityMin;                                            // 0x07C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntensityMax;                                            // 0x07C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserCurveForIntensityMapping;                            // 0x07C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JT6X[0x7];                                   // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         RangeToIntensityCurve;                                   // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SynthUpdatesPerSec;                                      // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCurveForActorTick;                                    // 0x07DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC1D[0x3];                                   // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ActorTickCurve;                                          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Note;                                                    // 0x07E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Velocity;                                                // 0x07EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x07F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Debug;                                                   // 0x07F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IEU[0x3];                                   // 0x07F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Channels;                                                // 0x07F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainDurationMin;                                        // 0x07FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainDurationMax;                                        // 0x0800(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainsPerSecondMin;                                      // 0x0804(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainsPerSecondMax;                                      // 0x0808(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainsPerSecondRandMin;                                  // 0x080C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainsPerSecondRandMax;                                  // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainVolumeMin;                                          // 0x0814(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainVolumeMax;                                          // 0x0818(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02Y9[0x4];                                   // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           DurationRangeMin;                                        // 0x0820(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DurationRangeMax;                                        // 0x0830(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GrainPitchRangeMin;                                      // 0x0840(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GrainPitchRangeMax;                                      // 0x0850(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GrainVolumeRangeMin;                                     // 0x0860(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GrainVolumeRangeMax;                                     // 0x0870(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GrainPanRangeMin;                                        // 0x0880(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GrainPanRangeMax;                                        // 0x0890(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGranularEnvelopeType                                      EnvelopeType;                                            // 0x08A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SB71[0x3];                                   // 0x08A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrainBasePitch;                                          // 0x08A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainProbability;                                        // 0x08A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BasePan;                                                 // 0x08AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableScrubMode;                                         // 0x08B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ1E[0x3];                                   // 0x08B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayHeadPosMinPercent;                                   // 0x08B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayHeadPosMaxPercent;                                   // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayHeadRandPosMin;                                      // 0x08BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayHeadRandPosMax;                                      // 0x08C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayHeadLerpTimeSec;                                     // 0x08C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlaybackSpeed;                                           // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGranularSeekType                                          SeekType;                                                // 0x08CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2A3[0x3];                                   // 0x08CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayHeadOffsetPercent;                                   // 0x08D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTimeMilliSeconds;                                  // 0x08D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTimeMilliSeconds;                                 // 0x08D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SustainGain;                                             // 0x08DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRCQ[0x20];                                  // 0x08E0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          GranulatedSoundWave;                                     // 0x0900(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_23FW[0x3D8];                                 // 0x0908(0x03D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_Grenade
	 * Size -> 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
	 */
	class AUIDActor_Grenade : public AUIDActorOwnsModel
	{
	public:
		unsigned char                                              UnknownData_RC9E[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Grenade
	 * Size -> 0x00C0 (FullSize[0x0350] - InheritedSize[0x0290])
	 */
	class AGrenade : public AUIDActor_Grenade
	{
	public:
		class UGrenadeExplosionComponent*                          ExplosionComponent;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        ExplosionAudioComponent;                                 // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PAFV[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SID;                                                     // 0x02B8(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7UFY[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrototypeID;                                             // 0x02D0(0x0004) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ExplosionTimestamp;                                      // 0x02D4(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_55R5[0x70];                                  // 0x02D8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ExplosionDecalMaterial;                                  // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Explode();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GrenadeExplosionComponent
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UGrenadeExplosionComponent : public UExplosionComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCAblityBlueprintFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGSCAblityBlueprintFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ExecuteAbilityByActivationTagAttackPayload(class AActor* Actor, const class FName& ActivationTag);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCAudioVolume
	 * Size -> 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
	 */
	class AGSCAudioVolume : public AAkSpatialAudioVolume
	{
	public:
		class UAudioRoomBakedReflectionComponent*                  BakedReflection;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioRoomBandwidthComponent*                        Bandwidth;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAudioRoomPreset                                           AudioRoomPreset;                                         // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1IIG[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCDataTable
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UGSCDataTable : public UDataTable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCTextBlock
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UGSCTextBlock : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCTimeSynthVolumeGroup
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGSCTimeSynthVolumeGroup : public UObject
	{
	public:
		float                                                      DefaultVolume;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A88I[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCTimeSynthClip
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UGSCTimeSynthClip : public UObject
	{
	public:
		TArray<struct FGSCTimeSynthClipSound>                      Sounds;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class USoundClass*                                         SoundClass;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           VolumeScaleDb;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PitchScaleSemitones;                                     // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGSCTimeSynthTimeDef                                FadeInTime;                                              // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bApplyFadeOut;                                           // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RUN[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGSCTimeSynthTimeDef                                FadeOutTime;                                             // 0x006C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGSCTimeSynthTimeDef                                ClipDuration;                                            // 0x0074(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EGSCTimeSynthEventClipQuantization                         ClipQuantization;                                        // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T226[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GSCTimeSynthComponent
	 * Size -> 0x0A90 (FullSize[0x1230] - InheritedSize[0x07A0])
	 */
	class UGSCTimeSynthComponent : public USynthComponent
	{
	public:
		struct FGSCTimeSynthQuantizationSettings                   QuantizationSettings;                                    // 0x07A0(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableSpectralAnalysis : 1;                             // 0x07B4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBSC[0x3];                                   // 0x07B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FrequenciesToAnalyze;                                    // 0x07B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EGSCTimeSynthFFTSize                                       FFTSize;                                                 // 0x07C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9A2[0x7];                                   // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlaybackTime;                                          // 0x07D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsFilterAEnabled : 1;                                   // 0x07E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFilterBEnabled : 1;                                   // 0x07E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8IN[0x3];                                   // 0x07E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGSCTimeSynthFilterSettings                         FilterASettings;                                         // 0x07E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGSCTimeSynthFilterSettings                         FilterBSettings;                                         // 0x07F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsEnvelopeFollowerEnabled : 1;                          // 0x07FC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUP4[0x3];                                   // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGSCTimeSynthEnvelopeFollowerSettings               EnvelopeFollowerSettings;                                // 0x0800(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxPoolSize;                                             // 0x080C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GC2[0xA20];                                 // 0x0810(0x0A20) MISSED OFFSET (PADDING)

	public:
		void StopSoundsOnVolumeGroupWithFadeOverride(class UGSCTimeSynthVolumeGroup* InVolumeGroup, EGSCTimeSynthEventClipQuantization EventQuantization, const struct FGSCTimeSynthTimeDef& FadeTime);
		void StopSoundsOnVolumeGroup(class UGSCTimeSynthVolumeGroup* InVolumeGroup, EGSCTimeSynthEventClipQuantization EventQuantization);
		void StopClipWithFadeOverride(const struct FGSCTimeSynthClipHandle& InClipHandle, EGSCTimeSynthEventClipQuantization EventQuantization, const struct FGSCTimeSynthTimeDef& FadeTime);
		void StopClip(const struct FGSCTimeSynthClipHandle& InClipHandle, EGSCTimeSynthEventClipQuantization EventQuantization);
		void SetVolumeGroup(class UGSCTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
		void SetSeed(int32_t InSeed);
		void SetQuantizationSettings(const struct FGSCTimeSynthQuantizationSettings& InQuantizationSettings);
		void SetFilterSettings(EGSCTimeSynthFilter Filter, const struct FGSCTimeSynthFilterSettings& InSettings);
		void SetFilterEnabled(EGSCTimeSynthFilter Filter, bool bIsEnabled);
		void SetFFTSize(EGSCTimeSynthFFTSize InFFTSize);
		void SetEnvelopeFollowerSettings(const struct FGSCTimeSynthEnvelopeFollowerSettings& InSettings);
		void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
		void SetBPM(float BeatsPerMinute);
		void ResetSeed();
		struct FGSCTimeSynthClipHandle PlayClip(class UGSCTimeSynthClip* InClip, class UGSCTimeSynthVolumeGroup* InVolumeGroup);
		bool HasActiveClips();
		TArray<struct FGSCTimeSynthSpectralData> GetSpectralData();
		int32_t GetMaxActiveClipLimit();
		float GetEnvelopeFollowerValue();
		int32_t GetBPM();
		void AddQuantizationEventDelegate(EGSCTimeSynthEventQuantization QuantizationType, const class FScriptDelegate& OnQuantizationEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GuidActorComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UGuidActorComponent : public UActorComponent
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GUIDActorSavable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGUIDActorSavable : public UInterface
	{
	public:
		void SaveGUIDActor();
		void LoadGUIDActor();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GunRecoilTextureDataAsset
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGunRecoilTextureDataAsset : public UDataAsset
	{
	public:
		TArray<struct FRecoilKeys>                                 RecoilPatternAimKeys;                                    // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FRecoilKeys>                                 RecoilPatternHipKeys;                                    // 0x0040(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HeadFlashlightComponent
	 * Size -> 0x0060 (FullSize[0x01C0] - InheritedSize[0x0160])
	 */
	class UHeadFlashlightComponent : public UFlashlightComponent
	{
	public:
		unsigned char                                              UnknownData_4QWQ[0x18];                                  // 0x0160(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       FlashlightTurnOnAudioEvent;                              // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       FlashlightTurnOffAudioEvent;                             // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       FlashlightBurnOutAudioEvent;                             // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O8SB[0x30];                                  // 0x0190(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HintAction
	 * Size -> 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
	 */
	class UHintAction : public UCommonHint
	{
	public:
		class UButton*                                             HintButton;                                              // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9RM[0x18];                                  // 0x0358(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HintDecoratorBase
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UHintDecoratorBase : public URichTextBlockImageDecorator
	{
	public:
		EGSCPlatformType                                           DefaultPlatform;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableEditorDebug;                                      // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRecolorIcon;                                      // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVPL[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StyleId;                                                 // 0x0034(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRecolorConnectedBack;                             // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldUseStylePrefix;                                   // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9JM[0x192];                                 // 0x003E(0x0192) MISSED OFFSET (PADDING)

	public:
		EGSCPlatformType GetCurrentPlatform();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HintKey
	 * Size -> 0x0050 (FullSize[0x0370] - InheritedSize[0x0320])
	 */
	class UHintKey : public UHintBase
	{
	public:
		class UHintRichTextWidget*                                 HintRichTextWidget;                                      // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            HintSizeBox;                                             // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    MultiClickAnim;                                          // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    RunActionAnim;                                           // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    MultiClickIdle;                                          // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     ActionSwitcher;                                          // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBar*                                        HoldProgress;                                            // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ProgressImage;                                           // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ProgressImageBack;                                       // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             HintButton;                                              // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void PlayHintAnimation(bool bSingleClick);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RichTextWidget
	 * Size -> 0x0010 (FullSize[0x0850] - InheritedSize[0x0840])
	 */
	class URichTextWidget : public URichTextBlock
	{
	public:
		bool                                                       bEnableStyleManager;                                     // 0x0840(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHZJ[0xF];                                   // 0x0841(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HintRichTextWidget
	 * Size -> 0x0050 (FullSize[0x08A0] - InheritedSize[0x0850])
	 */
	class UHintRichTextWidget : public URichTextWidget
	{
	public:
		unsigned char                                              UnknownData_KXY8[0x50];                                  // 0x0850(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HintSwitcher
	 * Size -> 0x0030 (FullSize[0x0350] - InheritedSize[0x0320])
	 */
	class UHintSwitcher : public UHintBase
	{
	public:
		class UPlatformSwitcher*                                   HintSwitcher;                                            // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintPC;                                                  // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintConsole;                                             // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             HintButton;                                              // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUOZ[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HitReceiver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHitReceiver : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HitReceiverComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UHitReceiverComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RTSY[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ExplosionHit;                                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BulletProjectileHit;                                     // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MeleeHit;                                                // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AnomalyHit;                                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ProjectileHit;                                           // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HittableComponent
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UHittableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AEW6[0x48];                                  // 0x00B0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HoldIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHoldIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HoverIndicator
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UHoverIndicator : public UWidgetBase
	{
	public:
		class UImage*                                              Background;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoverIndicator;                                        // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HumanAnimCollection
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UHumanAnimCollection : public UObject
	{
	public:
		TMap<EAnomalyAnimInteraction, class UAnimMontage*>         AnomalyInteractions;                                     // 0x0028(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		TMap<EAnimationTargetType, class UAnimMontage*>            AnimationTargetTypes;                                    // 0x0078(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        StealthDeath;                                            // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HumanDefaultAnimCollection
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UHumanDefaultAnimCollection : public UObject
	{
	public:
		class UHumanAnimCollection*                                HumanAnimCollection;                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              HumanAnimBlueprint;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FEquipUnequipAnimations                             EquipUnequip;                                            // 0x0038(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPDAUsageAnimations                                 PDAUsage;                                                // 0x0048(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSmartCoverAnimCollectionData                       SmartCoverAnimCollectionData;                            // 0x0060(0x0050) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.HumanFirearmAnimCollection
	 * Size -> 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
	 */
	class UHumanFirearmAnimCollection : public UObject
	{
	public:
		struct FHumanFirearmInternalAnimations                     InternalAnimations;                                      // 0x0028(0x00D0) Edit, Protected, NativeAccessSpecifierProtected
		TMap<class FName, struct FVector>                          SocketLocations;                                         // 0x00F8(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FHumanWeaponAnimations                              WeaponAnimations;                                        // 0x0148(0x0030) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ImageWidget
	 * Size -> 0x0120 (FullSize[0x03B0] - InheritedSize[0x0290])
	 */
	class UImageWidget : public UWidgetBase
	{
	public:
		class FName                                                StyleId;                                                 // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStyleManager;                                     // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetDefaultIcon;                                         // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Y6P[0x6];                                   // 0x029A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIconSettings                                       IconSettings;                                            // 0x02A0(0x0100) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UImage*                                              ImageObj;                                                // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70ML[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateIcon();
		void UpdateController();
		void UpdateColour();
		void SetBrushTextureInIconSettings(class UTexture2D* Texture);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ImpulseComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UImpulseComponent : public UActorComponent
	{
	public:
		void ApplyImpulse(class AActor* InTargetActor, const struct FVector& InImpulse);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Stalker2BaseGameMode
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class AStalker2BaseGameMode : public AGameModeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InitLevelGameMode
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class AInitLevelGameMode : public AStalker2BaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InputManager
	 * Size -> 0x0130 (FullSize[0x01A0] - InheritedSize[0x0070])
	 */
	class UInputManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_KTB2[0x80];                                  // 0x0070(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputProcessingUnit*>                        InputProcessingUnits;                                    // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputProcessingUnit*>                        TickableIPUs;                                            // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UInputComponent*                                     InputComponent;                                          // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayerInput*                                        PlayerInput;                                             // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ACharacter*                                          PlayerCharacter;                                         // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KHFY[0x78];                                  // 0x0128(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractableItemContainer
	 * Size -> 0x0040 (FullSize[0x02D0] - InheritedSize[0x0290])
	 */
	class AInteractableItemContainer : public AUIDActor_ItemContainer
	{
	public:
		unsigned char                                              UnknownData_IB28[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicsInteractionComponent*                        PhysicsInteractionComponent;                             // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHittableComponent*                                  HittableComponent;                                       // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R58B[0x20];                                  // 0x02B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDActor_InteractableObject
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class AUIDActor_InteractableObject : public AActor
	{
	public:
		unsigned char                                              UnknownData_QA88[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractableObject
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class AInteractableObject : public AUIDActor_InteractableObject
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnbreakable;                                            // 0x02A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBroken;                                                 // 0x02A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelfSufficient;                                         // 0x02A3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrerequisiteRequired;                                   // 0x02A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PAS[0x23];                                  // 0x02A5(0x0023) MISSED OFFSET (PADDING)

	public:
		bool Toggle();
		void SetUnbreakable(bool bInUnbreakable);
		void SetSelfSufficient(bool bInSelfSufficient);
		void SetPrerequisiteRequired(bool bInPrerequisiteRequired);
		void SetEnabled(bool bInEnabled);
		void SetBroken(bool bInBroken);
		void OnNightStart();
		void OnEmissionStart();
		void OnEmissionFinish();
		void OnDayStart();
		bool IsUnbreakable();
		bool IsSelfSufficient();
		bool IsPrerequisiteRequired();
		bool IsEnabled();
		bool IsBroken();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UInteractIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractView
	 * Size -> 0x0098 (FullSize[0x0360] - InheritedSize[0x02C8])
	 */
	class UInteractView : public UViewBase
	{
	public:
		class UInteractViewHint*                                   Hint;                                                    // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractViewHint*                                   HintOptional;                                            // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            HintsOverlay;                                            // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TitleText;                                               // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            HintsHeader;                                             // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        IconUpgrade;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        IconDurability;                                          // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        IconOverweight;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInteractionComponent*>                       InteractionComponents;                                   // 0x0308(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UInteractViewHint*>                           HintWidgets;                                             // 0x0318(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_95LY[0x38];                                  // 0x0328(0x0038) MISSED OFFSET (PADDING)

	public:
		void UpdateInteractHints();
		void UpdateInteractClick(EInteractionType InteractionType, float Progress);
		void UpdateHintState();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InteractViewHint
	 * Size -> 0x0090 (FullSize[0x03E0] - InheritedSize[0x0350])
	 */
	class UInteractViewHint : public UCommonHint
	{
	public:
		class UTextWidget*                                         TitleText;                                               // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         InteractText;                                            // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         InteractTextSmall;                                       // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        HintsContainer;                                          // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        IconUpgrade;                                             // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        IconOverweight;                                          // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    RunActionAnim;                                           // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKF8[0x58];                                  // 0x0388(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnRunAction();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InventoryIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UInventoryIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.InventoryNew
	 * Size -> 0x0E98 (FullSize[0x1168] - InheritedSize[0x02D0])
	 */
	class UInventoryNew : public UViewBaseExtended
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquipmentSlots*                                     EquipmentWidget;                                         // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UQuickPanel*                                         QuickPanel;                                              // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomGrid*                                         InventoryWidget;                                         // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4YRA[0x20];                                  // 0x02F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              TakeAllIcon;                                             // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         LootSeparator;                                           // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomGrid*                                         LootGridWidget;                                          // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomGrid*                                         TraderGridWidget;                                        // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomGrid*                                         SellGridWidget;                                          // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomGrid*                                         BuyGridWidget;                                           // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonTakeAllItems;                                      // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         ButtonHintExit;                                          // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDragDropZone*                                       DropZone;                                                // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDragDropZone*                                       RejectDropZoneInventory;                                 // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDragDropZone*                                       RejectDropZoneEquipment;                                 // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDragDropZone*                                       RejectDropZoneLootSmall;                                 // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDragDropZone*                                       RejectDropZoneLootBig;                                   // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDragDropZone*                                       ContextualDropZone;                                      // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintDropItemPC;                                          // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintToggleEquipmentPC;                                   // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintToggleDescriptionPC;                                 // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintContextMenu;                                         // 0x0398(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintDropItem;                                            // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintCompareInstallRemoveItem;                            // 0x03A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintMovePlaceItem;                                       // 0x03B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintSplitMin;                                            // 0x03B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintSplitMax;                                            // 0x03C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintSplitSelect;                                         // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintEquipment;                                           // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintNavigateComparing;                                   // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHintAction*                                         HintTakeAll;                                             // 0x03E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpgradeMenuWidget*                                  UpgradeMenu;                                             // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             SortButton;                                              // 0x03F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             DropHereBorder;                                          // 0x03F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatformSwitcher*                                   HintsContainer;                                          // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            LootOverlay;                                             // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              IconTakeAllItems;                                        // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         TradeConfirmInfoText;                                    // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         TradeButtonText;                                         // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatformSwitcher*                                   TraderButtonSwitcher;                                    // 0x0428(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7GE[0x40];                                  // 0x0430(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemDragWidget*                                     DragWidget;                                              // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItemDragWidget*                                     DragWidgetGrid;                                          // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemTooltipShowDelay;                                    // 0x0480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V60P[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemTooltipClass;                                        // 0x0488(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DragWidgetClass;                                         // 0x0490(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DragGridWidgetClass;                                     // 0x0498(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              StackSplitWidgetClass;                                   // 0x04A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStackSplitContextual*                               StackSplitContextual;                                    // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStackSplittingWidget*                               StackSplit;                                              // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemBacktDefault;                                        // 0x04B8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemBackOk;                                              // 0x04C8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemBackInterceptOne;                                    // 0x04D8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemBackInterceptTwo;                                    // 0x04E8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemBackDepend;                                          // 0x04F8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemBackHoveredCompatible;                               // 0x0508(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0BT[0x10];                                  // 0x0518(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             TradeButton;                                             // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCheckBox*                                           ToggleEquipment;                                         // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadNavigationThreshold;                              // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5W6[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextWidget*                                         TradeResultMoney;                                        // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TradeResultWeight;                                       // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    RadiationMark;                                           // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ToggleEquipmentIconColor;                                // 0x0558(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OverWeightColor;                                         // 0x0568(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NormalWeightColor;                                       // 0x0578(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ToggleEquipmentIcon;                                     // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RCO[0x5A0];                                 // 0x0590(0x05A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCustomGridSlot*>                             GridSlotsPool;                                           // 0x0B30(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZVD9[0x628];                                 // 0x0B40(0x0628) MISSED OFFSET (PADDING)

	public:
		void UpdateInputDependent();
		void UIInventoryToggleItemInfo();
		void UIInventoryToggleEquipmentPC();
		void UIInventoryToggleEquipment();
		void UIInventoryTakeItem();
		void UIInventorySplitStepRight();
		void UIInventorySplitStepLeft();
		void UIInventorySort();
		void UIInventoryNavigateUp();
		void UIInventoryNavigateRight();
		void UIInventoryNavigateLeft();
		void UIInventoryNavigateDown();
		void UIInventoryNavigateComparingUp();
		void UIInventoryNavigateComparingRight();
		void UIInventoryNavigateComparingLeft();
		void UIInventoryNavigateComparingDown();
		void UIInventoryItemAction();
		void UIInventoryDropItem();
		void UIInventoryCompareItem();
		void SortInventory();
		void ShowTooltip();
		void OnVisibilityChangedEvent(ESlateVisibility NewVisibility);
		void OnTrade();
		void OnToggleEquipment(bool bChecked);
		void OnSplitConfirmed(int32_t ItemAmountSplitForDrop);
		void OnSplitCanceled();
		void OnRightClickMenuItemSelected(const struct FRightClickMenuItemData& ItemData);
		void OnRightClickMenuItemHover(const struct FRightClickMenuItemData& ItemData, bool bInHover);
		void OnRightClickMenuCanceled();
		void OnRejectDrop(const struct FVector2D& Pos);
		void OnGamepadSelectItemRelease();
		void OnGamepadSelectItemForMoveRepeat();
		void OnGamepadSelectItemForMovePress();
		void OnGamepadPutItem();
		void OnGamepadEquipItem();
		void OnGamepadDropItemRepeat();
		void OnGamepadDropItemRelease();
		void OnGamepadDropItemPress();
		void OnGamepadDropItem();
		void OnGamepadContextMenu();
		void OnGamepadCompareItemRepeat();
		void OnGamepadCompareItemRelease();
		void OnGamepadCompareItemPress();
		void OnExitClick(const class FName& ButtonId);
		void OnDropToEmptyPlace(const struct FVector2D& Pos);
		void OnDragDropCanceled(const struct FVector2D& Pos);
		void InventoryWidgetTakeAllItems();
		void HideRightClickMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemAppearanceComponent
	 * Size -> 0x01A8 (FullSize[0x0270] - InheritedSize[0x00C8])
	 */
	class UItemAppearanceComponent : public UUIDActorComponent
	{
	public:
		unsigned char                                              UnknownData_DYE6[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              WeaponInHandsTPP;                                        // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              WeaponInHandsFPP;                                        // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              UnequippedMainWeapon;                                    // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              UnequippedPistol;                                        // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              SecondaryItemInHands;                                    // 0x00F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              ShootingAttachMesh;                                      // 0x0100(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             SilencerRTPCParameter;                                   // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             FireIntervalRTPCParameter;                               // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             MechModulatorRTPCParameter;                              // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       LastBulletInClipEvent;                                   // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       ShellSoundEvent;                                         // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      WeaponTypeSwitch;                                        // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       WeaponJamEvent;                                          // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       KnifeLightAttackImpactEvent;                             // 0x0140(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       KnifeHeavyAttackImpactEvent;                             // 0x0148(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P51N[0xE0];                                  // 0x0150(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetComponent*                                    PDAComponent;                                            // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GGS7[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFXSystemComponent*>                          WeaponPostShootingEffectParticleSystems;                 // 0x0258(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0268(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemContainerHoldComponent
	 * Size -> 0x0020 (FullSize[0x0188] - InheritedSize[0x0168])
	 */
	class UItemContainerHoldComponent : public UHoldComponent
	{
	public:
		unsigned char                                              UnknownData_SC1Q[0x20];                                  // 0x0168(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemContainerInteractionComponent
	 * Size -> 0x0058 (FullSize[0x0220] - InheritedSize[0x01C8])
	 */
	class UItemContainerInteractionComponent : public ULockableComponent
	{
	public:
		unsigned char                                              UnknownData_BU6B[0x20];                                  // 0x01C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PresetItemContainerPrototypeID;                          // 0x01E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WFC8[0x14];                                  // 0x01EC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       OpenAudioEvent;                                          // 0x0200(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       CloseAudioEvent;                                         // 0x0208(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CGJA[0x10];                                  // 0x0210(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemDragWidget
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class UItemDragWidget : public UWidgetBase
	{
	public:
		class UImage*                                              ItemImage;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Background;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             Border;                                                  // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E5VH[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemInfo
	 * Size -> 0x0238 (FullSize[0x04C8] - InheritedSize[0x0290])
	 */
	class UItemInfo : public UWidgetBase
	{
	public:
		class UImage*                                              FullBackCenter;                                          // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ImageShadow;                                             // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         HeaderText;                                              // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         Price;                                                   // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         DurabilityPercentText;                                   // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress1;                                       // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress2;                                       // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress3;                                       // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress4;                                       // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress5;                                       // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress6;                                       // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress7;                                       // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress8;                                       // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Single;                                                  // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Dualshot;                                                // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Burst;                                                   // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Auto;                                                    // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         AmmoName;                                                // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         MagSize;                                                 // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         Weight;                                                  // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         ItemDescription;                                         // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        ItemStatValueBox;                                        // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ArmorValuesBox;                                          // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ArtContainersBox;                                        // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      CapacityBox;                                             // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         ArtCount;                                                // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         CapacityValue;                                           // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        FireTypesBox;                                            // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        AmmoBox;                                                 // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        MagBox;                                                  // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      WeightBox;                                               // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            DurabilityOverlay;                                       // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProgressBar*                                        Durability;                                              // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetAnimation*                                    RadiationMark;                                           // 0x0398(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ImageAttach;                                             // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ItemInfoWidgetClass;                                     // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityZero;                                     // 0x03B0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityLow;                                      // 0x03C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityMid;                                      // 0x03D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityFull;                                     // 0x03E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DamageIcon;                                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PenetrationIcon;                                         // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FireRateIcon;                                            // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DistanceIcon;                                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AccuracyIcon;                                            // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          RadiationArmorIcon;                                      // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PhysicalArmorIcon;                                       // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PsyArmorIcon;                                            // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ChemicalArmorIcon;                                       // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ElectoArmorIcon;                                         // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FireArmorIcon;                                           // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplayer;                                       // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorPiercingMultiplayer;                                // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FireIntervalMultiplayer;                                 // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectiveFireDistanceMaxMultiplayer;                     // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyMultiplayer;                                     // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T18P[0x5C];                                  // 0x045C(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UItemStatValue*>                              ItemStatValueArray;                                      // 0x04B8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemManager
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UItemManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_V2CH[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSelectorChangeSlotIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UItemSelectorChangeSlotIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSelectorSlotBase
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UItemSelectorSlotBase : public UWidgetBase
	{
	public:
		class UImage*                                              WeaponIcon;                                              // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AlternativeIconTexture;                                  // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMainHandEquipmentType                                     DisplaySlotType;                                         // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUHL[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSelectorEquipSlot
	 * Size -> 0x0068 (FullSize[0x0310] - InheritedSize[0x02A8])
	 */
	class UItemSelectorEquipSlot : public UItemSelectorSlotBase
	{
	public:
		class UOverlay*                                            SlotHighlight;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            SlotHighlightWhite;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              DPadActive;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   DpadHintSwitcher;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            SlotSizeBox;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InputActionName;                                         // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            Hint;                                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDpadNavigation                                            DpadNavigation;                                          // 0x02E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBTP[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IndexEquipSlot;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SlotSize;                                                // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipHintLetter;                                          // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WO7T[0xF];                                   // 0x0301(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSelectorIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UItemSelectorIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSelectorView
	 * Size -> 0x01B0 (FullSize[0x0480] - InheritedSize[0x02D0])
	 */
	class UItemSelectorView : public UViewBaseExtended
	{
	public:
		class UImage*                                              AmmoIcon;                                                // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              AmmoIconSwipe;                                           // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              FireTypeIcon;                                            // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              GrenadeIcon;                                             // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              GrenadeIconSwipe;                                        // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              NavigateArrowLeftGrenade;                                // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              NavigateArrowRightGrenade;                               // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              NavigateArrowLeftAmmo;                                   // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              NavigateArrowRightAmmo;                                  // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextAmmoType;                                            // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     MidleSwitcher;                                           // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextShutType;                                            // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintSwitcher*                                       ModeHintSwitcher;                                        // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintSwitcher*                                       AmmoHintSwitcher;                                        // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintSwitcher*                                       GrenadeHintSwitcher;                                     // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ItemSelectorChangeGrenade;                               // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ItemSelectorChangeAmmo;                                  // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ItemSelectorChangeFireMode;                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ItemSelectorRestoreState;                                // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FastChangeSlotTime;                                      // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FastChangeUpdateTime;                                    // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputDelayTime;                                          // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemSelectorChangeAmmoSpeed;                             // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemSelectorChangeFireModeSpeed;                         // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemSelectorChangeGrenadeSpeed;                          // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMainHandEquipmentType                                     DefoultSelectSlotType;                                   // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldIgnoreEmptySlot;                                  // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOUT[0x6];                                   // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EFireType, struct FFireTypeDisplayInfo>               FireTypesInfo;                                           // 0x0388(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL65[0xA8];                                  // 0x03D8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void UpdateSlotsFromGamepadAxis();
		void UIItemSelectorNVD();
		void UIItemSelectorLentern();
		void UIItemSelectorFastChangeSlotUp();
		void UIItemSelectorFastChangeSlotRight();
		void UIItemSelectorFastChangeSlotLeft();
		void UIItemSelectorFastChangeSlotDown();
		void UIItemSelectorFastCancelChang();
		void UIItemSelectorDetector();
		void UIItemSelectorChangeSlotPrevious();
		void UIItemSelectorChangeSlotNext();
		void UIItemSelectorBinocular();
		TArray<class UItemSelectorWeaponSlot*> GetSlotsBP();
		TArray<class UItemSelectorEquipSlot*> GetEquipSlotsBP();
		void ChangeFireType();
		void ChangeAmmoType();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSelectorWeaponSlot
	 * Size -> 0x0108 (FullSize[0x03B0] - InheritedSize[0x02A8])
	 */
	class UItemSelectorWeaponSlot : public UItemSelectorSlotBase
	{
	public:
		unsigned char                                              UnknownData_41E8[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              BackgroundImage;                                         // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         GrenadeText;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         AmmoText;                                                // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         AmmoTextMax;                                             // 0x02D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            IconContainer;                                           // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     AmmoContainer;                                           // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IndexSlot;                                               // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSN2[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BackgroundTexture;                                       // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                AlternativeDisplayText;                                  // 0x02F8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      SlotAngle;                                               // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXLT[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ContainerSizeMax;                                        // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ContainerSizeMin;                                        // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BeckgroundTranslation;                                   // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HoverTextColor;                                          // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        UnHoverTextColor;                                        // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSlotBlocked;                                            // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYGS[0x3];                                   // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        UnBlockColor;                                            // 0x036C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BlockColor;                                              // 0x037C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELayerSlotType                                             LayerSlotType;                                           // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHDU[0x23];                                  // 0x038D(0x0023) MISSED OFFSET (PADDING)

	public:
		bool IsWeaponSlot();
		bool IsGrenadeSlot();
		bool IsAlternativeSlot();
		TArray<class UUserWidget*> GetHoveredWidgets();
		void ConstructUpdateSlotScale();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemSlotState
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class UItemSlotState : public UUserWidget
	{
	public:
		class UImage*                                              Hover;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Background;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           SizeReductionToFitEquipment;                             // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SizeReductionToFitGrid;                                  // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HightLightColor;                                         // 0x02C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HoveredColor;                                            // 0x02D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77RH[0x18];                                  // 0x02E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemsStatsUpgrades
	 * Size -> 0x0188 (FullSize[0x0418] - InheritedSize[0x0290])
	 */
	class UItemsStatsUpgrades : public UWidgetBase
	{
	public:
		class UTextWidget*                                         DurabilityPercentText;                                   // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress1;                                       // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress2;                                       // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress3;                                       // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress4;                                       // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress5;                                       // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress6;                                       // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress7;                                       // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemStatProgress*                                   ItemStatProgress8;                                       // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            DurabilityOverlay;                                       // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProgressBar*                                        Durability;                                              // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetAnimation*                                    RadiationMark;                                           // 0x02E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        ItemStatValueBox;                                        // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ItemInfoWidgetClass;                                     // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityZero;                                     // 0x0300(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityLow;                                      // 0x0310(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityMid;                                      // 0x0320(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorDurabilityFull;                                     // 0x0330(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DamageIcon;                                              // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PenetrationIcon;                                         // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FireRateIcon;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DistanceIcon;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AccuracyIcon;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          RadiationArmorIcon;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PhysicalArmorIcon;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PsyArmorIcon;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ChemicalArmorIcon;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ElectoArmorIcon;                                         // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FireArmorIcon;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplayer;                                       // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorPiercingMultiplayer;                                // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FireIntervalMultiplayer;                                 // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectiveFireDistanceMaxMultiplayer;                     // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyMultiplayer;                                     // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGTM[0x5C];                                  // 0x03AC(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UItemStatValue*>                              ItemStatValueArray;                                      // 0x0408(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemStatProgress
	 * Size -> 0x0060 (FullSize[0x02F0] - InheritedSize[0x0290])
	 */
	class UItemStatProgress : public UUserWidget
	{
	public:
		class UImage*                                              IconImage;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         Name;                                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProgressBar*                                        ProgressBackground;                                      // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProgressBar*                                        ProgressForeground;                                      // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        DefaultColor;                                            // 0x02B0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BetterColor;                                             // 0x02C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        WorseColor;                                              // 0x02D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BuffColor;                                               // 0x02E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemStatValue
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UItemStatValue : public UWidgetBase
	{
	public:
		class UTextWidget*                                         Name;                                                    // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         Value;                                                   // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              IconImage;                                               // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemUsageComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UItemUsageComponent : public UActorComponent
	{
	public:
		TArray<struct FInteractObject>                             ObjectsNeededToInteract;                                 // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool HasRequiredItems();
		void ConsumeRequiredItems();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.JournalIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UJournalIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.JournalMouseIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UJournalMouseIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PageViewBase
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class UPageViewBase : public UChildViewBase
	{
	public:
		bool                                                       bShouldBindWidgetInputs;                                 // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudIgnoreInputOnPouse;                                // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W43Q[0xE];                                   // 0x029A(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAPage
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UPDAPage : public UPageViewBase
	{
	public:
		EPDAPageType                                               PDAPage;                                                 // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7F8M[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.JournalPage
	 * Size -> 0x0108 (FullSize[0x03B8] - InheritedSize[0x02B0])
	 */
	class UJournalPage : public UPDAPage
	{
	public:
		class UPDAQuestButton*                                     CurrentQuestButton;                                      // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAQuestButton*                                     DoneQuestButton;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAQuestPanel*                                      PDAQuestPanel;                                           // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAQuestDetails*                                    QuestDetails;                                            // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   QuestTypeSwitcherRight;                                  // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   QuestTypeSwitcherLeft;                                   // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDARadiationLine*                                   RadiationLine;                                           // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         SelectQuestHint;                                         // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         HintSelectPanelLeft;                                     // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         HintSelectPanelRight;                                    // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         ButtonHintExit;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintNavLeft;                                             // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintNavRight;                                            // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MainQuestLocalizationSID;                                // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SecondaryQuestLocalizationSID;                           // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FinishQuestLocalizationSID;                              // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FeilQuestLocalizationSID;                                // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CanceledQuestLocalizationSID;                            // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SelectInput;                                             // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MainQuestTint;                                           // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultQuestTint;                                        // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H58U[0x28];                                  // 0x0390(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdateStageOnDetailed();
		void UpdateHoverDetailsElement(bool bHovered, EDetailsElementType ElementType);
		void UpdateButton(int32_t IndexUpdateButton);
		void UIPDATransitionToMarkerPosition();
		void UIPDANavigationUp();
		void UIPDANavigationStageUp();
		void UIPDANavigationStageDown();
		void UIPDANavigationSelectPanelRight();
		void UIPDANavigationSelectPanelLeft();
		void UIPDANavigationSelect();
		void UIPDANavigationRight();
		void UIPDANavigationReleased();
		void UIPDANavigationMouseUp();
		void UIPDANavigationMouseDown();
		void UIPDANavigationLeft();
		void UIPDANavigationDown();
		void StageSlotHover();
		void ShowDetails(bool bEmpty);
		void ClickButtonQuest(const class FName& ButtonId);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LadderAscendIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULadderAscendIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LadderDescendIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULadderDescendIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LadderFastDescendIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULadderFastDescendIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LadderJumpIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULadderJumpIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LadderSprintIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULadderSprintIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LavaLampAnomaly
	 * Size -> 0x0300 (FullSize[0x0640] - InheritedSize[0x0340])
	 */
	class ALavaLampAnomaly : public AAnomaly
	{
	public:
		class UAkAudioEvent*                                       CollisionPlayEvent;                                      // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       CollisionStopEvent;                                      // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ClotEvent;                                               // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ParticleLifetimeAfterCollision;                          // 0x0358(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClotEventDelay;                                          // 0x035C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    OverlapSphereComponent;                                  // 0x0360(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   ActivationParticle;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  ClotDecalMaterial;                                       // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PGXJ[0xD0];                                  // 0x0378(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        CollisionSoundComponent;                                 // 0x0448(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_340V[0x58];                                  // 0x0450(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleCallbackHandler*                            JetCollisionHandler;                                     // 0x04A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleCallbackHandler*                            ClotsSpawnedHandler;                                     // 0x04B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GLS3[0x188];                                 // 0x04B8(0x0188) MISSED OFFSET (PADDING)

	public:
		void OnLavaStaticObjectCollision(const struct FVector& Location, const struct FVector& NormalDirection, float Radius);
		void OnLavaCollision(const struct FBasicParticleData& BasicParticleData);
		void OnFollowPositionChanged(const struct FVector& FollowPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LazyNavRebuildVolume
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class ALazyNavRebuildVolume : public AVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Lever
	 * Size -> 0x00D0 (FullSize[0x0298] - InheritedSize[0x01C8])
	 */
	class ULever : public ULockableComponent
	{
	public:
		float                                                      CurrentValue;                                            // 0x01C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldConsumeItemOnOpen;                                // 0x01CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseInBothSides;                                         // 0x01CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4ZS2[0x2];                                   // 0x01CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                LeverHandleMesh;                                         // 0x01D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         LeverCurve;                                              // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         LeverCurveReverse;                                       // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4546[0xB0];                                  // 0x01E8(0x00B0) MISSED OFFSET (PADDING)

	public:
		void ChangeLeverPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LightBulbComponent
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class ULightBulbComponent : public UGuidActorComponent
	{
	public:
		unsigned char                                              UnknownData_1ZAL[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bFlicker;                                                // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoLightOnNight;                                       // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MYIJ[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetFlicker(bool bInFlicker);
		void SetAutoLightOnNight(bool bInAutoLightOnNight);
		bool IsFlicker();
		bool IsAutoLightOnNight();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LightningBallAnomaly
	 * Size -> 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
	 */
	class ALightningBallAnomaly : public AAnomaly
	{
	public:
		class USphereComponent*                                    OverlapDamageComponent;                                  // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HGFB[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LocalizationDatabase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocalizationDatabase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LocalizationWidget
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class ULocalizationWidget : public UWidgetBase
	{
	public:
		bool                                                       bEnableLocalization;                                     // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TO7O[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocalizationSID;                                         // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAJ9[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LocomotionTestAnimInstance
	 * Size -> 0x0018 (FullSize[0x0380] - InheritedSize[0x0368])
	 */
	class ULocomotionTestAnimInstance : public UAnimInstance
	{
	public:
		struct FTrajectorySampleRange                              Trajectory;                                              // 0x0368(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LocomotionTestComponent
	 * Size -> 0x0160 (FullSize[0x0210] - InheritedSize[0x00B0])
	 */
	class ULocomotionTestComponent : public UActorComponent
	{
	public:
		class UPoseSearchSchema*                                   PoseSearchSchema;                                        // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GGM1[0x138];                                 // 0x00B8(0x0138) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveResponse;                                            // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TurnResponse;                                            // 0x01F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatInterval                                      SteeringActivationDegrees;                               // 0x01F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringRotationRateDegrees;                             // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BQFI[0xC];                                   // 0x0204(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetTarget(const struct FVector& InTargetVelocity, const struct FQuat& InTargetOrientation);
		struct FTrajectorySampleRange GetTrajectory();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LookAtSourceComponent
	 * Size -> 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
	 */
	class ULookAtSourceComponent : public UActorComponent
	{
	public:
		class AActor*                                              Target;                                                  // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultSetting;                                      // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6CW[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLookAtAngleParams                                  LookAtAngleParams;                                       // 0x00C0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LookAtTargetComponent
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ULookAtTargetComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.LookUpIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULookUpIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipBoltIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMainHandEquipBoltIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipDetectorIPU
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UMainHandEquipDetectorIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_P80D[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipGrenadeIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMainHandEquipGrenadeIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipKnifeIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMainHandEquipKnifeIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipPistolIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMainHandEquipPistolIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipPrimaryWeaponIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMainHandEquipPrimaryWeaponIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainHandEquipSecondaryWeaponIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMainHandEquipSecondaryWeaponIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MainMenuGameMode
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class AMainMenuGameMode : public AStalker2BaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MapBorderIndicator
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class UMapBorderIndicator : public UWidgetBase
	{
	public:
		class UImage*                                              BorderLeft;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BorderRight;                                             // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BorderBottom;                                            // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BorderTop;                                               // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MapMouseIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMapMouseIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MapSettingsAsset
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UMapSettingsAsset : public UDataAsset
	{
	public:
		bool                                                       bEnableReverseHoldMoveAxis;                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoldBorderMoving;                                 // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTQA[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BorderMovingSize;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomScale;                                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JPH[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FZoomLVLSettings>                            ZoomSettings;                                            // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PlayerLandmarksLimitTotal;                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOOU[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CursorOffset;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CreateRadius;                                            // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTEP[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMarkType, struct FZoomMarkerSettings>                ZoomMarkerSettings;                                      // 0x0080(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FZoomMarkerSettings                                 DefaultMarkerZoomSettings;                               // 0x00D0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PlayerTrackedLandmarksLimit;                             // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VVJ[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MapSetupParams
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class AMapSetupParams : public AActor
	{
	public:
		bool                                                       bDisableLightingManager;                                 // 0x0280(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableReflectionManager;                               // 0x0281(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YZY[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MarkerCompassWidget
	 * Size -> 0x00F0 (FullSize[0x0380] - InheritedSize[0x0290])
	 */
	class UMarkerCompassWidget : public UWidgetBase
	{
	public:
		float                                                      FrontScaleNormal;                                        // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrontNormalOpacity;                                      // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkerPointOpacityOnCenter;                              // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleInCenter;                                           // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeathMarkerOpasity;                                      // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetYOnBorder;                                         // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CenterMarkerPosition;                                    // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowDistanceOnQuestMarker;                        // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJYD[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          DistanceText;                                            // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              IconImage;                                               // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              HeightArrow;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            MarkerBox;                                               // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            DistanceConteiner;                                       // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            IconSizeBox;                                             // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    BackStateAnim;                                           // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     UnknownSwitcher;                                         // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      DistanceBox;                                             // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_323P[0x78];                                  // 0x0308(0x0078) MISSED OFFSET (PADDING)

	public:
		bool IsShowDistance();
		bool IsQuestMarker();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GroomEditor
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGroomEditor : public UObject
	{
	public:
		struct FSoftObjectPath                                     GroomPath;                                               // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     GroomBindingPath;                                        // 0x0040(0x0018) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Weight;                                                  // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VariationIndex;                                          // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.GroomCategoryEditor
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGroomCategoryEditor : public UObject
	{
	public:
		class FName                                                CategoryName;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UGroomEditor*>                                Variations;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MaterialGroupEditor
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMaterialGroupEditor : public UObject
	{
	public:
		struct FSoftObjectPath                                     MaterialPath;                                            // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VariationIndex;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Weight;                                                  // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCustomDataVariationsEditor*>                 CustomData;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomDataEditor
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCustomDataEditor : public UObject
	{
	public:
		float                                                      ParameterValue;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Weight;                                                  // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.CustomDataVariationsEditor
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCustomDataVariationsEditor : public UObject
	{
	public:
		int32_t                                                    ParameterID;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MaterialGroup;                                           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VariationCount;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECustomDataDistribution                                    Distribution;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F7GS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCustomDataEditor*>                           Variations;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MeshGeneratorBodyMeshEditor
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UMeshGeneratorBodyMeshEditor : public UObject
	{
	public:
		class FString                                              BodyMeshSID;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     MeshPath;                                                // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     AnimPath;                                                // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Weight;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSkeletal;                                             // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3JBJ[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BlockingSlots;                                           // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        BlockingAttaches;                                        // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        BlockingGroom;                                           // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              ItemPrototypeSID;                                        // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshGeneratorBodyMeshEditor*>                AdditionalMeshes;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              MeshGeneratorSID;                                        // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshGeneratorMaterialSlotEditor*>            Materials;                                               // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UGroomCategoryEditor*>                        Grooms;                                                  // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MeshGeneratorBodySlotEditor
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMeshGeneratorBodySlotEditor : public UObject
	{
	public:
		class FName                                                SlotName;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshGeneratorBodyMeshEditor*>                MeshArray;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MeshGeneratorMaterialSlotEditor
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMeshGeneratorMaterialSlotEditor : public UObject
	{
	public:
		class FName                                                MaterialGroup;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMaterialGroupEditor*>                        MaterialGroupArray;                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		int32_t                                                    MaterialSlot;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KQSB[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCustomDataVariationsEditor*>                 CustomData;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MeshGeneratorEditor
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMeshGeneratorEditor : public UObject
	{
	public:
		class FName                                                SID;                                                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ParentMeshGeneratorSID;                                  // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshGeneratorBodySlotEditor*>                GeneratorBodySlots;                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UMeshGeneratorMaterialSlotEditor*>            Materials;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UCustomDataVariationsEditor*>                 CustomData;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UGroomCategoryEditor*>                        Grooms;                                                  // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ObjPrototypeEditor
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UObjPrototypeEditor : public UObject
	{
	public:
		class FString                                              SID;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ItemGeneratorSID;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FileObjPrototypesEditor
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UFileObjPrototypesEditor : public UObject
	{
	public:
		TArray<class UObjPrototypeEditor*>                         ObjPrototypes;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MeshSoundPlacerManager
	 * Size -> 0x00C8 (FullSize[0x0138] - InheritedSize[0x0070])
	 */
	class UMeshSoundPlacerManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_VDGB[0xC8];                                  // 0x0070(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ModelCharacterMovementComponent
	 * Size -> 0x0008 (FullSize[0x0F00] - InheritedSize[0x0EF8])
	 */
	class UModelCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_OEFV[0x8];                                   // 0x0EF8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ModifiableRichText
	 * Size -> 0x0100 (FullSize[0x0390] - InheritedSize[0x0290])
	 */
	class UModifiableRichText : public UWidgetBase
	{
	public:
		class URichTextWidget*                                     RichText;                                                // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableList;                                             // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHOV[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ETextListType, struct FTextListSettings>              ListTags;                                                // 0x02A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ClosuseTagCorect;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ClouseTags;                                              // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              BodyTag;                                                 // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PointTag;                                                // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDoubleLineSettings>                         DoubleLineTags;                                          // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShoudUseDefaultStyle;                                   // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQ3C[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultStyleId;                                          // 0x0348(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bEnableDefaultText;                                      // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZWP[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultText;                                             // 0x0368(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      WrapingTextAt;                                           // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TagSize;                                                 // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudLoadLocalization;                                  // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WR2R[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (PADDING)

	public:
		class FText GetNextLine();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MouthComponent
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UMouthComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HYL8[0x88];                                  // 0x00B0(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnBreathFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MoveForwardIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMoveForwardIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MovementComponentExt
	 * Size -> 0x0170 (FullSize[0x0220] - InheritedSize[0x00B0])
	 */
	class UMovementComponentExt : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_3GV5[0x80];                                  // 0x00B0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkSwitchValue*                                      SprintSwitchParameter;                                   // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      WalkSwitchParameter;                                     // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      RunSwitchParameter;                                      // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       StepEvent;                                               // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       PlayerJumpEvent;                                         // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       PlayerLandingEvent;                                      // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       CrouchEvent;                                             // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       LowCrouchEvent;                                          // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       StandEvent;                                              // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkComponent*                                        StepAkComponent;                                         // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkComponent*                                        StanceAkComponent;                                       // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      ImpactParticle;                                          // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      ImpactParticleRunSprint;                                 // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z3GS[0x88];                                  // 0x0198(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MovementPathBuilderTestingActor
	 * Size -> 0x00D8 (FullSize[0x0470] - InheritedSize[0x0398])
	 */
	class AMovementPathBuilderTestingActor : public ANavigationTestingActor
	{
	public:
		EPathBuilderPathType                                       PathType;                                                // 0x0398(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26K8[0x3];                                   // 0x0399(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_EG65[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVelocityDebug>                              Velocities;                                              // 0x03A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		uint64_t                                                   DesirableVelocitiesMask;                                 // 0x03B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDetailedDrawing;                                        // 0x03B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowCircles;                                            // 0x03B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowKeyPoints;                                          // 0x03BA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowPathSectors;                                        // 0x03BB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowPathFilteredSectors;                                // 0x03BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LT32[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CircleRadius;                                            // 0x03C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RotationAngle;                                           // 0x03C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bClockwise;                                              // 0x03C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSmoothPath;                                             // 0x03C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2IQ2[0x6];                                   // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ExpensiveActor;                                          // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   DrawPathIndex;                                           // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowSampled;                                            // 0x03DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RC5N[0x8B];                                  // 0x03DD(0x008B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdvancedPathfindingTime;                                 // 0x0468(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q7XL[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MoveRightIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMoveRightIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MultiClickComponent
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	class UMultiClickComponent : public UInteractionComponent
	{
	public:
		struct FMultiClickInteractionData                          InteractionData;                                         // 0x0130(0x0028) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O1SY[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MultiClickIPU
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UMultiClickIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_5AKR[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MusicManager
	 * Size -> 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
	 */
	class UMusicManager : public UBaseManager
	{
	public:
		class UAkAudioEvent*                                       GameMusicEvent;                                          // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             MusicVolumeSlider;                                       // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_78YL[0x60];                                  // 0x0070(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MusicVolume
	 * Size -> 0x0038 (FullSize[0x02F0] - InheritedSize[0x02B8])
	 */
	class AMusicVolume : public AVolume
	{
	public:
		EAmbientState                                              AmbientState;                                            // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GLDX[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RegionSIDGlobalVariable;                                 // 0x02BC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9YYM[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AmbientStateMusicSwitch[0x28];                           // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.MutantAnimCollection
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UMutantAnimCollection : public UObject
	{
	public:
		TArray<class UAnimMontage*>                                ClawAttacks;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UAnimMontage*>                                JumpAttacks;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TMap<EAttackDirection, class UAnimMontage*>                RunAttacks;                                              // 0x0048(0x0050) Edit, BlueprintVisible, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UAnimMontage*                                        Sleep;                                                   // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase*                                   ReactionOnEmission;                                      // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase*                                   Idle;                                                    // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EAnomalyAnimInteraction, class UAnimMontage*>         AnomalyInteractions;                                     // 0x00B0(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NavigationPanel
	 * Size -> 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
	 */
	class UNavigationPanel : public UWidgetBase
	{
	public:
		class UPanelWidget*                                        SlotContainer;                                           // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnableClick;                                      // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSelectDefaultSlot;                                // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7M1[0x2];                                   // 0x029A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultSlotIndex;                                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldStopOthersInputs;                                 // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBindClick;                                        // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGM5[0x2];                                   // 0x02A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MoveToNextSlotAction;                                    // 0x02A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveToPreviousSlotAction;                                // 0x02AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInputOnPause;                                     // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLoopMove;                                         // 0x02B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKEF[0x2];                                   // 0x02B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeSelectSlot;                                      // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSlotClicked;                                           // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNSJ[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void MoveSelectSlotToPreviousSlot();
		void MoveSelectSlotToNextSlot();
		void ClickMenuButton(const class FName& InButtonId);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NavigationSlotInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavigationSlotInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NiagaraBridgeComponent
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UNiagaraBridgeComponent : public UActorComponent
	{
	public:
		TArray<class UNiagaraParameterProvider*>                   NiagaraParameterProviders;                               // 0x00B0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           NiagaraComponents;                                       // 0x00C0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NiagaraParameterProvider
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UNiagaraParameterProvider : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NiagaraTimeOfDayNormalizedProvider
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UNiagaraTimeOfDayNormalizedProvider : public UNiagaraParameterProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NoteMouseIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNoteMouseIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NotesIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNotesIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NotesPage
	 * Size -> 0x00F8 (FullSize[0x03A8] - InheritedSize[0x02B0])
	 */
	class UNotesPage : public UPDAPage
	{
	public:
		class UPDANotesDetails*                                    NoteDetails;                                             // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDANotesButton*                                     ButtonAll;                                               // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDANotesButton*                                     ButtonFlash;                                             // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDANotesButton*                                     ButtonDocs;                                              // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDANotesButton*                                     ButtonNotes;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDANotesButton*                                     ButtonAudio;                                             // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDANotePanel*                                       NotePanel;                                               // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDARadiationLine*                                   RadiationLine;                                           // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   TypeSwitcherRight;                                       // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   TypeSwitcherLeft;                                        // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         PlayAudioHint;                                           // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         ButtonHintExit;                                          // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintNavLeft;                                             // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintNavRight;                                            // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefoultOpenFilter;                                       // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0CH[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ENoteType, struct FBackgroundSettings>                BackgroundSettings;                                      // 0x0328(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5OS[0x30];                                  // 0x0378(0x0030) MISSED OFFSET (PADDING)

	public:
		void UIPDANavigationUp();
		void UIPDANavigationRight();
		void UIPDANavigationPlayAudio();
		void UIPDANavigatioNoteUp();
		void UIPDANavigatioNoteDown();
		void UIPDANavigationMouseUp();
		void UIPDANavigationMouseDown();
		void UIPDANavigationLeft();
		void UIPDANavigationDown();
		void ShowDetails(bool bEmpty);
		void ShowBlockListNavigstion(bool bBlock);
		void ClickButtonMenu(const class FName& ButtonId);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NotificationWidget
	 * Size -> 0x0120 (FullSize[0x03B0] - InheritedSize[0x0290])
	 */
	class UNotificationWidget : public UWidgetBase
	{
	public:
		unsigned char                                              UnknownData_CSAE[0x68];                                  // 0x0290(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UQuestStatusNotification*                            QuestStatus;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestNotification*                                  MainQuest;                                               // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestNotification*                                  SecondaryQuest;                                          // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ENotificationQuestWidgetType, struct FColorSettings>  ColorSettings;                                           // 0x0310(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FColorSettings                                      DefaultColorSettings;                                    // 0x0360(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4P02[0x38];                                  // 0x0378(0x0038) MISSED OFFSET (PADDING)

	public:
		void TryShowNextNotify();
		void OnQuestStatusAnimFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NPCComponent
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UNPCComponent : public USingleClickComponent
	{
	public:
		unsigned char                                              UnknownData_21HQ[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.NPCScheduleManager
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class UNPCScheduleManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_OOQD[0x70];                                  // 0x0070(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ObjBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjBase : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.OnAKEventFinished_Proxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOnAKEventFinished_Proxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_AJ5X[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ParticleCallbackHandler
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UParticleCallbackHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_8H6J[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PathBuilderDrawComponent
	 * Size -> 0x0004 (FullSize[0x0550] - InheritedSize[0x054C])
	 */
	class UPathBuilderDrawComponent : public UDebugDrawComponent
	{
	public:
		unsigned char                                              UnknownData_QB8R[0x4];                                   // 0x054C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PauseGameView
	 * Size -> 0x0080 (FullSize[0x0348] - InheritedSize[0x02C8])
	 */
	class UPauseGameView : public UViewBase
	{
	public:
		class UGameMenuElement*                                    Continue;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Play;                                                    // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Save;                                                    // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Load;                                                    // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Online;                                                  // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Options;                                                 // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Back;                                                    // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    Exit;                                                    // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    DebugMaps;                                               // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMenuElement*                                    DebugBenchmark;                                          // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        ButtonContainer;                                         // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLoadBackground;                                   // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShowPlay;                                             // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ4I[0x1E];                                  // 0x032A(0x001E) MISSED OFFSET (PADDING)

	public:
		void UpdateShowDebugMenu();
		void UIMenuMoveUp();
		void UIMenuMoveToGameMap();
		void UIMenuMoveDown();
		void UIMenuConfirm();
		void UIMenuBack();
		void ShowHoverOnButton(class UGameMenuElement* InHoverButton, bool bShow);
		void SetCurrentSelectButtonIndex(int32_t NewIndex);
		void PostUpdateShowDebugMenu();
		void PostMoveToGameMap();
		void PostGamepadButtonClick(int32_t InButtonIndex);
		void PostButtonClickBack();
		void OnItemHovered();
		void OnClickSave();
		void OnClickPlay();
		void OnClickOptions();
		void OnClickOnline();
		void OnClickLoad();
		void OnClickExit();
		void OnClickDebugMaps();
		void OnClickContinue();
		void OnClickBack();
		int32_t MoveInButtonContainer(int32_t AxisMove);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PauseMenuIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UPauseMenuIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PC
	 * Size -> 0x0470 (FullSize[0x0BA0] - InheritedSize[0x0730])
	 */
	class APC : public AObj
	{
	public:
		unsigned char                                              UnknownData_3DX5[0xA0];                                  // 0x0730(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMouthComponent*                                     Mouth;                                                   // 0x07D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              ShadowMeshComponent;                                     // 0x07D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGeigerCounterComponent*                             GeigerCounterComponent;                                  // 0x07E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPsyNoiseSFXComponent*                               PsyNoiseSFXComponent;                                    // 0x07E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnomalyDetectorComponent*                           AnomalyDetectorComponent;                                // 0x07F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkComponent*                                        StanceAkComponent;                                       // 0x07F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QZJ7[0x320];                                 // 0x0800(0x0320) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkRtpc*                                             PoppyFieldSleepinessParameter;                           // 0x0B20(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             PlayerStaminaRTPC;                                       // 0x0B28(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MK3A[0x70];                                  // 0x0B30(0x0070) MISSED OFFSET (PADDING)

	public:
		void PlayerEndHandleInteractiveOverlaps(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void PlayerBeginHandleInteractiveOverlaps(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void AimTimelineTick(float Value);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PCSaveLoadManager
	 * Size -> 0x0180 (FullSize[0x01E0] - InheritedSize[0x0060])
	 */
	class UPCSaveLoadManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_NT8X[0x180];                                 // 0x0060(0x0180) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAArrowButton
	 * Size -> 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
	 */
	class UPDAArrowButton : public UButtonBase
	{
	public:
		class UImage*                                              ArrowIcon;                                               // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ClickAnimation;                                          // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClickAnimSpeed;                                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudBlockClickAnim;                                    // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudHoverOpacity;                                      // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_273S[0x2];                                   // 0x02CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoverOpacity;                                            // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnHoverOpacity;                                          // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAButtonBase
	 * Size -> 0x0058 (FullSize[0x0310] - InheritedSize[0x02B8])
	 */
	class UPDAButtonBase : public UButtonBase
	{
	public:
		class UImage*                                              Background;                                              // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BackgroundLeft;                                          // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BackgroundRight;                                         // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ButtonCollorEnable;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ButtonCollorDisable;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ButtonEnabledStyleId;                                    // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ButtonDisabledStyleId;                                   // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudHoverOpacity;                                      // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQX0[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoverOpacity;                                            // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnHoverOpacity;                                          // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35KJ[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAMenuButton
	 * Size -> 0x0060 (FullSize[0x0318] - InheritedSize[0x02B8])
	 */
	class UPDAMenuButton : public UButtonBase
	{
	public:
		unsigned char                                              UnknownData_LEAS[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              SelectLine;                                              // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         ButtonText;                                              // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLocalisation;                                     // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46LZ[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ButtonLocalizationSID;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayText;                                             // 0x02E8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bEnableSelectAnimation;                                  // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ49[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SetStyleIdHover;                                         // 0x0304(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SetStyleIdUnHover;                                       // 0x030C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXGB[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDASlotPanelBase
	 * Size -> 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
	 */
	class UPDASlotPanelBase : public UChildViewBase
	{
	public:
		class UVerticalBox*                                        SlotContainer;                                           // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAArrowButton*                                     ArrowDown;                                               // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAArrowButton*                                     ArrowTop;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateDetails;                                         // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateSelectButton;                                    // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ArrowActionIdTop;                                        // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ArrowActionIdDown;                                       // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI72[0x20];                                  // 0x02E0(0x0020) MISSED OFFSET (PADDING)

	public:
		void ClickSlot(int32_t QuestSlotIndex);
		void ClickArrowButton(const class FName& ButtonId);
		void ChangeActiveQuestSlot(bool bActiveted, int32_t InJournalQuestID, int32_t InSlotIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDANotePanel
	 * Size -> 0x0078 (FullSize[0x0378] - InheritedSize[0x0300])
	 */
	class UPDANotePanel : public UPDASlotPanelBase
	{
	public:
		class USizeBox*                                            AbsentNoteSizeBox;                                       // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ENoteType, struct FSlotFilterSettings>                SlotFilterSettings;                                      // 0x0308(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B35H[0x20];                                  // 0x0358(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDANotesButton
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UPDANotesButton : public UPDAButtonBase
	{
	public:
		class UImageWidget*                                        ButtonIcon;                                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNoteFilterSettings                                 FilterSettings;                                          // 0x0318(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShouldEnableStailManager;                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HL4[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDANotesDetails
	 * Size -> 0x0088 (FullSize[0x0330] - InheritedSize[0x02A8])
	 */
	class UPDANotesDetails : public UHoverIndicator
	{
	public:
		class UVerticalBox*                                        NotesBox;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      AudioContainer;                                          // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BackgroundImage;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 TitleText;                                               // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 HintText;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 HeaderText;                                              // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 BodyText1;                                               // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 BodyText2;                                               // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 BodyText3;                                               // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 BodyText4;                                               // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 BodyText5;                                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModifiableRichText*                                 FooterText;                                              // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          TextScroll;                                              // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCheckBoxWidget*                                     AudioPlayButton;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         AbsentNoteText;                                          // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScrollMoveSpeed;                                         // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LG3Q[0xC];                                   // 0x0324(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDASlotBase
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UPDASlotBase : public UWidgetBase
	{
	public:
		class UTextWidget*                                         NameText;                                                // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCheckBoxWidget*                                     SelectPoint;                                             // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              HoverBeckground;                                         // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              SelectBeckground;                                        // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              NewPoint;                                                // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldAutoCut;                                          // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RER[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CutQuestSizeMax;                                         // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JCH[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSelectPointTint(const struct FLinearColor& InColor);
		void ChangeActive(bool bActivate);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDANotesSlot
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UPDANotesSlot : public UPDASlotBase
	{
	public:
		class FScriptMulticastDelegate                             OnNoteSlotClick;                                         // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0ZU[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAPageIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UPDAPageIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestButton
	 * Size -> 0x0028 (FullSize[0x0338] - InheritedSize[0x0310])
	 */
	class UPDAQuestButton : public UPDAButtonBase
	{
	public:
		class UTextWidget*                                         ButtonText;                                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              NewPoint;                                                // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLocalization;                                     // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXFE[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ButtonLocalizationSID;                                   // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestDescription
	 * Size -> 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
	 */
	class UPDAQuestDescription : public UChildViewBase
	{
	public:
		class UImage*                                              HoverImage;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         DescriptionText;                                         // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          DescriptionContainer;                                    // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoverIllumination;                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQUK[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScrollSpeed;                                             // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoverDescription;                                      // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKHA[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestDetails
	 * Size -> 0x0268 (FullSize[0x0500] - InheritedSize[0x0298])
	 */
	class UPDAQuestDetails : public UChildViewBase
	{
	public:
		class UVerticalBox*                                        QuestInfoBox;                                            // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              QuestLogo;                                               // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TaskText;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         DescriptionText;                                         // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         RewardText;                                              // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAQuestDescription*                                DescriptionQuest;                                        // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         QuestNameText;                                           // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         QuestStatusText;                                         // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         QuestRegionText;                                         // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      RewardContainer;                                         // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAQuestTaskContainer*                              TaskContainer;                                           // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EJournalState, struct FQuestStatusSettings>           StatusSettings;                                          // 0x02F0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultQuestIcon;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EJournalState, struct FTaskStatusSettings>            TaskStatusSettings;                                      // 0x0348(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FQuestStageSelectSettings                           SelectedStatusSettings;                                  // 0x0398(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FQuestStageSelectSettings                           UnSelectedStatusSettings;                                // 0x03C0(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TMap<EQuestRewardType, class UTexture2D*>                  RewardSettings;                                          // 0x03E8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                StyleTextIdMain;                                         // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleTextIdSecondary;                                    // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleIdTaitlMain;                                        // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleIdTaitlSecondary;                                   // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleTextIdDefault;                                      // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TaskListSizeMax;                                         // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCXV[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TaskLocalizationSID;                                     // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescriptionLocalizationSID;                              // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RewardLocalizationSID;                                   // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoveredDetailsElement;                                 // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateQuestList;                                       // 0x04A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStageSlotHover;                                        // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCK6[0x38];                                  // 0x04C8(0x0038) MISSED OFFSET (PADDING)

	public:
		void UpdateStageSlotHover();
		void UpdateStageHover(bool bIsStageHovered);
		void UpdateDescriptionHover(bool bIsHovered);
		void StageClick(class UPDAQuestTaskSlot* InSlot);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestPanel
	 * Size -> 0x00E0 (FullSize[0x03E0] - InheritedSize[0x0300])
	 */
	class UPDAQuestPanel : public UPDASlotPanelBase
	{
	public:
		class UPDATextBorder*                                      MainQuestBorder;                                         // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDATextBorder*                                      CancelledQuestBorder;                                    // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDATextBorder*                                      SecondaryQuestBorder;                                    // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            EmptySizeBorder;                                         // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            SecondEmptySizeBorder;                                   // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SelectInput;                                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InputActionName;                                         // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MainQuestTint;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultQuestTint;                                        // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MainQuestLocalizationSID;                                // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SecondaryQuestLocalizationSID;                           // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FinishQuestLocalizationSID;                              // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FailedQuestLocalizationSID;                              // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CanceledQuestLocalizationSID;                            // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93E7[0x30];                                  // 0x03B0(0x0030) MISSED OFFSET (PADDING)

	public:
		void ChangeSelectedQuestSlot(bool bIsSelected, int32_t InJournalQuestID, int32_t InSlotIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestRewardSlot
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UPDAQuestRewardSlot : public UWidgetBase
	{
	public:
		class UImage*                                              RewardIcon;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestSlot
	 * Size -> 0x0080 (FullSize[0x0348] - InheritedSize[0x02C8])
	 */
	class UPDAQuestSlot : public UPDASlotBase
	{
	public:
		class UTextWidget*                                         RegionText;                                              // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         PlayText;                                                // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnQuestSlotClick;                                        // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChangeSlotActiv;                                       // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChangeSlotSelectQuest;                                 // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      SelectStageHoverOpacity;                                 // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZUA[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HintLocalizationSIDEnable;                               // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HintLocalizationSIDDisabled;                             // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LQI[0x18];                                  // 0x0330(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestTaskContainer
	 * Size -> 0x0068 (FullSize[0x0310] - InheritedSize[0x02A8])
	 */
	class UPDAQuestTaskContainer : public UHoverIndicator
	{
	public:
		class UScrollBox*                                          TaskScroll;                                              // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TaskListClass;                                           // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TaskListSize;                                            // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDebug;                                            // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3IH[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FontStyle;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InputAction;                                             // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTrackingStage;                                         // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateStageHover;                                      // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOB0[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		void StageClick(class UPDAQuestTaskSlot* InSlot);
		void MouseHoverStage(bool bHovered, int32_t IndexOnParent);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAQuestTaskSlot
	 * Size -> 0x00B0 (FullSize[0x0340] - InheritedSize[0x0290])
	 */
	class UPDAQuestTaskSlot : public UWidgetBase
	{
	public:
		class UImage*                                              ImageTask;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              HoverImage;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URichTextBlock*                                      RichText;                                                // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ClickAnim;                                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NotNecessaryStyleId;                                     // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NotNecessaryLocalizationSID;                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClickAnimSpeed;                                          // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGVJ[0x24];                                  // 0x02D4(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTrackingStage;                                         // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoverTaskSlot;                                         // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KLK[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTaskStatusSettings                                 SlotData;                                                // 0x0320(0x0020) NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDARadiationLine
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UPDARadiationLine : public UWidgetBase
	{
	public:
		class UWidgetAnimation*                                    MoveAnim;                                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudBlockAnim;                                         // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WQR[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveAnimSpeed;                                           // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDARegionPanel
	 * Size -> 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
	 */
	class UPDARegionPanel : public UChildViewBase
	{
	public:
		class UProgressBar*                                        Progress;                                                // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         RegionText;                                              // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ActiveColor;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisactiveColor;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDATextBorder
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UPDATextBorder : public UWidgetBase
	{
	public:
		class UImage*                                              LeftBorder;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              RightBorder;                                             // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         BorderText;                                              // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SizeLine;                                                // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDATimePanel
	 * Size -> 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
	 */
	class UPDATimePanel : public UChildViewBase
	{
	public:
		class UTextWidget*                                         HourText;                                                // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         MinutesText;                                             // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    PointAnim;                                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointAnimSpeed;                                          // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOP1[0xC];                                   // 0x02B4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAUpgradePanel
	 * Size -> 0x0070 (FullSize[0x0370] - InheritedSize[0x0300])
	 */
	class UPDAUpgradePanel : public UPDASlotPanelBase
	{
	public:
		unsigned char                                              UnknownData_1TSS[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPDATextBorder*                                      EquipedBorder;                                           // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDATextBorder*                                      UnEquipedBorder;                                         // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EquipedBorderLocalizationSID;                            // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnEquipedBorderLocalizationSID;                          // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        UpgradeColor;                                            // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGLS[0x20];                                  // 0x0350(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAUpgradesButton
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UPDAUpgradesButton : public UPDAButtonBase
	{
	public:
		class UImageWidget*                                        ButtonIcon;                                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpgradeFilterSettings                              FilterSettings;                                          // 0x0318(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShouldEnableStailManager;                                // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJUN[0x5];                                   // 0x031B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAUpgradesSlot
	 * Size -> 0x0050 (FullSize[0x0318] - InheritedSize[0x02C8])
	 */
	class UPDAUpgradesSlot : public UPDASlotBase
	{
	public:
		class FScriptMulticastDelegate                             OnUpgradeSlotClick;                                      // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UTextWidget*                                         RegionText;                                              // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        ButtonIcon;                                              // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleIdWeapon;                                           // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleArmor;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleHelmet;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StyleDetector;                                           // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X60J[0x10];                                  // 0x0308(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PDAView
	 * Size -> 0x0070 (FullSize[0x0358] - InheritedSize[0x02E8])
	 */
	class UPDAView : public UBookViewBase
	{
	public:
		class UPlatformSwitcher*                                   PlatformSwitcherLeft;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   PlatformSwitcherRight;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDATimePanel*                                       TimeWidget;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDARegionPanel*                                     RegionWidget;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintSwitcher*                                       HintNavLeft;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintSwitcher*                                       HintNavRight;                                            // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSholdShowInput;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6H8[0x3F];                                  // 0x0319(0x003F) MISSED OFFSET (PADDING)

	public:
		void UpdateQuestList();
		void CloseUpdateView();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PhysicsInteractionComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UPhysicsInteractionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CLGO[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PhysicsSoundsComponent
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UPhysicsSoundsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RQG5[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PhysicsInteractionPrototypeSID;                          // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MHVS[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       PhysicalObjectAudioEventPlay;                            // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       PhysicalObjectAudioEventStop;                            // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      PhysicalObjectTypeParameterSwitch;                       // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      DraggingParameterSwitch;                                 // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      RollingParameterSwitch;                                  // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      HitParameterSwitch;                                      // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      ObjectMaterialParameterSwitch;                           // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      SurfaceMaterialParameterSwitch;                          // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             PhysicalObjectContinuousSpeedRTPC;                       // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             PhysicalObjectInstantSpeedRTPCParameter;                 // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W4E7[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PillowAnomaly
	 * Size -> 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
	 */
	class APillowAnomaly : public AAnomaly
	{
	public:
		class UStaticMeshComponent*                                CollisionMesh;                                           // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                PillowMesh;                                              // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   IdleParticle;                                            // 0x0350(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlaceToSit
	 * Size -> 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
	 */
	class UPlaceToSit : public UUIDActorComponent
	{
	public:
		unsigned char                                              UnknownData_N77V[0x30];                                  // 0x00C8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Radius;                                                  // 0x00F8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O8BD[0x14];                                  // 0x00FC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetToLookCoord;                                       // 0x0110(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAvailableToPlayer;                                      // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KX1D[0x17];                                  // 0x0129(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlatformManager
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPlatformManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_BTJV[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		void UpdateInputManager(bool IsGamepadInput);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlatformSwitcher
	 * Size -> 0x0060 (FullSize[0x01B8] - InheritedSize[0x0158])
	 */
	class UPlatformSwitcher : public UWidgetSwitcher
	{
	public:
		bool                                                       bEnablePlatformAutoSwitch;                               // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8DO[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EGSCPlatformType, int32_t>                            PlatformSettings;                                        // 0x0160(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bChildrenView;                                           // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSOZ[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateWidget();
		void InitWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerAnimCollection
	 * Size -> 0x0528 (FullSize[0x0550] - InheritedSize[0x0028])
	 */
	class UPlayerAnimCollection : public UObject
	{
	public:
		struct FPlayerExternalAnimations                           ExternalAnimations;                                      // 0x0028(0x04E8) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPlayerInternalAnimations                           InternalAnimations;                                      // 0x0510(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UPlayerAnimCollection*                               ParentAnimCollection;                                    // 0x0548(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerDefaultAnimCollection
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPlayerDefaultAnimCollection : public UObject
	{
	public:
		class UPlayerAnimCollection*                               PlayerAnimCollection;                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PlayerAnimBlueprint;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FEquipUnequipAnimations                             EquipUnequip;                                            // 0x0038(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        PickUpItem;                                              // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerDetectorAnimCollection
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UPlayerDetectorAnimCollection : public UObject
	{
	public:
		struct FCharacterDetectorAnimations                        Equip;                                                   // 0x0028(0x0060) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FCharacterDetectorAnimations                        Unequip;                                                 // 0x0088(0x0060) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UClass*                                              PlayerAnimBlueprint;                                     // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerEnhancedInputComponent
	 * Size -> 0x0008 (FullSize[0x0170] - InheritedSize[0x0168])
	 */
	class UPlayerEnhancedInputComponent : public UEnhancedInputComponent
	{
	public:
		unsigned char                                              UnknownData_6EOL[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerGameHUDView
	 * Size -> 0x0078 (FullSize[0x0340] - InheritedSize[0x02C8])
	 */
	class UPlayerGameHUDView : public UViewBase
	{
	public:
		class UQuickPanel*                                         QuickPanel;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USystemNotificationWidget*                           SystemNotification;                                      // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            Container;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCompassWidget*                                      CompassWidget;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAmmoWidget*                                         AmmoPanel;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCrosshairWidgetSwitcher*                            Crosshair;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStatPanel*                                          StatPanel;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         Background;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDeathScreen*                                        DeathScreen;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNotificationWidget*                                 NotificationWidget;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    ItemSelectorHudModeAnimation;                            // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ItemSelectorHUDMod;                                      // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ItemSelectorHUDModSpeed;                                 // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9TOS[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerModeManager
	 * Size -> 0x00F0 (FullSize[0x0160] - InheritedSize[0x0070])
	 */
	class UPlayerModeManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_ELZR[0xF0];                                  // 0x0070(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerFirearmAnimCollection
	 * Size -> 0x0408 (FullSize[0x0430] - InheritedSize[0x0028])
	 */
	class UPlayerFirearmAnimCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_5YST[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerFirearmInternalAnimations                    InternalAnimations;                                      // 0x0030(0x01D8) Edit, Protected, NativeAccessSpecifierProtected
		TMap<class FName, struct FVector>                          SocketLocations;                                         // 0x0208(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UCurveVector*                                        IdleSwayCurve;                                           // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPlayerWeaponAnimations                             WeaponAnimations;                                        // 0x0260(0x0168) Edit, Protected, NativeAccessSpecifierProtected
		struct FPlayerAutoCoverAnimations                          AutoCoverAnimations;                                     // 0x03C8(0x0068) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerThrowableItemAnimCollection
	 * Size -> 0x01D0 (FullSize[0x01F8] - InheritedSize[0x0028])
	 */
	class UPlayerThrowableItemAnimCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_U17C[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerThrowableItemInternalAnimations              InternalAnimations;                                      // 0x0030(0x0060) Edit, Protected, NativeAccessSpecifierProtected
		struct FPlayerWeaponAnimations                             WeaponAnimations;                                        // 0x0090(0x0168) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerKnifeAnimCollection
	 * Size -> 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
	 */
	class UPlayerKnifeAnimCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_FK5X[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerKnifeInternalAnimations                      InternalAnimations;                                      // 0x0030(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPlayerWeaponAnimations                             WeaponAnimations;                                        // 0x0050(0x0168) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayerPDAAnimCollection
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class UPlayerPDAAnimCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_D38S[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerWeaponAnimations                             WeaponAnimations;                                        // 0x0030(0x0168) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ItemAnimCollection
	 * Size -> 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
	 */
	class UItemAnimCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_JT5Q[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterWeaponAnimations                          UseItemAnimation;                                        // 0x0030(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPlayerWeaponAnimations                             WeaponAnimations;                                        // 0x0040(0x0168) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WeaponAttachAnimCollection
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UWeaponAttachAnimCollection : public UObject
	{
	public:
		struct FComplexAttachAnimations                            AttachAnimations;                                        // 0x0028(0x00B8) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlaySoundQuestNodeListener
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPlaySoundQuestNodeListener : public UObject
	{
	public:
		unsigned char                                              UnknownData_805S[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PlayVideoWidget
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UPlayVideoWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_8SNV[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (PADDING)

	public:
		void PlayVideo(class UMediaSource* VideoToPlay);
		void EndVideo();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PoppyField
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class APoppyField : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.FlowerParticleComponent
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class UFlowerParticleComponent : public USceneComponent
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UShapeComponent*                                     Collision;                                               // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraComponent*                                   Particle;                                                // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Speed;                                                   // 0x02C8(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Distance;                                                // 0x02CC(0x0004) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PoppyFieldAnomalyBehaviorComponent
	 * Size -> 0x0280 (FullSize[0x0530] - InheritedSize[0x02B0])
	 */
	class UPoppyFieldAnomalyBehaviorComponent : public USceneComponent
	{
	public:
		struct FPrototypeSID                                       InsideSleepinessEffectSID;                               // 0x02B0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FPrototypeSID                                       OutsideSleepinessEffectSID;                              // 0x02E0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FPrototypeSID                                       CriticalSleepinessEffectSID;                             // 0x0310(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TArray<struct FTransform>                                  TeleportPoints;                                          // 0x0340(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              SleepThresholds;                                         // 0x0350(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      SleepTeleportMinDistance;                                // 0x0360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SleepDuration;                                           // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              FlowerSoundEvent[0x28];                                  // 0x0368(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AmbientSoundEvent[0x28];                                 // 0x0390(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SleepinessSoundEventPlay[0x28];                          // 0x03B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SleepinessSoundEventStop[0x28];                          // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EyelidsMovementSoundEvent[0x28];                         // 0x0408(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BlinkSoundEvent[0x28];                                   // 0x0430(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BlinkParameter[0x28];                                    // 0x0458(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class APostProcessVolume*                                  PostProcessVolume;                                       // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PostProcessMID;                                          // 0x0488(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeFModValuePoppySleepinessVignette;                    // 0x0490(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7AWO[0x44];                                  // 0x0494(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UShapeComponent*>                             Collisions;                                              // 0x04D8(0x0010) ExportObject, ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UFlowerParticleComponent*>                    FlowerParticleComponents;                                // 0x04E8(0x0010) ExportObject, ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N1DF[0x38];                                  // 0x04F8(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlapFlowers(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlapFlowers(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ProgressBarWidget
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UProgressBarWidget : public UWidgetBase
	{
	public:
		class UProgressBar*                                        ProgressBarObj;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStyleManager;                                     // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZD4[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressValue;                                           // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ProgressStyleId;                                         // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetProgresValue(float InProgress);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Projectile
	 * Size -> 0x01B0 (FullSize[0x0430] - InheritedSize[0x0280])
	 */
	class AProjectile : public AActor
	{
	public:
		class USphereComponent*                                    CollisionComp;                                           // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3LMN[0x88];                                  // 0x0288(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       FlybySound;                                              // 0x0310(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       ImpactSound;                                             // 0x0318(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkSwitchValue*                                      AmmoCaliberSwitch;                                       // 0x0320(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RDKP[0x28];                                  // 0x0328(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      HitActors;                                               // 0x0350(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SURR[0xD0];                                  // 0x0360(0x00D0) MISSED OFFSET (PADDING)

	public:
		void OnOverlap(const struct FHitResult& Hit);
		void OnHit(const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PSYAnomaly
	 * Size -> 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
	 */
	class APSYAnomaly : public AAnomaly
	{
	public:
		class USphereComponent*                                    CollisionComponent;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   PSYParticle;                                             // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K9D0[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PSYControllerAnomaly
	 * Size -> 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
	 */
	class APSYControllerAnomaly : public APSYAnomaly
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PSYEmitterAnomaly
	 * Size -> 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
	 */
	class APSYEmitterAnomaly : public APSYAnomaly
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PSYEmitterDamagableComponent
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class UPSYEmitterDamagableComponent : public UDamageInteractableComponent
	{
	public:
		float                                                      SearchRadius;                                            // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZIGW[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PsyNoiseSFXComponent
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UPsyNoiseSFXComponent : public UPlayerEffectsSFXComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PsyPhantom
	 * Size -> 0x0048 (FullSize[0x0950] - InheritedSize[0x0908])
	 */
	class APsyPhantom : public AAgent
	{
	public:
		class UFXSystemAsset*                                      ParticleOnSpawn;                                         // 0x0908(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      ParticleOnDeath;                                         // 0x0910(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      ParticleOnHit;                                           // 0x0918(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFXSystemAsset*                                      TrailsParticle;                                          // 0x0920(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0928(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       SpawnSound;                                              // 0x0930(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       DeathSound;                                              // 0x0938(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USourceEffectFilterPreset*                           FilterPreset;                                            // 0x0940(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QQLZ[0x8];                                   // 0x0948(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PsyPhantomManager
	 * Size -> 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
	 */
	class UPsyPhantomManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_PBY5[0x200];                                 // 0x0070(0x0200) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PsyVolumeComponent
	 * Size -> 0x0128 (FullSize[0x0770] - InheritedSize[0x0648])
	 */
	class UPsyVolumeComponent : public UBaseVolumeComponent
	{
	public:
		TArray<class FString>                                      PsyEffectPrototypeSIDs;                                  // 0x0648(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      EndOverlapPsyEffectPrototypeSIDs;                        // 0x0658(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      PsyTimerMin;                                             // 0x0668(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PsyTimerMax;                                             // 0x066C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<int32_t>                                            PsyEffectPrototypeIDs;                                   // 0x0670(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            EndOverlapPsyEffectPrototypeIDs;                         // 0x0680(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V7YU[0xE0];                                  // 0x0690(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuestNotification
	 * Size -> 0x0098 (FullSize[0x0328] - InheritedSize[0x0290])
	 */
	class UQuestNotification : public UWidgetBase
	{
	public:
		class UWidgetAnimation*                                    ShowLeft;                                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    HideLeft;                                                // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ShowAlpha;                                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    HideLeftWithDelay;                                       // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         QuestTitle;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestTaskNotification*                              QuestTaskNotification1;                                  // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestTaskNotification*                              QuestTaskNotification2;                                  // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestTaskNotification*                              QuestTaskNotification3;                                  // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestTaskNotification*                              QuestTaskNotification4;                                  // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuestTaskNotification*                              QuestTaskNotification5;                                  // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShouldMainQuest;                                       // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NK0[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTitleLen;                                             // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AddText;                                                 // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCB5[0x30];                                  // 0x02F8(0x0030) MISSED OFFSET (PADDING)

	public:
		void FinishAnimation(bool bHide);
		void CheckTasksAnimFinishedAndHide();
		void CancelHideAnim();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuestStatusNotification
	 * Size -> 0x0040 (FullSize[0x02D0] - InheritedSize[0x0290])
	 */
	class UQuestStatusNotification : public UWidgetBase
	{
	public:
		class UImage*                                              TopLine;                                                 // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              BotLine;                                                 // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         QuestNameText;                                           // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         QuestStatusText;                                         // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AppearAnim;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WV6O[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuestTaskNotification
	 * Size -> 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
	 */
	class UQuestTaskNotification : public UWidgetBase
	{
	public:
		class UTextWidget*                                         TextWidget;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AppearAnim;                                              // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    FailAnim;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    FinishedAnim;                                            // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    CancelAnim;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86CE[0x28];                                  // 0x02B8(0x0028) MISSED OFFSET (PADDING)

	public:
		void PostPlayTaskAnimation(EQuestTaskAnimationType AnimationType);
		void OnAnimStarted__DelegateSignature();
		void OnAnimFinished__DelegateSignature();
		void FinishAnimmation(bool bHide);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickLoadIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UQuickLoadIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickPanel
	 * Size -> 0x0088 (FullSize[0x0320] - InheritedSize[0x0298])
	 */
	class UQuickPanel : public UChildViewBase
	{
	public:
		unsigned char                                              UnknownData_AAOO[0x30];                                  // 0x0298(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableSlotsController;                                  // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimate;                                                // 0x02C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09U3[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    AnimPanelHide;                                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    AnimPanelShow;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuickSlot*                                          QuickSlotA;                                              // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UQuickSlot*                                          QuickSlotB;                                              // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UQuickSlot*                                          QuickSlotC;                                              // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UQuickSlot*                                          QuickSlotD;                                              // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UQuickSlot*>                                  QuickSlots;                                              // 0x0300(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_60YH[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnQuickSlotMouseLeave(class UQuickSlot* HoveredWidget);
		void OnQuickSlotMouseEnter(class UQuickSlot* ItemWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSaveIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UQuickSaveIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSaveManager
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UQuickSaveManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_KKFK[0x38];                                  // 0x0060(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSlot
	 * Size -> 0x0118 (FullSize[0x03A8] - InheritedSize[0x0290])
	 */
	class UQuickSlot : public UWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0YAR[0x78];                                  // 0x0290(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              Icon;                                                    // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Shadow;                                                  // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              UseFrame;                                                // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              HighlightImage;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDPADSelection*                                      HintKey;                                                 // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         ItemCountText;                                           // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   DpadHintSwitcher;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    ClickAnimation;                                          // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W82N[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ShadowTexture;                                           // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ShadowActivateTexture;                                   // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          UseFrameTexture;                                         // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableHint;                                             // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableCountText;                                        // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableShadow;                                           // 0x037A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableTransparency;                                     // 0x037B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnablecClickAnimation;                                  // 0x037C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LND6[0x3];                                   // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                IconOnTextureParam;                                      // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LowTransparency;                                         // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighTransparency;                                        // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClickAnimationSpeed;                                     // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GRB2[0x14];                                  // 0x0394(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSlotBaseIPU
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UQuickSlotBaseIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_RBA7[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSlot1IPU
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UQuickSlot1IPU : public UQuickSlotBaseIPU
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSlot2IPU
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UQuickSlot2IPU : public UQuickSlotBaseIPU
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSlot3IPU
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UQuickSlot3IPU : public UQuickSlotBaseIPU
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.QuickSlot4IPU
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UQuickSlot4IPU : public UQuickSlotBaseIPU
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RadiationField
	 * Size -> 0x0128 (FullSize[0x03A8] - InheritedSize[0x0280])
	 */
	class ARadiationField : public AActor
	{
	public:
		ERadiationInnerOffsetPreset                                InnerRadioactivityOffsetPreset;                          // 0x0280(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PNI8[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InnerRadioactivityOffset;                                // 0x0288(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ERadiationPreset                                           Radioactivity;                                           // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MN7Q[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadioactivityValue;                                      // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RadiationPerSecondValue;                                 // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GeigerRadiationIntensity;                                // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PostProcessRadiationIntensity;                           // 0x02B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANGO[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         GeigerCurve;                                             // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseCustomCurve;                                         // 0x02C0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M9VQ[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DefaultRadiationCurve;                                   // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         CustomRadiationCurve;                                    // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECollisionFormType                                         MeshType;                                                // 0x02D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LMLE[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URadiationFieldComponent*                            FieldMesh;                                               // 0x02E0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTracePostProcessAndGeiger;                              // 0x02E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MG80[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              DebugMeshColor;                                          // 0x02EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugMeshThickness;                                      // 0x02F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FColor                                              DebugInnerMeshColor;                                     // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FColor                                              DebugOuterMeshColor;                                     // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugInnerOuterMeshThickness;                            // 0x02FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FColor                                              DebugLineToMeshColor;                                    // 0x0300(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugLineToMeshThickness;                                // 0x0304(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugLineToMeshLifeTime;                                 // 0x0308(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S2W6[0x9C];                                  // 0x030C(0x009C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RadiationFieldComponent
	 * Size -> 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
	 */
	class URadiationFieldComponent : public UBaseVolumeComponent
	{
	public:
		unsigned char                                              UnknownData_KSY9[0x8];                                   // 0x0648(0x0008) Fix Super Size

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RazorAnomaly
	 * Size -> 0x0068 (FullSize[0x03A8] - InheritedSize[0x0340])
	 */
	class ARazorAnomaly : public AAnomaly
	{
	public:
		class UStaticMeshComponent*                                RootComponentPtr;                                        // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              RazorIntensityRTPCPtr[0x28];                             // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UStaticMeshComponent*                                CollisionMeshPtr;                                        // 0x0370(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      DamageVFX;                                               // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      ProjectileDestructionVFX;                                // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkRtpc*                                             RazorIntensityRTPC;                                      // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZQZQ[0x18];                                  // 0x0390(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ReferenceHolderBase
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class AReferenceHolderBase : public AActor
	{
	public:
		unsigned char                                              ObjectsReferences[0x50];                                 // 0x0280(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FSoftObjectPath                                     AssetPath;                                               // 0x02D0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateObjectReferences();
		void CheckAssetReferences();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RightClickMenuItemWidget
	 * Size -> 0x0098 (FullSize[0x0328] - InheritedSize[0x0290])
	 */
	class URightClickMenuItemWidget : public UUserWidget
	{
	public:
		class UButton*                                             ButtonClick;                                             // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         Label;                                                   // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        TextColorHovered;                                        // 0x02A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MenuItemWidgetClass;                                     // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B1EA[0x20];                                  // 0x02B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              LineImage;                                               // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGT5[0x48];                                  // 0x02E0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnButtonUnHovered();
		void OnButtonHovered();
		void OnButtonClick();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.RightClickMenuWidget
	 * Size -> 0x0098 (FullSize[0x0328] - InheritedSize[0x0290])
	 */
	class URightClickMenuWidget : public UUserWidget
	{
	public:
		class UVerticalBox*                                        Menu;                                                    // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             MenuBorder;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MenuItemWidgetClass;                                     // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ImageCenter;                                             // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            SizeBoxBackground;                                       // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            SizeBoxUpHighlight;                                      // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            SizeBoxBotomHighlight;                                   // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ImageCenterMin;                                          // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetAnimation*                                    RadiationMark;                                           // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y8ZD[0x50];                                  // 0x02D8(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnNoItemClick();
		void OnItemHover(const struct FRightClickMenuItemData& Data, bool bInHover);
		void OnItemClicked(const struct FRightClickMenuItemData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SaveableComponent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USaveableComponent : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ScenarioManager
	 * Size -> 0x03B8 (FullSize[0x0428] - InheritedSize[0x0070])
	 */
	class UScenarioManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_LDKA[0x3B8];                                 // 0x0070(0x03B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SelectedAnswerMark
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class USelectedAnswerMark : public UWidgetBase
	{
	public:
		class UHintBase*                                           Hint;                                                    // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              LockIcon;                                                // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            TimerContainer;                                          // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW0Y[0x48];                                  // 0x02B0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SelectionVolumeBase
	 * Size -> 0x0050 (FullSize[0x02D0] - InheritedSize[0x0280])
	 */
	class ASelectionVolumeBase : public AActor
	{
	public:
		class UShapeComponent*                                     CollisionComponent;                                      // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 StaticMeshesToFilter;                                    // 0x0288(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bExcludeStaticMeshes;                                    // 0x0298(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilterActorsWithoutCollision;                           // 0x0299(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EO5B[0x6];                                   // 0x029A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TagsToFilter;                                            // 0x02A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bExcludeTags;                                            // 0x02B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9V2[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterial*>                                   MaterialsToFilter;                                       // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bExcludeMaterials;                                       // 0x02C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UI2B[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SelectionVolumeBox
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class ASelectionVolumeBox : public ASelectionVolumeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SelectionVolumeSphere
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class ASelectionVolumeSphere : public ASelectionVolumeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SpeechComponent
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USpeechComponent : public UObject
	{
	public:
		unsigned char                                              UnknownData_BI5Q[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SequenceSpeechComponent
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class USequenceSpeechComponent : public USpeechComponent
	{
	public:
		unsigned char                                              UnknownData_36WL[0x50];                                  // 0x0070(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnSequenceStarted();
		void OnSequenceFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SequenceStartQuestNodeListener
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USequenceStartQuestNodeListener : public UObject
	{
	public:
		unsigned char                                              UnknownData_KXYP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SettingsManager
	 * Size -> 0x0098 (FullSize[0x00F8] - InheritedSize[0x0060])
	 */
	class USettingsManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_A9D7[0x70];                                  // 0x0060(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkRtpc*                                             MasterVolumeRTPCParameter;                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             MusicVolumeRTPCParameter;                                // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             SFXVolumeRTPCParameter;                                  // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkRtpc*                                             VoiceoverVolumeRTPCParameter;                            // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YNEH[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ShootingWeaponComponent
	 * Size -> 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
	 */
	class UShootingWeaponComponent : public USceneComponent
	{
	public:
		struct FPrototypeSID                                       WeaponPrototypeSID;                                      // 0x02B0(0x0030) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3591[0x50];                                  // 0x02E0(0x0050) MISSED OFFSET (PADDING)

	public:
		void Shoot();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ShotgunRecoilTextureDataAsset
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UShotgunRecoilTextureDataAsset : public UGunRecoilTextureDataAsset
	{
	public:
		TArray<struct FBuckRecoilKeys>                             RecoilPatternBuckKeys;                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SignalProcessingSubsystem
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class USignalProcessingSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_MPKJ[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SignalReceiverComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class USignalReceiverComponent : public UActorComponent
	{
	public:
		class FMulticastSparseDelegate                             OnSignalReceived;                                        // 0x00B0(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanBeUsedInQuests;                                      // 0x00B1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G1VD[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x00B4(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZMEX[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SignalSenderComponent
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class USignalSenderComponent : public UActorComponent
	{
	public:
		TArray<struct FSignalToSend>                               Signals;                                                 // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		struct FGuid                                               Guid;                                                    // 0x00C0(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Send(class UObject* DataObject);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SingleClickIPU
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class USingleClickIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_DJ8C[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SkipCutsceneIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class USkipCutsceneIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SkipDialogIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class USkipDialogIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SleepView
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class USleepView : public UViewBaseExtended
	{
	public:
		class UWidgetAnimation*                                    FadeAnim;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SmoothPathFollowingComponent
	 * Size -> 0x04A0 (FullSize[0x0550] - InheritedSize[0x00B0])
	 */
	class USmoothPathFollowingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QLHY[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathCompletingFinishPointAcceptanceRadius;               // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PathCompletingMinimalFinishPointAcceptanceRadius;        // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VKUT[0x4];                                   // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRightFootForward;                                       // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLeftFootForward;                                        // 0x00C5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CG6I[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CriticalDistanceToDynamicObstacle;                       // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BufferZoneVerticalRadius;                                // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BufferZoneHorizontalRadius;                              // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringDistance;                                        // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxWaitingPathPointTimeDelay;                            // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VICD[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DecelerationVelocityCurve;                               // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SpeedBlendingThreshold;                                  // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AcDecPerSecond;                                          // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxBlockingPathPredictionWatchdogDistance;               // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowGivePathToPlayer;                                  // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1E8X[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxEvadeFromPlayerTunnelDistance;                        // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurveSubSegmentMaxLength;                                // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PredictionSegmentsCountInAcceleration;                   // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ProceduralTurnToAnimTurnDistanceRatioThreshold;          // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RootMotionNormalSpeedsDelta;                             // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ProceduralTurnInPlaceTime;                               // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAvoidanceForce;                                       // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RelativeAvoidanceSpeedDivisionCoef;                      // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AObj*                                                Owner;                                                   // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPawnMovementComponent*                              OwnerEngineMovementComponent;                            // 0x0120(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AAIController*                                       OwnerAIController;                                       // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovementComponentExt*                               OwnerMovementComponentExt;                               // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DesiredSpeed;                                            // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTSR[0x53];                                  // 0x013C(0x0053) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUpdateDebugCircularMovement;                            // 0x018F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugMovementSpeed;                                      // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugCircularTurnDegreePerTick;                          // 0x0194(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTurnRight;                                              // 0x0198(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0HUF[0xE7];                                  // 0x0199(0x00E7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovementBehaviourParameters                        WalkParameters;                                          // 0x0280(0x0078) Edit, NativeAccessSpecifierPrivate
		struct FMovementBehaviourParameters                        RunParameters;                                           // 0x02F8(0x0078) Edit, NativeAccessSpecifierPrivate
		struct FMovementBehaviourParameters                        SprintParameters;                                        // 0x0370(0x0078) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JH4H[0x78];                                  // 0x03E8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableRelativeVelocity;                                 // 0x0460(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableRelativeVelocityDebugLines;                       // 0x0461(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableDebugAvoidanceTrajectory;                         // 0x0462(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableDebugProceduralTurn;                              // 0x0463(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableDebugPath;                                        // 0x0464(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableDebugPathBlockingWatchdogProcessor;               // 0x0465(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9GYS[0x9A];                                  // 0x0466(0x009A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaGameTime;                                           // 0x0500(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PrevGameTime;                                            // 0x0504(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VelocityScalar;                                          // 0x0508(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PrevVelocityScalar;                                      // 0x050C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SmoothTurnAngleMultiplier;                               // 0x0510(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseSmoothTurnAngleConstraintMultiplier;                 // 0x0514(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y3YJ[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothTurnAngleConstraintMultiplierPreset;               // 0x0518(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SmoothTurnAngleConstraintMultiplierRuntime;              // 0x051C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIgnoreAvoidanceWithPlayer;                              // 0x0520(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CZQT[0x3];                                   // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathPointsCornerOffset;                                  // 0x0524(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPathFollowingMode                                         PathFollowingMode;                                       // 0x0528(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X24D[0x27];                                  // 0x0529(0x0027) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SoapBubbleAnomaly
	 * Size -> 0x0080 (FullSize[0x03C0] - InheritedSize[0x0340])
	 */
	class ASoapBubbleAnomaly : public AAnomaly
	{
	public:
		unsigned char                                              UnknownData_CZ66[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       SoapBubbleDamage;                                        // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       SoapBubbleDestroy;                                       // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       SoapBubbleParticleIdle;                                  // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       SoapBubbleParticleDamage;                                // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       SoapBubbleParticleDestroy;                               // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      SoapBubbleExplosion;                                     // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFXSystemAsset*                                      SoapBubbleParticleExplosion;                             // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  SoapBubbleParticleMaterial;                              // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMesh*                                         SoapBubbleParticleMesh;                                  // 0x0388(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    SoapBubbleBoundSphere;                                   // 0x0390(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    SoapBubbleCollisionSphere;                               // 0x0398(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGeometryCacheComponent*                             SoapBubbleGeometryCache;                                 // 0x03A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         InterpolationCurve;                                      // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_289T[0x10];                                  // 0x03B0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnActorCollided(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SoundConfig
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class USoundConfig : public UObject
	{
	public:
		struct FVector                                             WorldTopLeftCoords;                                      // 0x0028(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldWidth;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldHeight;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkOffsetMultiplier;                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunOffsetMultiplier;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintOffsetMultiplier;                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D99N[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EBuildingType, class USoundAttenuation*>              OcclusionAttenuationSettings;                            // 0x0058(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.PooledActor
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class APooledActor : public AActor
	{
	public:
		class UActorPool*                                          Pool;                                                    // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ActorPool
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class UActorPool : public USceneComponent
	{
	public:
		TArray<class APooledActor*>                                Pool;                                                    // 0x02B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SoundManager
	 * Size -> 0x01D8 (FullSize[0x0248] - InheritedSize[0x0070])
	 */
	class USoundManager : public UBaseTickableManager
	{
	public:
		class USoundAttenuation*                                   DefaultAttenuation;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TLK3[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundConfig*                                        SoundConfig;                                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTraceSoundSpawnerConfig*                            TraceSoundSpawnerConfig;                                 // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBiomeScatterToolConfig*                             BiomeScatterToolConfig;                                  // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USoundCue*>                                   CustomSounds;                                            // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class APooledActor*>                                SpawnedSoundActors;                                      // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UActorPool*                                          ActorPool;                                               // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioScattererDataAsset*                            AudioScatterer;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UPBZ[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALandscape*                                          Landscape;                                               // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WHHG[0x150];                                 // 0x00F8(0x0150) MISSED OFFSET (PADDING)

	public:
		void MusicStopVolumeChange();
		void AmbientStopVolumeChange();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SoundNodeCuePlayer
	 * Size -> 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
	 */
	class USoundNodeCuePlayer : public USoundNodeAssetReferencer
	{
	public:
		unsigned char                                              SoundCueAssetPtr[0x28];                                  // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverrideVolumeProperties : 1;                           // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TFHU[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           SoundCue;                                                // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ADKF[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SoundTriggerVolume
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class ASoundTriggerVolume : public AActor
	{
	public:
		unsigned char                                              UnknownData_OE9M[0x18];                                  // 0x0280(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                FieldMesh;                                               // 0x0298(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P0B2[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SprintIPU
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class USprintIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_LVDZ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StackSplitContextual
	 * Size -> 0x0160 (FullSize[0x03F0] - InheritedSize[0x0290])
	 */
	class UStackSplitContextual : public UUserWidget
	{
	public:
		class UTextWidget*                                         SplitAmountPlusText;                                     // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         SplitAmountMinusText;                                    // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonConfirm;                                           // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonDropAll;                                           // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonSplitCancel;                                       // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonMinus;                                             // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonPlus;                                              // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        SignCaptionPressedColor;                                 // 0x02C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        SignCaptionDefaultColor;                                 // 0x02D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetAnimation*                                    RadiationMark;                                           // 0x02E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomGridSlot*                                     ItemSlot;                                                // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         SplitConfirmText;                                        // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatformSwitcher*                                   ButtonSwitcher;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatformSwitcher*                                   BackgroundSwitcher;                                      // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USlider*                                             Slider_ItemSplit;                                        // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         SplitTextTest;                                           // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         ItemName;                                                // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            SizeBoxSlider;                                           // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            OverlayNumbers;                                          // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            OverlaySize;                                             // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              SliderImage;                                             // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatformSwitcher*                                   HintsContainerMinus;                                     // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatformSwitcher*                                   HintsContainerPlus;                                      // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L6IJ[0x20];                                  // 0x0358(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOverlay*                                            MainOverlay;                                             // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0E2[0x70];                                  // 0x0380(0x0070) MISSED OFFSET (PADDING)

	public:
		void PressChangeAmmount();
		void OnSplitValueChanged(float Value);
		void OnSplitConfirmed__DelegateSignature(int32_t Count);
		void OnSplitCanceled__DelegateSignature();
		void OnSplitButtonClicked();
		void OnPlusButtonReleased();
		void OnPlusButtonPressed();
		void OnPlusButtonClicked();
		void OnMinusButtonReleased();
		void OnMinusButtonPressed();
		void OnMinusButtonClicked();
		void OnDropAllButtonClicked();
		void OnCancelButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StackSplittingWidget
	 * Size -> 0x00E8 (FullSize[0x0378] - InheritedSize[0x0290])
	 */
	class UStackSplittingWidget : public UWidgetBase
	{
	public:
		class UTextBlock*                                          TextBlock_AmountToDrop;                                  // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USlider*                                             Slider_ItemSplit;                                        // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextBlock_FullAmount;                                    // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             Button_Cancel;                                           // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             Button_Split;                                            // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextBlock_Split;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ItemImage;                                               // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          HeaderText;                                              // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ItemName;                                                // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XTGY[0xA0];                                  // 0x02D8(0x00A0) MISSED OFFSET (PADDING)

	public:
		void OnSplitValueChanged(float Value);
		void OnSplitButtonClicked();
		void OnCancelButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Stalker2GameMode
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class AStalker2GameMode : public AStalker2BaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Stalker2HUD
	 * Size -> 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
	 */
	class AStalker2HUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_BUJJ[0x8];                                   // 0x0370(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Stalker2MoviePipelineGameMode
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class AStalker2MoviePipelineGameMode : public AStalker2GameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Stalker2PlayerController
	 * Size -> 0x0000 (FullSize[0x07F0] - InheritedSize[0x07F0])
	 */
	class AStalker2PlayerController : public APlayerController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.Stalker2Spectator
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class AStalker2Spectator : public ASpectatorPawn
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StatisticIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UStatisticIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StatPanel
	 * Size -> 0x0128 (FullSize[0x03C0] - InheritedSize[0x0298])
	 */
	class UStatPanel : public UChildViewBase
	{
	public:
		class UStatSlot*                                           StatWeight;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStatSlot*                                           StatSleep;                                               // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStatSlot*                                           StatHunger;                                              // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStatSlot*                                           StatBarBleeding;                                         // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStatSlot*                                           StatBarRadiation;                                        // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        HPProgress;                                              // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        HPProgressDark;                                          // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        HPProgressBackground;                                    // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        Stamina;                                                 // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        Radiation;                                               // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            RadiationContainer;                                      // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    BlinkingStaminaAnim;                                     // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    BlinkingHPAnim;                                          // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ColorWeight;                                             // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ColorOverWeight;                                         // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        HeavyIconColor;                                          // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        MediumIconColor;                                         // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        LightIconColor;                                          // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BackgroundHPSpeedDepletion;                              // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlinkingStaminaSpeed;                                    // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HpAnimationSpeed;                                        // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SegmentSize;                                             // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShowBleedingProcent;                                     // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BleedAnimationSpeed;                                     // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_362B[0x58];                                  // 0x0368(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateAllStats();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StatPanelDebug
	 * Size -> 0x0048 (FullSize[0x02E0] - InheritedSize[0x0298])
	 */
	class UStatPanelDebug : public UChildViewBase
	{
	public:
		class UProgressBar*                                        ProgressHP;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBar*                                        ProgressRadiation;                                       // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBar*                                        ProgressStamina;                                         // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProgressBar*                                        ProgressPsy;                                             // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          HPText;                                                  // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          RadiationText;                                           // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          StaminaText;                                             // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          PsyText;                                                 // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JEX[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateAllStats();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StatSlot
	 * Size -> 0x0048 (FullSize[0x02D8] - InheritedSize[0x0290])
	 */
	class UStatSlot : public UWidgetBase
	{
	public:
		class UImage*                                              Icon;                                                    // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Shadow;                                                  // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowProgress;                                     // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI7V[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconTexture;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlinkingAnimSpeed;                                       // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlinkingMortalAnimSpeed;                                 // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XU4[0x4];                                   // 0x02C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TextureID;                                               // 0x02CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IFXU[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StealthKillComponent
	 * Size -> 0x0088 (FullSize[0x01F0] - InheritedSize[0x0168])
	 */
	class UStealthKillComponent : public UHoldComponent
	{
	public:
		unsigned char                                              UnknownData_7CD4[0x88];                                  // 0x0168(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.StrandGenerator
	 * Size -> 0x00C8 (FullSize[0x0348] - InheritedSize[0x0280])
	 */
	class AStrandGenerator : public AActor
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSplinePointMeshData                                MeshData;                                                // 0x0288(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<int32_t, struct FSplinePointMeshData>                 MeshOverrides;                                           // 0x02F0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseStartSeparator;                                      // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStopSeparator;                                       // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAutoAdjusting;                                       // 0x0342(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyRightAngle;                                         // 0x0343(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06HQ[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FStrandFinalData GetFinalStrandData();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SubtitleView
	 * Size -> 0x00A8 (FullSize[0x0370] - InheritedSize[0x02C8])
	 */
	class USubtitleView : public UViewBase
	{
	public:
		class UOverlay*                                            SubtitlesOverlay;                                        // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDebugTextWidgetBase*                                DebugLenSpeaker;                                         // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDebugTextWidgetBase*                                DebugLenSubtitle;                                        // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDebugTextWidgetBase*                                DebugRowSpeaker;                                         // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDebugTextWidgetBase*                                DebugRowSubtitle;                                        // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         SpeakerDialogText;                                       // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextDialog;                                              // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              SubtitleShadow;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            SubtitleSizeBox;                                         // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            SpeakerSizeBox;                                          // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharToShow;                                              // 0x0318(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedCharToShow;                                         // 0x031C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OGK[0x50];                                  // 0x0320(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SwitchGrenadeIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class USwitchGrenadeIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SystemNotificationItem
	 * Size -> 0x0120 (FullSize[0x03B0] - InheritedSize[0x0290])
	 */
	class USystemNotificationItem : public UWidgetBase
	{
	public:
		unsigned char                                              UnknownData_2LXW[0x18];                                  // 0x0290(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URichTextWidget*                                     Title;                                                   // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              Voice;                                                   // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Description;                                             // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHintAction*                                         InteractHintRich;                                        // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              Icon;                                                    // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              Background;                                              // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DotPattern;                                              // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USizeBox*                                            SizeBox;                                                 // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        General;                                                 // 0x02E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        Green;                                                   // 0x02F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        Red;                                                     // 0x0308(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RegularHeight;                                           // 0x0318(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    HeightWithHint;                                          // 0x031C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNotificationModel                                  NotificationModel;                                       // 0x0320(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		class FText                                                Play;                                                    // 0x0368(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                Stop;                                                    // 0x0380(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3KD9[0x18];                                  // 0x0398(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetModel();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.SystemNotificationWidget
	 * Size -> 0x0130 (FullSize[0x03C0] - InheritedSize[0x0290])
	 */
	class USystemNotificationWidget : public UWidgetBase
	{
	public:
		class UVerticalBox*                                        VerticalBox;                                             // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SystemNotificationItemClass;                             // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          Cache;                                                   // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          Note;                                                    // 0x02A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperSprite*                                        AudioNote;                                               // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SystemNotificationsMax;                                  // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2BT7[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ItemLifespanByIndex;                                     // 0x02C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FString                                              Received;                                                // 0x02D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Lost;                                                    // 0x02E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Coordinates;                                             // 0x02F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              NewNote;                                                 // 0x0300(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              NewStash;                                                // 0x0310(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              AudioLength;                                             // 0x0320(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                TitleFormatForItems;                                     // 0x0330(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                TitleFormat;                                             // 0x0348(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B1HL[0x20];                                  // 0x0360(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      QueueDelay;                                              // 0x0380(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TimerRate;                                               // 0x0384(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2GLO[0x38];                                  // 0x0388(0x0038) MISSED OFFSET (PADDING)

	public:
		void NotificationClickHandler();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TacticalFlashlightComponent
	 * Size -> 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
	 */
	class UTacticalFlashlightComponent : public UFlashlightComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TacticalPathfindingTest
	 * Size -> 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
	 */
	class ATacticalPathfindingTest : public AActor
	{
	public:
		double                                                     CoversExploreDistance;                                   // 0x0280(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExposedLengthBias;                                       // 0x0288(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExposedLengthPower;                                      // 0x0290(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ConcealedLengthBias;                                     // 0x0298(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ConcealedLengthPower;                                    // 0x02A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTacticalNavigation;                                  // 0x02A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ1K[0x17];                                  // 0x02A9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseSimplifiedCovers;                                    // 0x02C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I55A[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TeleportPoint
	 * Size -> 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
	 */
	class ATeleportPoint : public AActor
	{
	public:
		class FString                                              Name;                                                    // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArrowComponent*                                     ArrowComponent;                                          // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TextureTools
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UTextureTools : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TextWidget
	 * Size -> 0x03A8 (FullSize[0x0670] - InheritedSize[0x02C8])
	 */
	class UTextWidget : public ULocalizationWidget
	{
	public:
		float                                                      DefaultWrapText;                                         // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DT5R[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultText;                                             // 0x02D0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseWrapingFromStyle;                                    // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStyleManager;                                     // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK04[0x6];                                   // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextSettings                                       TextSettings;                                            // 0x02F0(0x0360) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UGSCTextBlock*                                       TextObj;                                                 // 0x0650(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlotScaleSettings                                  TextScaleSettings;                                       // 0x0658(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EX2W[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TickerActor
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTickerActor : public UBaseTickableManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TilingGridBack
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class UTilingGridBack : public UUserWidget
	{
	public:
		class USizeBox*                                            FullSizeBox;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           VisibleSize;                                             // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BorderSize;                                              // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL35[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TimeManager
	 * Size -> 0x00A0 (FullSize[0x0100] - InheritedSize[0x0060])
	 */
	class UTimeManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_J9FU[0x9];                                   // 0x0060(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsPaused;                                               // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KZTN[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           CurrentDate;                                             // 0x0070(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     GameTimeSecondsDouble;                                   // 0x0078(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     GameTimeSeconds;                                         // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RealTime;                                                // 0x0088(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LastTickDeltaTimeNormalized;                             // 0x008C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CustomDeltaTime;                                         // 0x0090(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SpeedFactor;                                             // 0x0094(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FrameRate;                                               // 0x0098(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Q0W[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    TickCounter;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    FixedFPS;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    GameHours;                                               // 0x00AC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    GameMinutes;                                             // 0x00B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GameSecondsClamped;                                      // 0x00B4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDay;                                                    // 0x00B8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TM0A[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartDate;                                               // 0x00C0(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int64_t                                                    UnixTime;                                                // 0x00C8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int64_t                                                    LastUnixTimeUpdateTick;                                  // 0x00D0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U0ZH[0x28];                                  // 0x00D8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TimeoutSpeechComponent
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UTimeoutSpeechComponent : public USpeechComponent
	{
	public:
		unsigned char                                              UnknownData_RHA7[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ToggleButton
	 * Size -> 0x00C8 (FullSize[0x0290] - InheritedSize[0x01C8])
	 */
	class UToggleButton : public ULockableComponent
	{
	public:
		float                                                      CurrentValue;                                            // 0x01C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldConsumeItemOnOpen;                                // 0x01CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseInBothSides;                                         // 0x01CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SJ2I[0x2];                                   // 0x01CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                ToggleButtonHandleMesh;                                  // 0x01D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         ToggleButtonCurve;                                       // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         ToggleButtonCurveReverse;                                // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHKG[0xA8];                                  // 0x01E8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void ChangeToggleButtonPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ToggleHeldItemIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UToggleHeldItemIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ToxicCloudAnomaly
	 * Size -> 0x0080 (FullSize[0x03C0] - InheritedSize[0x0340])
	 */
	class AToxicCloudAnomaly : public AAnomaly
	{
	public:
		unsigned char                                              UnknownData_B0GC[0x38];                                  // 0x0340(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                CollisionMesh;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   CloudParticle;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraSystem*                                      ImpactParticle;                                          // 0x0388(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHittableComponent*                                  HittableComponent;                                       // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ToxicCloudSoundEvent;                                    // 0x0398(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       AppearSoundEvent;                                        // 0x03A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       DisappearSoundEvent;                                     // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P5QZ[0x10];                                  // 0x03B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TraceSoundSpawnerConfig
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTraceSoundSpawnerConfig : public UObject
	{
	public:
		int32_t                                                    MaxSounds;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnRadius;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimalDistanceBetweenSounds;                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9ZI[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTraceSoundData>                             TraceSoundSpawner;                                       // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TriggerManager
	 * Size -> 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
	 */
	class UTriggerManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_VYZ3[0xA0];                                  // 0x0070(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TriplanarDecalComponent
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UTriplanarDecalComponent : public UDecalComponent
	{
	public:
		class UTexture2D*                                          HeightMap;                                               // 0x0310(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XX7Z[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.TurnIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UTurnIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIBaseManager
	 * Size -> 0x00E8 (FullSize[0x0148] - InheritedSize[0x0060])
	 */
	class UUIBaseManager : public UBaseManager
	{
	public:
		unsigned char                                              UnknownData_91SO[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UChangeWidgetSwitcher*>                       ChangeSwitchers;                                         // 0x0078(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class USoundCue*>                                   UISounds;                                                // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UViewBase*>                                   AllWidgets;                                              // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UViewBase*>                                   OpenViews;                                               // 0x00A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CTCN[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterElement*                                       WaterElementWidget;                                      // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J2N5[0x78];                                  // 0x00D0(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDComponentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIDComponentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIDSceneComponent
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class UUIDSceneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_JIES[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIMainMenuManager
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UUIMainMenuManager : public UUIBaseManager
	{
	public:
		unsigned char                                              UnknownData_MNV5[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIManagerEx
	 * Size -> 0x0150 (FullSize[0x0298] - InheritedSize[0x0148])
	 */
	class UUIManagerEx : public UUIBaseManager
	{
	public:
		unsigned char                                              UnknownData_H5PN[0x58];                                  // 0x0148(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRedrawTeleport;                                         // 0x01A0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6P4Z[0xF7];                                  // 0x01A1(0x00F7) MISSED OFFSET (PADDING)

	public:
		void OnOpenLootMenu(const struct FItemContainerUID& InStorageItemContainerUID);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UIStyleManager
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UUIStyleManager : public UObject
	{
	public:
		class FString                                              PathToPlatformIconDT;                                    // 0x0028(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathToIconDT;                                            // 0x0038(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathToCommonFontDT;                                      // 0x0048(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathToCommonStailDT;                                     // 0x0058(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathToProgresBarStailDT;                                 // 0x0068(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShoudLoadTabe;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadDataTableInConfig;                                  // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQI4[0xCE];                                  // 0x007A(0x00CE) MISSED OFFSET (PADDING)

	public:
		EGSCPlatformType GetCurrentPlatform();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpdateUIHintIPU
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UUpdateUIHintIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_7UM5[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpgradeItemTooltipWidget
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class UUpgradeItemTooltipWidget : public UUserWidget
	{
	public:
		class UTextBlock*                                          TitleText;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          HintText;                                                // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PriceText;                                               // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          BlockingText;                                            // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpgradeItemWidget
	 * Size -> 0x0080 (FullSize[0x0310] - InheritedSize[0x0290])
	 */
	class UUpgradeItemWidget : public UWidgetBase
	{
	public:
		class UCustomButton*                                       UpgradeButton;                                           // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              UpgradeImage;                                            // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              UpgradeIconImage;                                        // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              BarImage;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              DiscountImage;                                           // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            InfoPanel;                                               // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              LastUpdate;                                              // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9QPH[0x48];                                  // 0x02C8(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnUpgradeButtonClick();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpgradeMenuWidget
	 * Size -> 0x0160 (FullSize[0x03F0] - InheritedSize[0x0290])
	 */
	class UUpgradeMenuWidget : public UWidgetBase
	{
	public:
		class UButton*                                             RepairButton;                                            // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ChangeModuleButton;                                      // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         ItemNameText;                                            // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextWidget*                                         PlayerMoneyText;                                         // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Repair_Text;                                             // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          RepairPriceText;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             RevertUpgradeButton;                                     // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          RevertUpgradeButtonText;                                 // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              UpgradedItemIcon;                                        // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGridPanel*                                          LayoutGrid;                                              // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UItemsStatsUpgrades*                                 ItemTooltip;                                             // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpgradeItemTooltipWidget*                           UpgradeTooltipWidget;                                    // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImageWidget*                                        IconDurability;                                          // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WN24[0xD8];                                  // 0x0300(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              UpgradeWidgetClass;                                      // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              UpgradeTooltipWidgetClass;                               // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpgradeItemWidget*                                  CurrentSlot;                                             // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnUpgradeMouseExit();
		void OnUpgradeMouseEnter(int32_t UpgradeID);
		void OnRevertLastUpgrade();
		void OnRepair();
		void OnApplyUpgrade(int32_t UpgradeID, class UUpgradeItemWidget* InCurrentSlot);
		void ChangeUpgradeModule();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpgradePage
	 * Size -> 0x0090 (FullSize[0x0340] - InheritedSize[0x02B0])
	 */
	class UUpgradePage : public UPDAPage
	{
	public:
		class UPDAUpgradePanel*                                    UpgradePanel;                                            // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAUpgradesButton*                                  ButtonAll;                                               // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAUpgradesButton*                                  ButtonWeapon;                                            // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAUpgradesButton*                                  ButtonArmor;                                             // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAUpgradesButton*                                  ButtonHelmet;                                            // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPDAUpgradesButton*                                  ButtonDetector;                                          // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   TypeSwitcherRight;                                       // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlatformSwitcher*                                   TypeSwitcherLeft;                                        // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUpgradeMenuWidget*                                  UpgradeMenu;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintNavLeft;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintKey*                                            HintNavRight;                                            // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SelectInput;                                             // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBYV[0x30];                                  // 0x0310(0x0030) MISSED OFFSET (PADDING)

	public:
		void UpdatePanel();
		void UIPDANavigationUp();
		void UIPDANavigationRight();
		void UIPDANavigationLeft();
		void UIPDANavigationDown();
		void ClickButtonMenu(const class FName& ButtonId);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpgradesIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UUpgradesIPU : public UPDAPageIPU
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UpgradesMouseIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UUpgradesMouseIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UserWaterElement
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UUserWaterElement : public UWidgetBase
	{
	public:
		class UOverlay*                                            WaterMarks;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.UserWaterElementText
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UUserWaterElementText : public UWidgetBase
	{
	public:
		class UTextBlock*                                          WaterMarkText;                                           // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    WaterElementMovement;                                    // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationSpeed;                                          // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QH2E[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.VerticalLadder
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class AVerticalLadder : public AActor
	{
	public:
		unsigned char                                              UnknownData_TPTJ[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       ClimbZone;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxComponent*                                       TopClimbZone;                                            // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxComponent*                                       BottomClimbZone;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UArrowComponent*                                     ClimbStart;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoldComponent*                                      HoldComponent;                                           // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LadderAccessAngle;                                       // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LadderHeight;                                            // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoInteractTop;                                        // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoInteractBottom;                                     // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClimbingCollisionEnabled;                               // 0x02BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMeshVisible;                                            // 0x02BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELadderType                                                LadderType;                                              // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HLJO[0x2B];                                  // 0x02BD(0x002B) MISSED OFFSET (PADDING)

	public:
		void ProtectMeshLock(ECollisionEnabled CollisionType);
		void OnTopClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnTopClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnBottomClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBottomClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.VoicegenSpeechComponent
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	class UVoicegenSpeechComponent : public USpeechComponent
	{
	public:
		unsigned char                                              UnknownData_HDG6[0x50];                                  // 0x0070(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     AudioComponent;                                          // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnVoicegenFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.VoiceoverSpeechComponent
	 * Size -> 0x0060 (FullSize[0x00D0] - InheritedSize[0x0070])
	 */
	class UVoiceoverSpeechComponent : public USpeechComponent
	{
	public:
		unsigned char                                              UnknownData_743X[0x60];                                  // 0x0070(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnAKEventFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.VolumeBuilderConfig
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UVolumeBuilderConfig : public UObject
	{
	public:
		unsigned char                                              UnknownData_JC8N[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinVolumeSize;                                           // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MaxDistanceToWall;                                       // 0x005C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DistanceExtendToWallMultiplier;                          // 0x005E(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MinWallLimit;                                            // 0x0060(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MinVolumableSpace;                                       // 0x0062(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   PortalDelta;                                             // 0x0064(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    VolumeOverlapOffset;                                     // 0x0066(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBuildSplitVolumes;                                      // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCutoutExtraVolumes;                                     // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCO3[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConvolutionSettings>                        ConvolutionSettings;                                     // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WalkIPU
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UWalkIPU : public UInputProcessingUnit
	{
	public:
		unsigned char                                              UnknownData_ZUZ7[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WanderingLightInstanceSpline
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class UWanderingLightInstanceSpline : public USplineComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WanderingLightInstance
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class AWanderingLightInstance : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WanderingLightsArchiAnomaly
	 * Size -> 0x0B40 (FullSize[0x0DC0] - InheritedSize[0x0280])
	 */
	class AWanderingLightsArchiAnomaly : public AActor
	{
	public:
		unsigned char                                              UnknownData_0JGN[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerMaxVisibilityDistance;                             // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayerViewFOVOverride;                                  // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_10KE[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerViewFOVDeg;                                        // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnomalyStartTime;                                        // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnomalyEndTime;                                          // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstanceVisibilityRadius;                                // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstanceVisibilityChangeDelay;                           // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstanceChemicalDamageRadius;                            // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstanceChemicalDamagePerSecond;                         // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScaleChemicalDamageFromPenetration;                     // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8SFF[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InstanceOpacityChangeSpeed;                              // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRandomizeInstanceSpawnTime;                             // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IMW4[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomizedSpawnTimeOffsetMax;                            // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AF0B[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  InstanceVerticalMovementCurve;                           // 0x02C0(0x0088) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bSkipMovementDuringWakeUp;                               // 0x0348(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSkipMovementDuringShutDown;                             // 0x0349(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U3VN[0x2];                                   // 0x034A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InstanceSpawnTime;                                       // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstanceBlendTime;                                       // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoUpdateInstanceData;                                  // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       StretchBoundsWithInstanceData;                           // 0x0355(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ShowVFXInEditMode;                                       // 0x0356(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2BOP[0x1];                                   // 0x0357(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AnomalyBounds;                                           // 0x0358(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             BoundsMargin;                                            // 0x0370(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              IdleEffect[0x28];                                        // 0x0388(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SpawnEffect[0x28];                                       // 0x03B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DespawnEffect[0x28];                                     // 0x03D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InteractEffect[0x28];                                    // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseIdleForInOut;                                        // 0x0428(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UYGS[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMaterialScalarDrivingProperties>            MaterialCollectionsToDrive;                              // 0x0430(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      PostProcessBlendRadius;                                  // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostProcessPriority;                                     // 0x0444(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZXU6[0x8];                                   // 0x0448(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0450(0x06C0) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FWanderingLighInstanceDamageSFX>             ImpactSFX;                                               // 0x0B10(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FWanderingLightInstanceData>                 AnomalyInstances;                                        // 0x0B20(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		class UBoxComponent*                                       BoxComponent;                                            // 0x0B30(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_63NP[0x288];                                 // 0x0B38(0x0288) MISSED OFFSET (PADDING)

	public:
		void CreateVFX();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WaterElement
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UWaterElement : public UWidgetBase
	{
	public:
		class UTextBlock*                                          TextBlock;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WeaponDisplayInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponDisplayInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WeatherController
	 * Size -> 0x11178 (FullSize[0x113F8] - InheritedSize[0x0280])
	 */
	class AWeatherController : public AActor
	{
	public:
		unsigned char                                              UnknownData_WPHD[0x50];                                  // 0x0280(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     DefaultRoot;                                             // 0x02D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SkySphere;                                               // 0x02D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F75E[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDirectionalLightComponent*                          Sun;                                                     // 0x02E8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkyLightComponent*                                  SkyLight;                                                // 0x02F0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkyAtmosphereComponent*                             SkyAtmosphere;                                           // 0x02F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVolumetricCloudComponent*                           VolumetricCloud;                                         // 0x0300(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13FT[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExponentialHeightFogComponent*                      ExponentialHeightFog;                                    // 0x0310(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                FogMesh;                                                 // 0x0318(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalVolumetricValue;                                   // 0x0320(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalVolumetricValue;                                    // 0x0324(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraComponent*                                   Rain;                                                    // 0x0328(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPostProcessComponent*                               PostProcess;                                             // 0x0330(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     MoonStaticMesh_Root;                                     // 0x0338(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                MoonStaticMesh;                                          // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialParameterCollection*                        EnvironmentMPC;                                          // 0x0348(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             WetnessSoundParameter;                                   // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             WindIntensitySoundParameter;                             // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       WeatherSound;                                            // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             RainIntensitySoundParameter;                             // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             DaytimeSoundParameter;                                   // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             RazorWeatherFeedbackRTPC;                                // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWeatherState                                       States[0x9];                                             // 0x0380(0x10E90) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  VolumetricCloudMaterial;                                 // 0x11210(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  SkySphereMaterial;                                       // 0x11218(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRL4[0x4];                                   // 0x11220(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUpdateWeatherOnChange;                                  // 0x11224(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SXR[0x3];                                   // 0x11225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RemoveKeyTolerance;                                      // 0x11228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SolarTime;                                               // 0x1122C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentHours;                                            // 0x11230(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentMinutes;                                          // 0x11234(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentSeconds;                                          // 0x11238(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentMilliseconds;                                     // 0x1123C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSunPositionData                                    CurrentSunPositionData;                                  // 0x11240(0x0028) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentWeatherDuration;                                  // 0x11268(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RequestedWeatherDuration;                                // 0x1126C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeatherTransitionTimeMultiplier;                         // 0x11270(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeather                                                   SourceWeather;                                           // 0x11274(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeather                                                   TargetWeather;                                           // 0x11275(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9RE[0x2];                                   // 0x11276(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeatherHistoryData>                         WeatherHistory;                                          // 0x11278(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		float                                                      MaxMoonElevation;                                        // 0x11288(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMoonHeightTime;                                       // 0x1128C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonPhasePeriodDays;                                     // 0x11290(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationCoef;                                            // 0x11294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartMoonSetTime;                                        // 0x11298(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndMoonSetTime;                                          // 0x1129C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartMoonRiseTime;                                       // 0x112A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndMoonRiseTime;                                         // 0x112A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      bUseMoonLight;                                           // 0x112A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Latitude;                                                // 0x112AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Longitude;                                               // 0x112B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeZone;                                                // 0x112B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NorthOffset;                                             // 0x112B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Elevation;                                               // 0x112BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CorrectedElevation;                                      // 0x112C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Azimuth;                                                 // 0x112C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDaylightSavingTime;                                  // 0x112C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9BI[0x7];                                   // 0x112C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Date;                                                    // 0x112D0(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INST[0x10];                                  // 0x112D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowStepDaylight;                                      // 0x112E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowStepMoonlight;                                     // 0x112EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JV6[0x10];                                  // 0x112F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimulationSpeed;                                         // 0x11300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationDuration;                                      // 0x11304(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentSimulationDuration;                               // 0x11308(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWJP[0x4];                                   // 0x1130C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectionPrototypeSID;                                   // 0x11310(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FakeDayStartTime;                                        // 0x11320(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FakeDayEndTime;                                          // 0x11324(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindIntensity;                                           // 0x11328(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDirectionChangeDelay;                                // 0x1132C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDirectionChangeMinAngle;                             // 0x11330(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDirectionChangeMaxAngle;                             // 0x11334(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalLuminanceMultiplier;                               // 0x11338(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHY0[0x4];                                   // 0x1133C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Cloud_Tiling;                                            // 0x11340(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Cumulonimbus_Coverage;                                   // 0x11350(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Contrast;                                                // 0x11360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DensityPower;                                            // 0x11364(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaskPowerHighTest;                                       // 0x11368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapMaskRadius;                                           // 0x1136C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudLuminanceMultiplier;                                // 0x11370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiScatteringContribution;                             // 0x11374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiScatteringEccentricity;                             // 0x11378(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiScatteringOcclusion;                                // 0x1137C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseBlend;                                              // 0x11380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseG;                                                  // 0x11384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseG2;                                                 // 0x11388(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Cloud_Speed;                                             // 0x1138C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveMaxDensity;                                         // 0x1139C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveWidth;                                              // 0x113A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveHeight;                                             // 0x113A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurveDebugVersion;                                      // 0x113A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVNI[0x3];                                   // 0x113A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowAmount;                                            // 0x113AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWind                                               Wind;                                                    // 0x113B0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WE5M[0x10];                                  // 0x113E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateDay();
		void SetWeather();
		void SetMaterials();
		void SelectWeather();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WeatherSelectionVolume
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class AWeatherSelectionVolume : public AActor
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0280(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WidgetPool
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UWidgetPool : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_98CZ[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WidgetInPoolClass;                                       // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3A3A[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UUserWidget* CreateWidgetByPool();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldCompositionAnalyzer
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UWorldCompositionAnalyzer : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_Q05E[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnLevelLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMap
	 * Size -> 0x0138 (FullSize[0x03C8] - InheritedSize[0x0290])
	 */
	class UWorldMap : public UWidgetBase
	{
	public:
		class UImage*                                              Map;                                                     // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            WorldMapSizeBox;                                         // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        MarkerStoreg;                                            // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            MapContainer;                                            // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              PlayerPositionDot;                                       // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        PlayerPosition;                                          // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FZoomMarkerSettings                                 DefaultMarkerZoomSettings;                               // 0x02C0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AddWorldAngle;                                           // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B47[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LandmarkOffset;                                          // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMapMarkerMarker;                                       // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMapMarkerClick;                                        // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UWorldMapMarker*>                             TrackedLandmarks;                                        // 0x0300(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UWorldMapMarker*>                             markers;                                                 // 0x0310(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UWorldMapMarker*>                             Landmarks;                                               // 0x0320(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TMap<EMarkType, struct FZoomMarkerSettings>                ZoomMarkerSettings;                                      // 0x0330(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QYSR[0x48];                                  // 0x0380(0x0048) MISSED OFFSET (PADDING)

	public:
		void MarkerHover(bool bInHovered, class UWorldMapMarker* InHoverMarkerWidget);
		void MarkerClick(class UWorldMapMarker* HoverMarkerWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapMarker
	 * Size -> 0x00D8 (FullSize[0x0368] - InheritedSize[0x0290])
	 */
	class UWorldMapMarker : public UWidgetBase
	{
	public:
		class UImage*                                              MarkerZone;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              MarkerIcon;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            MarkerSizeBox;                                           // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            ZoneRadiuse;                                             // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              CollisionZone;                                           // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     UnknownSwitcher;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             ClickZone;                                               // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionZoneRadius;                                     // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallZoneRadius;                                         // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoverScale;                                       // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_227N[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoverScaleValue;                                         // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CommonMarkersTint;                                       // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePlayerTracking;                                   // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableColorChanging;                                    // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VP1J[0x2];                                   // 0x02EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        MarkerColorQuest;                                        // 0x02EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MarkerColorQuestSecondary;                               // 0x02FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMarkerClick;                                      // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VARJ[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHoverMarker;                                           // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClickMarker;                                           // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ3K[0x38];                                  // 0x0330(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnMouseUnhover();
		void OnMouseHover();
		void MarkerClick();
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapHubMarker
	 * Size -> 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
	 */
	class UWorldMapHubMarker : public UWorldMapMarker
	{
	public:
		class UImage*                                              MiniMarkerMain;                                          // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              MiniMarkerSide;                                          // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UWorldMapIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapManager
	 * Size -> 0x0110 (FullSize[0x0180] - InheritedSize[0x0070])
	 */
	class UWorldMapManager : public UBaseTickableManager
	{
	public:
		unsigned char                                              UnknownData_S95T[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldMapMarkerClass;                                     // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              WorldMapRegionMarkerClass;                               // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              WorldMapPlayerMarkerClass;                               // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              WorldMapHubMarkerClass;                                  // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MarkerCompassWidgetClass;                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          MarkerIconsDataTable;                                    // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P5FL[0xC0];                                  // 0x00A8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USRLEAsset*                                          RegionTexture;                                           // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HH11[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapMarkerSelector
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class UWorldMapMarkerSelector : public UWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapMarkerTracker
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class AWorldMapMarkerTracker : public AActor
	{
	public:
		class UStaticMeshComponent*                                MarkerPosition;                                          // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USphereComponent*                                    SphereKnown;                                             // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USphereComponent*                                    SphereTracker;                                           // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMarkType                                                  MarkType;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZKV[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoneMarkerRadius;                                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CustomIconPath;                                          // 0x02A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayDescriptionSID;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayTitleSID;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnMarkerType                                           SpawnMarkerType;                                         // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMarkerUnknownOnSpawn;                                   // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRadiusTracker;                                    // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVEC[0x1];                                   // 0x02DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiuseTracker;                                          // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableRadiusKnown;                                       // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKGO[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusKnown;                                             // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4O2[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		class FName GetTrackerName();
		void CollisionTriggerTracker(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool bFromSweep, const struct FHitResult& InSweepResult);
		void CollisionTriggerKnown(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool bFromSweep, const struct FHitResult& InSweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapPage
	 * Size -> 0x0078 (FullSize[0x0328] - InheritedSize[0x02B0])
	 */
	class UWorldMapPage : public UPDAPage
	{
	public:
		class UWorldMapTooltip*                                    WorldMapTooltip;                                         // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorldMapZoomContainer*                              ZoomContainer;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UZoomIndicator*                                      ZoomIndicator;                                           // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            HintZone;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         ButtonToggleTracking;                                    // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         ButtonHintExit;                                          // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DefaultPosition;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultZoomLVL;                                          // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldOpenDefaultZoomLVL;                               // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHF4[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapSettingsAsset*                                   MapSettings;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePlayerLandmarks;                                  // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerLandmarkType                                        DefaultPlayerLandmarkType;                               // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJNU[0x2];                                   // 0x0302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                HintDisable;                                             // 0x0304(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HintTrack;                                               // 0x030C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0S6[0x14];                                  // 0x0314(0x0014) MISSED OFFSET (PADDING)

	public:
		void UIPDAToggleMarkTracking();
		void UIPDAOpenQuestInJournal();
		void UIPDAOpenPlayerMarkerSelector();
		void UIPDANavigationUpReleased();
		void UIPDANavigationUp();
		void UIPDANavigationRightReleased();
		void UIPDANavigationRight();
		void UIPDANavigationMouseUp();
		void UIPDANavigationMouseDown();
		void UIPDANavigationLeftReleased();
		void UIPDANavigationLeft();
		void UIPDANavigationDownReleased();
		void UIPDANavigationDown();
		void UIPDAMoveToPlayerPosition();
		void UIPDADeletePlayerMarker();
		void UIPDACreatePlayerMarker();
		void UIPDAChangeVisibilityPlayerMarkers();
		void MarkerHover(bool bHovered, class UWorldMapMarker* HoverMarkerWidget);
		void MarkerClick(class UWorldMapMarker* HoverMarkerWidget);
		void ChangeWorldMapZoom(int32_t CurrZoomLVL, int32_t PreviousZoomLVL, bool bFast);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapPlayerMarker
	 * Size -> 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
	 */
	class UWorldMapPlayerMarker : public UWorldMapMarker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapRegionMarker
	 * Size -> 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
	 */
	class UWorldMapRegionMarker : public UWorldMapMarker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapScrollIPU
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UWorldMapScrollIPU : public UInputProcessingUnit
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapTooltip
	 * Size -> 0x0200 (FullSize[0x0490] - InheritedSize[0x0290])
	 */
	class UWorldMapTooltip : public UWidgetBase
	{
	public:
		class UTextWidget*                                         TextDescription;                                         // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     TooltipTypeSwitcher;                                     // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUniformGridPanel*                                   MiniMarkerBox;                                           // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        CenterBackgroundBox;                                     // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        FractionLogo;                                            // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextTitleType;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextLocation;                                            // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              MarkerLogo;                                              // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              TopBackground;                                           // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        TitleBackGround;                                         // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImageWidget*                                        TopBorderLine;                                           // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorldMapTooltipStage*                               QuestStage;                                              // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorldMapTooltipStage*                               StorageMassDetails;                                      // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorldMapTooltipStage*                               StorageItemCountDetails;                                 // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHintAction*                                         HintToggleTracking;                                      // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorldMapTooltipStage*                               AnomalyDetails;                                          // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EWorldMapTooltipType, struct FDisplaySettings>        DisplaySettings;                                         // 0x0310(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EMarkType, class FName>                               DisplayTooltipTaitle;                                    // 0x0360(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                TopBackgroundMaterialParamet;                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ERelationLevel, struct FLinearColor>                  RelationColor;                                           // 0x03B8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                QuestPointStyleIDMain;                                   // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                QuestPointStyleIDSecondary;                              // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                QuestPointStyleIDMainSelected;                           // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                QuestPointStyleIDSecondarySelected;                      // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MarkerTrackingSIDOnn;                                    // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MarkerTrackingSIDOff;                                    // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuestMarkerSelectSIDOnn;                                 // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuestMarkerSelectSIDOff;                                 // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NQC[0x28];                                  // 0x0468(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapTooltipStage
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class UWorldMapTooltipStage : public UWidgetBase
	{
	public:
		class UImageWidget*                                        ImagePoint;                                              // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextStage;                                               // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextDetails;                                             // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextAdditional;                                          // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowPoint;                                        // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowTextDetails;                                  // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowTextAdditional;                               // 0x02B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7HV[0x1];                                   // 0x02B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TextWraping;                                             // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextDetailsWraping;                                      // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLocalisationStage;                                // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLocalisationAdditional;                           // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUX0[0x2];                                   // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TextLocalisationSIDStage;                                // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TextLocalisationSIDAdditional;                           // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultTextStyle;                                        // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultTextDetailsStyle;                                 // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultTextAdditionalStyle;                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WorldMapZoomContainer
	 * Size -> 0x0120 (FullSize[0x03B0] - InheritedSize[0x0290])
	 */
	class UWorldMapZoomContainer : public UWidgetBase
	{
	public:
		class UWorldMap*                                           WorldMap;                                                // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              CenterMap;                                               // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMapBorderIndicator*                                 MapBorderIndicator;                                      // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMoveSettings                                       MoveSettings;                                            // 0x02A8(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDebug;                                            // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGMQ[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomMax;                                                 // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomMin;                                                 // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomScale;                                               // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CenterBorder;                                            // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMouse;                                            // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoldMouseLeft;                                    // 0x02FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4AJ[0x2];                                   // 0x02FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveBorder;                                              // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoldMapMove;                                      // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHoldBorderMoving;                                 // 0x0305(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPZA[0x2];                                   // 0x0306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CorectMouseDistance;                                     // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4S8[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BorderMovingSize;                                        // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU15[0x90];                                  // 0x0320(0x0090) MISSED OFFSET (PADDING)

	public:
		void ShowHandCursor(bool bShow);
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.WoundedHoldComponent
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UWoundedHoldComponent : public UHoldComponent
	{
	public:
		unsigned char                                              UnknownData_SVDN[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AModelCharacter*                                     ModelCharacterOwner;                                     // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MKBP[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stalker2.ZoomIndicator
	 * Size -> 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
	 */
	class UZoomIndicator : public UWidgetBase
	{
	public:
		class UImage*                                              Arrow;                                                   // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Line;                                                    // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      ZoomContainer;                                           // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextWidget*                                         TextCounter;                                             // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TextSufix;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndZoomAnimation;                                      // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHFS[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
