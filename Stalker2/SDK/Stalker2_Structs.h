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
	 * Enum Stalker2.EDamageSource
	 */
	enum class EDamageSource : uint8_t
	{
		None          = 0,
		AnomalyStrike = 1,
		Bullet        = 2,
		ShockWave     = 3,
		Explosion     = 4,
		BiteSmall     = 5,
		BiteLarge     = 6,
		CutSmall      = 7,
		CutLarge      = 8,
		RamSmall      = 9,
		RamLarge      = 10,
		Knife         = 11,
		WeaponButt    = 12,
		Fire          = 13,
		Electricity   = 14,
		Acid          = 15,
		Radiation     = 16,
		PSY           = 17,
		Bleeding      = 18,
		Emission      = 19,
		Physics       = 20,
		Hunger        = 21,
		GetCount      = 22,
		MAX           = 23
	};

	/**
	 * Enum Stalker2.EDamageType
	 */
	enum class EDamageType : uint8_t
	{
		None         = 0,
		Burn         = 1,
		Shock        = 2,
		ChemicalBurn = 3,
		Radiation    = 4,
		PSY          = 5,
		Strike       = 6,
		Fall         = 7,
		Physics      = 8,
		Emission     = 9,
		Bleeding     = 10,
		Hunger       = 11,
		GetCount     = 12,
		MAX          = 13
	};

	/**
	 * Enum Stalker2.EAmmoCaliber
	 */
	enum class EAmmoCaliber : uint8_t
	{
		None       = 0,
		A918       = 1,
		A919       = 2,
		A045       = 3,
		A545       = 4,
		A556       = 5,
		A762       = 6,
		A762Sniper = 7,
		A762NATO   = 8,
		A939       = 9,
		A012       = 10,
		AVOG       = 11,
		AGA        = 12,
		APG7V      = 13,
		AHEDP      = 14,
		GetCount   = 15,
		MAX        = 16
	};

	/**
	 * Enum Stalker2.EAmmoType
	 */
	enum class EAmmoType : uint8_t
	{
		None          = 0,
		Default       = 1,
		ArmorPiercing = 2,
		Supersonic    = 3,
		Expanding     = 4,
		Incendiary    = 5,
		GetCount      = 6,
		MAX           = 7
	};

	/**
	 * Enum Stalker2.EDetailsElementType
	 */
	enum class EDetailsElementType : uint8_t
	{
		Default     = 0,
		StageSlots  = 1,
		Description = 2,
		Count_Max   = 3,
		MAX         = 4
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthEventQuantization
	 */
	enum class EGSCTimeSynthEventQuantization : uint8_t
	{
		None                 = 0,
		Bars8                = 1,
		Bars4                = 2,
		Bars2                = 3,
		Bar                  = 4,
		HalfNote             = 5,
		HalfNoteTriplet      = 6,
		QuarterNote          = 7,
		QuarterNoteTriplet   = 8,
		EighthNote           = 9,
		EighthNoteTriplet    = 10,
		SixteenthNote        = 11,
		SixteenthNoteTriplet = 12,
		ThirtySecondNote     = 13,
		Count                = 14,
		MAX                  = 15
	};

	/**
	 * Enum Stalker2.EQuestTaskAnimationType
	 */
	enum class EQuestTaskAnimationType : uint8_t
	{
		None       = 0,
		TaskStart  = 1,
		TaskFinish = 2,
		TaskFail   = 3,
		TaskCancel = 4,
		MAX        = 5
	};

	/**
	 * Enum Stalker2.EAbility
	 */
	enum class EAbility : uint8_t
	{
		None          = 0,
		Empty         = 1,
		Attack        = 2,
		Roar          = 3,
		Berserk       = 4,
		PSYAttack     = 5,
		Zombification = 6,
		AuraEffect    = 7,
		Count         = 8,
		MAX           = 9
	};

	/**
	 * Enum Stalker2.EAbilityStatePhase
	 */
	enum class EAbilityStatePhase : uint8_t
	{
		Anticipation = 0,
		Execution    = 1,
		Recovery     = 2,
		Complete     = 3,
		MAX          = 4
	};

	/**
	 * Enum Stalker2.EAgentArchetype
	 */
	enum class EAgentArchetype : uint8_t
	{
		Human    = 0,
		Mutant   = 1,
		GetCount = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EAgentType
	 */
	enum class EAgentType : uint8_t
	{
		Human       = 0,
		Bloodsucker = 1,
		BlindDog    = 2,
		Controller  = 3,
		GetCount    = 4,
		MAX         = 5
	};

	/**
	 * Enum Stalker2.EAgentTypeMask
	 */
	enum class EAgentTypeMask : uint8_t
	{
		None        = 0,
		Human       = 1,
		Bloodsucker = 2,
		BlindDog    = 3,
		Controller  = 4,
		Mutants     = 5,
		Default     = 6,
		MAX         = 7
	};

	/**
	 * Enum Stalker2.EAgentBehaviourModifier
	 */
	enum class EAgentBehaviourModifier : uint8_t
	{
		Default  = 0,
		Zombie   = 1,
		GetCount = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EAIFeature
	 */
	enum class EAIFeature : uint8_t
	{
		None                    = 0,
		Tick                    = 1,
		UpdateDecision          = 2,
		Threat                  = 3,
		Combat                  = 4,
		UpdateSensors           = 5,
		Vision                  = 6,
		Hearing                 = 7,
		Hit                     = 8,
		Flair                   = 9,
		EmissionThreatAndCombat = 10,
		Sanity                  = 11,
		All                     = 12,
		MAX                     = 13
	};

	/**
	 * Enum Stalker2.EALifeDirectorScenarioTarget
	 */
	enum class EALifeDirectorScenarioTarget : uint8_t
	{
		Player    = 0,
		EnemyLair = 1,
		AllyLair  = 2,
		GetCount  = 3,
		MAX       = 4
	};

	/**
	 * Enum Stalker2.EFireTypeSlotType
	 */
	enum class EFireTypeSlotType : uint8_t
	{
		Default = 0,
		First   = 1,
		Last    = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EAnimationTargetType
	 */
	enum class EAnimationTargetType : uint8_t
	{
		None               = 0,
		Stay               = 1,
		Sleep              = 2,
		Rest               = 3,
		Heal               = 4,
		InteractWithPDA    = 5,
		ReactionOnEmission = 6,
		MAX                = 7
	};

	/**
	 * Enum Stalker2.EDirections
	 */
	enum class EDirections : uint8_t
	{
		None          = 0,
		Forward       = 1,
		Backward      = 2,
		Left          = 3,
		Right         = 4,
		ForwardLeft   = 5,
		ForwardRight  = 6,
		BackwardLeft  = 7,
		BackwardRight = 8,
		MAX           = 9
	};

	/**
	 * Enum Stalker2.EAnomalyAnimInteraction
	 */
	enum class EAnomalyAnimInteraction : uint8_t
	{
		GravityInteractIn = 0,
		MAX               = 1
	};

	/**
	 * Enum Stalker2.EAnimObjState
	 */
	enum class EAnimObjState : uint8_t
	{
		None         = 0,
		Alive        = 1,
		Moving       = 2,
		Walking      = 3,
		Running      = 4,
		Sprinting    = 5,
		Crouching    = 6,
		LowCrouching = 7,
		Climbing     = 8,
		Falling      = 9,
		MAX          = 10
	};

	/**
	 * Enum Stalker2.EAnimUpdateCondition
	 */
	enum class EAnimUpdateCondition : uint8_t
	{
		None                       = 0,
		SwappedFirstAndThirdPerson = 1,
		MainHandChanged            = 2,
		SecondaryHandChanged       = 3,
		Aimed                      = 4,
		MainUnEquipped             = 5,
		AttachInstalled            = 6,
		MAX                        = 7
	};

	/**
	 * Enum Stalker2.EAnimationHeadTypes
	 */
	enum class EAnimationHeadTypes : uint8_t
	{
		SK_fac_20_00 = 0,
		SK_fac_20_02 = 1,
		SK_fac_20_03 = 2,
		SK_fac_30_02 = 3,
		SK_fac_30_03 = 4,
		SK_fac_30_05 = 5,
		SK_fac_30_07 = 6,
		SK_fac_30_08 = 7,
		SK_fac_30_09 = 8,
		SK_fac_30    = 9,
		SK_fac_3001  = 10,
		SK_fac_40_01 = 11,
		SK_fac_MAX   = 12
	};

	/**
	 * Enum Stalker2.ERotationPartType
	 */
	enum class ERotationPartType : uint8_t
	{
		Eyes      = 0,
		Head      = 1,
		UpperBody = 2,
		FullBody  = 3,
		MAX       = 4
	};

	/**
	 * Enum Stalker2.EApplyRestrictionType
	 */
	enum class EApplyRestrictionType : uint8_t
	{
		Custom    = 0,
		LeaveSame = 1,
		Reset     = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EAttractionPointType
	 */
	enum class EAttractionPointType : uint8_t
	{
		StaticLocation      = 0,
		FollowObject        = 1,
		FollowCharacterBone = 2,
		ExitLookAt          = 3,
		MAX                 = 4
	};

	/**
	 * Enum Stalker2.ELongIdleType
	 */
	enum class ELongIdleType : uint8_t
	{
		Default       = 0,
		ThrowPrepared = 1,
		MAX           = 2
	};

	/**
	 * Enum Stalker2.ENotifyTriggerType
	 */
	enum class ENotifyTriggerType : uint8_t
	{
		Default              = 0,
		DefaultOnInterrupted = 1,
		ReverseOnInterrupted = 2,
		MAX                  = 3
	};

	/**
	 * Enum Stalker2.EAttachAction
	 */
	enum class EAttachAction : uint8_t
	{
		None                                  = 0,
		JoinAttachToHand                      = 1,
		RemoveAttachFromHandAndAttachToWeapon = 2,
		PickingUpItem                         = 3,
		RemoveItemFromHand                    = 4,
		FinishRequestedInstallAttach          = 5,
		AttachMeshToSocket                    = 6,
		MAX                                   = 7
	};

	/**
	 * Enum Stalker2.EWeaponIdleState
	 */
	enum class EWeaponIdleState : uint8_t
	{
		ShutterState          = 0,
		JamState              = 1,
		UnderbarrelState      = 2,
		AimState              = 3,
		CustomAdditionalState = 4,
		MAX                   = 5
	};

	/**
	 * Enum Stalker2.EAnimationType
	 */
	enum class EAnimationType : uint8_t
	{
		ClimbAnimationEnded = 0,
		ExitLadder          = 1,
		FocusCameraCenter   = 2,
		StartJumpFall       = 3,
		MAX                 = 4
	};

	/**
	 * Enum Stalker2.EBoneInteractionType
	 */
	enum class EBoneInteractionType : uint8_t
	{
		HideBone = 0,
		ShowBone = 1,
		MAX      = 2
	};

	/**
	 * Enum Stalker2.EJumpState
	 */
	enum class EJumpState : uint8_t
	{
		StartJump = 0,
		EndJump   = 1,
		MAX       = 2
	};

	/**
	 * Enum Stalker2.ELookAtAction
	 */
	enum class ELookAtAction : uint8_t
	{
		Start    = 0,
		Restrict = 1,
		MAX      = 2
	};

	/**
	 * Enum Stalker2.EPlayerActionResult
	 */
	enum class EPlayerActionResult : uint8_t
	{
		End       = 0,
		Interrupt = 1,
		MAX       = 2
	};

	/**
	 * Enum Stalker2.EPlayerActionTriggerState
	 */
	enum class EPlayerActionTriggerState : uint8_t
	{
		Activate   = 0,
		Deactivate = 1,
		MAX        = 2
	};

	/**
	 * Enum Stalker2.ERagdollAction
	 */
	enum class ERagdollAction : uint8_t
	{
		StartWoundedRagdoll = 0,
		StartRagdollLying   = 1,
		EndWoundedWakeUp    = 2,
		MAX                 = 3
	};

	/**
	 * Enum Stalker2.EUpdateSource
	 */
	enum class EUpdateSource : uint8_t
	{
		Reload  = 0,
		Upgrade = 1,
		MAX     = 2
	};

	/**
	 * Enum Stalker2.EWeaponAction
	 */
	enum class EWeaponAction : uint8_t
	{
		ToggleTwinMagazineShift = 0,
		JamRepaired             = 1,
		TryForceJam             = 2,
		ChangeFireType          = 3,
		ReloadingFinished       = 4,
		PerBulletReloading      = 5,
		OnPullCotter            = 6,
		Unloading               = 7,
		MAX                     = 8
	};

	/**
	 * Enum Stalker2.EAnimPushbackState
	 */
	enum class EAnimPushbackState : uint8_t
	{
		Inactive    = 0,
		Active      = 1,
		Delayed     = 2,
		BlendingOut = 3,
		MAX         = 4
	};

	/**
	 * Enum Stalker2.EAnimationShootingTypes
	 */
	enum class EAnimationShootingTypes : uint8_t
	{
		Default          = 0,
		Aim              = 1,
		DefaultLastShoot = 2,
		AimLastShoot     = 3,
		LooseShoot       = 4,
		LooseShootInAim  = 5,
		MAX              = 6
	};

	/**
	 * Enum Stalker2.EAnimationStates
	 */
	enum class EAnimationStates : uint8_t
	{
		None         = 0,
		Stand        = 1,
		Walking      = 2,
		Running      = 3,
		Sprinting    = 4,
		Crouching    = 5,
		LowCrouching = 6,
		MAX          = 7
	};

	/**
	 * Enum Stalker2.EAnimSwitchFireTypeMode
	 */
	enum class EAnimSwitchFireTypeMode : uint8_t
	{
		Hip = 0,
		Aim = 1,
		MAX = 2
	};

	/**
	 * Enum Stalker2.EAutoCoverState
	 */
	enum class EAutoCoverState : uint8_t
	{
		StandInCover              = 0,
		CanLeanRight              = 1,
		CanLeanLeft               = 2,
		ApproachCover             = 3,
		ApproachCoverLeft         = 4,
		ApproachCoverRight        = 5,
		AimLeft                   = 6,
		AimRight                  = 7,
		AimUp                     = 8,
		AimlessShootLeft          = 9,
		AimlessShootRight         = 10,
		AimlessShootUp            = 11,
		ExitCover                 = 12,
		InCoverWithoutCoverAffect = 13,
		MAX                       = 14
	};

	/**
	 * Enum Stalker2.EBehaviorType
	 */
	enum class EBehaviorType : uint8_t
	{
		Kill     = 0,
		Follow   = 1,
		Panic    = 2,
		Rest     = 3,
		Flee     = 4,
		Sleep    = 5,
		Stay     = 6,
		Berserk  = 7,
		Pacifist = 8,
		Confused = 9,
		Guard    = 10,
		MoveTo   = 11,
		Escort   = 12,
		GetCount = 13,
		MAX      = 14
	};

	/**
	 * Enum Stalker2.EBlockSlot
	 */
	enum class EBlockSlot : uint8_t
	{
		None                = 0,
		MainHandsSlot       = 1,
		MainHandsSlotSecond = 2,
		PistolSlot          = 3,
		KnifeSlot           = 4,
		BoltSlot            = 5,
		GrenadeSlot         = 6,
		MAX                 = 7
	};

	/**
	 * Enum Stalker2.ECustomDataDistribution
	 */
	enum class ECustomDataDistribution : uint8_t
	{
		Uniform = 0,
		Custom  = 1,
		MAX     = 2
	};

	/**
	 * Enum Stalker2.EBodyMeshType
	 */
	enum class EBodyMeshType : uint8_t
	{
		BodyArmor = 0,
		Face      = 1,
		Hands     = 2,
		Head      = 3,
		Attach    = 4,
		MAX       = 5
	};

	/**
	 * Enum Stalker2.EKeyCategory
	 */
	enum class EKeyCategory : uint8_t
	{
		Movement  = 0,
		Weapon    = 1,
		PDA       = 2,
		General   = 3,
		Developer = 4,
		GetCount  = 5,
		MAX       = 6
	};

	/**
	 * Enum Stalker2.ECompassState
	 */
	enum class ECompassState : uint8_t
	{
		None    = 0,
		Battle  = 1,
		InRange = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.ECollisionState
	 */
	enum class ECollisionState : uint8_t
	{
		None          = 0,
		Marker        = 1,
		DistancePlate = 2,
		MAX           = 3
	};

	/**
	 * Enum Stalker2.EContextualActionPreconditionType
	 */
	enum class EContextualActionPreconditionType : uint8_t
	{
		None             = 0,
		Need             = 1,
		EquippedItem     = 2,
		NPCPrototype     = 3,
		AllowedAgentType = 4,
		ZombifiedAgent   = 5,
		ItemInInventory  = 6,
		MAX              = 7
	};

	/**
	 * Enum Stalker2.EContextualActionEffectType
	 */
	enum class EContextualActionEffectType : uint8_t
	{
		None              = 0,
		ChangeNeedValue   = 1,
		AddCurrentNeed    = 2,
		RemoveCurrentNeed = 3,
		MAX               = 4
	};

	/**
	 * Enum Stalker2.EContextualActionNeeds
	 */
	enum class EContextualActionNeeds : uint8_t
	{
		None                  = 0,
		Idle                  = 1,
		Rest                  = 2,
		Sleep                 = 3,
		Smoke                 = 4,
		Drink                 = 5,
		Eat                   = 6,
		Guitar                = 7,
		Work                  = 8,
		PDA                   = 9,
		Detector              = 10,
		Guard                 = 11,
		WeaponCleaning        = 12,
		HistoryGrumbling      = 13,
		StoryTelling          = 14,
		Joking                = 15,
		Talking               = 16,
		DrinkFromInventory    = 17,
		DrinkInteractive      = 18,
		EatFromInventory      = 19,
		EatInteractive        = 20,
		Smoking               = 21,
		PlayingGuitar         = 22,
		LookThroughBinoculars = 23,
		Workout               = 24,
		PDASticking           = 25,
		DetectorRepairing     = 26,
		HideFromEmission      = 27,
		Patrolling            = 28,
		Count                 = 29,
		MAX                   = 30
	};

	/**
	 * Enum Stalker2.EContextualActionComparisonOperator
	 */
	enum class EContextualActionComparisonOperator : uint8_t
	{
		Greater = 0,
		Less    = 1,
		MAX     = 2
	};

	/**
	 * Enum Stalker2.ERepetitions
	 */
	enum class ERepetitions : uint8_t
	{
		Infinity      = 0,
		TimeInSeconds = 1,
		PlayCount     = 2,
		MAX           = 3
	};

	/**
	 * Enum Stalker2.EItemPreconditionType
	 */
	enum class EItemPreconditionType : uint8_t
	{
		InventoryItem = 0,
		MeshGenerator = 1,
		MAX           = 2
	};

	/**
	 * Enum Stalker2.EDistanceSelectorCondition
	 */
	enum class EDistanceSelectorCondition : uint8_t
	{
		MinIn  = 0,
		MinOut = 1,
		MAX    = 2
	};

	/**
	 * Enum Stalker2.EInterruptionState
	 */
	enum class EInterruptionState : uint8_t
	{
		ShouldInterrupt = 0,
		Interrupting    = 1,
		Interrupted     = 2,
		MAX             = 3
	};

	/**
	 * Enum Stalker2.EContextualActionAllowedAgentType
	 */
	enum class EContextualActionAllowedAgentType : uint8_t
	{
		AlifeAgent = 0,
		QuestAgent = 1,
		MAX        = 2
	};

	/**
	 * Enum Stalker2.EZombifiedPreconditionType
	 */
	enum class EZombifiedPreconditionType : uint8_t
	{
		ZombieOnly = 0,
		AliveOnly  = 1,
		MAX        = 2
	};

	/**
	 * Enum Stalker2.EContextualItemAttachType
	 */
	enum class EContextualItemAttachType : uint8_t
	{
		AttachNewStaticMesh   = 0,
		AttachNewSkeletalMesh = 1,
		AttachItemFromScene   = 2,
		AttachParticleSystem  = 3,
		MAX                   = 4
	};

	/**
	 * Enum Stalker2.ESpawnNiagaraAtLocation
	 */
	enum class ESpawnNiagaraAtLocation : uint8_t
	{
		BlahBlah             = 0,
		CigaretteAshLocation = 1,
		SmokingMouth         = 2,
		MAX                  = 3
	};

	/**
	 * Enum Stalker2.ESmartCoverType
	 */
	enum class ESmartCoverType : uint8_t
	{
		NoCover            = 0,
		NoShootingPosition = 1,
		Generic            = 2,
		Low                = 3,
		Mid                = 4,
		High               = 5,
		Count              = 6,
		MAX                = 7
	};

	/**
	 * Enum Stalker2.EAvailableCoverActionsSide
	 */
	enum class EAvailableCoverActionsSide : uint8_t
	{
		None   = 0,
		Left   = 1,
		Right  = 2,
		Center = 3,
		MAX    = 4
	};

	/**
	 * Enum Stalker2.ESmartCoverActionType
	 */
	enum class ESmartCoverActionType : uint8_t
	{
		Blind        = 0,
		LookOut      = 1,
		ThrowGrenade = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.ESmartCoverAnimationActionType
	 */
	enum class ESmartCoverAnimationActionType : uint8_t
	{
		EnterCover      = 0,
		LeaveCover      = 1,
		StayBehindCover = 2,
		PoseTransition  = 3,
		LookFromCover   = 4,
		HideBehindCover = 5,
		Shoot           = 6,
		Count           = 7,
		MAX             = 8
	};

	/**
	 * Enum Stalker2.ECrosshairAnimationType
	 */
	enum class ECrosshairAnimationType : uint8_t
	{
		None   = 0,
		Show   = 1,
		Hidden = 2,
		MAX    = 3
	};

	/**
	 * Enum Stalker2.EDebugElements
	 */
	enum class EDebugElements : uint8_t
	{
		MiniMap     = 0,
		DataAndTime = 1,
		PlayerStats = 2,
		Count       = 3,
		MAX         = 4
	};

	/**
	 * Enum Stalker2.UIWorningType
	 */
	enum class EUIWorningType : uint8_t
	{
		UIWorningTypeTextLenght        = 0,
		UIWorningTypeTextRow           = 1,
		UIWorningTypeUIWorningType_MAX = 2
	};

	/**
	 * Enum Stalker2.EDestructionActionType
	 */
	enum class EDestructionActionType : uint8_t
	{
		NoActionSelected = 0,
		SetNewMesh       = 1,
		PlayVisualEffect = 2,
		PlaySound        = 3,
		Destroy          = 4,
		DisablePhysics   = 5,
		EnablePhysics    = 6,
		Explode          = 7,
		SpawnItems       = 8,
		MAX              = 9
	};

	/**
	 * Enum Stalker2.StartSelectFolderType
	 */
	enum class EStartSelectFolderType : uint8_t
	{
		StartSelectFolderTypeToTop                     = 0,
		StartSelectFolderTypeToBottom                  = 1,
		StartSelectFolderTypeStartSelectFolderType_MAX = 2
	};

	/**
	 * Enum Stalker2.AnsverSlotPaddingType
	 */
	enum class EAnsverSlotPaddingType : uint8_t
	{
		AnsverSlotPaddingTypeNone                      = 0,
		AnsverSlotPaddingTypeTop                       = 1,
		AnsverSlotPaddingTypeBottom                    = 2,
		AnsverSlotPaddingTypeTopAndBottom              = 3,
		AnsverSlotPaddingTypeAnsverSlotPaddingType_MAX = 4
	};

	/**
	 * Enum Stalker2.EDialogModeType
	 */
	enum class EDialogModeType : uint8_t
	{
		Default = 0,
		Fast    = 1,
		MAX     = 2
	};

	/**
	 * Enum Stalker2.EDoorState
	 */
	enum class EDoorState : uint8_t
	{
		Idle                = 0,
		Locked              = 1,
		Opening             = 2,
		StealthOpening      = 3,
		RestoreInitialState = 4,
		MAX                 = 5
	};

	/**
	 * Enum Stalker2.EDoorMoveDirection
	 */
	enum class EDoorMoveDirection : uint8_t
	{
		CounterClockwise = 0,
		None             = 1,
		Clockwise        = 2,
		Stop             = 3,
		MAX              = 4
	};

	/**
	 * Enum Stalker2.EDPadClickType
	 */
	enum class EDPadClickType : uint8_t
	{
		Up    = 0,
		Down  = 1,
		Right = 2,
		Left  = 3,
		MAX   = 4
	};

	/**
	 * Enum Stalker2.EDPadSlotType
	 */
	enum class EDPadSlotType : uint8_t
	{
		Small    = 0,
		Selected = 1,
		MAX      = 2
	};

	/**
	 * Enum Stalker2.EPanelState
	 */
	enum class EPanelState : uint8_t
	{
		CloseAll = 0,
		TopOpen  = 1,
		DownOpen = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.ETerminateClickType
	 */
	enum class ETerminateClickType : uint8_t
	{
		Panel     = 0,
		LeftSlot  = 1,
		RightSlot = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EZeroBoundsFilter
	 */
	enum class EZeroBoundsFilter : uint8_t
	{
		None                 = 0,
		OnlyGroupActors      = 1,
		OnlyPrefabActors     = 2,
		OnlyStaticMeshActors = 3,
		MAX                  = 4
	};

	/**
	 * Enum Stalker2.EAmbientState
	 */
	enum class EAmbientState : uint8_t
	{
		Region   = 0,
		Location = 1,
		NoMusic  = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EGoalPriorityLevel
	 */
	enum class EGoalPriorityLevel : uint8_t
	{
		ContextDependent = 0,
		High             = 1,
		Critical         = 2,
		MAX              = 3
	};

	/**
	 * Enum Stalker2.EGameState
	 */
	enum class EGameState : uint8_t
	{
		Init            = 0,
		LoadingInEditor = 1,
		Loading         = 2,
		MainMenu        = 3,
		Game            = 4,
		MAX             = 5
	};

	/**
	 * Enum Stalker2.ETriggerShape
	 */
	enum class ETriggerShape : uint8_t
	{
		Box      = 0,
		Sphere   = 1,
		Cylinder = 2,
		Freeform = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EAllowedValues
	 */
	enum class EAllowedValues : uint8_t
	{
		Any          = 0,
		NonZero      = 1,
		PositiveOnly = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.EProficiencyLevel
	 */
	enum class EProficiencyLevel : uint8_t
	{
		Novice   = 0,
		Regular  = 1,
		Veteran  = 2,
		Elite    = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EItemContainerType
	 */
	enum class EItemContainerType : uint8_t
	{
		None           = 0,
		Inventory      = 1,
		Trader         = 2,
		Stash          = 3,
		PlayerBuyCart  = 4,
		PlayerSellCart = 5,
		SingleItem     = 6,
		Destructible   = 7,
		PackOfItems    = 8,
		GetCount       = 9,
		MAX            = 10
	};

	/**
	 * Enum Stalker2.EInventoryEquipmentSlot
	 */
	enum class EInventoryEquipmentSlot : uint8_t
	{
		None            = 0,
		PrimaryWeapon   = 1,
		SecondaryWeapon = 2,
		Pistol          = 3,
		Detector        = 4,
		Head            = 5,
		Body            = 6,
		Artifact1       = 7,
		Artifact2       = 8,
		Artifact3       = 9,
		Artifact4       = 10,
		Artifact5       = 11,
		Knife           = 12,
		Bolt            = 13,
		Grenade         = 14,
		PDA             = 15,
		GetCount        = 16,
		MAX             = 17
	};

	/**
	 * Enum Stalker2.EItemType
	 */
	enum class EItemType : uint8_t
	{
		None       = 0,
		Weapon     = 1,
		Armor      = 2,
		Artifact   = 3,
		Attach     = 4,
		Consumable = 5,
		Ammo       = 6,
		Detector   = 7,
		Grenade    = 8,
		Other      = 9,
		GetCount   = 10,
		MAX        = 11
	};

	/**
	 * Enum Stalker2.EFlashlightAction
	 */
	enum class EFlashlightAction : uint8_t
	{
		Disable = 0,
		TurnOff = 1,
		TurnOn  = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.ERightClickMenu
	 */
	enum class ERightClickMenu : uint8_t
	{
		Drop             = 0,
		DropAll          = 1,
		Equip            = 2,
		Unequip          = 3,
		Take             = 4,
		TakeAll          = 5,
		Use              = 6,
		Repair           = 7,
		RepairAll        = 8,
		UnloadAmmo       = 9,
		AttachToWeapon   = 10,
		DetachAttach     = 11,
		Sell             = 12,
		SellAll          = 13,
		Buy              = 14,
		BuyAll           = 15,
		Put              = 16,
		PutAll           = 17,
		Return           = 18,
		ReturnAll        = 19,
		Compare          = 20,
		ChangeWeaponAmmo = 21,
		GetCount         = 22,
		MAX              = 23
	};

	/**
	 * Enum Stalker2.EAttachedMagazineType
	 */
	enum class EAttachedMagazineType : uint8_t
	{
		Eject  = 0,
		Insert = 1,
		MAX    = 2
	};

	/**
	 * Enum Stalker2.EAttachType
	 */
	enum class EAttachType : uint8_t
	{
		Silencer         = 0,
		Muzzle           = 1,
		FlashSuppressor  = 2,
		Scope            = 3,
		Grip             = 4,
		GrenadeLauncher  = 5,
		Shotgun          = 6,
		WeaponFlashlight = 7,
		LaserSight       = 8,
		Magazine         = 9,
		IronSight        = 10,
		PlankScope       = 11,
		GetCount         = 12,
		MAX              = 13
	};

	/**
	 * Enum Stalker2.EMagazineMeshType
	 */
	enum class EMagazineMeshType : uint8_t
	{
		Full       = 0,
		Empty      = 1,
		RightEmpty = 2,
		LeftEmpty  = 3,
		MAX        = 4
	};

	/**
	 * Enum Stalker2.EAttachSlot
	 */
	enum class EAttachSlot : uint8_t
	{
		None            = 0,
		Barrel          = 1,
		FlashSuppressor = 2,
		Compensator     = 3,
		Stock           = 4,
		Scope           = 5,
		Handguard       = 6,
		Additional      = 7,
		Magazine        = 8,
		IronSight       = 9,
		PlankScope      = 10,
		GetCount        = 11,
		MAX             = 12
	};

	/**
	 * Enum Stalker2.EUpgradeScheme
	 */
	enum class EUpgradeScheme : uint8_t
	{
		None     = 0,
		GetCount = 1,
		MAX      = 2
	};

	/**
	 * Enum Stalker2.EFaction
	 */
	enum class EFaction : uint8_t
	{
		None        = 0,
		Bloodsucker = 1,
		Boar        = 2,
		Beaver      = 3,
		Burer       = 4,
		Chimera     = 5,
		Controller  = 6,
		Dog         = 7,
		Flesh       = 8,
		Poltergeist = 9,
		Pseudodog   = 10,
		Pseudogiant = 11,
		Snork       = 12,
		Tushkan     = 13,
		Zombie      = 14,
		Bandits     = 15,
		Duty        = 16,
		Freedom     = 17,
		Mercenaries = 18,
		Militaries  = 19,
		Monolith    = 20,
		Neutrals    = 21,
		Scientists  = 22,
		Varta       = 23,
		Player      = 24,
		GetCount    = 25,
		MAX         = 26
	};

	/**
	 * Enum Stalker2.EDisplayPriority
	 */
	enum class EDisplayPriority : uint8_t
	{
		None     = 0,
		Low      = 1,
		Medium   = 2,
		High     = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EFactionRelationType
	 */
	enum class EFactionRelationType : uint8_t
	{
		Neutral = 0,
		Friend  = 1,
		Enemy   = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EUseAbsoluteOrDelta
	 */
	enum class EUseAbsoluteOrDelta : uint8_t
	{
		Absolute = 0,
		Delta    = 1,
		Count    = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EAffectMembers
	 */
	enum class EAffectMembers : uint8_t
	{
		NoAffectMembers = 0,
		AffectMembers   = 1,
		Count           = 2,
		MAX             = 3
	};

	/**
	 * Enum Stalker2.ESetRelationType
	 */
	enum class ESetRelationType : uint8_t
	{
		Default = 0,
		Force   = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EEffectSource
	 */
	enum class EEffectSource : uint8_t
	{
		None       = 0,
		Obj        = 1,
		Armor      = 2,
		Weapon     = 3,
		Artifact   = 4,
		Consumable = 5,
		Other      = 6,
		GetCount   = 7,
		MAX        = 8
	};

	/**
	 * Enum Stalker2.EEffectType
	 */
	enum class EEffectType : uint8_t
	{
		None                      = 0,
		Accuracy                  = 1,
		AdditionalInventoryWeight = 2,
		AddAttachment             = 3,
		AimingTime                = 4,
		AmmoCapacity              = 5,
		AmmoPerShot               = 6,
		ArmorPiercing             = 7,
		ArtifactSlots             = 8,
		BalStock                  = 9,
		BaseBleeding              = 10,
		Bleeding                  = 11,
		BleedingChancePerShot     = 12,
		CameraShake               = 13,
		ChangeAmmoTypes           = 14,
		ChangeCaliber             = 15,
		ChangeFireTypes           = 16,
		ChangeStaminaFormula      = 17,
		Comfort                   = 18,
		Composite                 = 19,
		Corrosion                 = 20,
		VelocityBleeding          = 21,
		VelocityCorrosion         = 22,
		VelocityChange            = 23,
		TurnRateChangeYaw         = 24,
		TurnRateChangePitch       = 25,
		Damage                    = 26,
		BaseDamage                = 27,
		VelocityDamage            = 28,
		DegenBleeding             = 29,
		DegenDrunkness            = 30,
		DegenRadiation            = 31,
		DegenPsyPoints            = 32,
		DegenConcussionPoints     = 33,
		Dispersion                = 34,
		Drunkness                 = 35,
		EffectiveFireDistance     = 36,
		FireInterval              = 37,
		FireLoudness              = 38,
		Health                    = 39,
		WoundedHPOverTime         = 40,
		InstantHeal               = 41,
		HungerPoints              = 42,
		Identify                  = 43,
		ImpStock                  = 44,
		Invulnerability           = 45,
		ItemWeight                = 46,
		KnockDown                 = 47,
		MaxBleeding               = 48,
		MaxDurability             = 49,
		MaxHungerPoints           = 50,
		MaxHealth                 = 51,
		MaxRadiation              = 52,
		MaxStamina                = 53,
		MaxThirstPoints           = 54,
		MaxSleepinessPoints       = 55,
		MaxDrunkness              = 56,
		MaxConcussionPoints       = 57,
		MovementSpeed             = 58,
		NightVision               = 59,
		OpenSlotForAttachments    = 60,
		PercentDamage             = 61,
		PhysicalImmunity          = 62,
		ProtectionStrike          = 63,
		ProtectionBurn            = 64,
		ProtectionShock           = 65,
		ProtectionChemical        = 66,
		ProtectionRadiation       = 67,
		ProtectionPSY             = 68,
		ProtectionFall            = 69,
		PsyPoints                 = 70,
		Radiation                 = 71,
		Recoil                    = 72,
		RegenHealth               = 73,
		RegenHungerPoints         = 74,
		RegenSleepinessPoints     = 75,
		RegenStamina              = 76,
		RegenThirstPoints         = 77,
		ReloadingTime             = 78,
		SleepinessPoints          = 79,
		SoundEffect               = 80,
		Stamina                   = 81,
		StealthReveal             = 82,
		UniStock                  = 83,
		ThirstPoints              = 84,
		ConcussionPoints          = 85,
		BlockAnimationActionType  = 86,
		BulletSpeedSlowdown       = 87,
		SpawnPsyPhantoms          = 88,
		PsyZombification          = 89,
		PostProcessing            = 90,
		InputDelay                = 91,
		InputAxisMultiplier       = 92,
		PoppyFieldSleepiness      = 93,
		PoppyFieldRegenSleepiness = 94,
		AutoDepletionEffect       = 95,
		MechanicsEffect           = 96,
		FlagEffect                = 97,
		AI_Confusion              = 98,
		GetCount                  = 99,
		MAX                       = 100
	};

	/**
	 * Enum Stalker2.EShootingRadiusType
	 */
	enum class EShootingRadiusType : uint8_t
	{
		None               = 0,
		RecoilRadius       = 1,
		DispersionRadius   = 2,
		DispersionRadiusAI = 3,
		MAX                = 4
	};

	/**
	 * Enum Stalker2.EObjType
	 */
	enum class EObjType : uint8_t
	{
		NPC                = 0,
		Anomaly            = 1,
		AnomalySpawner     = 2,
		ArtifactSpawner    = 3,
		Marker             = 4,
		UnitSpawn          = 5,
		Squad              = 6,
		BattleALife        = 7,
		Item               = 8,
		ItemContainer      = 9,
		Grenade            = 10,
		Lair               = 11,
		ContextualAction   = 12,
		Zone               = 13,
		DestructibleObject = 14,
		Patrol             = 15,
		Searchpoint        = 16,
		Door               = 17,
		InteractableObject = 18,
		Bed                = 19,
		Invalid            = 20,
		GetCount           = 21,
		MAX                = 22
	};

	/**
	 * Enum Stalker2.EVoiceCommand
	 */
	enum class EVoiceCommand : uint8_t
	{
		None                      = 0,
		AttackLaunch              = 1,
		AttackLaunchAgainstPlayer = 2,
		BattleRoar                = 3,
		BattleRoarAgainstPlayer   = 4,
		RequestCoverFire          = 5,
		RequestFlank              = 6,
		Wounded                   = 7,
		DeathRattle               = 8,
		EnemyKilled               = 9,
		EnemyCriticalHit          = 10,
		EnemyLost                 = 11,
		EnemySearching            = 12,
		EnemyDetected             = 13,
		EnemyNearby               = 14,
		EnemyFarAway              = 15,
		FriendDeath               = 16,
		FriendCriticalHit         = 17,
		FriendlyFire              = 18,
		GrenadeNearby             = 19,
		GrenadeThrowRequest       = 20,
		Reloading                 = 21,
		MAX                       = 22
	};

	/**
	 * Enum Stalker2.ESpeechRequestMode
	 */
	enum class ESpeechRequestMode : uint8_t
	{
		Flexible = 0,
		Forced   = 1,
		Queued   = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EBeneficial
	 */
	enum class EBeneficial : uint8_t
	{
		None     = 0,
		Positive = 1,
		Negative = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EWeaponType
	 */
	enum class EWeaponType : uint8_t
	{
		None     = 0,
		Pistol   = 1,
		Rifle    = 2,
		Shotgun  = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EAnomalyElementType
	 */
	enum class EAnomalyElementType : uint8_t
	{
		None     = 0,
		Gravity  = 1,
		Electro  = 2,
		Fire     = 3,
		Chemical = 4,
		PSY      = 5,
		GetCount = 6,
		MAX      = 7
	};

	/**
	 * Enum Stalker2.EAnomalyType
	 */
	enum class EAnomalyType : uint8_t
	{
		None                 = 0,
		ArchiBulbAnomaly     = 1,
		CarouselAnomaly      = 2,
		ChemicalAnomaly      = 3,
		ClassicFireAnomaly   = 4,
		ClickerAnomaly       = 5,
		DiamondAnomaly       = 6,
		ElectroAnomaly       = 7,
		ExpulsionAnomaly     = 8,
		FlycatcherAnomaly    = 9,
		RazorAnomaly         = 10,
		LavaLampAnomaly      = 11,
		LightningBallAnomaly = 12,
		PillowAnomaly        = 13,
		PSYAnomaly           = 14,
		PSYEmitterAnomaly    = 15,
		PSYControllerAnomaly = 16,
		SoapBubbleAnomaly    = 17,
		ToxicCloudAnomaly    = 18,
		MAX                  = 19
	};

	/**
	 * Enum Stalker2.EAnomalyActiveState
	 */
	enum class EAnomalyActiveState : uint8_t
	{
		Active = 0,
		Idle   = 1,
		MAX    = 2
	};

	/**
	 * Enum Stalker2.EAnomalyVisualization
	 */
	enum class EAnomalyVisualization : uint8_t
	{
		Shape = 0,
		VFX   = 1,
		MAX   = 2
	};

	/**
	 * Enum Stalker2.ETooltipItemCategory
	 */
	enum class ETooltipItemCategory : uint8_t
	{
		Armor      = 0,
		Weapon     = 1,
		Consumable = 2,
		Artifact   = 3,
		GetCount   = 4,
		MAX        = 5
	};

	/**
	 * Enum Stalker2.EProjectilePropagation
	 */
	enum class EProjectilePropagation : uint8_t
	{
		None               = 0,
		FlyFixedAngle      = 1,
		FlyFixedSpeed      = 2,
		FlyFixedPoint      = 3,
		FlyFixedDirection  = 4,
		FollowTarget       = 5,
		FlyRandomDirection = 6,
		GetCount           = 7,
		MAX                = 8
	};

	/**
	 * Enum Stalker2.EDetectorType
	 */
	enum class EDetectorType : uint8_t
	{
		None     = 0,
		Standard = 1,
		Echo     = 2,
		Bear     = 3,
		Gilka    = 4,
		Veles    = 5,
		GetCount = 6,
		MAX      = 7
	};

	/**
	 * Enum Stalker2.EAttackActionType
	 */
	enum class EAttackActionType : uint8_t
	{
		None          = 0,
		Shoot         = 1,
		Melee         = 2,
		Throw         = 3,
		Reload        = 4,
		Jam           = 5,
		Idle          = 6,
		Attach        = 7,
		ChargeGrenade = 8,
		GetCount      = 9,
		MAX           = 10
	};

	/**
	 * Enum Stalker2.EJamStateTag
	 */
	enum class EJamStateTag : uint8_t
	{
		None         = 0,
		WeaponJammed = 1,
		WasJammed    = 2,
		WasReloaded  = 3,
		GetCount     = 4,
		MAX          = 5
	};

	/**
	 * Enum Stalker2.EProjectileMesh
	 */
	enum class EProjectileMesh : uint8_t
	{
		None     = 0,
		Building = 1,
		Barrel   = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EItemContainerMesh
	 */
	enum class EItemContainerMesh : uint8_t
	{
		None     = 0,
		Box      = 1,
		GetCount = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EProjectileBlueprint
	 */
	enum class EProjectileBlueprint : uint8_t
	{
		None     = 0,
		MM768    = 1,
		MM556    = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.ECurrentActiveWeapon
	 */
	enum class ECurrentActiveWeapon : uint8_t
	{
		None      = 0,
		Primary   = 1,
		Secondary = 2,
		GetCount  = 3,
		MAX       = 4
	};

	/**
	 * Enum Stalker2.EFireType
	 */
	enum class EFireType : uint8_t
	{
		None          = 0,
		SemiAutomatic = 1,
		Queue         = 2,
		Automatic     = 3,
		Dualshot      = 4,
		GetCount      = 5,
		MAX           = 6
	};

	/**
	 * Enum Stalker2.EObjMesh
	 */
	enum class EObjMesh : uint8_t
	{
		None     = 0,
		Actor    = 1,
		GetCount = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EObjAnim
	 */
	enum class EObjAnim : uint8_t
	{
		None     = 0,
		Actor    = 1,
		GetCount = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EItemGenerationCategory
	 */
	enum class EItemGenerationCategory : uint8_t
	{
		None             = 0,
		Ammo             = 1,
		Artifact         = 2,
		Attach           = 3,
		BodyArmor        = 4,
		Consumable       = 5,
		Detector         = 6,
		Head             = 7,
		Junk             = 8,
		Mask             = 9,
		SubItemGenerator = 10,
		WeaponPistol     = 11,
		WeaponPrimary    = 12,
		WeaponSecondary  = 13,
		GetCount         = 14,
		MAX              = 15
	};

	/**
	 * Enum Stalker2.ESignificanceFlags
	 */
	enum class ESignificanceFlags : uint8_t
	{
		None       = 0,
		Distance   = 1,
		LastRender = 2,
		ScreenSize = 3,
		GetCount   = 4,
		MAX        = 5
	};

	/**
	 * Enum Stalker2.EMainHandEquipmentType
	 */
	enum class EMainHandEquipmentType : uint8_t
	{
		None            = 0,
		Pistol          = 1,
		PrimaryWeapon   = 2,
		SecondaryWeapon = 3,
		Knife           = 4,
		Grenade         = 5,
		Bolt            = 6,
		Binoculars      = 7,
		PDA             = 8,
		Item            = 9,
		GetCount        = 10,
		MAX             = 11
	};

	/**
	 * Enum Stalker2.EItemInHandType
	 */
	enum class EItemInHandType : uint8_t
	{
		None           = 0,
		PDA            = 1,
		Guitar         = 2,
		Consumable     = 3,
		AdditionalItem = 4,
		MAX            = 5
	};

	/**
	 * Enum Stalker2.EGrenadeType
	 */
	enum class EGrenadeType : uint8_t
	{
		None     = 0,
		RGD5     = 1,
		F1       = 2,
		Molotov  = 3,
		Dynamite = 4,
		GetCount = 5,
		MAX      = 6
	};

	/**
	 * Enum Stalker2.EWeaponFireResult
	 */
	enum class EWeaponFireResult : uint8_t
	{
		None          = 0,
		Fired         = 1,
		NotEnoughAmmo = 2,
		Jammed        = 3,
		Interrupted   = 4,
		GetCount      = 5,
		MAX           = 6
	};

	/**
	 * Enum Stalker2.EShootingAvailability
	 */
	enum class EShootingAvailability : uint8_t
	{
		None             = 0,
		Available        = 1,
		Blocked          = 2,
		NoAmmoLoaded     = 3,
		NoAmmo           = 4,
		Jammed           = 5,
		NoWeapon         = 6,
		NoInventory      = 7,
		ShootingCooldown = 8,
		GetCount         = 9,
		MAX              = 10
	};

	/**
	 * Enum Stalker2.EReloadingCases
	 */
	enum class EReloadingCases : uint8_t
	{
		None      = 0,
		PerBullet = 1,
		Unload    = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EBoltActionWeaponState
	 */
	enum class EBoltActionWeaponState : uint8_t
	{
		NotBolted    = 0,
		ReadyToShoot = 1,
		NoBoltAction = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.EAssetType
	 */
	enum class EAssetType : uint8_t
	{
		None                          = 0,
		DynamicReloadAsset            = 1,
		Blueprint                     = 2,
		AnomalyBlueprint              = 3,
		ArtifactBlueprint             = 4,
		BoltBlueprint                 = 5,
		CharacterBlueprint            = 6,
		ProjectileBlueprint           = 7,
		InteractableBlueprint         = 8,
		UIWidgetBlueprint             = 9,
		GrenadeBlueprint              = 10,
		StaticMesh                    = 11,
		SkeletalMesh                  = 12,
		BaseWeaponAnimationBlueprints = 13,
		AnimSequence                  = 14,
		AnimMontage                   = 15,
		Material                      = 16,
		MaterialInstanceConstant      = 17,
		ItemIcons                     = 18,
		UIIcons                       = 19,
		Markers                       = 20,
		UpgradeIcons                  = 21,
		Texture2D                     = 22,
		SoundsObj                     = 23,
		SoundConfig                   = 24,
		TraceSoundSpawner             = 25,
		CombatMusic                   = 26,
		VolumeBuilder                 = 27,
		BiomeScatterTool              = 28,
		SoundAmbient                  = 29,
		SoundMusic                    = 30,
		SoundSFX                      = 31,
		SoundUI                       = 32,
		SoundVoice                    = 33,
		SoundWeapon                   = 34,
		CurveFloat                    = 35,
		CurveLinearColor              = 36,
		CameraShake                   = 37,
		WeaponCameraShake             = 38,
		ForceFeedbackEffect           = 39,
		WeaponParticles               = 40,
		ProjectileParticles           = 41,
		ProjectileSounds              = 42,
		ProjectileDecals              = 43,
		WeaponMaterials               = 44,
		CurveLinearColorAtlas         = 45,
		MaterialParameterCollection   = 46,
		SpeechActor                   = 47,
		ParticleSystems               = 48,
		NiagaraParticleSystem         = 49,
		VoiceMessage                  = 50,
		WeatherCues                   = 51,
		TrueSkySequenceAsset          = 52,
		DialogSequence                = 53,
		GroomAsset                    = 54,
		GroomBindingAsset             = 55,
		GroomMaterials                = 56,
		AkAudioEvent                  = 57,
		AkAudioParameter              = 58,
		AkAudioSwitchValue            = 59,
		AkAudioStateValue             = 60,
		AkAudioAuxBus                 = 61,
		MediaSource                   = 62,
		InputAction                   = 63,
		InputMappingContext           = 64,
		GetCount                      = 65,
		MAX                           = 66
	};

	/**
	 * Enum Stalker2.EAsyncLoadPriority
	 */
	enum class EAsyncLoadPriority : uint8_t
	{
		Default = 0,
		High    = 1,
		Maximum = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EUpgradeAvailability
	 */
	enum class EUpgradeAvailability : uint8_t
	{
		Unavailable  = 0,
		Available    = 1,
		Purchased    = 2,
		Blocked      = 3,
		Toggleable   = 4,
		ResetUpgrade = 5,
		GetCount     = 6,
		MAX          = 7
	};

	/**
	 * Enum Stalker2.EDialogAction
	 */
	enum class EDialogAction : uint8_t
	{
		None                     = 0,
		TerminateDialog          = 1,
		TimedAnswer              = 2,
		FastTravel               = 3,
		OpenTradeMenu            = 4,
		OpenUpgradeMenu          = 5,
		OpenMedicMenu            = 6,
		Bribe                    = 7,
		GetMoney                 = 8,
		Attack                   = 9,
		Hit                      = 10,
		GiveMedkit               = 11,
		Bye                      = 12,
		ShowItem                 = 13,
		RankCheck                = 14,
		FactionRelationshipCheck = 15,
		GiveItem                 = 16,
		GetItem                  = 17,
		Guide                    = 18,
		Threat                   = 19,
		Eat                      = 20,
		Drink                    = 21,
		GetCount                 = 22,
		VisibleAsUILabel         = 23,
		HasGameplayAction        = 24,
		MAX                      = 25
	};

	/**
	 * Enum Stalker2.EDialogEndType
	 */
	enum class EDialogEndType : uint8_t
	{
		None                   = 0,
		CloseUI                = 1,
		ReturnToTopicSelection = 2,
		GetCount               = 3,
		MAX                    = 4
	};

	/**
	 * Enum Stalker2.EDialogAnswerColor
	 */
	enum class EDialogAnswerColor : uint8_t
	{
		MainRead          = 0,
		MainUnread        = 1,
		CommonRead        = 2,
		CommonUnread      = 3,
		MainUnavailable   = 4,
		CommonUnavailable = 5,
		MAX               = 6
	};

	/**
	 * Enum Stalker2.EQuestRewardType
	 */
	enum class EQuestRewardType : uint8_t
	{
		Money    = 0,
		Helmet   = 1,
		Armor    = 2,
		Pistol   = 3,
		Weapon   = 4,
		Detector = 5,
		Artifact = 6,
		Ammo     = 7,
		Attach   = 8,
		Medkit   = 9,
		Food     = 10,
		MAX      = 11
	};

	/**
	 * Enum Stalker2.ENPCType
	 */
	enum class ENPCType : uint8_t
	{
		None       = 0,
		Trader     = 1,
		Technician = 2,
		Repairman  = 3,
		Guide      = 4,
		GetCount   = 5,
		MAX        = 6
	};

	/**
	 * Enum Stalker2.ERecalcFieldsFlag
	 */
	enum class ERecalcFieldsFlag : uint8_t
	{
		None                        = 0,
		BuffData                    = 1,
		MaxInventoryMass            = 2,
		MovementParams              = 3,
		Significance                = 4,
		Vitals                      = 5,
		WeaponData                  = 6,
		StaminaFormula              = 7,
		BlockedAnimationActionTypes = 8,
		BulletSpeedSlowdown         = 9,
		Everything                  = 10,
		GetCount                    = 11,
		MAX                         = 12
	};

	/**
	 * Enum Stalker2.EInteractableType
	 */
	enum class EInteractableType : uint8_t
	{
		None          = 0,
		Body          = 1,
		CodeLock      = 2,
		Door          = 3,
		ItemContainer = 4,
		Lever         = 5,
		Look          = 6,
		Sleep         = 7,
		Artifact      = 8,
		NPC           = 9,
		ToggleButton  = 10,
		Ladder        = 11,
		Custom        = 12,
		MAX           = 13
	};

	/**
	 * Enum Stalker2.EArtifactRarity
	 */
	enum class EArtifactRarity : uint8_t
	{
		Common   = 0,
		Uncommon = 1,
		Rare     = 2,
		Epic     = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EArtifactType
	 */
	enum class EArtifactType : uint8_t
	{
		Fire     = 0,
		Electro  = 1,
		Gravity  = 2,
		Chemical = 3,
		PSY      = 4,
		GetCount = 5,
		Fake     = 6,
		None     = 7,
		MAX      = 8
	};

	/**
	 * Enum Stalker2.EGameMode
	 */
	enum class EGameMode : uint8_t
	{
		ReleaseGame        = 0,
		DebugGame          = 1,
		Benchmark          = 2,
		DeveloperSpectator = 3,
		Death              = 4,
		GetCount           = 5,
		MAX                = 6
	};

	/**
	 * Enum Stalker2.EMeshSubType
	 */
	enum class EMeshSubType : uint8_t
	{
		None     = 0,
		Static   = 1,
		Skeletal = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EGodModType
	 */
	enum class EGodModType : uint8_t
	{
		None              = 0,
		Invulnerable      = 1,
		Unkillable        = 2,
		InfiniteMagazine  = 3,
		InfiniteAmmo      = 4,
		UnbreakableWeapon = 5,
		All               = 6,
		MAX               = 7
	};

	/**
	 * Enum Stalker2.EStateTag
	 */
	enum class EStateTag : uint8_t
	{
		None                = 0,
		ShouldWalk          = 1,
		ShouldRun           = 2,
		ShouldSprint        = 3,
		ShouldAim           = 4,
		Sprint              = 5,
		Walk                = 6,
		Run                 = 7,
		MoveForward         = 8,
		MoveBack            = 9,
		Strafe              = 10,
		Crouch              = 11,
		Climb               = 12,
		Jump                = 13,
		Aim                 = 14,
		Drunk               = 15,
		Sleep               = 16,
		Sit                 = 17,
		Interact            = 18,
		LeanLeft            = 19,
		LeanRight           = 20,
		LieDown             = 21,
		HoldBreath          = 22,
		Psycho              = 23,
		MovementTypes       = 24,
		IsMovingXAxis       = 25,
		IsMoving            = 26,
		WalkInPlaceAim      = 27,
		WalkMove            = 28,
		WalkMoveAim         = 29,
		WalkStrafe          = 30,
		WalkStrafeAim       = 31,
		WalkBack            = 32,
		WalkBackAim         = 33,
		RunMove             = 34,
		RunAim              = 35,
		RunStrafeAim        = 36,
		RunBack             = 37,
		RunBackAim          = 38,
		SprintMove          = 39,
		SprintStrafe        = 40,
		SprintBack          = 41,
		JumpWalkInPlace     = 42,
		JumpWalkInPlaceAim  = 43,
		JumpWalkMove        = 44,
		JumpWalkMoveAim     = 45,
		JumpWalkStrafe      = 46,
		JumpWalkStrafeAim   = 47,
		JumpWalkBack        = 48,
		JumpWalkBackAim     = 49,
		JumpRunInPlaceAim   = 50,
		JumpRunMove         = 51,
		JumpRunMoveAim      = 52,
		JumpRunStrafe       = 53,
		JumpRunStrafeAim    = 54,
		JumpRunBack         = 55,
		JumpRunBackAim      = 56,
		JumpSprintInPlace   = 57,
		JumpSprintMove      = 58,
		JumpSprintStrafe    = 59,
		JumpSprintBack      = 60,
		LowCrouchInPlace    = 61,
		LowCrouchInPlaceAim = 62,
		LowCrouchMove       = 63,
		LowCrouchMoveAim    = 64,
		LowCrouchStrafe     = 65,
		LowCrouchStrafeAim  = 66,
		LowCrouchBack       = 67,
		LowCrouchBackAim    = 68,
		CrouchInPlaceAim    = 69,
		CrouchMove          = 70,
		CrouchMoveAim       = 71,
		CrouchStrafe        = 72,
		CrouchStrafeAim     = 73,
		CrouchBack          = 74,
		CrouchBackAim       = 75,
		FastDescend         = 76,
		GetCount            = 77,
		MAX                 = 78
	};

	/**
	 * Enum Stalker2.EPlayerTriggerState
	 */
	enum class EPlayerTriggerState : uint8_t
	{
		None                              = 0,
		MainTrigger                       = 1,
		AimTrigger                        = 2,
		MeleeTrigger                      = 3,
		ChangeAmmoTypeTrigger             = 4,
		ChangeFireTypeTrigger             = 5,
		ReloadTrigger                     = 6,
		UnjamTrigger                      = 7,
		JumpTrigger                       = 8,
		LeanLeftTrigger                   = 9,
		LeanRightTrigger                  = 10,
		CrouchTrigger                     = 11,
		WalkTrigger                       = 12,
		SprintTrigger                     = 13,
		DropItemTrigger                   = 14,
		PickUpLeftHandTrigger             = 15,
		PickUpRightHandTrigger            = 16,
		InteractRightHandTrigger          = 17,
		InteractLeftHandTrigger           = 18,
		UseItemLeftHandTrigger            = 19,
		UseItemRightHandTrigger           = 20,
		RemoveLeftHandFromMainItemTrigger = 21,
		ReturnLeftHandOnMainItemTrigger   = 22,
		AutoCoverTrigger                  = 23,
		PrepareMainItemUseTrigger         = 24,
		KnockDownTrigger                  = 25,
		MAX                               = 26
	};

	/**
	 * Enum Stalker2.EInputContextAdditionalFlags
	 */
	enum class EInputContextAdditionalFlags : uint8_t
	{
		None              = 0,
		Falling           = 1,
		CanBeStanding     = 2,
		HasMovementInput  = 3,
		CanWalk           = 4,
		CanRun            = 5,
		CanSprint         = 6,
		HasClimbTarget    = 7,
		HasInteractTarget = 8,
		CanJump           = 9,
		MAX               = 10
	};

	/**
	 * Enum Stalker2.EIgnoreDamageType
	 */
	enum class EIgnoreDamageType : uint8_t
	{
		None              = 0,
		Invulnerable      = 1,
		Unkillable        = 2,
		Unfocusable       = 3,
		IgnorePSY         = 4,
		IgnoreFallDamage  = 5,
		ImmuneToEmission  = 6,
		UnkillableByALife = 7,
		MAX               = 8
	};

	/**
	 * Enum Stalker2.EStaminaAction
	 */
	enum class EStaminaAction : uint8_t
	{
		None          = 0,
		Walk          = 1,
		Run           = 2,
		Sprint        = 3,
		Crouch        = 4,
		LowCrouch     = 5,
		Climb         = 6,
		Jump          = 7,
		MeleeNormal   = 8,
		MeleeStrong   = 9,
		MeleeButstock = 10,
		Vault         = 11,
		GetCount      = 12,
		MAX           = 13
	};

	/**
	 * Enum Stalker2.EWeightStatus
	 */
	enum class EWeightStatus : uint8_t
	{
		Normal     = 0,
		Heavy      = 1,
		Overweight = 2,
		GetCount   = 3,
		MAX        = 4
	};

	/**
	 * Enum Stalker2.ETimelineState
	 */
	enum class ETimelineState : uint8_t
	{
		Play         = 0,
		Stop         = 1,
		PlayReversed = 2,
		GetCount     = 3,
		MAX          = 4
	};

	/**
	 * Enum Stalker2.EScriptVariableType
	 */
	enum class EScriptVariableType : uint8_t
	{
		None       = 0,
		BoolVar    = 1,
		Int32Var   = 2,
		Int64Var   = 3,
		FloatVar   = 4,
		DoubleVar  = 5,
		FStringVar = 6,
		GetCount   = 7,
		MAX        = 8
	};

	/**
	 * Enum Stalker2.ESpawnType
	 */
	enum class ESpawnType : uint8_t
	{
		None                      = 0,
		Anomaly                   = 1,
		AnomalySpawner            = 2,
		ArtifactSpawner           = 3,
		DeadBody                  = 4,
		DestructibleItemContainer = 5,
		ElectroAnomaly            = 6,
		FlashlightOnZone          = 7,
		DailyScheduleZone         = 8,
		GuardZone                 = 9,
		Item                      = 10,
		ItemContainer             = 11,
		LairSpawner               = 12,
		LightningBallAnomaly      = 13,
		Obj                       = 14,
		PackOfItems               = 15,
		PsyAnomaly                = 16,
		PSYControllerAnomaly      = 17,
		Patrol                    = 18,
		ContextualAction          = 19,
		Radiation                 = 20,
		RestrictionArea           = 21,
		SafeZone                  = 22,
		Searchpoint               = 23,
		Shelter                   = 24,
		SoapBubbleAnomaly         = 25,
		Hub                       = 26,
		Squad                     = 27,
		Trigger                   = 28,
		DestructibleObject        = 29,
		MAX                       = 30
	};

	/**
	 * Enum Stalker2.EHideViewType
	 */
	enum class EHideViewType : uint8_t
	{
		ForceHide = 0,
		Hide      = 1,
		Unhide    = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EMarkType
	 */
	enum class EMarkType : uint8_t
	{
		None                      = 0,
		QuestMain                 = 1,
		QuestSecondary            = 2,
		QuestMainSelected         = 3,
		QuestSecondarySelected    = 4,
		QuestGiverMain            = 5,
		QuestGiverSecondary       = 6,
		Shellter                  = 7,
		PlayerLandmark            = 8,
		Enemy                     = 9,
		QuestMainTargetEnemy      = 10,
		QuestSecondaryTargetEnemy = 11,
		DeadBody                  = 12,
		Hub                       = 13,
		FriendlyAreaMain          = 14,
		FriendlyAreaSecondary     = 15,
		Cache                     = 16,
		GroupLeader               = 17,
		Trader                    = 18,
		Technician                = 19,
		Guide                     = 20,
		Medic                     = 21,
		Bed                       = 22,
		PlayerStorage             = 23,
		Habar                     = 24,
		AnomalyArea               = 25,
		UnknownArea               = 26,
		Custom                    = 27,
		GetCount                  = 28,
		MAX                       = 29
	};

	/**
	 * Enum Stalker2.ERegion
	 */
	enum class ERegion : uint8_t
	{
		None           = 0,
		MalayaZona     = 1,
		Svalka         = 2,
		ChemZavod      = 3,
		DickyOstrov    = 4,
		Zaton          = 5,
		Bolota         = 6,
		NIICHAZ        = 7,
		Gradirni       = 8,
		Promzona       = 9,
		Malahit        = 10,
		Duga           = 11,
		Rostock        = 12,
		Yantar         = 13,
		Korogod        = 14,
		GoreliyLes     = 15,
		Kordon         = 16,
		RizhyLes       = 17,
		Yanov          = 18,
		Jupiter        = 19,
		Pripyat        = 20,
		ZheleznyLes    = 21,
		CHAES          = 22,
		Generatory     = 23,
		ZementniyZavod = 24,
		GetCount       = 25,
		MAX            = 26
	};

	/**
	 * Enum Stalker2.EPrototypeClass
	 */
	enum class EPrototypeClass : uint8_t
	{
		Ability                             = 0,
		ALifeDirectorScenario               = 1,
		Anomaly                             = 2,
		AnomalyDetector                     = 3,
		AnomalyOverlap                      = 4,
		ArtifactSpawner                     = 5,
		AudioRoom                           = 6,
		AudioScatterer                      = 7,
		BarbedWire                          = 8,
		BodyMesh                            = 9,
		Bolt                                = 10,
		Corpse                              = 11,
		ContextualActionBlueprint           = 12,
		ContextualActionNode                = 13,
		CoverEvaluator                      = 14,
		DamageSource                        = 15,
		DailySchedule                       = 16,
		DestructibleObject                  = 17,
		DialogChain                         = 18,
		Dialog                              = 19,
		DialogPool                          = 20,
		Door                                = 21,
		Effect                              = 22,
		EffectSourcePriority                = 23,
		Emission                            = 24,
		Encounter                           = 25,
		Explosion                           = 26,
		FastTravel                          = 27,
		FastTravelLocation                  = 28,
		Flashlight                          = 29,
		GlobalVariable                      = 30,
		GroomGenerator                      = 31,
		HearingSensor                       = 32,
		ImpactPhysicalMaterial              = 33,
		Infotopic                           = 34,
		InputAction                         = 35,
		InputMappingContext                 = 36,
		Item                                = 37,
		ItemContainer                       = 38,
		ItemGenerator                       = 39,
		JournalQuest                        = 40,
		Lair                                = 41,
		LevelStreaming                      = 42,
		Marker                              = 43,
		Mesh                                = 44,
		MeshGenerator                       = 45,
		MovementFX                          = 46,
		MeleeWeapon                         = 47,
		PhysicsInteraction                  = 48,
		Note                                = 49,
		NPC                                 = 50,
		NPCNeedsPreset                      = 51,
		Obj                                 = 52,
		PackOfItemsGroup                    = 53,
		Projectile                          = 54,
		Relation                            = 55,
		Quest                               = 56,
		QuestNode                           = 57,
		RewardPreset                        = 58,
		SmartCoverAnimationOffsetsPrototype = 59,
		SpawnActor                          = 60,
		Stash                               = 61,
		Threat                              = 62,
		TriggerVolume                       = 63,
		Upgrade                             = 64,
		VisionScanner                       = 65,
		WeatherSelection                    = 66,
		WeatherChain                        = 67,
		PostEffectProcessor                 = 68,
		RegionMusic                         = 69,
		ObjSleepParams                      = 70,
		HappyHours                          = 71,
		GetCount                            = 72,
		MAX                                 = 73
	};

	/**
	 * Enum Stalker2.EPhysicalMaterialType
	 */
	enum class EPhysicalMaterialType : uint8_t
	{
		Default     = 0,
		Dirt        = 1,
		Grass       = 2,
		Brick       = 3,
		Glass       = 4,
		Sand        = 5,
		Rock        = 6,
		Asphalt     = 7,
		Cloth       = 8,
		Leather     = 9,
		Rubber      = 10,
		Paper       = 11,
		Plastic     = 12,
		Flesh       = 13,
		FleshCloth  = 14,
		FleshMetal  = 15,
		FleshRubber = 16,
		WoodThin    = 17,
		WoodSolid   = 18,
		MetalThin   = 19,
		MetalSolid  = 20,
		MetalGrid   = 21,
		Slate       = 22,
		Water       = 23,
		Chemical    = 24,
		Bread       = 25,
		Meat        = 26,
		Vegetable   = 27,
		Tree        = 28,
		ForestGrass = 29,
		Puddle      = 30,
		Gravel      = 31,
		BrokenGlass = 32,
		Ground      = 33,
		GetCount    = 34,
		MAX         = 35
	};

	/**
	 * Enum Stalker2.EBiomeCurveAtlas
	 */
	enum class EBiomeCurveAtlas : uint8_t
	{
		Default        = 0,
		RedForest      = 1,
		Urban          = 2,
		OrdinaryForest = 3,
		Water          = 4,
		Swamp          = 5,
		Road           = 6,
		DeadForest     = 7,
		PineForest     = 8,
		GetCount       = 9,
		MAX            = 10
	};

	/**
	 * Enum Stalker2.EWeatherCurveAtlas
	 */
	enum class EWeatherCurveAtlas : uint8_t
	{
		Default  = 0,
		Sunny    = 1,
		Cloud    = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.ECurveAtlasParameter
	 */
	enum class ECurveAtlasParameter : uint8_t
	{
		SkySphere_CloudColor                        = 0,
		SkySphere_HorizonColor                      = 1,
		SkySphere_ZenithColor                       = 2,
		AtmosphericFogParametersPack1_SunMultiplier = 3,
		AtmosphericFog_FogMultiplier                = 4,
		AtmosphericFog_DensityMultiplier            = 5,
		AtmosphericFog_DensityOffset                = 6,
		ExponentialFogParameters                    = 7,
		SkyLightColor                               = 8,
		Intensity                                   = 9,
		Contrast                                    = 10,
		GetCount                                    = 11,
		MAX                                         = 12
	};

	/**
	 * Enum Stalker2.EInputKey
	 */
	enum class EInputKey : uint8_t
	{
		None                         = 0,
		Forward                      = 1,
		Backward                     = 2,
		Right                        = 3,
		Left                         = 4,
		UpArrow                      = 5,
		DownArrow                    = 6,
		LeftArrow                    = 7,
		RightArrow                   = 8,
		Turn                         = 9,
		LookUp                       = 10,
		Fire                         = 11,
		Aim                          = 12,
		Reload                       = 13,
		ChangeAmmoType               = 14,
		Jump                         = 15,
		Walk                         = 16,
		Sprint                       = 17,
		Crouch                       = 18,
		MainHandEquipKnife           = 19,
		MainHandEquipPistol          = 20,
		MainHandEquipPrimaryWeapon   = 21,
		MainHandEquipSecondaryWeapon = 22,
		MainHandEquipGrenade         = 23,
		MainHandEquipBolt            = 24,
		MainHandEquipDetector        = 25,
		MainHandEquipBinoculars      = 26,
		DPadOpenUp                   = 27,
		DPadOpenDown                 = 28,
		DPadRight                    = 29,
		DPadLeft                     = 30,
		ChangeFireType               = 31,
		ToggleAttachMode             = 32,
		Interact                     = 33,
		Inventory                    = 34,
		WorldMap                     = 35,
		Journal                      = 36,
		Notes                        = 37,
		Bestiary                     = 38,
		Statistics                   = 39,
		MouseWheelUp                 = 40,
		MouseWheelDown               = 41,
		DropItemInHands              = 42,
		Ctrl                         = 43,
		PersonViewSwitcher           = 44,
		DeveloperSpectatorSwitcher   = 45,
		TeleportToSpectator          = 46,
		Esc                          = 47,
		QuickSlot1                   = 48,
		QuickSlot2                   = 49,
		QuickSlot3                   = 50,
		QuickSlot4                   = 51,
		QuickSave                    = 52,
		QuickLoad                    = 53,
		LeanLeft                     = 54,
		LeanRight                    = 55,
		MeleeAttack                  = 56,
		Flashlight                   = 57,
		TacticalFlashlight           = 58,
		SwitchWeapon                 = 59,
		AutoWalk                     = 60,
		Square                       = 61,
		Cross                        = 62,
		Circle                       = 63,
		Triangle                     = 64,
		LeftShoulder                 = 65,
		LeftTrigger                  = 66,
		LeftThumbstickButton         = 67,
		RightShoulder                = 68,
		RightTrigger                 = 69,
		RightThumbstickButton        = 70,
		Select                       = 71,
		Start                        = 72,
		TouchpadButton               = 73,
		DPadXYAxis                   = 74,
		ItemSelector                 = 75,
		GetCount                     = 76,
		MAX                          = 77
	};

	/**
	 * Enum Stalker2.EKeyState
	 */
	enum class EKeyState : uint8_t
	{
		InitialHoldInProgress = 0,
		PressedEvent          = 1,
		HoldEventStarted      = 2,
		Holding               = 3,
		Released              = 4,
		Processed             = 5,
		MAX                   = 6
	};

	/**
	 * Enum Stalker2.EDamageBone
	 */
	enum class EDamageBone : uint8_t
	{
		Head     = 0,
		Body     = 1,
		Limbs    = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EVitalType
	 */
	enum class EVitalType : uint8_t
	{
		None                 = 0,
		HP                   = 1,
		SP                   = 2,
		HungerPoints         = 3,
		ThirstPoints         = 4,
		SleepinessPoints     = 5,
		Bleeding             = 6,
		Radiation            = 7,
		PoppyFieldSleepiness = 8,
		ConcussionPoints     = 9,
		PsyPoints            = 10,
		Drunkness            = 11,
		GetCount             = 12,
		MAX                  = 13
	};

	/**
	 * Enum Stalker2.ESoundEventType
	 */
	enum class ESoundEventType : uint8_t
	{
		Shot             = 0,
		Reload           = 1,
		Steps            = 2,
		Jump             = 3,
		Voice            = 4,
		AnomalyActivated = 5,
		Explosion        = 6,
		BulletFlyby      = 7,
		PhysObjectImpact = 8,
		Interactable     = 9,
		Count            = 10,
		MAX              = 11
	};

	/**
	 * Enum Stalker2.EEmissionAIEvent
	 */
	enum class EEmissionAIEvent : uint8_t
	{
		EmissionStart  = 0,
		EmissionDanger = 1,
		EmissionActive = 2,
		EmissionEnd    = 3,
		Count          = 4,
		MAX            = 5
	};

	/**
	 * Enum Stalker2.EAwareness
	 */
	enum class EAwareness : uint8_t
	{
		None       = 0,
		Calm       = 1,
		Suspicious = 2,
		Battle     = 3,
		MAX        = 4
	};

	/**
	 * Enum Stalker2.EAIMovementPose
	 */
	enum class EAIMovementPose : uint8_t
	{
		Stand  = 0,
		Crouch = 1,
		MAX    = 2
	};

	/**
	 * Enum Stalker2.EAimOffsetTP
	 */
	enum class EAimOffsetTP : uint8_t
	{
		Stand          = 0,
		Crouch         = 1,
		LowCrouch      = 2,
		BlindLeftHigh  = 3,
		BlindLeftLow   = 4,
		BlindCenterLow = 5,
		MAX            = 6
	};

	/**
	 * Enum Stalker2.EMovementBehaviour
	 */
	enum class EMovementBehaviour : uint8_t
	{
		None     = 0,
		Idle     = 1,
		Walk     = 2,
		Run      = 3,
		Sprint   = 4,
		GetCount = 5,
		MAX      = 6
	};

	/**
	 * Enum Stalker2.EQuestNodeType
	 */
	enum class EQuestNodeType : uint8_t
	{
		ActivateAnomaly             = 0,
		ActivateInteractableObject  = 1,
		AddNote                     = 2,
		AddOrRemoveFromSquad        = 3,
		AddTechnicianSkillOrUpgrade = 4,
		BridgeCleanUp               = 5,
		ChangeRelationships         = 6,
		ChangeFaction               = 7,
		Condition                   = 8,
		Container                   = 9,
		DeactivateZone              = 10,
		Despawn                     = 11,
		DisableNPCInteraction       = 12,
		EmissionScheduleControl     = 13,
		EmissionStart               = 14,
		End                         = 15,
		Event                       = 16,
		GiveCache                   = 17,
		If                          = 18,
		ItemAdd                     = 19,
		ItemRemove                  = 20,
		LoadLevel                   = 21,
		UnloadLevel                 = 22,
		EnableDataLayer             = 23,
		FlashlightOnOff             = 24,
		ForceInteract               = 25,
		LookAt                      = 26,
		PlayEffect                  = 27,
		PlayPostProcess             = 28,
		PlaySound                   = 29,
		ReputationLocker            = 30,
		ResetAI                     = 31,
		RestrictionArea             = 32,
		Random                      = 33,
		ScheduledContainer          = 34,
		SendSignal                  = 35,
		SetAIBehavior               = 36,
		SetCharacterEffect          = 37,
		SetCharacterParam           = 38,
		SetDialog                   = 39,
		SetDurabilityParam          = 40,
		SetGlobalVariable           = 41,
		SetItemGenerator            = 42,
		SetName                     = 43,
		SetWeather                  = 44,
		SetWounded                  = 45,
		SetTime                     = 46,
		SetTimer                    = 47,
		ShowFadeScreen              = 48,
		Spawn                       = 49,
		SetJournal                  = 50,
		SwitchQuestItemState        = 51,
		Technical                   = 52,
		TeleportCharacter           = 53,
		ToggleNPCHidden             = 54,
		ToggleLairActivity          = 55,
		EquipItemInHands            = 56,
		Trigger                     = 57,
		SaveGame                    = 58,
		RestrictSave                = 59,
		StartQuestStage             = 60,
		ProtectLairNPCSquadItem     = 61,
		SpawnAnomaly                = 62,
		SpawnAnomalySpawner         = 63,
		SpawnArtifactSpawner        = 64,
		SpawnContextualAction       = 65,
		SpawnDeadBody               = 66,
		SpawnGuardZone              = 67,
		SpawnHub                    = 68,
		SpawnItemContainer          = 69,
		SpawnLair                   = 70,
		SpawnSafeZone               = 71,
		SpawnSingleObj              = 72,
		SpawnShelter                = 73,
		SpawnSquad                  = 74,
		SpawnTrigger                = 75,
		BridgeEvent                 = 76,
		OnEmissionStageActivated    = 77,
		OnEmissionStageFinished     = 78,
		OnEmissionStartEvent        = 79,
		OnEmissionFinishEvent       = 80,
		OnFactionBecomeFriendEvent  = 81,
		OnFactionBecomeEnemyEvent   = 82,
		OnHitEvent                  = 83,
		OnInteractEvent             = 84,
		OnJournalQuestEvent         = 85,
		OnKillerCheckEvent          = 86,
		OnMoneyAmountReachedEvent   = 87,
		OnNPCBecomeEnemyEvent       = 88,
		OnNPCBecomeFriendEvent      = 89,
		OnNPCCreateEvent            = 90,
		OnNPCDeathEvent             = 91,
		OnNPCDefeatEvent            = 92,
		OnPlayerGetItemEvent        = 93,
		OnPlayerLostItemEvent       = 94,
		OnPlayerNoticedEvent        = 95,
		OnPlayerRankReachedEvent    = 96,
		OnSignalReceived            = 97,
		OnTickEvent                 = 98,
		OnTriggerEnterEvent         = 99,
		OnTriggerExitEvent          = 100,
		OnInfotopicFinishEvent      = 101,
		StartBenchmark              = 102,
		ConsoleCommand              = 103,
		PlayVideo                   = 104,
		SequenceStart               = 105,
		GetCount                    = 106,
		MAX                         = 107
	};

	/**
	 * Enum Stalker2.EModifiedCharacterParam
	 */
	enum class EModifiedCharacterParam : uint8_t
	{
		HP               = 0,
		HPPercent        = 1,
		SP               = 2,
		Bleeding         = 3,
		HungerPoints     = 4,
		Radiation        = 5,
		Money            = 6,
		Rank             = 7,
		InventoryWeight  = 8,
		IgnoreDamageType = 9,
		MAX              = 10
	};

	/**
	 * Enum Stalker2.EQuestEventType
	 */
	enum class EQuestEventType : uint8_t
	{
		None                         = 0,
		OnBecomeEnemy                = 1,
		OnBecomeFriend               = 2,
		OnCacheOpened                = 3,
		OnCombatStarted              = 4,
		OnCombatFinished             = 5,
		OnRelationshipChanged        = 6,
		OnDialogFinished             = 7,
		OnEmissionFinished           = 8,
		OnEmissionStarted            = 9,
		OnEmissionStageFinished      = 10,
		OnEmissionStageStarted       = 11,
		OnFactionBecomeEnemy         = 12,
		OnFactionBecomeFriend        = 13,
		OnFactionRelationshipChanged = 14,
		OnGlobalVariableChanged      = 15,
		OnItemContainerLoot          = 16,
		OnQuestInteractionFinish     = 17,
		OnInteract                   = 18,
		OnHit                        = 19,
		OnInteractEnabled            = 20,
		OnJournalQuestStart          = 21,
		OnJournalQuestFinish         = 22,
		OnJournalQuestFail           = 23,
		OnJournalQuestCancel         = 24,
		OnJournalQuestStageStart     = 25,
		OnJournalQuestStageFinish    = 26,
		OnJournalQuestStageFail      = 27,
		OnJournalQuestStageCancel    = 28,
		OnLocationDiscovered         = 29,
		OnLookAtEnded                = 30,
		OnMoneyAmountReached         = 31,
		OnNotesChanged               = 32,
		OnModelCreate                = 33,
		OnModelUnhide                = 34,
		OnObjCreate                  = 35,
		OnObjDeath                   = 36,
		OnObjDefeat                  = 37,
		OnObjViewCreate              = 38,
		OnPlayerGetItem              = 39,
		OnPlayerLostItem             = 40,
		OnPlayerNoticed              = 41,
		OnPlayerRankReached          = 42,
		OnSaveLockRemoved            = 43,
		OnSignalReceiverBeginPlay    = 44,
		OnSignalReceived             = 45,
		OnQuestFinish                = 46,
		OnQuestNodeFinish            = 47,
		OnTick                       = 48,
		OnTriggerEnter               = 49,
		OnTriggerExit                = 50,
		OnItemContainerEmpty         = 51,
		OnDayStarted                 = 52,
		OnNightStarted               = 53,
		OnDialogExit                 = 54,
		GetCount                     = 55,
		MAX                          = 56
	};

	/**
	 * Enum Stalker2.EConditionCheckType
	 */
	enum class EConditionCheckType : uint8_t
	{
		None = 0,
		And  = 1,
		Or   = 2,
		MAX  = 3
	};

	/**
	 * Enum Stalker2.EQuestConditionType
	 */
	enum class EQuestConditionType : uint8_t
	{
		HP                   = 0,
		HPPercent            = 1,
		Stamina              = 2,
		Radiation            = 3,
		HungerPoints         = 4,
		Money                = 5,
		InventoryWeight      = 6,
		IsAlive              = 7,
		FactionRelationship  = 8,
		PersonalRelationship = 9,
		Rank                 = 10,
		Effect               = 11,
		Awareness            = 12,
		Note                 = 13,
		ItemInInventory      = 14,
		AITarget             = 15,
		GlobalVariable       = 16,
		Trigger              = 17,
		DistanceToNPC        = 18,
		DistanceToPoint      = 19,
		LookAtAngle          = 20,
		Bridge               = 21,
		ItemInContainer      = 22,
		EquipmentInHands     = 23,
		IsAiming             = 24,
		CorpseCarry          = 25,
		JournalState         = 26,
		IsCreated            = 27,
		Emission             = 28,
		PlayerOverload       = 29,
		IsWounded            = 30,
		ContextualAction     = 31,
		IsDialogMemberValid  = 32,
		Random               = 33,
		Last                 = 34,
		MAX                  = 35
	};

	/**
	 * Enum Stalker2.EConditionComparance
	 */
	enum class EConditionComparance : uint8_t
	{
		Less           = 0,
		LessOrEqual    = 1,
		Equal          = 2,
		NotEqual       = 3,
		GreaterOrEqual = 4,
		Greater        = 5,
		MAX            = 6
	};

	/**
	 * Enum Stalker2.EJournalEntity
	 */
	enum class EJournalEntity : uint8_t
	{
		Quest      = 0,
		QuestStage = 1,
		MAX        = 2
	};

	/**
	 * Enum Stalker2.EJournalAction
	 */
	enum class EJournalAction : uint8_t
	{
		Start                  = 0,
		Finish                 = 1,
		Fail                   = 2,
		Cancel                 = 3,
		ChangeStageDescription = 4,
		MAX                    = 5
	};

	/**
	 * Enum Stalker2.EJournalState
	 */
	enum class EJournalState : uint8_t
	{
		Pending   = 0,
		Active    = 1,
		Finished  = 2,
		Failed    = 3,
		Cancelled = 4,
		MAX       = 5
	};

	/**
	 * Enum Stalker2.EContextualActionNodeType
	 */
	enum class EContextualActionNodeType : uint8_t
	{
		None                    = 0,
		Start                   = 1,
		Animation               = 2,
		SoundDependentAnimation = 3,
		RandomSelector          = 4,
		SequentialSelector      = 5,
		DistanceSelector        = 6,
		Interrupt               = 7,
		ConditionalSelector     = 8,
		MAX                     = 9
	};

	/**
	 * Enum Stalker2.EChangeValueMode
	 */
	enum class EChangeValueMode : uint8_t
	{
		Set      = 0,
		Add      = 1,
		Subtract = 2,
		Multiply = 3,
		Divide   = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.ERequiredSquadMembers
	 */
	enum class ERequiredSquadMembers : uint8_t
	{
		AllMembers = 0,
		AnyMember  = 1,
		MAX        = 2
	};

	/**
	 * Enum Stalker2.EAnimationMovingStates
	 */
	enum class EAnimationMovingStates : uint8_t
	{
		Idle           = 0,
		Moving         = 1,
		ShootingMoving = 2,
		MAX            = 3
	};

	/**
	 * Enum Stalker2.EAnimationIdleStates
	 */
	enum class EAnimationIdleStates : uint8_t
	{
		Idle         = 0,
		RelaxedIdle  = 1,
		ShootingIdle = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.EAnimClimbState
	 */
	enum class EAnimClimbState : uint8_t
	{
		RightUp                 = 0,
		LeftUp                  = 1,
		RightDown               = 2,
		LeftDown                = 3,
		ExitUpLadder            = 4,
		EnterUpLadder           = 5,
		EnterDownLadder         = 6,
		FastDescentStartRight   = 7,
		FastDescentStartLeft    = 8,
		FastDescentStartBoth    = 9,
		FastDescentLoop         = 10,
		FastDescentExit         = 11,
		EnterLastStepUpRight    = 12,
		EnterLastStepUpLeft     = 13,
		EnterPreLastStepUpRight = 14,
		EnterPreLastStepUpLeft  = 15,
		ExitLastStep            = 16,
		MAX                     = 17
	};

	/**
	 * Enum Stalker2.EWeaponIdleType
	 */
	enum class EWeaponIdleType : uint8_t
	{
		Default            = 0,
		GrenLauncher       = 1,
		GrenLauncherAction = 2,
		BuckLauncher       = 3,
		BuckLauncherAction = 4,
		MAX                = 5
	};

	/**
	 * Enum Stalker2.EShutterState
	 */
	enum class EShutterState : uint8_t
	{
		None            = 0,
		ReadyToShoot    = 1,
		FirstBarrelShot = 2,
		LastShot        = 3,
		MAX             = 4
	};

	/**
	 * Enum Stalker2.EHealingType
	 */
	enum class EHealingType : uint8_t
	{
		Quest         = 0,
		HoldComponent = 1,
		Dialog        = 2,
		MAX           = 3
	};

	/**
	 * Enum Stalker2.EWoundedAnimState
	 */
	enum class EWoundedAnimState : uint8_t
	{
		NotWounded    = 0,
		Falling       = 1,
		RagdollLying  = 2,
		RagdollWaking = 3,
		ReceiveHeal   = 4,
		WakingUp      = 5,
		MAX           = 6
	};

	/**
	 * Enum Stalker2.EWeaponCustomAdditionalIdle
	 */
	enum class EWeaponCustomAdditionalIdle : uint8_t
	{
		None = 0,
		MAX  = 1
	};

	/**
	 * Enum Stalker2.EWoundedType
	 */
	enum class EWoundedType : uint8_t
	{
		NotWounded     = 0,
		GenericWounded = 1,
		QuestWounded   = 2,
		MAX            = 3
	};

	/**
	 * Enum Stalker2.EWoundedState
	 */
	enum class EWoundedState : uint8_t
	{
		None     = 0,
		Falling  = 1,
		Fallen   = 2,
		Reviving = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EKnockedDownState
	 */
	enum class EKnockedDownState : uint8_t
	{
		NotKnockedDown = 0,
		KnockedDown    = 1,
		MAX            = 2
	};

	/**
	 * Enum Stalker2.EAnimationRequestType
	 */
	enum class EAnimationRequestType : uint8_t
	{
		None                       = 0,
		WhenAvailableSlot          = 1,
		WhenChangeState            = 2,
		WhenAnimMontageBlendingOut = 3,
		WhenAnimMontageEnded       = 4,
		WhenAnimationStarted       = 5,
		MAX                        = 6
	};

	/**
	 * Enum Stalker2.EAnimationSlots
	 */
	enum class EAnimationSlots : uint8_t
	{
		DefaultSlot    = 0,
		MainActionSlot = 1,
		MAX            = 2
	};

	/**
	 * Enum Stalker2.EAnimationLeanState
	 */
	enum class EAnimationLeanState : uint8_t
	{
		None      = 0,
		LeftIn    = 1,
		LeftIdle  = 2,
		LeftOut   = 3,
		RightIn   = 4,
		RightIdle = 5,
		RightOut  = 6,
		MAX       = 7
	};

	/**
	 * Enum Stalker2.EAnimationAimState
	 */
	enum class EAnimationAimState : uint8_t
	{
		None           = 0,
		HipToAimActive = 1,
		AimToHipActive = 2,
		AimingActive   = 3,
		MAX            = 4
	};

	/**
	 * Enum Stalker2.EAnimationReloadTypes
	 */
	enum class EAnimationReloadTypes : uint8_t
	{
		None                         = 0,
		Full                         = 1,
		Tactical                     = 2,
		Unload                       = 3,
		TacticalWithoutRevolverShake = 4,
		SingleBullet                 = 5,
		TwinFull                     = 6,
		TwinTactical                 = 7,
		TwinFullAux                  = 8,
		TwinTacticalAux              = 9,
		MAX                          = 10
	};

	/**
	 * Enum Stalker2.EAnimationHands
	 */
	enum class EAnimationHands : uint8_t
	{
		None      = 0,
		LeftHand  = 1,
		RightHand = 2,
		BothHand  = 3,
		MAX       = 4
	};

	/**
	 * Enum Stalker2.EUpdateBulletSource
	 */
	enum class EUpdateBulletSource : uint8_t
	{
		Shoot  = 0,
		Reload = 1,
		MAX    = 2
	};

	/**
	 * Enum Stalker2.EAIAnimationAction
	 */
	enum class EAIAnimationAction : uint8_t
	{
		None                = 0,
		HitBlendOut         = 1,
		HitEnded            = 2,
		DeathRagdoll        = 3,
		HealingStart        = 4,
		KnockDownEnded      = 5,
		ZombieResurrect     = 6,
		ResurectionComplete = 7,
		MAX                 = 8
	};

	/**
	 * Enum Stalker2.EDeathAnimationType
	 */
	enum class EDeathAnimationType : uint8_t
	{
		Default       = 0,
		Explosion     = 1,
		Burn          = 2,
		ChemicalBurn  = 3,
		Emission      = 4,
		Zombification = 5,
		HeadShot      = 6,
		MAX           = 7
	};

	/**
	 * Enum Stalker2.EAnimationThrowingType
	 */
	enum class EAnimationThrowingType : uint8_t
	{
		None            = 0,
		Weak            = 1,
		Strong          = 2,
		WeakOneHanded   = 3,
		StrongOneHanded = 4,
		MAX             = 5
	};

	/**
	 * Enum Stalker2.EFootType
	 */
	enum class EFootType : uint8_t
	{
		None           = 0,
		FrontRightFoot = 1,
		FrontLeftFoot  = 2,
		BackRightFoot  = 3,
		BackLeftFoot   = 4,
		MAX            = 5
	};

	/**
	 * Enum Stalker2.EBleedingStatusLog
	 */
	enum class EBleedingStatusLog : uint8_t
	{
		None           = 0,
		BleedingDamage = 1,
		MAX            = 2
	};

	/**
	 * Enum Stalker2.EDebugBulletLog
	 */
	enum class EDebugBulletLog : uint8_t
	{
		None                      = 0,
		BaseDamage                = 1,
		LastBulletDamage          = 2,
		DistanceScalingDamage     = 3,
		ArmorScalingDamage        = 4,
		BoneScalingDamage         = 5,
		BotsBaseDamage            = 6,
		BotsLastBulletDamage      = 7,
		BotsDistanceScalingDamage = 8,
		BotsArmorScalingDamage    = 9,
		BotsBoneScalingDamage     = 10,
		OnlyBaseDamage            = 11,
		OnlyLastBulletDamage      = 12,
		OnlyDistanceScalingDamage = 13,
		OnlyArmorScalingDamage    = 14,
		OnlyBoneScalingDamage     = 15,
		PlayerDamage              = 16,
		BotsDamage                = 17,
		Everything                = 18,
		MAX                       = 19
	};

	/**
	 * Enum Stalker2.EInteractFXType
	 */
	enum class EInteractFXType : uint8_t
	{
		None                      = 0,
		LadderIdle                = 1,
		LadderMovementHand        = 2,
		LadderMovementFoot        = 3,
		LadderMovementJump        = 4,
		LadderMovementFast        = 5,
		LadderStartInteractBottom = 6,
		LadderEndInteractTop      = 7,
		LadderStartInteractTop    = 8,
		LadderEndInteractBot      = 9,
		Ladder                    = 10,
		MAX                       = 11
	};

	/**
	 * Enum Stalker2.ELadderType
	 */
	enum class ELadderType : uint8_t
	{
		Blockout    = 0,
		Wood        = 1,
		MetalCorner = 2,
		MetalPipe   = 3,
		MetalClip   = 4,
		MAX         = 5
	};

	/**
	 * Enum Stalker2.EPathFollowingMode
	 */
	enum class EPathFollowingMode : uint8_t
	{
		None                     = 0,
		PreferAnimElseProcedural = 1,
		PreferProceduralElseAnim = 2,
		PreferProceduralElseStop = 3,
		GetCount                 = 4,
		MAX                      = 5
	};

	/**
	 * Enum Stalker2.EPostProcessParam
	 */
	enum class EPostProcessParam : uint8_t
	{
		Anomaly                           = 0,
		RadiationNoise                    = 1,
		RadiationSepia                    = 2,
		PoppyField                        = 3,
		SleepinessVignette                = 4,
		DamageBloodIntensity              = 5,
		BloodTopMaskIntensity             = 6,
		BloodRightMaskIntensity           = 7,
		BloodBottomMaskIntensity          = 8,
		BloodLeftMaskIntensity            = 9,
		PulsationIntensityMin             = 10,
		PulsationIntensityMax             = 11,
		LeakingBloodIntensity             = 12,
		LeakingBloodPulsationIntensityMin = 13,
		LeakingBloodPulsationIntensityMax = 14,
		RainIntensity                     = 15,
		GaussianBlur                      = 16,
		PsyFieldSepia                     = 17,
		ChemicalIntensity                 = 18,
		ExpulsionCompletion               = 19,
		CarouselIntensity                 = 20,
		BurnIntensity                     = 21,
		DrunknessIntensity                = 22,
		ConcussionGaussianBlur            = 23,
		GetCount                          = 24,
		MAX                               = 25
	};

	/**
	 * Enum Stalker2.EPostProcessEffectType
	 */
	enum class EPostProcessEffectType : uint8_t
	{
		None           = 0,
		DamageBlood    = 1,
		LeakingBlood   = 2,
		Radiation      = 3,
		Vignette       = 4,
		Rain           = 5,
		Blur           = 6,
		PsyField       = 7,
		Chemical       = 8,
		Expulsion      = 9,
		Burn           = 10,
		Drunkness      = 11,
		ConcussionBlur = 12,
		GetCount       = 13,
		MAX            = 14
	};

	/**
	 * Enum Stalker2.ECameraShakeEffectSubtype
	 */
	enum class ECameraShakeEffectSubtype : uint8_t
	{
		None         = 0,
		AddEffect    = 1,
		RemoveEffect = 2,
		GetCount     = 3,
		MAX          = 4
	};

	/**
	 * Enum Stalker2.ESoundEffectSubtype
	 */
	enum class ESoundEffectSubtype : uint8_t
	{
		None              = 0,
		SetState          = 1,
		SetSwitch         = 2,
		SetParameter      = 3,
		PlaySoundAttached = 4,
		GetCount          = 5,
		MAX               = 6
	};

	/**
	 * Enum Stalker2.EArmorScale
	 */
	enum class EArmorScale : uint8_t
	{
		LightArmor      = 0,
		MediumArmor     = 1,
		HeavyArmor      = 2,
		SuperHeavyArmor = 3,
		GetCount        = 4,
		MAX             = 5
	};

	/**
	 * Enum Stalker2.ERadiationPreset
	 */
	enum class ERadiationPreset : uint8_t
	{
		None     = 0,
		Light    = 1,
		Medium   = 2,
		Strong   = 3,
		Deadly   = 4,
		RadBlock = 5,
		Custom   = 6,
		GetCount = 7,
		MAX      = 8
	};

	/**
	 * Enum Stalker2.ERadiationInnerOffsetPreset
	 */
	enum class ERadiationInnerOffsetPreset : uint8_t
	{
		None     = 0,
		Half     = 1,
		Full     = 2,
		Custom   = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EStageUI
	 */
	enum class EStageUI : uint8_t
	{
		None                        = 0,
		Show                        = 1,
		Update                      = 2,
		Hide                        = 3,
		PermanentHide               = 4,
		ShowUpdate                  = 5,
		ShowHide                    = 6,
		ShowPermanentHide           = 7,
		UpdateHide                  = 8,
		UpdatePermanentHide         = 9,
		HidePermanentHide           = 10,
		ShowUpdateHide              = 11,
		ShowUpdatePermanentHide     = 12,
		ShowHidePermanentHide       = 13,
		UpdateHidePermanentHide     = 14,
		ShowUpdateHidePermanentHide = 15,
		GetCount                    = 16,
		MAX                         = 17
	};

	/**
	 * Enum Stalker2.EElementUI
	 */
	enum class EElementUI : uint8_t
	{
		None                        = 0,
		All                         = 1,
		AllWindows                  = 2,
		Ammo                        = 3,
		Clock                       = 4,
		CombinationLock             = 5,
		Compass                     = 6,
		CrossHair                   = 7,
		DeathScreen                 = 8,
		Dialog                      = 9,
		EquipmentSlots              = 10,
		FadeoutScreen               = 11,
		GrenadeCounter              = 12,
		HP                          = 13,
		Inventory                   = 14,
		InteractionProgressBar      = 15,
		InteractionPrompt           = 16,
		InteractionPromptParameters = 17,
		ItemsInInventoryContainer   = 18,
		ItemSelector                = 19,
		Menu                        = 20,
		Minimap                     = 21,
		MoneyInBag                  = 22,
		MoneyInTrader               = 23,
		Quests                      = 24,
		PickedItem                  = 25,
		Radiation                   = 26,
		RadiationBar                = 27,
		SleepMenu                   = 28,
		SlotsInInventoryContainer   = 29,
		SlotsInStorageContainer     = 30,
		SlotsInTraderContainer      = 31,
		StackSplittingWindow        = 32,
		Stamina                     = 33,
		Stats                       = 34,
		StatsIconBar                = 35,
		Stealth                     = 36,
		Storage                     = 37,
		Subtitles                   = 38,
		Teleport                    = 39,
		Trader                      = 40,
		Upgrade                     = 41,
		WeaponSelector              = 42,
		WeightInBag                 = 43,
		WorldMap                    = 44,
		GetCount                    = 45,
		MAX                         = 46
	};

	/**
	 * Enum Stalker2.EHUDElements
	 */
	enum class EHUDElements : uint8_t
	{
		None       = 0,
		HP         = 1,
		Stamina    = 2,
		Stealth    = 3,
		Minimap    = 4,
		Radiation  = 5,
		PDA        = 6,
		AmmoBar    = 7,
		Crosshair  = 8,
		StatsIcons = 9,
		BasicHUD   = 10,
		Everything = 11,
		GetCount   = 12,
		MAX        = 13
	};

	/**
	 * Enum Stalker2.EReflectionUpdatePriority
	 */
	enum class EReflectionUpdatePriority : uint8_t
	{
		High     = 0,
		Medium   = 1,
		Low      = 2,
		Minimal  = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.ESpeechState
	 */
	enum class ESpeechState : uint8_t
	{
		None   = 0,
		Load   = 1,
		Play   = 2,
		Pause  = 3,
		Finish = 4,
		MAX    = 5
	};

	/**
	 * Enum Stalker2.ELocalizationLanguage
	 */
	enum class ELocalizationLanguage : uint8_t
	{
		English  = 0,
		Russian  = 1,
		GetCount = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.EPathControlPointType
	 */
	enum class EPathControlPointType : uint8_t
	{
		Regular   = 0,
		Avoidance = 1,
		GetCount  = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EMainSoundClass
	 */
	enum class EMainSoundClass : uint8_t
	{
		All      = 0,
		Music    = 1,
		SFX      = 2,
		Ambient  = 3,
		Player   = 4,
		Weapon   = 5,
		UI       = 6,
		NPC      = 7,
		GetCount = 8,
		MAX      = 9
	};

	/**
	 * Enum Stalker2.ESecondarySoundClass
	 */
	enum class ESecondarySoundClass : uint8_t
	{
		HitMark          = 0,
		FTS              = 1,
		Equip            = 2,
		ImpactFrom       = 3,
		Breath           = 4,
		P_Gun            = 5,
		P_Fire           = 6,
		P_Tail           = 7,
		Frag             = 8,
		Impact           = 9,
		Handling         = 10,
		Gun              = 11,
		Fire             = 12,
		Tail             = 13,
		Human            = 14,
		Creature         = 15,
		Polter           = 16,
		Menu             = 17,
		Inventory        = 18,
		Calm             = 19,
		Fight            = 20,
		Suspicious       = 21,
		Anomaly          = 22,
		Drone            = 23,
		Destruct         = 24,
		Int_Props        = 25,
		Unassign         = 26,
		WeatherBioms     = 27,
		InternalsScatter = 28,
		Transition       = 29,
		Props            = 30,
		DayScatter       = 31,
		NightScatter     = 32,
		GetCount         = 33,
		MAX              = 34
	};

	/**
	 * Enum Stalker2.EGlobalVariableType
	 */
	enum class EGlobalVariableType : uint8_t
	{
		Int            = 0,
		Bool           = 1,
		SoftObjectPath = 2,
		GetCount       = 3,
		MAX            = 4
	};

	/**
	 * Enum Stalker2.EDayOfWeekFlag
	 */
	enum class EDayOfWeekFlag : uint8_t
	{
		Monday    = 0,
		Tuesday   = 1,
		Wednesday = 2,
		Thursday  = 3,
		Friday    = 4,
		Saturday  = 5,
		Sunday    = 6,
		MAX       = 7
	};

	/**
	 * Enum Stalker2.EInputController
	 */
	enum class EInputController : uint8_t
	{
		KeyboardAndMouse = 0,
		Dualshock4       = 1,
		XboxSeriesXPad   = 2,
		MAX              = 3
	};

	/**
	 * Enum Stalker2.EOverrideDialogTopic
	 */
	enum class EOverrideDialogTopic : uint8_t
	{
		None              = 0,
		Hello             = 1,
		Bye               = 2,
		Info              = 3,
		Defeat            = 4,
		DefeatComment     = 5,
		CallPlayerComment = 6,
		Resume            = 7,
		Forced            = 8,
		MAX               = 9
	};

	/**
	 * Enum Stalker2.ECollisionFormType
	 */
	enum class ECollisionFormType : uint8_t
	{
		None     = 0,
		Box      = 1,
		Sphere   = 2,
		Cylinder = 3,
		Custom   = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EEmissionState
	 */
	enum class EEmissionState : uint8_t
	{
		None     = 0,
		Idle     = 1,
		Active   = 2,
		Paused   = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EEmissionStage
	 */
	enum class EEmissionStage : uint8_t
	{
		None           = 0,
		BeforeTheStorm = 1,
		ActivateQuest  = 2,
		ShockWave      = 3,
		Active         = 4,
		AfterTheStorm  = 5,
		GetCount       = 6,
		MAX            = 7
	};

	/**
	 * Enum Stalker2.EWeather
	 */
	enum class EWeather : uint8_t
	{
		Clearly    = 0,
		Cloudy     = 1,
		Fogy       = 2,
		Stormy     = 3,
		LightRainy = 4,
		Rainy      = 5,
		Thundery   = 6,
		Emission   = 7,
		Anomaly    = 8,
		Count      = 9,
		MAX        = 10
	};

	/**
	 * Enum Stalker2.EFlashlightPriority
	 */
	enum class EFlashlightPriority : uint8_t
	{
		FlashlightWeaponAttachment = 0,
		AdditionalAttachment       = 1,
		Head                       = 2,
		Chest                      = 3,
		MAX                        = 4
	};

	/**
	 * Enum Stalker2.ECauseOfDeath
	 */
	enum class ECauseOfDeath : uint8_t
	{
		None            = 0,
		Range           = 1,
		Puncture        = 2,
		Bite            = 3,
		Explosive       = 4,
		Burn            = 5,
		ChemicalBurn    = 6,
		Emission        = 7,
		Zombification   = 8,
		PsyPhantomDeath = 9,
		HeadShot        = 10,
		KnifeCritical   = 11,
		MAX             = 12
	};

	/**
	 * Enum Stalker2.ERewardPreset
	 */
	enum class ERewardPreset : uint8_t
	{
		Auto        = 0,
		Newbie      = 1,
		Experienced = 2,
		Veteran     = 3,
		Master      = 4,
		MAX         = 5
	};

	/**
	 * Enum Stalker2.ERewardType
	 */
	enum class ERewardType : uint8_t
	{
		Artifact      = 0,
		Gun           = 1,
		Armor         = 2,
		Ammunition    = 3,
		Consumables   = 4,
		WeaponUpgrade = 5,
		Device        = 6,
		Random        = 7,
		MAX           = 8
	};

	/**
	 * Enum Stalker2.EDetectorMode
	 */
	enum class EDetectorMode : uint8_t
	{
		Inactive = 0,
		Active   = 1,
		MAX      = 2
	};

	/**
	 * Enum Stalker2.EItemCacheVisibilityType
	 */
	enum class EItemCacheVisibilityType : uint8_t
	{
		ClueRequired    = 0,
		AlwaysAvailable = 1,
		MAX             = 2
	};

	/**
	 * Enum Stalker2.EItemCacheType
	 */
	enum class EItemCacheType : uint8_t
	{
		Stash        = 0,
		PackOfItems  = 1,
		Destructible = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.EItemCacheGenerationType
	 */
	enum class EItemCacheGenerationType : uint8_t
	{
		Random           = 0,
		PlayerBasedStats = 1,
		Preset           = 2,
		Mixed            = 3,
		MAX              = 4
	};

	/**
	 * Enum Stalker2.EItemCacheRarity
	 */
	enum class EItemCacheRarity : uint8_t
	{
		Common   = 0,
		Uncommon = 1,
		Rare     = 2,
		Epic     = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EPlayerConditionType
	 */
	enum class EPlayerConditionType : uint8_t
	{
		None          = 0,
		CurrentHealth = 1,
		CurrentAmmo   = 2,
		ItemCount     = 3,
		MAX           = 4
	};

	/**
	 * Enum Stalker2.ERank
	 */
	enum class ERank : uint8_t
	{
		Newbie      = 0,
		Experienced = 1,
		Veteran     = 2,
		Master      = 3,
		GetCount    = 4,
		MAX         = 5
	};

	/**
	 * Enum Stalker2.EShotDistanceType
	 */
	enum class EShotDistanceType : uint8_t
	{
		Short    = 0,
		Medium   = 1,
		Long     = 2,
		GetCount = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.ESpawnSource
	 */
	enum class ESpawnSource : uint8_t
	{
		Quest = 0,
		ALife = 1,
		MAX   = 2
	};

	/**
	 * Enum Stalker2.ESpawnNodeExcludeType
	 */
	enum class ESpawnNodeExcludeType : uint8_t
	{
		SeamlessDespawn = 0,
		ForceDespawn    = 1,
		KillSpawnedObj  = 2,
		MAX             = 3
	};

	/**
	 * Enum Stalker2.EGSCPlatformType
	 */
	enum class EGSCPlatformType : uint8_t
	{
		PC                 = 0,
		Xbox               = 1,
		PlayStation        = 2,
		DefaultGamepad     = 3,
		AllConsolPlatforms = 4,
		MAX                = 5
	};

	/**
	 * Enum Stalker2.EBlockMovementType
	 */
	enum class EBlockMovementType : uint8_t
	{
		None            = 0,
		BlockDialog     = 1,
		BlockFastDialog = 2,
		MAX             = 3
	};

	/**
	 * Enum Stalker2.EVitalState
	 */
	enum class EVitalState : uint8_t
	{
		Alive  = 0,
		Dead   = 1,
		Zombie = 2,
		MAX    = 3
	};

	/**
	 * Enum Stalker2.EObjSkeletalMeshTraceBone
	 */
	enum class EObjSkeletalMeshTraceBone : uint8_t
	{
		None      = 0,
		Head      = 1,
		Chest     = 2,
		RArm      = 3,
		LArm      = 4,
		Pelvis    = 5,
		RKnee     = 6,
		LKnee     = 7,
		RLeg      = 8,
		LLeg      = 9,
		Arms      = 10,
		Knees     = 11,
		Legs      = 12,
		UpperBody = 13,
		LowerBody = 14,
		EveryBone = 15,
		GetCount  = 16,
		MAX       = 17
	};

	/**
	 * Enum Stalker2.EGrenadeDebugFlag
	 */
	enum class EGrenadeDebugFlag : uint8_t
	{
		None            = 0,
		DrawFragments   = 1,
		DrawInnerRadius = 2,
		DrawOuterRadius = 3,
		DrawTraces      = 4,
		DrawRadii       = 5,
		Everything      = 6,
		MAX             = 7
	};

	/**
	 * Enum Stalker2.EInputAxisType
	 */
	enum class EInputAxisType : uint8_t
	{
		None     = 0,
		XY       = 1,
		Rotate2D = 2,
		Jump     = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.ETriggerReact
	 */
	enum class ETriggerReact : uint8_t
	{
		ReactOnAlive = 0,
		ReactOnDead  = 1,
		ReactBoth    = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.ESortGroup
	 */
	enum class ESortGroup : uint8_t
	{
		None       = 0,
		Up         = 1,
		Down       = 2,
		Left       = 3,
		Right      = 4,
		HP         = 5,
		Bleeding   = 6,
		Radiations = 7,
		Stamina    = 8,
		Buff       = 9,
		Hunger     = 10,
		GetCount   = 11,
		MAX        = 12
	};

	/**
	 * Enum Stalker2.ENoteType
	 */
	enum class ENoteType : uint8_t
	{
		Flash    = 0,
		Data     = 1,
		Notes    = 2,
		Audio    = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EGaussWeaponDisplayState
	 */
	enum class EGaussWeaponDisplayState : uint8_t
	{
		Default   = 0,
		Discharge = 1,
		Charge    = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EMappingContext
	 */
	enum class EMappingContext : uint8_t
	{
		None            = 0,
		Exploration     = 1,
		Inventory       = 2,
		Trade           = 3,
		ItemSelector    = 4,
		Dialogue        = 5,
		DialogueOnTheGo = 6,
		Debug           = 7,
		PDA             = 8,
		Map             = 9,
		Journal         = 10,
		Note            = 11,
		Sleep           = 12,
		Ladder          = 13,
		NoInput         = 14,
		Upgrades        = 15,
		GetCount        = 16,
		MAX             = 17
	};

	/**
	 * Enum Stalker2.EInputMappingContextPriority
	 */
	enum class EInputMappingContextPriority : uint8_t
	{
		Lowest    = 0,
		Low       = 1,
		Medium    = 2,
		High      = 3,
		Exclusive = 4,
		MAX       = 5
	};

	/**
	 * Enum Stalker2.ECharacterType
	 */
	enum class ECharacterType : uint8_t
	{
		Player = 0,
		NPC    = 1,
		MAX    = 2
	};

	/**
	 * Enum Stalker2.ECinematicParameter
	 */
	enum class ECinematicParameter : uint8_t
	{
		None                          = 0,
		MovementSpeedMultiplier       = 1,
		FirstPersonHorizontalFOVValue = 2,
		ThirdPersonHorizontalFOVValue = 3,
		CameraViewPitchMin            = 4,
		CameraViewRollMin             = 5,
		CameraViewYawMin              = 6,
		CameraViewPitchMax            = 7,
		CameraViewRollMax             = 8,
		CameraViewYawMax              = 9,
		CameraViewPitch               = 10,
		CameraViewRoll                = 11,
		CameraViewYaw                 = 12,
		HudVisibility                 = 13,
		GetCount                      = 14,
		MAX                           = 15
	};

	/**
	 * Enum Stalker2.EBrokenGameDataFilter
	 */
	enum class EBrokenGameDataFilter : uint8_t
	{
		None              = 0,
		QuestPart         = 1,
		UnderDraftComment = 2,
		IsInWhiteList     = 3,
		GetCount          = 4,
		MAX               = 5
	};

	/**
	 * Enum Stalker2.EPostEffectProcessorType
	 */
	enum class EPostEffectProcessorType : uint8_t
	{
		None     = 0,
		Constant = 1,
		Lerp     = 2,
		Vital    = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EDuplicateResolveType
	 */
	enum class EDuplicateResolveType : uint8_t
	{
		KeepNew = 0,
		KeepOld = 1,
		KeepAll = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.ESaveType
	 */
	enum class ESaveType : uint8_t
	{
		Manual   = 0,
		Auto     = 1,
		Quick    = 2,
		Quest    = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.ECrosshairType
	 */
	enum class ECrosshairType : uint8_t
	{
		Cross    = 0,
		Circle   = 1,
		Point    = 2,
		Arc      = 3,
		GetCount = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.ESaveLoadResult
	 */
	enum class ESaveLoadResult : uint8_t
	{
		Success                    = 0,
		InvalidCampaign            = 1,
		NoFreeSaveSlots            = 2,
		CantOverwriteSave          = 3,
		DataSaveFailed             = 4,
		LoadFileDoesNotExist       = 5,
		LoadFileReadingFailed      = 6,
		CampaignsSaveFailed        = 7,
		CampaignsFileReadingFailed = 8,
		SaveDoesNotExist           = 9,
		SaveDeleteFailed           = 10,
		ThumbnailDeleteFailed      = 11,
		NoFreeCampaignSlots        = 12,
		NoQuickSavesToLoad         = 13,
		CantAutosave               = 14,
		SavingRestricted           = 15,
		GetCount                   = 16,
		MAX                        = 17
	};

	/**
	 * Enum Stalker2.ELoadingStep
	 */
	enum class ELoadingStep : uint8_t
	{
		LoadingStart           = 0,
		InitializingManagers   = 1,
		SpawningPlaceholders   = 2,
		LoadingModelsData      = 3,
		LoadingManagersData    = 4,
		LoadingNecessaryActors = 5,
		FinishingUp            = 6,
		Complete               = 7,
		GetCount               = 8,
		MAX                    = 9
	};

	/**
	 * Enum Stalker2.EObjSpawnStage
	 */
	enum class EObjSpawnStage : uint8_t
	{
		HasModel                = 0,
		HasBlueprintActor       = 1,
		MeshGenerationStarted   = 2,
		MeshGenerationFinished  = 3,
		ProcessedFlashlight     = 4,
		CheckingPlayerVisiblity = 5,
		FinishedSpawn           = 6,
		MAX                     = 7
	};

	/**
	 * Enum Stalker2.EPsyNPCType
	 */
	enum class EPsyNPCType : uint8_t
	{
		None       = 0,
		PsyNPC     = 1,
		PsyPhantom = 2,
		MAX        = 3
	};

	/**
	 * Enum Stalker2.EAgentRootMotionState
	 */
	enum class EAgentRootMotionState : uint8_t
	{
		None        = 0,
		Translation = 1,
		Rotation    = 2,
		Transform   = 3,
		MAX         = 4
	};

	/**
	 * Enum Stalker2.ESleepAvailability
	 */
	enum class ESleepAvailability : uint8_t
	{
		Available      = 0,
		NotTired       = 1,
		Emission       = 2,
		NegativeEffect = 3,
		InBattle       = 4,
		MAX            = 5
	};

	/**
	 * Enum Stalker2.EOverweightLock
	 */
	enum class EOverweightLock : uint8_t
	{
		NoLock  = 0,
		Partial = 1,
		Full    = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EFleeType
	 */
	enum class EFleeType : uint8_t
	{
		FleeFromCurrentLocation = 0,
		FleeFromCustomLocation  = 1,
		FleeFromPlayer          = 2,
		FleeFromNPC             = 3,
		MAX                     = 4
	};

	/**
	 * Enum Stalker2.EFocusType
	 */
	enum class EFocusType : uint8_t
	{
		NoFocus           = 0,
		Location          = 1,
		Direction         = 2,
		HackForceLocation = 3,
		MAX               = 4
	};

	/**
	 * Enum Stalker2.EGoalPriority
	 */
	enum class EGoalPriority : uint8_t
	{
		ALife                    = 0,
		HigherThanALife          = 1,
		Patrol                   = 2,
		EmissionContextualAction = 3,
		HealAlly                 = 4,
		Threat                   = 5,
		HigherThanThreat         = 6,
		Combat                   = 7,
		HigherThanCombat         = 8,
		SafeFromEmission         = 9,
		HigherThanEmission       = 10,
		Anomaly                  = 11,
		HigherThanAnomaly        = 12,
		AskMedkit                = 13,
		MAX                      = 14
	};

	/**
	 * Enum Stalker2.EGranularEnvelopeType
	 */
	enum class EGranularEnvelopeType : uint8_t
	{
		Rectangular         = 0,
		Triangle            = 1,
		DownwardTriangle    = 2,
		UpwardTriangle      = 3,
		ExponentialDecay    = 4,
		ExponentialIncrease = 5,
		Gaussian            = 6,
		Hanning             = 7,
		Lanczos             = 8,
		Cosine              = 9,
		CosineSquared       = 10,
		Welch               = 11,
		Blackman            = 12,
		BlackmanHarris      = 13,
		Count               = 14,
		MAX                 = 15
	};

	/**
	 * Enum Stalker2.EGranularSeekType
	 */
	enum class EGranularSeekType : uint8_t
	{
		FromBeginning       = 0,
		FromCurrentPosition = 1,
		FromEnd             = 2,
		Count               = 3,
		MAX                 = 4
	};

	/**
	 * Enum Stalker2.EAudioRoomPreset
	 */
	enum class EAudioRoomPreset : uint8_t
	{
		None                       = 0,
		Custom                     = 1,
		GlobalExterior             = 2,
		RoomWoodSmallClose         = 3,
		RoomWoodMediumClose        = 4,
		RoomWoodLargeClose         = 5,
		RoomWoodSmallHalfOpen      = 6,
		RoomWoodMediumHalfOpen     = 7,
		RoomWoodLargeHalfOpen      = 8,
		RoomWoodSmallOpen          = 9,
		RoomWoodMediumOpen         = 10,
		RoomWoodLargeOpen          = 11,
		RoomConcreteSmallClose     = 12,
		RoomConcreteMediumClose    = 13,
		RoomConcreteLargeClose     = 14,
		RoomConcreteSmallHalfOpen  = 15,
		RoomConcreteMediumHalfOpen = 16,
		RoomConcreteLargeHalfOpen  = 17,
		RoomConcreteSmallOpen      = 18,
		RoomConcreteMediumOpen     = 19,
		RoomConcreteLargeOpen      = 20,
		GetCount                   = 21,
		MAX                        = 22
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthBeatDivision
	 */
	enum class EGSCTimeSynthBeatDivision : uint8_t
	{
		One     = 0,
		Two     = 1,
		Four    = 2,
		Eight   = 3,
		Sixteen = 4,
		Count   = 5,
		MAX     = 6
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthFFTSize
	 */
	enum class EGSCTimeSynthFFTSize : uint8_t
	{
		Min    = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		MAX    = 4
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthEventClipQuantization
	 */
	enum class EGSCTimeSynthEventClipQuantization : uint8_t
	{
		Global               = 0,
		None                 = 1,
		Bars8                = 2,
		Bars4                = 3,
		Bars2                = 4,
		Bar                  = 5,
		HalfNote             = 6,
		HalfNoteTriplet      = 7,
		QuarterNote          = 8,
		QuarterNoteTriplet   = 9,
		EighthNote           = 10,
		EighthNoteTriplet    = 11,
		SixteenthNote        = 12,
		SixteenthNoteTriplet = 13,
		ThirtySecondNote     = 14,
		Count                = 15,
		MAX                  = 16
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthFilter
	 */
	enum class EGSCTimeSynthFilter : uint8_t
	{
		FilterA = 0,
		FilterB = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthFilterType
	 */
	enum class EGSCTimeSynthFilterType : uint8_t
	{
		LowPass  = 0,
		HighPass = 1,
		BandPass = 2,
		BandStop = 3,
		Count    = 4,
		MAX      = 5
	};

	/**
	 * Enum Stalker2.EGSCTimeSynthEnvelopeFollowerPeakMode
	 */
	enum class EGSCTimeSynthEnvelopeFollowerPeakMode : uint8_t
	{
		MeanSquared     = 0,
		RootMeanSquared = 1,
		Peak            = 2,
		Count           = 3,
		MAX             = 4
	};

	/**
	 * Enum Stalker2.EGuardType
	 */
	enum class EGuardType : uint8_t
	{
		GuardTarget = 0,
		GuardPlayer = 1,
		GuardZone   = 2,
		MAX         = 3
	};

	/**
	 * Enum Stalker2.EHintHoverActionType
	 */
	enum class EHintHoverActionType : uint8_t
	{
		None             = 0,
		ChangeVisibility = 1,
		ChangeColor      = 2,
		MAX              = 3
	};

	/**
	 * Enum Stalker2.StyleManagerActionType
	 */
	enum class EStyleManagerActionType : uint8_t
	{
		StyleManagerActionTypeChangeOnlyColour           = 0,
		StyleManagerActionTypeChangeIcon                 = 1,
		StyleManagerActionTypeChangeIconAndColour        = 2,
		StyleManagerActionTypeStyleManagerActionType_MAX = 3
	};

	/**
	 * Enum Stalker2.EDpadNavigation
	 */
	enum class EDpadNavigation : uint8_t
	{
		Left  = 0,
		Up    = 1,
		Right = 2,
		Down  = 3,
		MAX   = 4
	};

	/**
	 * Enum Stalker2.EMidleDisplayType
	 */
	enum class EMidleDisplayType : uint8_t
	{
		None     = 0,
		OnlyText = 1,
		Weapons  = 2,
		Grenade  = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EItemSelectorSlotStateType
	 */
	enum class EItemSelectorSlotStateType : uint8_t
	{
		None     = 0,
		Hovered  = 1,
		Selected = 2,
		MAX      = 3
	};

	/**
	 * Enum Stalker2.ELayerSlotType
	 */
	enum class ELayerSlotType : uint8_t
	{
		Defoult = 0,
		Grenade = 1,
		Weapon  = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.ETracePhase
	 */
	enum class ETracePhase : uint8_t
	{
		HorizontalTracePhase   = 0,
		VerticalUpTracePhase   = 1,
		VerticalDownTracePhase = 2,
		VerticalTraces         = 3,
		MAX                    = 4
	};

	/**
	 * Enum Stalker2.EPlayerLandmarkType
	 */
	enum class EPlayerLandmarkType : uint8_t
	{
		None      = 0,
		Tracked   = 1,
		Danger    = 2,
		Radiation = 3,
		Habar     = 4,
		Anomaly   = 5,
		GetCount  = 6,
		MAX       = 7
	};

	/**
	 * Enum Stalker2.ETextListType
	 */
	enum class ETextListType : uint8_t
	{
		None    = 0,
		Point   = 1,
		Numeric = 2,
		MAX     = 3
	};

	/**
	 * Enum Stalker2.EBreathState
	 */
	enum class EBreathState : uint8_t
	{
		Inhale = 0,
		Exhale = 1,
		Hold   = 2,
		MAX    = 3
	};

	/**
	 * Enum Stalker2.EAdvanceLocationResult
	 */
	enum class EAdvanceLocationResult : uint8_t
	{
		Success       = 0,
		Failed        = 1,
		ReachedTarget = 2,
		MAX           = 3
	};

	/**
	 * Enum Stalker2.EPathBuilderPathType
	 */
	enum class EPathBuilderPathType : uint8_t
	{
		FewCircles     = 0,
		Circle         = 1,
		ExpensiveActor = 2,
		MAX            = 3
	};

	/**
	 * Enum Stalker2.EMutantAttackType
	 */
	enum class EMutantAttackType : uint8_t
	{
		None       = 0,
		ClawAttack = 1,
		RunAttack  = 2,
		JumpAttack = 3,
		MAX        = 4
	};

	/**
	 * Enum Stalker2.EAttackDirection
	 */
	enum class EAttackDirection : uint8_t
	{
		Any   = 0,
		Left  = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum Stalker2.ENotificationQuestWidgetType
	 */
	enum class ENotificationQuestWidgetType : uint8_t
	{
		QuestStart  = 0,
		QuestFinish = 1,
		QuestFail   = 2,
		QuestCancel = 3,
		MAX         = 4
	};

	/**
	 * Enum Stalker2.EEmissionAction
	 */
	enum class EEmissionAction : uint8_t
	{
		EmissionReaction = 0,
		MoveToShelter    = 1,
		WaitForShelter   = 2,
		IdleNoShelter    = 3,
		MAX              = 4
	};

	/**
	 * Enum Stalker2.EPDAPageType
	 */
	enum class EPDAPageType : uint8_t
	{
		Map       = 0,
		Journal   = 1,
		Notes     = 2,
		Statistic = 3,
		Bestiary  = 4,
		Upgrades  = 5,
		MAX       = 6
	};

	/**
	 * Enum Stalker2.EActionType
	 */
	enum class EActionType : uint8_t
	{
		HideMainItem               = 0,
		EquipMainItem              = 1,
		HideSupportItem            = 2,
		EquipSupportItem           = 3,
		Interact                   = 4,
		UseMainItem                = 5,
		ReloadWeapon               = 6,
		ChangeFireType             = 7,
		HandleAimInput             = 8,
		MeleeAttack                = 9,
		ThrowItem                  = 10,
		ChangeAmmoType             = 11,
		UnjamWeapon                = 12,
		Fall                       = 13,
		Lean                       = 14,
		Crouch                     = 15,
		Walk                       = 16,
		Sprint                     = 17,
		Run                        = 18,
		Climb                      = 19,
		PickUpItem                 = 20,
		UseConsumableItem          = 21,
		AutoCover                  = 22,
		RemoveLeftHandFromMainItem = 23,
		ReturnLeftHandOnMainItem   = 24,
		KnockDown                  = 25,
		GetCount                   = 26,
		MAX                        = 27
	};

	/**
	 * Enum Stalker2.EQuestNodeState
	 */
	enum class EQuestNodeState : uint8_t
	{
		None      = 0,
		Activated = 1,
		Excluded  = 2,
		MAX       = 3
	};

	/**
	 * Enum Stalker2.EQuestAnimationType
	 */
	enum class EQuestAnimationType : uint8_t
	{
		None     = 0,
		AfterPDA = 1,
		Show     = 2,
		Hidde    = 3,
		MAX      = 4
	};

	/**
	 * Enum Stalker2.EThreatSensor
	 */
	enum class EThreatSensor : uint8_t
	{
		None              = 0,
		Vision            = 1,
		Hearing           = 2,
		Smell             = 3,
		MovementDetection = 4,
		MAX               = 5
	};

	/**
	 * Enum Stalker2.EAIThreatState
	 */
	enum class EAIThreatState : uint8_t
	{
		None            = 0,
		Peaceful        = 1,
		SearchForThreat = 2,
		Combat          = 3,
		MAX             = 4
	};

	/**
	 * Enum Stalker2.ERelationLevel
	 */
	enum class ERelationLevel : uint8_t
	{
		Enemy        = 0,
		Disaffection = 1,
		Neutral      = 2,
		Friend       = 3,
		Self         = 4,
		Count        = 5,
		MAX          = 6
	};

	/**
	 * Enum Stalker2.ERelationRequests
	 */
	enum class ERelationRequests : uint8_t
	{
		Damage = 0,
		Kill   = 1,
		Count  = 2,
		MAX    = 3
	};

	/**
	 * Enum Stalker2.EDialogEventType
	 */
	enum class EDialogEventType : uint8_t
	{
		None                                              = 0,
		Combat_HitByMutant                                = 1,
		Death                                             = 2,
		Combat_EnemyDetected                              = 3,
		Combat_EnemyLost                                  = 4,
		Alert_Suspect                                     = 5,
		Alert_FriendDeadBodyDetected                      = 6,
		Corpse_Overweight                                 = 7,
		Interact_Effects                                  = 8,
		Interact_DropCorpse                               = 9,
		Interact_HideWeapon                               = 10,
		Interact_SpeakToLeader                            = 11,
		Emission_LeaderStart                              = 12,
		Emission_LeaderEnd                                = 13,
		DefeatComment                                     = 14,
		Combat_Wounded_Knocked                            = 15,
		Combat_Wounded_GoingToHeal                        = 16,
		Combat_Wounded_HealingGratitude                   = 17,
		Combat_EnemySearch                                = 18,
		Combat_EnemyFound                                 = 19,
		Combat_SearchEnd                                  = 20,
		Combat_Threats_EnemySearch                        = 21,
		Combat_Threats_AlertedSearch                      = 22,
		Combat_Threats_AlertedSearchEnd                   = 23,
		Combat_Start                                      = 24,
		Combat_Over                                       = 25,
		Combat_EnemyRetreat                               = 26,
		Combat_SelfRetreat                                = 27,
		Combat_Action_Cover                               = 28,
		Combat_Action_Move                                = 29,
		Combat_Action_Flank                               = 30,
		Combat_Action_Detour                              = 31,
		Combat_Action_EnemyHit                            = 32,
		Combat_Action_FriendlyHit                         = 33,
		Combat_Action_FriendlyFire                        = 34,
		Combat_Action_Reload                              = 35,
		Combat_Action_FireSupression                      = 36,
		Combat_Action_FriendlyGrenade                     = 37,
		Combat_Action_EnemyGrenade                        = 38,
		Combat_Action_FriendlyDead                        = 39,
		Combat_Action_EnemyDead                           = 40,
		Peaceful_CorpseHubComment                         = 41,
		Peaceful_DisabledInteractCorpse                   = 42,
		Peaceful_DropCorpse                               = 43,
		Peaceful_PickUpCorpse                             = 44,
		Peaceful_LootingEnemyCorpse                       = 45,
		Peaceful_LootingFriendlyCorpse                    = 46,
		CallPlayer                                        = 47,
		Busy_Threat                                       = 48,
		Busy_Combat                                       = 49,
		Busy_QuestAction                                  = 50,
		Busy_ContextualAction                             = 51,
		Busy_DangerField                                  = 52,
		Busy_OutOfShelter                                 = 53,
		Busy_DisabledInteract                             = 54,
		Busy_Bleeding                                     = 55,
		Busy_Radiation                                    = 56,
		Busy_Drunkness                                    = 57,
		Busy_NoTopics                                     = 58,
		Busy_NoTopicsSquadMember                          = 59,
		Reaction_WeatherChange                            = 60,
		EmissionStart_GenericReaction_SingleAgent         = 61,
		EmissionStart_GenericReactionInCombat_SingleAgent = 62,
		EmissionStart_StayInShelter_SingleAgent           = 63,
		EmissionStart_FleeFromCombat_SingleAgent          = 64,
		EmissionStart_MoveToShelter_SquadLeader           = 65,
		EmissionDanger_OutOfShelter                       = 66,
		EmissionActive_InShelter                          = 67,
		EmissionEnd_SingleAgent                           = 68,
		EmissionEnd_SquadLeader                           = 69,
		Count                                             = 70,
		MAX                                               = 71
	};

	/**
	 * Enum Stalker2.ESpeechQueryPriority
	 */
	enum class ESpeechQueryPriority : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Max    = 3,
		Count  = 4,
		None   = 5
	};

	/**
	 * Enum Stalker2.EStayBehaviorType
	 */
	enum class EStayBehaviorType : uint8_t
	{
		Animation        = 0,
		ContextualAction = 1,
		MAX              = 2
	};

	/**
	 * Enum Stalker2.ESubgraphBlendTypes
	 */
	enum class ESubgraphBlendTypes : uint8_t
	{
		None                    = 0,
		WeaponHide              = 1,
		WeaponShow              = 2,
		DetectorHide            = 3,
		DetectorShow            = 4,
		OneHandedConsumableShow = 5,
		OneHandedConsumableHide = 6,
		TwoHandedConsumableHide = 7,
		TwoHandedConsumableShow = 8,
		MAX                     = 9
	};

	/**
	 * Enum Stalker2.EImageFormats
	 */
	enum class EImageFormats : uint8_t
	{
		JPG  = 0,
		PNG  = 1,
		BMP  = 2,
		ICO  = 3,
		EXR  = 4,
		ICNS = 5,
		MAX  = 6
	};

	/**
	 * Enum Stalker2.EThreatActionType
	 */
	enum class EThreatActionType : uint8_t
	{
		TurnHead       = 0,
		MoveToLocation = 1,
		CallAllies     = 2,
		SearchEnemy    = 3,
		Count          = 4,
		MAX            = 5
	};

	/**
	 * Enum Stalker2.EThreatType
	 */
	enum class EThreatType : uint8_t
	{
		None              = 0,
		Corpse            = 1,
		Hit               = 2,
		Sound             = 3,
		UnidentifiedEnemy = 4,
		IdentifiedEnemy   = 5,
		Explosive         = 6,
		MAX               = 7
	};

	/**
	 * Enum Stalker2.EToggleType
	 */
	enum class EToggleType : uint8_t
	{
		Open  = 0,
		Close = 1,
		MAX   = 2
	};

	/**
	 * Enum Stalker2.EOpasityState
	 */
	enum class EOpasityState : uint8_t
	{
		None       = 0,
		FullFast   = 1,
		FullToHalf = 2,
		NoneToHalf = 3,
		FullToNone = 4,
		MAX        = 5
	};

	/**
	 * Enum Stalker2.EPreviousStateMode
	 */
	enum class EPreviousStateMode : uint8_t
	{
		None         = 0,
		SavePrevious = 1,
		UsePrevious  = 2,
		MAX          = 3
	};

	/**
	 * Enum Stalker2.EWidgetNameEx
	 */
	enum class EWidgetNameEx : uint8_t
	{
		None          = 0,
		MainMenu      = 1,
		Inventory     = 2,
		Interact      = 3,
		DebugHUD      = 4,
		ItemSelector  = 5,
		FastDialog    = 6,
		Dialog        = 7,
		Subtitle      = 8,
		PDA           = 9,
		FadeView      = 10,
		GamePauseMenu = 11,
		SleepView     = 12,
		Trade         = 13,
		Upgrade       = 14,
		HUD           = 15,
		Count         = 16,
		MAX           = 17
	};

	/**
	 * Enum Stalker2.EUISound
	 */
	enum class EUISound : uint8_t
	{
		OpenInventory   = 0,
		CloseInventory  = 1,
		AttachmentEquip = 2,
		ArmorEquip      = 3,
		WeaponEquip     = 4,
		DetectorEquip   = 5,
		ClickSound      = 6,
		Count           = 7,
		MAX             = 8
	};

	/**
	 * Enum Stalker2.ECloseType
	 */
	enum class ECloseType : uint8_t
	{
		OnlyPriority                 = 0,
		IgnoreClose                  = 1,
		PriorityAndIgnoreCloseByName = 2,
		MAX                          = 3
	};

	/**
	 * Enum Stalker2.EWanderingLightsSimulationState
	 */
	enum class EWanderingLightsSimulationState : uint8_t
	{
		Disabled     = 0,
		WakingUp     = 1,
		Idle         = 2,
		HasTarget    = 3,
		ShuttingDown = 4,
		MAX          = 5
	};

	/**
	 * Enum Stalker2.ESpawnMarkerType
	 */
	enum class ESpawnMarkerType : uint8_t
	{
		OnStartGame = 0,
		Action      = 1,
		Triger      = 2,
		MAX         = 3
	};

	/**
	 * Enum Stalker2.EWorldMapTooltipType
	 */
	enum class EWorldMapTooltipType : uint8_t
	{
		Default        = 0,
		NPC            = 1,
		QuestMain      = 2,
		QuestSecondary = 3,
		Hub            = 4,
		Storeg         = 5,
		Anomaly        = 6,
		MAX            = 7
	};

	/**
	 * Enum Stalker2.EZombificationType
	 */
	enum class EZombificationType : uint8_t
	{
		AliveHuman  = 0,
		CorpseHuman = 1,
		MAX         = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Stalker2.FactionSelector
	 * Size -> 0x0060
	 */
	struct FFactionSelector
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AllowedFactionsFilter[0x50];                             // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Stalker2.FactionSelectorArray
	 * Size -> 0x0010
	 */
	struct FFactionSelectorArray
	{
	public:
		TArray<struct FFactionSelector>                            Factions;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.FireTypeSlotSettings
	 * Size -> 0x0008
	 */
	struct FFireTypeSlotSettings
	{
	public:
		class UTexture*                                            BackgroundTexture;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.DirectionBlendData
	 * Size -> 0x0024
	 */
	struct FDirectionBlendData
	{
	public:
		float                                                      Forward;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Backward;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Left;                                                    // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardLeft;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardRight;                                            // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackwardLeft;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackwardRight;                                           // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInterpSpeed;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MovementPlayRateStructure
	 * Size -> 0x000C
	 */
	struct FMovementPlayRateStructure
	{
	public:
		float                                                      ForwardValue;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightValue;                                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimLocomotionData
	 * Size -> 0x0098
	 */
	struct FAnimLocomotionData
	{
	public:
		float                                                      Velocity;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleDirection;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampedDirection;                                        // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToBeLeftHanded;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BPDirection;                                             // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLeftHanded;                                           // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDirections                                                Direction;                                               // 0x0012(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUXR[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectionBlendData                                 DirectionBlendParams;                                    // 0x0014(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMovementPlayRateStructure                          MovementPlayRate;                                        // 0x0038(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6F7[0x54];                                  // 0x0044(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimHitData
	 * Size -> 0x0048
	 */
	struct FAnimHitData
	{
	public:
		int32_t                                                    CurrentHitAnimation;                                     // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstHitAnimationPlayRate;                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstHitAnimationDamageDirection;                        // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondHitAnimationPlayRate;                              // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondHitAnimationDamageDirection;                       // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeathDirection;                                          // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeathAnimationType                                        DeathAnimationType;                                      // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKnockedDown;                                            // 0x0019(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P08V[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KnockDownDirection;                                      // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            KnockDownRotation;                                       // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         KnockDownRotateCurve;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9K6[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimMutantStateData
	 * Size -> 0x0007
	 */
	struct FAnimMutantStateData
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoving;                                                 // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSprinting;                                              // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandToSit;                                             // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWalking;                                                // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAwareness                                                 Awareness;                                               // 0x0006(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimMutantCollectionsData
	 * Size -> 0x0008
	 */
	struct FAnimMutantCollectionsData
	{
	public:
		class UMutantAnimCollection*                               AnimCollection;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.BaseLegIKData
	 * Size -> 0x0038
	 */
	struct FBaseLegIKData
	{
	public:
		unsigned char                                              UnknownData_LFQX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IKPredictionVectorLengthWhenGoStraightOrUp;              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IKPredictionVectorLengthWhenGoDown;                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IKLegsInterpolationSpeed;                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowForceStopFoot;                                     // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IBF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PelvisShifting;                                          // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BP9[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.LegIKData
	 * Size -> 0x00B8
	 */
	struct FLegIKData
	{
	public:
		struct FRotator                                            FootRotation;                                            // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             EffectorShift;                                           // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FootName;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FootSocketName;                                          // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FootSpeedCurveName;                                      // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52T2[0x70];                                  // 0x0048(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.FourLegIKData
	 * Size -> 0x0350 (FullSize[0x0388] - InheritedSize[0x0038])
	 */
	struct FFourLegIKData : public FBaseLegIKData
	{
	public:
		class FName                                                FirstSpineBoneName;                                      // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LastSpineBoneName;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngleForSpineShift;                                   // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCapsulePitch;                                         // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCapsuleRoll;                                          // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSkeletonPitch;                                        // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSkeletonRoll;                                         // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZII[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLegIKData                                          FrontLeftFootIKData;                                     // 0x0060(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FLegIKData                                          FrontRightFootIKData;                                    // 0x0118(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FLegIKData                                          BackLeftFootIKData;                                      // 0x01D0(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FLegIKData                                          BackRightFootIKData;                                     // 0x0288(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ForwardLegsShifting;                                     // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RootBoneRotation;                                        // 0x0358(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYQG[0x18];                                  // 0x0370(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.TwoLegIKData
	 * Size -> 0x0170 (FullSize[0x01A8] - InheritedSize[0x0038])
	 */
	struct FTwoLegIKData : public FBaseLegIKData
	{
	public:
		struct FLegIKData                                          LeftFootIKData;                                          // 0x0038(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FLegIKData                                          RightFootIKData;                                         // 0x00F0(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimHumanFaceData
	 * Size -> 0x0018
	 */
	struct FAnimHumanFaceData
	{
	public:
		class USkeletalMeshComponent*                              FaceMeshComponent;                                       // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              CharacterSkeletalMeshComponent;                          // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimationHeadTypes                                        HeadType;                                                // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQG2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimHumanAimingData
	 * Size -> 0x0001
	 */
	struct FAnimHumanAimingData
	{
	public:
		bool                                                       bIsAiming;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimHumanWeaponData
	 * Size -> 0x0010
	 */
	struct FAnimHumanWeaponData
	{
	public:
		bool                                                       bHasWeaponInHands;                                       // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimHumanAimingData                                AimingData;                                              // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NE40[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              WeaponMesh;                                              // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimWoundedData
	 * Size -> 0x0048
	 */
	struct FAnimWoundedData
	{
	public:
		bool                                                       bWounded;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWoundedAnimState                                          WoundedState;                                            // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L70P[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SlopeCorrectionDelta;                                    // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EnterRagdollTime;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeTestSweepUpOffset;                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeTestSweepDownOffset;                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeTestSweepSphereRadius;                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          SlopeTestCollisionChannel;                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBCE[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimHumanCollectionsData
	 * Size -> 0x0018
	 */
	struct FAnimHumanCollectionsData
	{
	public:
		class UHumanDefaultAnimCollection*                         DefaultAnimCollection;                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHumanAnimCollection*                                AnimCollection;                                          // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHumanFirearmAnimCollection*                         FirearmAnimCollection;                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimHumanStateData
	 * Size -> 0x0014
	 */
	struct FAnimHumanStateData
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoving;                                                 // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWalking;                                                // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouching;                                              // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSprinting;                                              // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInAir;                                                  // 0x0006(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMovingForward;                                          // 0x0007(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveGaitValue;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicGaitValue;                                        // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimationStates                                           CurveGaitState;                                          // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMovementInput;                                       // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1G0G[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimHandIKData
	 * Size -> 0x0038
	 */
	struct FAnimHandIKData
	{
	public:
		float                                                      ALPHA;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         BlendArgs;                                               // 0x0008(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimTwoHandsIKData
	 * Size -> 0x0078
	 */
	struct FAnimTwoHandsIKData
	{
	public:
		unsigned char                                              UnknownData_EREM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimHandIKData                                     LeftHand;                                                // 0x0008(0x0038) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimHandIKData                                     RightHand;                                               // 0x0040(0x0038) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.BodyPartRestriction
	 * Size -> 0x000C
	 */
	struct FBodyPartRestriction
	{
	public:
		float                                                      RotationLimit;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationSpeed;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RotationBlocked;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITHX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.RestrictionsConfig
	 * Size -> 0x0140
	 */
	struct FRestrictionsConfig
	{
	public:
		TMap<ERotationPartType, struct FBodyPartRestriction>       DefaultHorizontalRestrictions;                           // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<ERotationPartType, struct FBodyPartRestriction>       DefaultVerticalRestrictions;                             // 0x0050(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<ERotationPartType, struct FBodyPartRestriction>       CombatHorizontalRestrictions;                            // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<ERotationPartType, struct FBodyPartRestriction>       CombatVerticalRestrictions;                              // 0x00F0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.RotationBodyPart
	 * Size -> 0x0018
	 */
	struct FRotationBodyPart
	{
	public:
		ERotationPartType                                          BodyType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTSV[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rotation;                                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinalRotation;                                           // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimHumanLookAtData
	 * Size -> 0x0448
	 */
	struct FAnimHumanLookAtData
	{
	public:
		struct FRestrictionsConfig                                 RestrictionsConfig;                                      // 0x0000(0x0140) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHAX[0xA0];                                  // 0x0140(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRotationBodyPart>                           HorizontalBodyParts;                                     // 0x01E0(0x0010) BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRotationBodyPart>                           VerticalBodyParts;                                       // 0x01F0(0x0010) BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYVI[0x238];                                 // 0x0200(0x0238) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsRotating;                                             // 0x0438(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRotatingFullBody;                                     // 0x0439(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9HN[0x2];                                   // 0x043A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FullBodyRotationRate;                                    // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullBodyRotationTimeGap;                                 // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CURC[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerAimingData
	 * Size -> 0x0014
	 */
	struct FAnimPlayerAimingData
	{
	public:
		bool                                                       bAiming;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3AL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimInFrame;                                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOutFrame;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimAlpha;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimationAimState                                         AimState;                                                // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN88[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerThrowableData
	 * Size -> 0x0001
	 */
	struct FAnimPlayerThrowableData
	{
	public:
		ELongIdleType                                              LongIdleType;                                            // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerFirearmData
	 * Size -> 0x000C
	 */
	struct FAnimPlayerFirearmData
	{
	public:
		EWeaponIdleType                                            IdleType;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShutterState                                              ShutterState;                                            // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsJammed;                                                // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDON[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    JamIdleIndex;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTwinMagazineShifted;                                    // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponCustomAdditionalIdle                                AdditionalIdle;                                          // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFireType                                                  FireTypes;                                               // 0x000A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GP5[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerWeaponData
	 * Size -> 0x0048
	 */
	struct FAnimPlayerWeaponData
	{
	public:
		bool                                                       bHasWeaponInHands;                                       // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZEI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              WeaponMesh;                                              // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              AttachMesh;                                              // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimPlayerAimingData                               AimingData;                                              // 0x0018(0x0014) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimPlayerThrowableData                            ThrowableData;                                           // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2374[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimPlayerFirearmData                              FirearmData;                                             // 0x0030(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZDA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StealthKillSnapCurve;                                    // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerCameraData
	 * Size -> 0x0070
	 */
	struct FAnimPlayerCameraData
	{
	public:
		struct FTransform                                          TargetCameraTransform;                                   // 0x0000(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraTransformAlpha;                                    // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampedControlPitch;                                     // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L3E[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerTransitionData
	 * Size -> 0x0005
	 */
	struct FAnimPlayerTransitionData
	{
	public:
		bool                                                       bHasVelocity;                                            // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMovingUp;                                               // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMovingDown;                                             // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReadyForLanding;                                        // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterSprint;                                         // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerStateData
	 * Size -> 0x0018
	 */
	struct FAnimPlayerStateData
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoving;                                                 // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSprinting;                                              // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInAir;                                                  // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWalking;                                                // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouching;                                              // 0x0006(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLowCrouching;                                           // 0x0007(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClimbing;                                               // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IRY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveGaitValue;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicGaitValue;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimationStates                                           EnumGaitState;                                           // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6N5T[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.TransitionAnimations
	 * Size -> 0x0010
	 */
	struct FTransitionAnimations
	{
	public:
		class UAnimSequence*                                       To;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       From;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SimpleMovingAnimations
	 * Size -> 0x0040
	 */
	struct FSimpleMovingAnimations
	{
	public:
		class UAnimSequence*                                       Forward;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Backward;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Left;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Right;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ForwardLeft;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ForwardRight;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BackwardLeft;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BackwardRight;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerLocomotionAnimations
	 * Size -> 0x0260
	 */
	struct FPlayerLocomotionAnimations
	{
	public:
		class UAnimSequence*                                       StandIdleInHip;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CrouchIdleInHip;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LowCrouchIdleInHip;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransitionAnimations                               StandToCrouch;                                           // 0x0018(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTransitionAnimations                               CrouchToLowCrouch;                                       // 0x0028(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTransitionAnimations                               StandToLowCrouch;                                        // 0x0038(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Sprint;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Run;                                                     // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Walk;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         WalkAim;                                                 // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Crouch;                                                  // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         CrouchAim;                                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         LowCrouch;                                               // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         LowCrouchAim;                                            // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             Running;                                                 // 0x0088(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             Walking;                                                 // 0x00C8(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             WalkingAim;                                              // 0x0108(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             Crouching;                                               // 0x0148(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             CrouchingAim;                                            // 0x0188(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             LowCrouching;                                            // 0x01C8(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMovingAnimations                             LowCrouchingAim;                                         // 0x0208(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpStart;                                               // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpLoop;                                                // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpEnd;                                                 // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerLeansAnimations
	 * Size -> 0x0020
	 */
	struct FPlayerLeansAnimations
	{
	public:
		class UAnimSequence*                                       LeanLeftIn;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanLeftOut;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightIn;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightOut;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerExternalAnimations
	 * Size -> 0x04E8
	 */
	struct FPlayerExternalAnimations
	{
	public:
		struct FPlayerLocomotionAnimations                         UpperBody;                                               // 0x0000(0x0260) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPlayerLocomotionAnimations                         LowerBody;                                               // 0x0260(0x0260) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LookVertical;                                            // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerLeansAnimations                              Leans;                                                   // 0x04C8(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerCollectionsData
	 * Size -> 0x0590
	 */
	struct FAnimPlayerCollectionsData
	{
	public:
		class UPlayerDefaultAnimCollection*                        DefaultAnimCollection;                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerAnimCollection*                               AnimCollection;                                          // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerFirearmAnimCollection*                        FirearmAnimCollection;                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerThrowableItemAnimCollection*                  ThrowableAnimCollection;                                 // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerKnifeAnimCollection*                          KnifeAnimCollection;                                     // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerPDAAnimCollection*                            PDAAnimCollection;                                       // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItemAnimCollection*                                 ItemAnimCollection;                                      // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachAnimCollection*                         AttachAnimCollection;                                    // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerDetectorAnimCollection*                       DetectorAnimCollection;                                  // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerExternalAnimations                           ExternalAnimations;                                      // 0x0048(0x04E8) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWeaponSubgraphToggle;                                   // 0x0530(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6CQ[0x3];                                   // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeaponSubgraphBlend;                                     // 0x0534(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdditionalSubgraphToggle;                               // 0x0538(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1EG[0x3];                                   // 0x0539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditionalSubgraphBlend;                                 // 0x053C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ESubgraphBlendTypes, float>                           SubgraphDefaultBlendTime;                                // 0x0540(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerIdleSwayData
	 * Size -> 0x00E8
	 */
	struct FAnimPlayerIdleSwayData
	{
	public:
		class UCurveVector*                                        BaseCurve;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        StaminaAmplitudeCurve;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         StaminaCycleTimeCurve;                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialDelay;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandCycleTimeModifier;                                  // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandAmplitudeXModifier;                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandAmplitudeYModifier;                                 // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchCycleTimeModifier;                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchAmplitudeXModifier;                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchAmplitudeYModifier;                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveCycleTimeModifier;                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveAmplitudeXModifier;                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveAmplitudeYModifier;                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ALPHA;                                                   // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KR5A[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        ActiveCurve;                                             // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeed;                                             // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XF3[0x7C];                                  // 0x006C(0x007C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerClimbingData
	 * Size -> 0x00F0
	 */
	struct FAnimPlayerClimbingData
	{
	public:
		bool                                                       bAnimClimbStarted;                                       // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimClimbState                                            AnimClimbState;                                          // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFSD[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbUpSpeed;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbDownSpeed;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnterDownSpeed;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnterUpSpeed;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExitUpSpeed;                                             // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraYaw;                                               // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraPitch;                                             // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLongIdleEnable;                                         // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJumpingOffLadderState;                                  // 0x0021(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJumpingOffLadderBottomState;                            // 0x0022(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EZG[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BottomOffset;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrontOffset;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SingleStepHeight;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraFocusOnExitTime;                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraFocusOnExitInterpSpeed;                            // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         EnterTransitionCurve;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToHideWeapon;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToStartLongIdle;                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAWA[0xA8];                                  // 0x0048(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerWeaponSwingData
	 * Size -> 0x0080
	 */
	struct FAnimPlayerWeaponSwingData
	{
	public:
		unsigned char                                              UnknownData_O0SC[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ItemTotalRotation;                                       // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ItemTotalShift;                                          // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ItemSocketTotalShift;                                    // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6L77[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerWeaponInertiaData
	 * Size -> 0x0060
	 */
	struct FAnimPlayerWeaponInertiaData
	{
	public:
		float                                                      InertiaEndingInterpSpeed;                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0QS[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        CurrentRotationCurve;                                    // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        CurrentTranslationCurve;                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AdditionalInertiaRotation;                               // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AdditionalInertiaTranslation;                            // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InertiaAlpha;                                            // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCHT[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerWeaponPushbackData
	 * Size -> 0x0080
	 */
	struct FAnimPlayerWeaponPushbackData
	{
	public:
		float                                                      PushbackInteprolateTolerance;                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushbackInteprolateSpeed;                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPushbackState                                         State;                                                   // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASE1[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ALPHA;                                                   // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WeaponTranslation;                                       // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            WeaponRotation;                                          // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAlphaBlend                                         Blend;                                                   // 0x0040(0x0030) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_224J[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerDetectorData
	 * Size -> 0x0010
	 */
	struct FAnimPlayerDetectorData
	{
	public:
		bool                                                       bHasDetectorInHands;                                     // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WY1X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              DetectorSkeletal;                                        // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimHandItemData
	 * Size -> 0x0018
	 */
	struct FAnimHandItemData
	{
	public:
		bool                                                       bHasItemInHands;                                         // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUAD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              ItemSkeletal;                                            // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsesLeftHand;                                         // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsesRightHand;                                        // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA6L[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerMaterialData
	 * Size -> 0x0008
	 */
	struct FAnimPlayerMaterialData
	{
	public:
		class UMaterialParameterCollection*                        FoliageCollectionAsset;                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerLookAtPreset
	 * Size -> 0x000C
	 */
	struct FAnimPlayerLookAtPreset
	{
	public:
		float                                                      RotationFreemoveEdge;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationStopEdge;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldRepeatTargetMovement;                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FMAJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerLookAtData
	 * Size -> 0x00B8
	 */
	struct FAnimPlayerLookAtData
	{
	public:
		TMap<class FName, struct FAnimPlayerLookAtPreset>          Presets;                                                 // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAnimPlayerLookAtPreset                             ActivePreset;                                            // 0x0050(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LO1Q[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         EnteringSpeed;                                           // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CenteringSpeed;                                          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CursorFreemoveDistanceFactor;                            // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CursorApproachDirectionFactor;                           // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHPY[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CenteringTime;                                           // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerLookAtTimer;                                       // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFreemoveSpeed;                                        // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinStopSpeed;                                            // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DialogEnteringTime;                                      // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchTargertFactor;                                     // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMIC[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimPlayerAutoCoverData
	 * Size -> 0x0048
	 */
	struct FAnimPlayerAutoCoverData
	{
	public:
		bool                                                       bFrontTraceBlocked;                                      // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRightTraceBlocked;                                      // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeftTraceBlocked;                                       // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpTraceBlocked;                                         // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInCover;                                                // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCoverActionActive;                                  // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4EB[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimLeanTime;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproachTransitionPlayRate;                              // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCoverlessLeaning;                                       // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCoverlessLeaningRight;                                  // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_852K[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceCapsuleRadius;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoverForwardTraceRange;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoverSideTracesRange;                                    // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoverTraceHorizontalShift;                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoverTraceVerticalShift;                                 // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproachTransitionMinPlayRate;                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproachTransitionMaxPlayRate;                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAutoCoverState                                            CoverState;                                              // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_465X[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadHeightStand;                                         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadHeightCrouch;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadHeightLowCrouch;                                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickInterval;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceDirectionBindedToCamera;                           // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOHD[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.InjectorAnimations
	 * Size -> 0x0010
	 */
	struct FInjectorAnimations
	{
	public:
		class UAnimMontage*                                        InjectionAnimation;                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PlayerHealAnimation;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ModifyVFXValue
	 * Size -> 0x0014
	 */
	struct FModifyVFXValue
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ValueToBeModified;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueModifierPerSec;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ContextualItemAttachment
	 * Size -> 0x0030
	 */
	struct FContextualItemAttachment
	{
	public:
		EContextualItemAttachType                                  ContextualItemAttachType;                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0V6Q[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                SocketName;                                              // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachmentName;                                          // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7US[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         MeshToBeAttached;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMeshToBeAttached;                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      NiagaraAsset;                                            // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.NiagaraValueCopyFromTo
	 * Size -> 0x0018
	 */
	struct FNiagaraValueCopyFromTo
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CopyFrom;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CopyTo;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ContextualItemDetachment
	 * Size -> 0x0008
	 */
	struct FContextualItemDetachment
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayAnimationOnAttachedItemData
	 * Size -> 0x0010
	 */
	struct FPlayAnimationOnAttachedItemData
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimationAsset*                                     AnimationAsset;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SpawnNiagaraSystemAtLocation
	 * Size -> 0x0018
	 */
	struct FSpawnNiagaraSystemAtLocation
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnNiagaraAtLocation                                    SpawnNiagaraAtLocation;                                  // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1U1[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_CO7G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraSystem*                                      NiagaraAsset;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.InteractionData
	 * Size -> 0x0018
	 */
	struct FInteractionData
	{
	public:
		class FString                                              InteractableTextToolAction;                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGAG[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SingleClickInteractionData
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FSingleClickInteractionData : public FInteractionData
	{	};

	/**
	 * ScriptStruct Stalker2.ShootData
	 * Size -> 0x0088
	 */
	struct FShootData
	{
	public:
		struct FVector                                             ShootingRootLocation;                                    // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ShootingRootRotation;                                    // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CameraRootLocation;                                      // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MuzzleLocation;                                          // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AimingTargetPosition;                                    // 0x0060(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ProjectileDestinations;                                  // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AutoInteractionData
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FAutoInteractionData : public FInteractionData
	{	};

	/**
	 * ScriptStruct Stalker2.PrototypeSID
	 * Size -> 0x0030
	 */
	struct FPrototypeSID
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrototypeClass                                            PrototypeClass;                                          // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UQDA[0x3];                                   // 0x0011(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                Subtype;                                                 // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FKW8[0x14];                                  // 0x001C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.InputBufferIPUStruct
	 * Size -> 0x0098
	 */
	struct FInputBufferIPUStruct
	{
	public:
		unsigned char                                              UnknownData_VJGZ[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.BiomeTypes
	 * Size -> 0x0018
	 */
	struct FBiomeTypes
	{
	public:
		class UAkSwitchValue*                                      BiomeSwitch;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ScatterSound
	 * Size -> 0x0028
	 */
	struct FScatterSound
	{
	public:
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MinDistance;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxDistance;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxSounds;                                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0YX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KeepAliveDistance;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnChance;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceBetweenSounds;                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VelocityModified;                                        // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKO5[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SRLEMapStruct
	 * Size -> 0x0038
	 */
	struct FSRLEMapStruct
	{
	public:
		class USRLEAsset*                                          SRLEMap;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBiomeTypes>                                 BiomeTypes;                                              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FScatterSound>                               Sounds;                                                  // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           MapColorRange;                                           // 0x0028(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ViewOpenSettings
	 * Size -> 0x0028
	 */
	struct FViewOpenSettings
	{
	public:
		bool                                                       bShoudShowMouseCursor;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudIdleAnimation;                                     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudIgnoreInputOnPause;                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudClearInputOnClose;                                 // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudSendOpenUpdateEvent;                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudCheckOpenView;                                     // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudIgnoreCheckOpenView;                               // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShoudIgnoreLowPriority;                                 // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECloseType                                                 CloseType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JWA5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWidgetNameEx>                                      CloseWidgetNames;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    PriorityZOrder;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TAQ7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthTimeDef
	 * Size -> 0x0008
	 */
	struct FGSCTimeSynthTimeDef
	{
	public:
		int32_t                                                    NumBars;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBeats;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthQuantizationSettings
	 * Size -> 0x0014
	 */
	struct FGSCTimeSynthQuantizationSettings
	{
	public:
		float                                                      BeatsPerMinute;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BeatsPerBar;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGSCTimeSynthBeatDivision                                  BeatDivision;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ELP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EventDelaySeconds;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGSCTimeSynthEventQuantization                             GlobalQuantization;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JQT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.CompositionData
	 * Size -> 0x0048
	 */
	struct FCompositionData
	{
	public:
		class UGSCTimeSynthClip*                                   Intro;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGSCTimeSynthTimeDef                                IntroDelayTime;                                          // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGSCTimeSynthClip*                                   Loop;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGSCTimeSynthTimeDef                                LoopDelayTime;                                           // 0x0018(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGSCTimeSynthClip*                                   Outro;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGSCTimeSynthTimeDef                                OutroDelayTime;                                          // 0x0028(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGSCTimeSynthQuantizationSettings                   Settings;                                                // 0x0030(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUVC[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.CompassMarkerSettings
	 * Size -> 0x0028
	 */
	struct FCompassMarkerSettings
	{
	public:
		bool                                                       bEnableStyle;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDHM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        MarkerColor;                                             // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeakVisibilityRadius;                                    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationVisibilityRadius;                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCaptureRadius;                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZDL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CaptureRadius;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MarkerPriority;                                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.BodyMeshSIDSelector
	 * Size -> 0x0010
	 */
	struct FBodyMeshSIDSelector
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HoldInteractionData
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FHoldInteractionData : public FInteractionData
	{
	public:
		float                                                      HoldTime;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecreaseTime;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotDecrease;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TDO[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DialogAswersStyles
	 * Size -> 0x00C0
	 */
	struct FDialogAswersStyles
	{
	public:
		class FString                                              AnswerDefault;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AnswerDefaultDisabled;                                   // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AnswerWasSelected;                                       // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuestAnswerDefault;                                      // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuestAnswerWasSelected;                                  // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuestAnswerDisabled;                                     // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionDefault;                                           // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionDefaultDisabled;                                   // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionTake;                                              // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionTakeDisabled;                                      // 0x0090(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionGive;                                              // 0x00A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionGiveDisabled;                                      // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ItemLock
	 * Size -> 0x0008
	 */
	struct FItemLock
	{
	public:
		int32_t                                                    ItemPrototypeID;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GlobalVariable
	 * Size -> 0x0028
	 */
	struct FGlobalVariable
	{
	public:
		unsigned char                                              UnknownData_P6NN[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.LockStruct
	 * Size -> 0x0060
	 */
	struct FLockStruct
	{
	public:
		TArray<struct FItemLock>                                   LockedByItems;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, struct FGlobalVariable>                LockedByGlobalVariables;                                 // 0x0010(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.DoorMovableData
	 * Size -> 0x0028
	 */
	struct FDoorMovableData
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenAngularSpeed;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenAngle;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StealthOpenAngularSpeed;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StealthOpenAngle;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                DoorMeshComponent;                                       // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialAngle;                                            // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDST[0x1];                                   // 0x0024(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDoorMoveDirection                                         CurrentDirection;                                        // 0x0025(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6UM[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.RebuildComponentData
	 * Size -> 0x0010
	 */
	struct FRebuildComponentData
	{
	public:
		unsigned char                                              UnknownData_ELRK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Component;                                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.RebuildData
	 * Size -> 0x0020
	 */
	struct FRebuildData
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParentSocketName;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFlipped;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1F7C[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SpawnedItem
	 * Size -> 0x0018
	 */
	struct FSpawnedItem
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Weight;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EXVJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthClipSound
	 * Size -> 0x0020
	 */
	struct FGSCTimeSynthClipSound
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomWeight;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGDE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           DistanceRange;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthFilterSettings
	 * Size -> 0x000C
	 */
	struct FGSCTimeSynthFilterSettings
	{
	public:
		EGSCTimeSynthFilterType                                    FilterType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCDW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CutoffFrequency;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthEnvelopeFollowerSettings
	 * Size -> 0x000C
	 */
	struct FGSCTimeSynthEnvelopeFollowerSettings
	{
	public:
		float                                                      AttackTime;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGSCTimeSynthEnvelopeFollowerPeakMode                      PeakMode;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAnalogMode;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WY9W[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.RecoilKeys
	 * Size -> 0x0008
	 */
	struct FRecoilKeys
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.EquipUnequipAnimations
	 * Size -> 0x0010
	 */
	struct FEquipUnequipAnimations
	{
	public:
		class UAnimMontage*                                        Equip;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Unequip;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PDAUsageAnimations
	 * Size -> 0x0018
	 */
	struct FPDAUsageAnimations
	{
	public:
		class UAnimSequenceBase*                                   EquipPDA;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   InteractWithPDA;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   UnequipPDA;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SmartCoverAnimWithEffectSide
	 * Size -> 0x0010
	 */
	struct FSmartCoverAnimWithEffectSide
	{
	public:
		EAvailableCoverActionsSide                                 Side;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUCO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Animation;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SmartCoverAnimWithPreconditionSide
	 * Size -> 0x0010
	 */
	struct FSmartCoverAnimWithPreconditionSide
	{
	public:
		EAvailableCoverActionsSide                                 Side;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10EN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Animation;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SmartCoverTransition
	 * Size -> 0x0010
	 */
	struct FSmartCoverTransition
	{
	public:
		EAvailableCoverActionsSide                                 Side;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAvailableCoverActionsSide                                 ResultSide;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWS9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Animation;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SmartCoverAnimationMainLoopData
	 * Size -> 0x0030
	 */
	struct FSmartCoverAnimationMainLoopData
	{
	public:
		ESmartCoverActionType                                      ActionType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimOffsetTP                                               AimOffsetTP;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUJJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSmartCoverAnimWithEffectSide>               LookFromCover;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSmartCoverAnimWithEffectSide>               HideBehindCover;                                         // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Idle;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SmartCoverPerCoverTypeData
	 * Size -> 0x0050
	 */
	struct FSmartCoverPerCoverTypeData
	{
	public:
		TArray<struct FSmartCoverAnimWithEffectSide>               Enter;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSmartCoverAnimWithPreconditionSide>         Exit;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSmartCoverAnimWithPreconditionSide>         Idles;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSmartCoverTransition>                       Transitions;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSmartCoverAnimationMainLoopData>            ActionAnimationsData;                                    // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SmartCoverAnimCollectionData
	 * Size -> 0x0050
	 */
	struct FSmartCoverAnimCollectionData
	{
	public:
		TMap<ESmartCoverType, struct FSmartCoverPerCoverTypeData>  AnimationsData;                                          // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.CharacterWeaponAnimations
	 * Size -> 0x0010
	 */
	struct FCharacterWeaponAnimations
	{
	public:
		class UAnimMontage*                                        Character;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        weapon;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MagazineReloadAnimations
	 * Size -> 0x0050
	 */
	struct FMagazineReloadAnimations
	{
	public:
		TMap<EAnimationReloadTypes, struct FCharacterWeaponAnimations> MagazineReloadAnimations;                                // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HumanFirearmInternalAnimations
	 * Size -> 0x00D0
	 */
	struct FHumanFirearmInternalAnimations
	{
	public:
		struct FCharacterWeaponAnimations                          ShootingInHip;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          ShootingInAim;                                           // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterWeaponAnimations>                  Jamming;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FMagazineReloadAnimations>        Reloading;                                               // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<EAnimationStates, struct FMagazineReloadAnimations>   Reloadings;                                              // 0x0080(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HumanWeaponAnimations
	 * Size -> 0x0030
	 */
	struct FHumanWeaponAnimations
	{
	public:
		class UHumanAnimCollection*                                AnimCollection;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              HumanAnimBlueprint;                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          EquipWeapon;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          UnequipWeapon;                                           // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.IconSettings
	 * Size -> 0x0100
	 */
	struct FIconSettings
	{
	public:
		EStyleManagerActionType                                    StyleAction;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIconCheckPlatform;                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMC5[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Brush;                                                   // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bEnableResize;                                           // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKRY[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           IconSize;                                                // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBDD[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.FireTypeDisplayInfo
	 * Size -> 0x0018
	 */
	struct FFireTypeDisplayInfo
	{
	public:
		class FString                                              DisplayTextSid;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DisplayTexture;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.InteractObject
	 * Size -> 0x0038
	 */
	struct FInteractObject
	{
	public:
		struct FPrototypeSID                                       PrototypeSID;                                            // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConsumedOnUse;                                          // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTYO[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.LookAtAngleParams
	 * Size -> 0x0060
	 */
	struct FLookAtAngleParams
	{
	public:
		bool                                                       bAllowEyeRotate;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_156N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            MaxAngleOfEyeRotate;                                     // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowHeadRotate;                                        // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MW68[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            MaxAngleOfHeadRotate;                                    // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowBodyRotate;                                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SX4X[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            MaxAngleOfBodyRotate;                                    // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MoveSettings
	 * Size -> 0x0040
	 */
	struct FMoveSettings
	{
	public:
		float                                                      SpeedMapZoom;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldSpeed;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BorderMovingSpeed;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedInterpol;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DMS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MarkerToltipOffset;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MarkerScaleToltipOffset;                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkerZoomSpeed;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkerZoomSpeedSlow;                                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ZoomLVLSettings
	 * Size -> 0x0048
	 */
	struct FZoomLVLSettings
	{
	public:
		float                                                      MapZoom;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrowOffset;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMoveSettings                                       MoveSettings;                                            // 0x0008(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ZoomMarkerSettings
	 * Size -> 0x0008
	 */
	struct FZoomMarkerSettings
	{
	public:
		int32_t                                                    ShowZoomLVLMaxDefoult;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShowZoomLVLMaxOnHab;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.TextListSettings
	 * Size -> 0x0030
	 */
	struct FTextListSettings
	{
	public:
		class FString                                              NumericEndTag;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TextStyleId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClosuseTag;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.DoubleLineSettings
	 * Size -> 0x0020
	 */
	struct FDoubleLineSettings
	{
	public:
		class FString                                              FindTag;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CorrectTag;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.VelocityDebug
	 * Size -> 0x0010
	 */
	struct FVelocityDebug
	{
	public:
		double                                                     LinearVelocity;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     AngularVelocity;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MultiClickInteractionData
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMultiClickInteractionData : public FInteractionData
	{
	public:
		float                                                      ClickPercentageIncrease;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentageDecrease;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotDecrease;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S528[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.BackgroundSettings
	 * Size -> 0x0008
	 */
	struct FBackgroundSettings
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ColorSettings
	 * Size -> 0x0018
	 */
	struct FColorSettings
	{
	public:
		class UTexture2D*                                          BackgraundTexture;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        StatusColor;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SlotFilterSettings
	 * Size -> 0x0010
	 */
	struct FSlotFilterSettings
	{
	public:
		class FName                                                FilterIconStyleIdEnable;                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FilterIconStyleIdDisable;                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.NoteFilterSettings
	 * Size -> 0x0008
	 */
	struct FNoteFilterSettings
	{
	public:
		bool                                                       bIsEnableFilter;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07T4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENoteType                                                  Filter;                                                  // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVDJ[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Stalker2.QuestStatusSettings
	 * Size -> 0x0020
	 */
	struct FQuestStatusSettings
	{
	public:
		struct FLinearColor                                        Collor;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LocalisationSid;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.TaskStatusSettings
	 * Size -> 0x0020
	 */
	struct FTaskStatusSettings
	{
	public:
		struct FLinearColor                                        Collor;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI9P[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.QuestStageSelectSettings
	 * Size -> 0x0028
	 */
	struct FQuestStageSelectSettings
	{
	public:
		struct FLinearColor                                        CollorMein;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CollorSecondary;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.UpgradeFilterSettings
	 * Size -> 0x0002
	 */
	struct FUpgradeFilterSettings
	{
	public:
		bool                                                       bEnableFilter;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryEquipmentSlot                                    Filter;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerInternalAnimations
	 * Size -> 0x0038
	 */
	struct FPlayerInternalAnimations
	{
	public:
		class UAnimMontage*                                        PickingUpItem;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        JumpLand;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         EnterRagdollCurve;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEquipUnequipAnimations                             EquipUnequip;                                            // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FEquipUnequipAnimations                             RemoveReturnLeftHand;                                    // 0x0028(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.CharacterDetectorAnimations
	 * Size -> 0x0060
	 */
	struct FCharacterDetectorAnimations
	{
	public:
		class UAnimMontage*                                        Character;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, struct FCharacterWeaponAnimations>           CharacterWithWeapon;                                     // 0x0008(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Detector;                                                // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AttachDetachAnimations
	 * Size -> 0x0038
	 */
	struct FAttachDetachAnimations
	{
	public:
		struct FCharacterWeaponAnimations                          AttachAnimation;                                         // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          DetachAnimation;                                         // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          DetachTwinMagazineShifted;                               // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              AttachAnimBlueprint;                                     // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ChangeFireTypeAnimation
	 * Size -> 0x0018
	 */
	struct FChangeFireTypeAnimation
	{
	public:
		EFireType                                                  FromFireType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFireType                                                  ToFireType;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8L9H[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterWeaponAnimations                          Animations;                                              // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ChangeFireTypeAnimations
	 * Size -> 0x0010
	 */
	struct FChangeFireTypeAnimations
	{
	public:
		TArray<struct FChangeFireTypeAnimation>                    AnimationsArray;                                         // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerFirearmInternalAnimations
	 * Size -> 0x01D8
	 */
	struct FPlayerFirearmInternalAnimations
	{
	public:
		struct FCharacterWeaponAnimations                          ShootingInHip;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          ShootingInAim;                                           // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<EAnimationShootingTypes, struct FCharacterWeaponAnimations> Shooting;                                                // 0x0020(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FName, struct FCharacterWeaponAnimations>       ShootingWithScope;                                       // 0x0070(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FString, struct FAttachDetachAnimations>        AttachingBySID;                                          // 0x00C0(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<struct FCharacterWeaponAnimations>                  Jamming;                                                 // 0x0110(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FMagazineReloadAnimations>        Reloading;                                               // 0x0120(0x0050) Edit, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          MeleeAnimation;                                          // 0x0170(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<EAnimSwitchFireTypeMode, struct FChangeFireTypeAnimations> SwitchFireType;                                          // 0x0180(0x0050) Edit, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PickUpItem;                                              // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimWeaponSwingContainer
	 * Size -> 0x0038
	 */
	struct FAnimWeaponSwingContainer
	{
	public:
		class UCurveFloat*                                         ItemRotationCurve;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ItemHorizontalTranslationShiftCurve;                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ItemSocketHorizontalTranslationShiftCurve;               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ItemVerticalTranslationShiftCurve;                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ItemExtraVerticalTranslationShiftCurve;                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalItemTranslationInterpSpeed;                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalItemTranslationInterpSpeed;                      // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemRotationInterpSpeed;                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJ7B[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.WeaponInertiaContainer
	 * Size -> 0x0010
	 */
	struct FWeaponInertiaContainer
	{
	public:
		class UCurveVector*                                        InertiaRotationCurve;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        InertiaTranslationCurve;                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.WeaponPushbackContainer
	 * Size -> 0x0038
	 */
	struct FWeaponPushbackContainer
	{
	public:
		float                                                      DelayBeforeBlendStarting;                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJ4N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlendArgs                                     BlendInArgs;                                             // 0x0008(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAlphaBlendArgs                                     BlendOutArgs;                                            // 0x0018(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UCurveVector*                                        PushbackRotationCurve;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        PushbackTranslationCurve;                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerWeaponAnimations
	 * Size -> 0x0168
	 */
	struct FPlayerWeaponAnimations
	{
	public:
		class UPlayerAnimCollection*                               AnimCollection;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PlayerAnimBlueprint;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          EquipWeapon;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          UnequipWeapon;                                           // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FEquipUnequipAnimations                             RemoveReturnLeftHand;                                    // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimWeaponSwingContainer                           WeaponSwingConfigInHip;                                  // 0x0040(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimWeaponSwingContainer                           WeaponSwingConfigInAim;                                  // 0x0078(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponInertiaContainer                             StopHipSwingInertia;                                     // 0x00B0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponInertiaContainer                             StopAimSwingInertia;                                     // 0x00C0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponInertiaContainer                             SprintStopInertia;                                       // 0x00D0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponPushbackContainer                            HipPushback;                                             // 0x00E0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FWeaponPushbackContainer>         AimPushback;                                             // 0x0118(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerAutoCoverAnimations
	 * Size -> 0x0068
	 */
	struct FPlayerAutoCoverAnimations
	{
	public:
		class UAnimSequence*                                       StandInCoverPose;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ApproachCover;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ApproachCoverLeft;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ApproachCoverRight;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ExitCover;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CanLeanLeftPose;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CanLeanRightPose;                                        // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimLeftPose;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimRightPose;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimUpPose;                                               // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimlessShootLeftPose;                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimlessShootRightPose;                                   // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimlessShootUpPose;                                      // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerThrowableItemInternalAnimations
	 * Size -> 0x0060
	 */
	struct FPlayerThrowableItemInternalAnimations
	{
	public:
		TMap<EAnimationThrowingType, struct FCharacterWeaponAnimations> Throw;                                                   // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
		class UCurveFloat*                                         StrongThrowForceCurve;                                   // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LightThrowForceCurve;                                    // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PlayerKnifeInternalAnimations
	 * Size -> 0x0020
	 */
	struct FPlayerKnifeInternalAnimations
	{
	public:
		struct FCharacterWeaponAnimations                          Hit;                                                     // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          StealthKill;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ComplexAttachAnimations
	 * Size -> 0x00B8
	 */
	struct FComplexAttachAnimations
	{
	public:
		EWeaponIdleType                                            WeaponIdleType;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX6P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        AttachAttachingAnimation;                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachDetachingAnimation;                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CharacterAttachModeIn;                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeaponAttachModeIn;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachAttachModeIn;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CharacterAttachModeOut;                                  // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeaponAttachModeOut;                                     // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachAttachModeOut;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBindedToWeaponBehaviour;                              // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ET8[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CharacterAttachShoot;                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeaponAttachShoot;                                       // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachAttachShoot;                                       // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CharacterAttachReload;                                   // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeaponAttachReload;                                      // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachAttachReload;                                      // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CharacterAttachReloadTactical;                           // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeaponAttachReloadTactical;                              // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachAttachReloadTactical;                              // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttachAttachShootEnd;                                    // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimMontage*>                                AttachJamAnimations;                                     // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayerFirearmAnimCollection*                        WeaponAnimCollection;                                    // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.BuckRecoilKeys
	 * Size -> 0x0010
	 */
	struct FBuckRecoilKeys
	{
	public:
		TArray<struct FRecoilKeys>                                 BuckRecoilKeys;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSCComponentReference
	 * Size -> 0x0028
	 */
	struct FGSCComponentReference
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ComponentProperty;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathToComponent;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YORF[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SignalToSend
	 * Size -> 0x0038
	 */
	struct FSignalToSend
	{
	public:
		struct FGSCComponentReference                              ReceiverComponentRef;                                    // 0x0000(0x0028) Edit, NativeAccessSpecifierPublic
		struct FGuid                                               ReceiverGuid;                                            // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnimationBasedTurn
	 * Size -> 0x0020
	 */
	struct FAnimationBasedTurn
	{
	public:
		class UAnimMontage*                                        TurnLeftMontage;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        TurnRightMontage;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      TurnAngleInterval;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7CS[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.MovementOutAnimation
	 * Size -> 0x0018
	 */
	struct FMovementOutAnimation
	{
	public:
		class UAnimMontage*                                        LeftLegMontage;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        RightLegMontage;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationDistance;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9OC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.MovementBehaviourParameters
	 * Size -> 0x0078
	 */
	struct FMovementBehaviourParameters
	{
	public:
		float                                                      SmoothTurnDegreePerTick;                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpineCurvatureMaxAngle;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UniversalAnimTurnDistance;                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpossibilityToTurnSmoothlyAngle;                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIdleToMoveSmoothTurnAngle;                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelerationDistance;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandardSpeed;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      SpeedBlendInterval;                                      // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      SmoothTurnDegreePerTickBlendConstraints;                 // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VK0L[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimationBasedTurn>                         AnimationBasedTurns;                                     // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimationBasedTurn>                         UniversalAnimationBasedTurns;                            // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMovementOutAnimation                               MovementOutAnimation;                                    // 0x0050(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<EAwareness>                                         AwarenessLevelsToUseWith;                                // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SplinePointMeshData
	 * Size -> 0x0068
	 */
	struct FSplinePointMeshData
	{
	public:
		class UStaticMesh*                                         StrandStaticMesh;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         SeparatorStaticMesh;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrefabAsset*                                        PrefabStrandMesh;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrefabAsset*                                        PrefabSeparatorMesh;                                     // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q40U[0x48];                                  // 0x0020(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.NotificationModel
	 * Size -> 0x0048
	 */
	struct FNotificationModel
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoiceNote;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bItemsRemoved;                                           // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJ16[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPaperSprite*                                        Sprite;                                                  // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Texture;                                                 // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.TextSettings
	 * Size -> 0x0360
	 */
	struct FTextSettings
	{
	public:
		class FName                                                FontStyleId;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFontColor;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OED[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     FontStyle;                                               // 0x0010(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoWrap;                                               // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07GP[0x2];                                   // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapingTextAt;                                           // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x0358(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5CX[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LineHeightPercentage;                                    // 0x035C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SlotScaleSettings
	 * Size -> 0x0014
	 */
	struct FSlotScaleSettings
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26EV[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.TraceSoundData
	 * Size -> 0x0018
	 */
	struct FTraceSoundData
	{
	public:
		class UPhysicalMaterial*                                   Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnChance;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR0L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ConvolutionSettings
	 * Size -> 0x0028
	 */
	struct FConvolutionSettings
	{
	public:
		EBuildingType                                              BuildingType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNJW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           VolumeSizeRange;                                         // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAudioVolumeSubmixSendSettings>              SubmixSettings;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MaterialScalarDrivingProperties
	 * Size -> 0x0028
	 */
	struct FMaterialScalarDrivingProperties
	{
	public:
		class UMaterialParameterCollection*                        MaterialCollectionToUpdate;                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetValue;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9JQ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.WanderingLighInstanceDamageSFX
	 * Size -> 0x0010
	 */
	struct FWanderingLighInstanceDamageSFX
	{
	public:
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventTriggerTimeout;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE81[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.WanderingLightInstanceData
	 * Size -> 0x0040
	 */
	struct FWanderingLightInstanceData
	{
	public:
		struct FVector                                             BaseLocation;                                            // 0x0000(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  HorizontalMovementCurve;                                 // 0x0018(0x0018) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalMovementDuration;                              // 0x0030(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalMovementDenom;                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseVerticalOffset;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCircularMovement;                                       // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M868[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ParameterTransition
	 * Size -> 0x0008
	 */
	struct FParameterTransition
	{
	public:
		float                                                      StartOffset;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.Parameter
	 * Size -> 0x0050
	 */
	struct FParameter
	{
	public:
		TMap<EWeather, struct FParameterTransition>                TransitionOverrides;                                     // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.FloatParameter
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FFloatParameter : public FParameter
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SkySphereState
	 * Size -> 0x0058
	 */
	struct FSkySphereState
	{
	public:
		struct FFloatParameter                                     AtmosphereBrightness;                                    // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.LinearColorParameter
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FLinearColorParameter : public FParameter
	{
	public:
		class UCurveLinearColor*                                   Curve;                                                   // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.LightState
	 * Size -> 0x0210
	 */
	struct FLightState
	{
	public:
		struct FFloatParameter                                     Intensity;                                               // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     SourceAngle;                                             // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               LightColor;                                              // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     Temperature;                                             // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     VolumetricScatteringIntensity;                           // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     ShadowAmount;                                            // 0x01B8(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.LightShaftsState
	 * Size -> 0x0160
	 */
	struct FLightShaftsState
	{
	public:
		struct FFloatParameter                                     BloomScale;                                              // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     BloomThreshold;                                          // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     BloomMaxBrightness;                                      // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               BloomTint;                                               // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.DirectionalLightState
	 * Size -> 0x0370
	 */
	struct FDirectionalLightState
	{
	public:
		struct FLightState                                         Light;                                                   // 0x0000(0x0210) Edit, NativeAccessSpecifierPublic
		struct FLightShaftsState                                   LightShafts;                                             // 0x0210(0x0160) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SkyLightState
	 * Size -> 0x0108
	 */
	struct FSkyLightState
	{
	public:
		struct FFloatParameter                                     Intensity;                                               // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               SkyLightColor;                                           // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     VolumetricScatteringIntensity;                           // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SkyAtmosphereBaseState
	 * Size -> 0x02C0
	 */
	struct FSkyAtmosphereBaseState
	{
	public:
		struct FFloatParameter                                     MultiScattering;                                         // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     AbsorptionScale;                                         // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Absorption;                                              // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               SkyLuminanceFactor;                                      // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     AerialPerspectiveDistanceScale;                          // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     HeightFogContribution;                                   // 0x01B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     SkyLuminanceMultiplier;                                  // 0x0210(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     SunMoonDiskLuminanceMultiplier;                          // 0x0268(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SkyAtmosphereRayleighMieState
	 * Size -> 0x0318
	 */
	struct FSkyAtmosphereRayleighMieState
	{
	public:
		struct FFloatParameter                                     RayleighScatteringScale;                                 // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               RayleighScattering;                                      // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     RayleighExponentialDistribution;                         // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MieScatteringScale;                                      // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               MieScattering;                                           // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MieScatteringAbsorption;                                 // 0x01B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               MieAbsorption;                                           // 0x0210(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MieAnisotropy;                                           // 0x0268(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MieExponentialDistribution;                              // 0x02C0(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SkyAtmosphereState
	 * Size -> 0x05D8
	 */
	struct FSkyAtmosphereState
	{
	public:
		struct FSkyAtmosphereBaseState                             Base;                                                    // 0x0000(0x02C0) Edit, NativeAccessSpecifierPublic
		struct FSkyAtmosphereRayleighMieState                      RayleighMie;                                             // 0x02C0(0x0318) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.VolumetricCloudState
	 * Size -> 0x0630
	 */
	struct FVolumetricCloudState
	{
	public:
		struct FFloatParameter                                     CloudLuminanceMultiplier;                                // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MultiScatteringContribution;                             // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MultiScatteringEccentricity;                             // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MultiScatteringOcclusion;                                // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     PhaseBlend;                                              // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     PhaseG;                                                  // 0x01B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     PhaseG2;                                                 // 0x0210(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Cloud_Tiling;                                            // 0x0268(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Cumulonimbus_Coverage;                                   // 0x02C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Cloud_Speed;                                             // 0x0318(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     Contrast;                                                // 0x0370(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     DensityPower;                                            // 0x03C8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     MaskPowerHighTest;                                       // 0x0420(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     CapMaskRadius;                                           // 0x0478(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     CurveMaxDensity;                                         // 0x04D0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     CurveWidth;                                              // 0x0528(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     CurveHeight;                                             // 0x0580(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     CurveDebugVersion;                                       // 0x05D8(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ExponentialHeightFogState
	 * Size -> 0x0370
	 */
	struct FExponentialHeightFogState
	{
	public:
		struct FFloatParameter                                     FogDensity;                                              // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     FogHeightFalloff;                                        // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     SecondFogDensity;                                        // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     SecondFogFalloff;                                        // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     SecondFogOffset;                                         // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     ScatteringDistribution;                                  // 0x01B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Albedo;                                                  // 0x0210(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Emissive;                                                // 0x0268(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     ExtinctionScale;                                         // 0x02C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     FogLuminanceMultiplier;                                  // 0x0318(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.FogMeshMaterialState
	 * Size -> 0x0001
	 */
	struct FFogMeshMaterialState
	{
	public:
		unsigned char                                              UnknownData_AWWQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.RainState
	 * Size -> 0x0060
	 */
	struct FRainState
	{
	public:
		struct FFloatParameter                                     Intensity;                                               // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		float                                                      WetnessSpeed;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryingSpeed;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PostProcessParameters
	 * Size -> 0x01B8
	 */
	struct FPostProcessParameters
	{
	public:
		struct FLinearColorParameter                               Saturation;                                              // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Contrast;                                                // 0x0058(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Gamma;                                                   // 0x00B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Gain;                                                    // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               Offset;                                                  // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PostProcessState
	 * Size -> 0x0790
	 */
	struct FPostProcessState
	{
	public:
		struct FPostProcessParameters                              Global;                                                  // 0x0000(0x01B8) Edit, NativeAccessSpecifierPublic
		struct FPostProcessParameters                              Midtones;                                                // 0x01B8(0x01B8) Edit, NativeAccessSpecifierPublic
		struct FPostProcessParameters                              Highlights;                                              // 0x0370(0x01B8) Edit, NativeAccessSpecifierPublic
		struct FPostProcessParameters                              Shadows;                                                 // 0x0528(0x01B8) Edit, NativeAccessSpecifierPublic
		struct FLinearColorParameter                               AmbientCubemapTint;                                      // 0x06E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     AmbientCubemapIntensity;                                 // 0x0738(0x0058) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.WeatherState
	 * Size -> 0x1E10
	 */
	struct FWeatherState
	{
	public:
		struct FSkySphereState                                     SkySphere;                                               // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		struct FDirectionalLightState                              DirLight;                                                // 0x0058(0x0370) Edit, NativeAccessSpecifierPublic
		struct FSkyLightState                                      SkyLight;                                                // 0x03C8(0x0108) Edit, NativeAccessSpecifierPublic
		struct FSkyAtmosphereState                                 SkyAtmosphere;                                           // 0x04D0(0x05D8) Edit, NativeAccessSpecifierPublic
		struct FVolumetricCloudState                               VolumetricCloud;                                         // 0x0AA8(0x0630) Edit, NativeAccessSpecifierPublic
		struct FExponentialHeightFogState                          ExponentialHeightFog;                                    // 0x10D8(0x0370) Edit, NativeAccessSpecifierPublic
		struct FFogMeshMaterialState                               FogMeshMaterial;                                         // 0x1448(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2Z9[0x7];                                   // 0x1449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatParameter                                     GlobalVolumetricValue;                                   // 0x1450(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     LocalVolumetricValue;                                    // 0x14A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FRainState                                          Rain;                                                    // 0x1500(0x0060) Edit, NativeAccessSpecifierPublic
		struct FPostProcessState                                   PostProcess;                                             // 0x1560(0x0790) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     WindIntensity;                                           // 0x1CF0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FFloatParameter                                     GlobalLuminanceMultiplier;                               // 0x1D48(0x0058) Edit, NativeAccessSpecifierPublic
		TMap<EWeather, float>                                      TransitionDurations;                                     // 0x1DA0(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMZ6[0x20];                                  // 0x1DF0(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.WeatherHistoryData
	 * Size -> 0x0024
	 */
	struct FWeatherHistoryData
	{
	public:
		EWeather                                                   WeatherType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OOA7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendWeight;                                             // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendWeightIncrease;                                     // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Cooldown;                                                // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxRepeatAmount;                                         // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    RepeatAmount;                                            // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPaused;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowInDialogueTransition;                              // 0x0019(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XK34[0xA];                                   // 0x001A(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.Wind
	 * Size -> 0x0038
	 */
	struct FWind
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WindDirectionChangeIntensity;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLockedDirection;                                        // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_STVJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Direction;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           TargetDirection;                                         // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InterpSpeed;                                             // 0x0030(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QV9A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DisplaySettings
	 * Size -> 0x0020
	 */
	struct FDisplaySettings
	{
	public:
		class FName                                                TitleBackgroundStyleId;                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TitleBorderLineStyleId;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InsideMarkerStyleId;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MarkerBackgroundStyleId;                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.AnomalyHitArgs
	 * Size -> 0x0001
	 */
	struct FAnomalyHitArgs
	{
	public:
		unsigned char                                              UnknownData_WKYX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.UID
	 * Size -> 0x0004
	 */
	struct FUID
	{
	public:
		int32_t                                                    UID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Stalker2.EffectValueOverridePair
	 * Size -> 0x000C
	 */
	struct FEffectValueOverridePair
	{
	public:
		unsigned char                                              UnknownData_VYA5[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.CommonHitArgs
	 * Size -> 0x0140
	 */
	struct FCommonHitArgs
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseStr;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorDamage;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorPiercing;                                           // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bleeding;                                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BleedingChanceIncrement;                                 // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ImpulseDir;                                              // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUID                                                DamageDealerUID;                                         // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCVR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          HitResult;                                               // 0x0038(0x00E8) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EDamageType                                                DamageType;                                              // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDirectDamageSkipCalculations;                           // 0x0121(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldIgnoreArmor;                                      // 0x0122(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_119J[0x5];                                   // 0x0123(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEffectValueOverridePair>                    ApplicableEffects;                                       // 0x0128(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		EDamageSource                                              DamageSource;                                            // 0x0138(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXM8[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.BulletProjectileHitArgs
	 * Size -> 0x0020
	 */
	struct FBulletProjectileHitArgs
	{
	public:
		EAmmoType                                                  Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAmmoCaliber                                               Caliber;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9TF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SourceLocation;                                          // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ExplosionHitArgs
	 * Size -> 0x0030
	 */
	struct FExplosionHitArgs
	{
	public:
		struct FVector                                             ExplosionLocation;                                       // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionRadius;                                         // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9PK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ExplosiveActor;                                          // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosiveActorPrototypeID;                               // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBGV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.MeleeHitArgs
	 * Size -> 0x0001
	 */
	struct FMeleeHitArgs
	{
	public:
		unsigned char                                              UnknownData_CVXA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.RightClickMenuItemData
	 * Size -> 0x0040
	 */
	struct FRightClickMenuItemData
	{
	public:
		unsigned char                                              UnknownData_LMWY[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ProjectileHitArgs
	 * Size -> 0x0001
	 */
	struct FProjectileHitArgs
	{
	public:
		unsigned char                                              UnknownData_Q34Q[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ActorInteractionData
	 * Size -> 0x0018
	 */
	struct FActorInteractionData
	{
	public:
		unsigned char                                              UnknownData_2W8I[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InteractableTextToolName;                                // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.TwoBlendedAnimationData
	 * Size -> 0x0020
	 */
	struct FTwoBlendedAnimationData
	{
	public:
		class UAnimSequence*                                       FirstAnimation;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SecondAnimation;                                         // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstBlendIn;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondBlendIn;                                           // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFirstAnimation;                                      // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HLM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.HumanAnimLocomotionData
	 * Size -> 0x0088
	 */
	struct FHumanAnimLocomotionData
	{
	public:
		float                                                      Velocity;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleDirection;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampedDirection;                                        // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BPDirection;                                             // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDirections                                                Direction;                                               // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHYI[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectionBlendData                                 DirectionBlendParams;                                    // 0x0010(0x0024) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA77[0x54];                                  // 0x0034(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AnimStateData
	 * Size -> 0x0008
	 */
	struct FAnimStateData
	{
	public:
		bool                                                       bInAir;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W93T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveGaitValue;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.VictoryInput
	 * Size -> 0x0040
	 */
	struct FVictoryInput
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyAsString;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShift;                                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCtrl;                                                   // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlt;                                                    // 0x003A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCmd;                                                    // 0x003B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGamepad;                                                // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKeyCategory                                               Category;                                                // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1I5D[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.VictoryInputAxis
	 * Size -> 0x0040
	 */
	struct FVictoryInputAxis
	{
	public:
		class FString                                              AxisName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyAsString;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0020(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKeyCategory                                               Category;                                                // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8I5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.CinematicSectionParams
	 * Size -> 0x0040
	 */
	struct FCinematicSectionParams
	{
	public:
		unsigned char                                              UnknownData_ZFC8[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SuitableItemSID
	 * Size -> 0x0030
	 */
	struct FSuitableItemSID
	{
	public:
		struct FPrototypeSID                                       ItemPrototypeSID;                                        // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.DeadBodyInteractionData
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FDeadBodyInteractionData : public FActorInteractionData
	{
	public:
		bool                                                       bOverweight;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC7Z[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.RengeSettings
	 * Size -> 0x0018
	 */
	struct FRengeSettings
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        WarningColor;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.WarningSettings
	 * Size -> 0x0020
	 */
	struct FWarningSettings
	{
	public:
		TArray<ELocalizationLanguage>                              Localization;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRengeSettings>                              RengeSettings;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.UIWarningSettings
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FUIWarningSettings : public FTableRowBase
	{
	public:
		bool                                                       IsGlobalEnable;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUIWorningType                                             WorningType;                                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LH0E[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PerfectTextSize;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldIgnoreTag;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X74U[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RowSize;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerfectRow;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNBV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWarningSettings                                    DefoultRengeSettings;                                    // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FWarningSettings>                            RengeSettings;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.DestructionAction
	 * Size -> 0x0018
	 */
	struct FDestructionAction
	{
	public:
		unsigned char                                              UnknownData_LOT0[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ObjectPhaseSettings
	 * Size -> 0x0028
	 */
	struct FObjectPhaseSettings
	{
	public:
		unsigned char                                              UnknownData_BT7R[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DialogMemberData
	 * Size -> 0x0018
	 */
	struct FDialogMemberData
	{
	public:
		class FString                                              DialogMemberName;                                        // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptionalMember;                                         // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45AW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DPadSlotSlotDisplayInfo
	 * Size -> 0x0020
	 */
	struct FDPadSlotSlotDisplayInfo
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmpty;                                                // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QO5[0x13];                                  // 0x000D(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ConvexArea
	 * Size -> 0x0048
	 */
	struct FConvexArea
	{
	public:
		TArray<struct FVector>                                     Vertexes;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             CentroidLocation;                                        // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MinXY;                                                   // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MaxXY;                                                   // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PathBlockingConvex
	 * Size -> 0x0010
	 */
	struct FPathBlockingConvex
	{
	public:
		TArray<struct FConvexArea>                                 Areas;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ElectroAnomalyBakedData
	 * Size -> 0x0038
	 */
	struct FElectroAnomalyBakedData
	{
	public:
		int32_t                                                    CirclePointsCount;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X13P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     TraceStartPoints;                                        // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     TraceEndPoints;                                          // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     TraceUpVectors;                                          // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.EquipmentItemSlot
	 * Size -> 0x0018
	 */
	struct FEquipmentItemSlot
	{
	public:
		unsigned char                                              UnknownData_VRJH[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DistanceScalableGrenadeEffectData
	 * Size -> 0x001C
	 */
	struct FDistanceScalableGrenadeEffectData
	{
	public:
		int32_t                                                    EffectPrototypeID;                                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaxAtCenter;                                            // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEBX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistance;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideValue;                                          // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTG8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValueMultiplier;                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValueMultiplier;                                      // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GroomVariation
	 * Size -> 0x0058
	 */
	struct FGroomVariation
	{
	public:
		unsigned char                                              UnknownData_NK4Y[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.GroomCategory
	 * Size -> 0x0018
	 */
	struct FGroomCategory
	{
	public:
		unsigned char                                              UnknownData_OIJ6[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthSpectralData
	 * Size -> 0x0008
	 */
	struct FGSCTimeSynthSpectralData
	{
	public:
		float                                                      FrequencyHz;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSCTimeSynthClipHandle
	 * Size -> 0x000C
	 */
	struct FGSCTimeSynthClipHandle
	{
	public:
		class FName                                                ClipName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClipId;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HoverAction
	 * Size -> 0x0038
	 */
	struct FHoverAction
	{
	public:
		EHintHoverActionType                                       HoverAction;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1XO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         ActionWidget;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HoverColorAndOpacity;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        UnHoverColorAndOpacity;                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           HoverVisibility;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           UnHoverVisibility;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRKU[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.HintsData
	 * Size -> 0x0148 (FullSize[0x0150] - InheritedSize[0x0008])
	 */
	struct FHintsData : public FTableRowBase
	{
	public:
		TMap<EGSCPlatformType, struct FSlateBrush>                 PlatformIcons;                                           // 0x0008(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideBackgroundBrush;                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCM2[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0070(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             BackgroundPadding;                                       // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HintsDataTable
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FHintsDataTable : public FTableRowBase
	{
	public:
		bool                                                       bCheckPlatform;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6K9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EGSCPlatformType, struct FSlateBrush>                 PlatformIcons;                                           // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EGSCPlatformType, struct FHintsData>                  PlatformData;                                            // 0x0060(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HintsInputDataTable
	 * Size -> 0x0228 (FullSize[0x0230] - InheritedSize[0x0008])
	 */
	struct FHintsInputDataTable : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_1KMF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         PlatformIcons;                                           // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FHintsData                                          PlatformData;                                            // 0x00E0(0x0150) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HumanWeaponInternalAnimations
	 * Size -> 0x0070
	 */
	struct FHumanWeaponInternalAnimations
	{
	public:
		struct FCharacterWeaponAnimations                          ShootingInHip;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterWeaponAnimations                          ShootingInAim;                                           // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FMagazineReloadAnimations>        Reloading;                                               // 0x0020(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.HumanTransitionAnimations
	 * Size -> 0x0010
	 */
	struct FHumanTransitionAnimations
	{
	public:
		class UAnimMontage*                                        TransitionTo;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        TransitionFrom;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.InteractableDisplayInfo
	 * Size -> 0x0050
	 */
	struct FInteractableDisplayInfo
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                InteractActionText;                                      // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                InteractActionTextSmall;                                 // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EInteractionType                                           InteractionType;                                         // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDisplayPriority                                           DisplayPriority;                                         // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverweight;                                             // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDurability;                                         // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowUpgrade;                                            // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKT6[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.WeaponFireEvents
	 * Size -> 0x0018
	 */
	struct FWeaponFireEvents
	{
	public:
		class UAkAudioEvent*                                       FireEventOneShot;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       FireEventLoop;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       FireEventBreak;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ItemContainerData
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FItemContainerData : public FActorInteractionData
	{
	public:
		bool                                                       bShowDurability;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowUpgrade;                                            // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOBM[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.JournalQuest
	 * Size -> 0x0070
	 */
	struct FJournalQuest
	{
	public:
		unsigned char                                              UnknownData_PV3E[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.JournalQuestStageData
	 * Size -> 0x0028
	 */
	struct FJournalQuestStageData
	{
	public:
		unsigned char                                              UnknownData_WSWI[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.OverridableProperty
	 * Size -> 0x0020
	 */
	struct FOverridableProperty
	{
	public:
		unsigned char                                              UnknownData_Y3AG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCanOverride;                                            // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride;                                               // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF7V[0x16];                                  // 0x000A(0x0016) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.FactionOverridableProperty
	 * Size -> 0x00C0 (FullSize[0x00E0] - InheritedSize[0x0020])
	 */
	struct FFactionOverridableProperty : public FOverridableProperty
	{
	public:
		struct FFactionSelector                                    DefaultValue;                                            // 0x0020(0x0060) NativeAccessSpecifierPublic
		struct FFactionSelector                                    CurrentValue;                                            // 0x0080(0x0060) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.StringOverridableProperty
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FStringOverridableProperty : public FOverridableProperty
	{
	public:
		class FString                                              DefaultValue;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentValue;                                            // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.BoolOverridableProperty
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FBoolOverridableProperty : public FOverridableProperty
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CurrentValue;                                            // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14E0[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SpawnSettingsPerArchetype
	 * Size -> 0x0038
	 */
	struct FSpawnSettingsPerArchetype
	{
	public:
		struct FPrototypeSID                                       PrototypeSID;                                            // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		float                                                      SpawnWeight;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFJS[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.IntInterval
	 * Size -> 0x0008
	 */
	struct FIntInterval
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SpawnSettingsPerPlayerRank
	 * Size -> 0x0030
	 */
	struct FSpawnSettingsPerPlayerRank
	{
	public:
		ERank                                                      PlayerRank;                                              // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35SP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntInterval                                        MaxSpawnQuantityInterval;                                // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InitialSpawnQuantityPercent;                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SquadActionPercent;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialSpawnQuantityRespawnTimeSeconds;                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpawnQuantityRespawnTimeSeconds;                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WipeRespawnTimeoutSeconds;                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSpawnSettingsPerArchetype>                  SpawnSettingsPerArchetypes;                              // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PossibleInhabitantFaction
	 * Size -> 0x0120
	 */
	struct FPossibleInhabitantFaction
	{
	public:
		struct FFactionSelector                                    Faction;                                                 // 0x0000(0x0060) Edit, NativeAccessSpecifierPublic
		struct FSpawnSettingsPerPlayerRank                         SpawnSettingsPerPlayerRanks[0x4];                        // 0x0060(0x00C0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PossibleInhabitantFactionsOverridableProperty
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FPossibleInhabitantFactionsOverridableProperty : public FOverridableProperty
	{
	public:
		TArray<struct FPossibleInhabitantFaction>                  DefaultValue;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPossibleInhabitantFaction>                  CurrentValue;                                            // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.LairPreset
	 * Size -> 0x0038
	 */
	struct FLairPreset
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InitialInhabitantFaction;                                // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bALifePoint;                                             // 0x0020(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMN4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPossibleInhabitantFaction>                  PossibleInhabitantFactions;                              // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MarkerIconPair
	 * Size -> 0x0010
	 */
	struct FMarkerIconPair
	{
	public:
		class UTexture2D*                                          Active;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Innactive;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MarkerIconData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMarkerIconData : public FTableRowBase
	{
	public:
		EMarkType                                                  Key;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8I0W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMarkerIconPair                                     Compass;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMarkerIconPair                                     Map;                                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.EventData
	 * Size -> 0x0040
	 */
	struct FEventData
	{
	public:
		unsigned char                                              AkEvent[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             RelativeTransform;                                       // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MeshesData
	 * Size -> 0x0038
	 */
	struct FMeshesData
	{
	public:
		unsigned char                                              StaticMesh[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FEventData>                                  EventsData;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MeshCategory
	 * Size -> 0x0018
	 */
	struct FMeshCategory
	{
	public:
		class FName                                                MeshCategory;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMeshesData>                                 MeshesData;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MeshSoundPlacerDataRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FMeshSoundPlacerDataRow : public FTableRowBase
	{
	public:
		float                                                      RaycastSphereRadius;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RubberBandDistanceAtWalk;                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RubberBandDistanceAtRun;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RubberBandDistanceAtSprint;                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RubberBandSpeed;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_735V[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StopAkEvent[0x28];                                       // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FMeshCategory>                               MeshCategories;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MontageSection
	 * Size -> 0x0010
	 */
	struct FMontageSection
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.MovementParams
	 * Size -> 0x0054
	 */
	struct FMovementParams
	{
	public:
		float                                                      WalkSpeed;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunSpeed;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchSpeed;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowCrouchSpeed;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintSpeed;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbSpeedCoef;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpSpeedCoef;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimSpeedCoef;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkDiagonalBackCoef;                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunDiagonalBackCoef;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkBackCoef;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunBackCoef;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveBackCrouchCoef;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveBackLowCrouchCoef;                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirControlCoef;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTurnRate;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpRate;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimTurnCoef;                                             // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimLookUpCoef;                                           // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSlowdownValue;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaggerAngle;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.NavModifierHolder
	 * Size -> 0x0030
	 */
	struct FNavModifierHolder
	{
	public:
		unsigned char                                              UnknownData_92OV[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AbilityParams
	 * Size -> 0x0018
	 */
	struct FAbilityParams
	{
	public:
		unsigned char                                              UnknownData_8U8R[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SpawnPhantomParams
	 * Size -> 0x00F8
	 */
	struct FSpawnPhantomParams
	{
	public:
		unsigned char                                              UnknownData_8XF2[0xF8];                                  // 0x0000(0x00F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.InteractionHitInfo
	 * Size -> 0x0010
	 */
	struct FInteractionHitInfo
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PhysicsHitArgs
	 * Size -> 0x0008
	 */
	struct FPhysicsHitArgs
	{
	public:
		class AActor*                                              StimulusActor;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.PsySpawnStruct
	 * Size -> 0x00F0
	 */
	struct FPsySpawnStruct
	{
	public:
		unsigned char                                              UnknownData_6A6H[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CurrentPsyPrototypeClass;                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7KS[0xC8];                                  // 0x0028(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.QuestStatusDisplayInfo
	 * Size -> 0x0048
	 */
	struct FQuestStatusDisplayInfo
	{
	public:
		class FText                                                QuestName;                                               // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                QuestStatus;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FColorSettings                                      ColorSettings;                                           // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.RelationLevelRange
	 * Size -> 0x0008
	 */
	struct FRelationLevelRange
	{
	public:
		int32_t                                                    Start;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    End;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ReactionDesc
	 * Size -> 0x0008
	 */
	struct FReactionDesc
	{
	public:
		ERelationLevel                                             RelationToProvoker;                                      // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERelationLevel                                             RelationToRequester;                                     // 0x0001(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IC6T[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ReactionValue;                                           // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.RelationRequestDesc
	 * Size -> 0x0010
	 */
	struct FRelationRequestDesc
	{
	public:
		TArray<struct FReactionDesc>                               Reactions;                                               // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.RightClickMenuData
	 * Size -> 0x0580
	 */
	struct FRightClickMenuData
	{
	public:
		unsigned char                                              UnknownData_Q4SB[0x580];                                 // 0x0000(0x0580) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SettingsVariables
	 * Size -> 0x0020
	 */
	struct FSettingsVariables
	{
	public:
		float                                                      MouseSensitivityCoef;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimMouseSensitivityCoef;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELocalizationLanguage                                      SelectedLanguage;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOnAllVolume;                                        // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOnMusicVolume;                                      // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOnVoiceVolume;                                      // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOnMutantsVolume;                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOnCombatMusic;                                      // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0K0[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllVolume;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MusicVolume;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoiceVolume;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MutantsVolume;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.ShootingPatternKey
	 * Size -> 0x000C
	 */
	struct FShootingPatternKey
	{
	public:
		unsigned char                                              UnknownData_7IAU[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DialogAnswerInfo
	 * Size -> 0x0058
	 */
	struct FDialogAnswerInfo
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvailable;                                              // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDialogAnswerColor                                         AnswerColor;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TUD[0x52];                                  // 0x0006(0x0052) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DialogFolderInfo
	 * Size -> 0x0030
	 */
	struct FDialogFolderInfo
	{
	public:
		class FText                                                FolderName;                                              // 0x0000(0x0018) NativeAccessSpecifierPublic
		TArray<struct FDialogAnswerInfo>                           Answers;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FUID                                                MemberUID;                                               // 0x0028(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC79[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.DialogUIInfo
	 * Size -> 0x0060
	 */
	struct FDialogUIInfo
	{
	public:
		unsigned char                                              UnknownData_GNR1[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SignalToReceive
	 * Size -> 0x0028
	 */
	struct FSignalToReceive
	{
	public:
		struct FGSCComponentReference                              SenderComponentRef;                                      // 0x0000(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.SkySphereParams
	 * Size -> 0x0058
	 */
	struct FSkySphereParams
	{
	public:
		unsigned char                                              UnknownData_4EAF[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.PathFollowingControlPoint
	 * Size -> 0x0030
	 */
	struct FPathFollowingControlPoint
	{
	public:
		unsigned char                                              UnknownData_2O9U[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPathControlPointType                                      PointType;                                               // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGuaranteedPass;                                         // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JP3D[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.LocomotionParameters
	 * Size -> 0x0078
	 */
	struct FLocomotionParameters
	{
	public:
		unsigned char                                              UnknownData_NR5L[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.AgentDesiredSpeedDependencies
	 * Size -> 0x0008
	 */
	struct FAgentDesiredSpeedDependencies
	{
	public:
		float                                                      DesiredSpeed;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceAvoidAcceleration;                                 // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAwareness                                                 AwarenessLevel;                                          // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWZ3[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ObjectScatterData
	 * Size -> 0x0038
	 */
	struct FObjectScatterData
	{
	public:
		unsigned char                                              UnknownData_WKLH[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.SpawnedItemGenerator
	 * Size -> 0x0010
	 */
	struct FSpawnedItemGenerator
	{
	public:
		class FString                                              PrototypeSID;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Stalker2.StackSplitInfo
	 * Size -> 0x0050
	 */
	struct FStackSplitInfo
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTakeItem;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTGQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SplitLabel;                                              // 0x0010(0x0018) NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemName;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUID                                                ItemUID;                                                 // 0x0048(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T672[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.StealthParams
	 * Size -> 0x0024
	 */
	struct FStealthParams
	{
	public:
		float                                                      FlashLightCoef;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisibilitySizeFactor;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisibilityCrouchCoef;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisibilityJumpCoef;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisibilityObstacleHeadCoef;                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisibilityObstacleBodyCoef;                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseObstacleCoef;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseCrouchCoef;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseJumpCoef;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.StrandSplineComponent
	 * Size -> 0x00B0
	 */
	struct FStrandSplineComponent
	{
	public:
		struct FVector                                             WorldPos;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartPos;                                                // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartTangent;                                            // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndPos;                                                  // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndTangent;                                              // 0x0068(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0080(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RelativeScale;                                           // 0x0098(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.StrandStaticMeshComponent
	 * Size -> 0x0068
	 */
	struct FStrandStaticMeshComponent
	{
	public:
		struct FVector                                             WorldPos;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            WorldRotation;                                           // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RelativeScale;                                           // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.StrandFinalData
	 * Size -> 0x0020
	 */
	struct FStrandFinalData
	{
	public:
		TArray<struct FStrandSplineComponent>                      SplineComponentsData;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStrandStaticMeshComponent>                  StaticMeshComponentsData;                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.StructItemGeneratorSingleElement
	 * Size -> 0x0020
	 */
	struct FStructItemGeneratorSingleElement
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDurability;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDurability;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireWeapon;                                          // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireAmmo;                                            // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5NG[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.StructItemGenerationCategory
	 * Size -> 0x0020
	 */
	struct FStructItemGenerationCategory
	{
	public:
		EItemGenerationCategory                                    Category;                                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GWP[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_NSS5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStructItemGeneratorSingleElement>           PossibleItems;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowSameCategoryGeneration;                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N3W[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.StructTraderItemGenerationCategory
	 * Size -> 0x0028
	 */
	struct FStructTraderItemGenerationCategory
	{
	public:
		int32_t                                                    ConditionFlag;                                           // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBAV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TraderItemGenerationSetName;                             // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStructItemGeneratorSingleElement>           PossibleItems;                                           // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GUIDIndex
	 * Size -> 0x0004
	 */
	struct FGUIDIndex
	{
	public:
		unsigned char                                              UnknownData_EJFB[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.ItemUID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FItemUID : public FUID
	{	};

	/**
	 * ScriptStruct Stalker2.ItemContainerUID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FItemContainerUID : public FUID
	{	};

	/**
	 * ScriptStruct Stalker2.GroupUID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FGroupUID : public FUID
	{	};

	/**
	 * ScriptStruct Stalker2.DebugMap
	 * Size -> 0x0020
	 */
	struct FDebugMap
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSC_WidgetStyle
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGSC_WidgetStyle : public FTableRowBase
	{
	public:
		struct FLinearColor                                        Colour;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.GSC_WidgetProgressStyle
	 * Size -> 0x0298 (FullSize[0x02A0] - InheritedSize[0x0008])
	 */
	struct FGSC_WidgetProgressStyle : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_17QL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProgressBarStyle                                   ProgressBarStyle;                                        // 0x0010(0x0290) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stalker2.Upgrade
	 * Size -> 0x0058
	 */
	struct FUpgrade
	{
	public:
		unsigned char                                              UnknownData_X5U6[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.WLSplinePointTiming
	 * Size -> 0x0001
	 */
	struct FWLSplinePointTiming
	{
	public:
		unsigned char                                              UnknownData_Q6WD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stalker2.UpdateTooltipSettings
	 * Size -> 0x0005
	 */
	struct FUpdateTooltipSettings
	{
	public:
		unsigned char                                              UnknownData_0YO2[0x5];                                   // 0x0000(0x0005) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
