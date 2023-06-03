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
	 * 		Name   -> PredefinedFunction AActorEyesCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorEyesCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ActorEyesCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorInteractionDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorInteractionDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ActorInteractionDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AModelCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AModelCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ModelCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> DelegateFunction Stalker2.Obj.OnObjTurnedToTarget__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AObj::OnObjTurnedToTarget__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Stalker2.Obj.OnObjTurnedToTarget__DelegateSignature");
		
		AObj_OnObjTurnedToTarget__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0CF0
	 * 		Name   -> Function Stalker2.Obj.AimTimelineFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AObj::AimTimelineFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Obj.AimTimelineFinished");
		
		AObj_AimTimelineFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AObj.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AObj::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Obj");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAgent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAgent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Agent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICoreSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICoreSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AICoreSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDebugSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDebugSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AIDebugSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFeatureSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFeatureSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AIFeatureSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAirWalkCheat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAirWalkCheat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AirWalkCheat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BaseManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseTickableManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseTickableManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BaseTickableManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALifeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALifeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ALifeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AALifeSpawnLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AALifeSpawnLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ALifeSpawnLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F95B10
	 * 		Name   -> Function Stalker2.ALifeSpawnLocationRandom.GenerateSpawnLocation
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AALifeSpawnLocationRandom::GenerateSpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ALifeSpawnLocationRandom.GenerateSpawnLocation");
		
		AALifeSpawnLocationRandom_GenerateSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AALifeSpawnLocationRandom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AALifeSpawnLocationRandom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ALifeSpawnLocationRandom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019B90
	 * 		Name   -> Function Stalker2.WidgetBase.UpdateWidget
	 * 		Flags  -> (Native, Protected)
	 */
	void UWidgetBase::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WidgetBase.UpdateWidget");
		
		UWidgetBase_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFABE0
	 * 		Name   -> Function Stalker2.WidgetBase.DestructClearWidget
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UWidgetBase::DestructClearWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WidgetBase.DestructClearWidget");
		
		UWidgetBase_DestructClearWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChildViewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChildViewBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ChildViewBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmmoWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AmmoWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerWeaponAnimCollectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerWeaponAnimCollectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerWeaponAnimCollectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceMutant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceMutant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceMutant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceBlindDog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceBlindDog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceBlindDog");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceBloodsucker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceBloodsucker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceBloodsucker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceBoar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceBoar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceBoar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceFace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceFace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceFace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceFlesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceFlesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceFlesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceHuman.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceHuman::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceHuman");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceHumanFirearm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceHumanFirearm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceHumanFirearm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerDetector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerDetector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerDetector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerInjector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerInjector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerInjector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerFirearm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerFirearm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerFirearm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerThrowable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerThrowable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerThrowable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerKnife.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerKnife::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerKnife");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerPDA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerPDA::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerPDA");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstanceItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstancePlayerWeaponAttach.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstancePlayerWeaponAttach::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimInstancePlayerWeaponAttach");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotifyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_AgentEnableRootMotion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_AgentEnableRootMotion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotifyState_AgentEnableRootMotion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_ApplyDurationalEffectContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_ApplyDurationalEffectContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotifyState_ApplyDurationalEffectContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_LookAt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_LookAt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotifyState_LookAt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_MotionAudioEnveloper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_MotionAudioEnveloper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotifyState_MotionAudioEnveloper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_AIAnimationAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_AIAnimationAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_AIAnimationAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_AnyFootOnGround.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_AnyFootOnGround::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_AnyFootOnGround");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_AttachItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_AttachItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_AttachItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_AttachItemContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_AttachItemContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_AttachItemContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_AttackHitDetection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_AttackHitDetection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_AttackHitDetection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_ChangeWeaponIdle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_ChangeWeaponIdle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_ChangeWeaponIdle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_ClimbingActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_ClimbingActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_ClimbingActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_CopyNiagaraValueFromAnotherContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_CopyNiagaraValueFromAnotherContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_CopyNiagaraValueFromAnotherContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_DetachItemContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_DetachItemContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_DetachItemContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_GSCPlayMontageNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_GSCPlayMontageNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_GSCPlayMontageNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_GSCPlayMontageNotifyWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_GSCPlayMontageNotifyWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_GSCPlayMontageNotifyWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_HandIK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_HandIK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_HandIK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_HideBones.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_HideBones::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_HideBones");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_Jump.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_Jump::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_Jump");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_LookAt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_LookAt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_LookAt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_MakeAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_MakeAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_MakeAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayAnimationOnAttachedItemContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayAnimationOnAttachedItemContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_PlayAnimationOnAttachedItemContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayerAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayerAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_PlayerAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayerActionTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayerActionTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_PlayerActionTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9C160
	 * 		Name   -> Function Stalker2.AnimNotify_PlayInteractablesFX.GetAvailableBones
	 * 		Flags  -> (Final, Native, Static, Public, Const)
	 */
	TArray<class FString> UAnimNotify_PlayInteractablesFX::STATIC_GetAvailableBones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.AnimNotify_PlayInteractablesFX.GetAvailableBones");
		
		UAnimNotify_PlayInteractablesFX_GetAvailableBones_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayInteractablesFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayInteractablesFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_PlayInteractablesFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_RagdollAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_RagdollAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_RagdollAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_SpawnNiagaraSystemAtLocationContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_UpdateMagazineVisibililty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_UpdateMagazineVisibililty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_UpdateMagazineVisibililty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_WeaponAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_WeaponAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnimNotify_WeaponAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_Anomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_Anomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_Anomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.Anomaly.OnRechargeStateStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAnomaly::OnRechargeStateStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.OnRechargeStateStarted");
		
		AAnomaly_OnRechargeStateStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.Anomaly.OnIdleStateStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAnomaly::OnIdleStateStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.OnIdleStateStarted");
		
		AAnomaly_OnIdleStateStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9FF80
	 * 		Name   -> Function Stalker2.Anomaly.OnEndOverlap
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAnomaly::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.OnEndOverlap");
		
		AAnomaly_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9F8C0
	 * 		Name   -> Function Stalker2.Anomaly.OnBeginOverlap
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AAnomaly::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.OnBeginOverlap");
		
		AAnomaly_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.Anomaly.OnActiveStateStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAnomaly::OnActiveStateStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.OnActiveStateStarted");
		
		AAnomaly_OnActiveStateStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.Anomaly.OnActivationStateStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAnomaly::OnActivationStateStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.OnActivationStateStarted");
		
		AAnomaly_OnActivationStateStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01A62110
	 * 		Name   -> Function Stalker2.Anomaly.ForceDeactivate
	 * 		Flags  -> (Native, Public)
	 */
	void AAnomaly::ForceDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.ForceDeactivate");
		
		AAnomaly_ForceDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9F880
	 * 		Name   -> Function Stalker2.Anomaly.ForceActivateOnce
	 * 		Flags  -> (Native, Public)
	 */
	void AAnomaly::ForceActivateOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.ForceActivateOnce");
		
		AAnomaly_ForceActivateOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9F860
	 * 		Name   -> Function Stalker2.Anomaly.ForceActivateEndless
	 * 		Flags  -> (Native, Public)
	 */
	void AAnomaly::ForceActivateEndless()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Anomaly.ForceActivateEndless");
		
		AAnomaly_ForceActivateEndless_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Anomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnomalyDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnomalyDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AnomalyDetectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_ItemContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_ItemContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_ItemContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArtifact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArtifact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Artifact");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D2F0
	 * 		Name   -> Function Stalker2.UIDActorComponent.GetGUID
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGuid UUIDActorComponent::GetGUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UIDActorComponent.GetGUID");
		
		UUIDActorComponent_GetGUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIDActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIDActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEDA0
	 * 		Name   -> Function Stalker2.InteractionComponent.SetInteractionActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionComponent::SetInteractionActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractionComponent.SetInteractionActive");
		
		UInteractionComponent_SetInteractionActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SingleClickComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArtifactInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArtifactInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ArtifactInteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArtifactStrafeBehaviourComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArtifactStrafeBehaviourComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ArtifactStrafeBehaviourComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AttackComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioRoomBakedReflectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioRoomBakedReflectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AudioRoomBakedReflectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioRoomBandwidthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioRoomBandwidthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AudioRoomBandwidthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioScattererDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioScattererDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AudioScattererDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AutoInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoSaveManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSaveManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AutoSaveManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA0340
	 * 		Name   -> Function Stalker2.BarbedWireComponent.OnOverlapEnd
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarbedWireComponent::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BarbedWireComponent.OnOverlapEnd");
		
		UBarbedWireComponent_OnOverlapEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA00D0
	 * 		Name   -> Function Stalker2.BarbedWireComponent.OnOverlapBegin
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlapComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBarbedWireComponent::OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BarbedWireComponent.OnOverlapBegin");
		
		UBarbedWireComponent_OnOverlapBegin_Params params {};
		params.OverlapComponent = OverlapComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9FB20
	 * 		Name   -> Function Stalker2.BarbedWireComponent.OnCompHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBarbedWireComponent::OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BarbedWireComponent.OnCompHit");
		
		UBarbedWireComponent_OnCompHit_Params params {};
		params.HitComp = HitComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarbedWireComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarbedWireComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BarbedWireComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseConsoleManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseConsoleManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BaseConsoleManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA04C0
	 * 		Name   -> Function Stalker2.BaseInteractableAction.RunAlternativeAction
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UBaseInteractableAction::RunAlternativeAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BaseInteractableAction.RunAlternativeAction");
		
		UBaseInteractableAction_RunAlternativeAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA04A0
	 * 		Name   -> Function Stalker2.BaseInteractableAction.RunAction
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UBaseInteractableAction::RunAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BaseInteractableAction.RunAction");
		
		UBaseInteractableAction_RunAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01613370
	 * 		Name   -> Function Stalker2.BaseInteractableAction.CanInteract
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UBaseInteractableAction::CanInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BaseInteractableAction.CanInteract");
		
		UBaseInteractableAction_CanInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseInteractableAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInteractableAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BaseInteractableAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BaseVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_Bed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_Bed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_Bed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9F8A0
	 * 		Name   -> Function Stalker2.BedView.Interact
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABedView::Interact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BedView.Interact");
		
		ABedView_Interact_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABedView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABedView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BedView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputProcessingUnit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputProcessingUnit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InputProcessingUnit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBestiaryIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBestiaryIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BestiaryIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBiomeScatterToolConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBiomeScatterToolConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BiomeScatterToolConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABloodsucker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABloodsucker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Bloodsucker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodsuckerInvisibilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodsuckerInvisibilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BloodsuckerInvisibilityComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9FD50
	 * 		Name   -> Function Stalker2.Bolt.OnComponentHit
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ABolt::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Bolt.OnComponentHit");
		
		ABolt_OnComponentHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABolt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABolt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Bolt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBonfire.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBonfire::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Bonfire");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD6460
	 * 		Name   -> Function Stalker2.ViewBase.UIClose
	 * 		Flags  -> (Native, Protected)
	 */
	void UViewBase::UIClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ViewBase.UIClose");
		
		UViewBase_UIClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ViewBase.PreCloseUpdateView
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UViewBase::PreCloseUpdateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ViewBase.PreCloseUpdateView");
		
		UViewBase_PreCloseUpdateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ViewBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewBaseExtended.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewBaseExtended::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ViewBaseExtended");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9F7D0
	 * 		Name   -> Function Stalker2.BookViewBase.ClickMenuButton
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            InButtonIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBookViewBase::ClickMenuButton(int32_t InButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BookViewBase.ClickMenuButton");
		
		UBookViewBase_ClickMenuButton_Params params {};
		params.InButtonIndex = InButtonIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F9F7B0
	 * 		Name   -> Function Stalker2.BookViewBase.ChangeSelectButton
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UBookViewBase::ChangeSelectButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.BookViewBase.ChangeSelectButton");
		
		UBookViewBase_ChangeSelectButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBookViewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBookViewBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BookViewBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5E90
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.WidgetIsChildOf
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     PossibleParent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.WidgetIsChildOf");
		
		UVictoryBPFunctionLibrary_WidgetIsChildOf_Params params {};
		params.ChildWidget = ChildWidget;
		params.PossibleParent = PossibleParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5DC0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UVictoryBPFunctionLibrary::STATIC_WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.WidgetGetParentOfClass");
		
		UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params params {};
		params.ChildWidget = ChildWidget;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5CA0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport");
		
		UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params params {};
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PosX != nullptr)
			*PosX = params.PosX;
		if (PosY != nullptr)
			*PosY = params.PosY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5BD0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class USoundClass*                                 SoundClassObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictorySoundVolumeChange");
		
		UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params params {};
		params.SoundClassObject = SoundClassObject;
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5A60
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		struct FVictoryInputAxis                           ToRemove                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind");
		
		UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params params {};
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5890
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		struct FVictoryInput                               ToRemove                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind");
		
		UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params params {};
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA55F0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		struct FVictoryInputAxis                           Original                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInputAxis                           NewBinding                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryReBindAxisKey");
		
		UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params params {};
		params.Original = Original;
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5280
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryReBindActionKey
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		struct FVictoryInput                               Original                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInput                               NewBinding                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryReBindActionKey");
		
		UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params params {};
		params.Original = Original;
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5200
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 */
	class FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__ScreenShotsDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA5180
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 */
	class FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__SavedDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryPaths__SavedDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4F70
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVictoryInputAxis UVictoryBPFunctionLibrary::STATIC_VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis");
		
		UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4D40
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVictoryInput UVictoryBPFunctionLibrary::STATIC_VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryGetVictoryInput");
		
		UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4C20
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FVictoryInputAxis>                   Bindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings");
		
		UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bindings != nullptr)
			*Bindings = params.Bindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4990
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVictoryInput>                       ActionBindings                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVictoryInputAxis>                   AxisBindings                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey");
		
		UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionBindings != nullptr)
			*ActionBindings = params.ActionBindings;
		if (AxisBindings != nullptr)
			*AxisBindings = params.AxisBindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4870
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FVictoryInput>                       Bindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings");
		
		UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bindings != nullptr)
			*Bindings = params.Bindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4580
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      OriginalFileName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewAbsoluteFolderPath                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HighResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent");
		
		UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params params {};
		params.NewName = NewName;
		params.NewAbsoluteFolderPath = NewAbsoluteFolderPath;
		params.HighResolution = HighResolution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalFileName != nullptr)
			*OriginalFileName = params.OriginalFileName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA44C0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              FileNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames");
		
		UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileNames != nullptr)
			*FileNames = params.FileNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4300
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.SaveConfigToFile
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVictoryInput>                       VictoryInputs                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_SaveConfigToFile(TArray<struct FVictoryInput> VictoryInputs, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.SaveConfigToFile");
		
		UVictoryBPFunctionLibrary_SaveConfigToFile_Params params {};
		params.VictoryInputs = VictoryInputs;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4240
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass");
		
		UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA3C20
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.MapRangeClamped
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.MapRangeClamped");
		
		UVictoryBPFunctionLibrary_MapRangeClamped_Params params {};
		params.Value = Value;
		params.InRangeA = InRangeA;
		params.InRangeB = InRangeB;
		params.OutRangeA = OutRangeA;
		params.OutRangeB = OutRangeB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA3B10
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ObjectClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Path                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UVictoryBPFunctionLibrary::STATIC_LoadObjectFromAssetPath(class UClass* ObjectClass, const class FName& Path, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.LoadObjectFromAssetPath");
		
		UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params params {};
		params.ObjectClass = ObjectClass;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA3A40
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::STATIC_IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport");
		
		UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA39B0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.GetObjectPath
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UVictoryBPFunctionLibrary::STATIC_GetObjectPath(class UObject* Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.GetObjectPath");
		
		UVictoryBPFunctionLibrary_GetObjectPath_Params params {};
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA38B0
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UVictoryBPFunctionLibrary::STATIC_GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.GetFirstWidgetOfClass");
		
		UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA3710
	 * 		Name   -> Function Stalker2.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VictoryBPFunctionLibrary.GetAllWidgetsOfClass");
		
		UVictoryBPFunctionLibrary_GetAllWidgetsOfClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundWidgets != nullptr)
			*FoundWidgets = params.FoundWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.VictoryBPFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleSoundPlacement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleSoundPlacement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.VehicleSoundPlacement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABulbAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABulbAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.BulbAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA36F0
	 * 		Name   -> Function Stalker2.ButtonBase.ButtonClicked
	 * 		Flags  -> (Native, Protected)
	 */
	void UButtonBase::ButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ButtonBase.ButtonClicked");
		
		UButtonBase_ButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButtonBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ButtonBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModifier_LookAt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModifier_LookAt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CameraModifier_LookAt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACarouselAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarouselAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CarouselAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeMagazineToRoundIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeMagazineToRoundIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ChangeMagazineToRoundIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeMagazineToTwinIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeMagazineToTwinIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ChangeMagazineToTwinIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4220
	 * 		Name   -> Function Stalker2.ChangeWidgetSwitcher.PreDestructUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChangeWidgetSwitcher::PreDestructUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ChangeWidgetSwitcher.PreDestructUpdate");
		
		UChangeWidgetSwitcher_PreDestructUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4200
	 * 		Name   -> Function Stalker2.ChangeWidgetSwitcher.PreConstructUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChangeWidgetSwitcher::PreConstructUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ChangeWidgetSwitcher.PreConstructUpdate");
		
		UChangeWidgetSwitcher_PreConstructUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeWidgetSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeWidgetSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ChangeWidgetSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterStatSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterStatSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CharacterStatSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA47A0
	 * 		Name   -> Function Stalker2.CheckBoxWidget.SetChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInChecked                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBrodcastOnChangeCheck                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBoxWidget::SetChecked(bool bInChecked, bool bBrodcastOnChangeCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CheckBoxWidget.SetChecked");
		
		UCheckBoxWidget_SetChecked_Params params {};
		params.bInChecked = bInChecked;
		params.bBrodcastOnChangeCheck = bBrodcastOnChangeCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA3880
	 * 		Name   -> Function Stalker2.CheckBoxWidget.GetChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCheckBoxWidget::GetChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CheckBoxWidget.GetChecked");
		
		UCheckBoxWidget_GetChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckBoxWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckBoxWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CheckBoxWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ChemicalAnomaly.OnDecalSpawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChemicalAnomaly::OnDecalSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ChemicalAnomaly.OnDecalSpawn");
		
		AChemicalAnomaly_OnDecalSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChemicalAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChemicalAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ChemicalAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4060
	 * 		Name   -> Function Stalker2.CinematicDelegateToken.OnCinematicStopped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCinematicDelegateToken::OnCinematicStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CinematicDelegateToken.OnCinematicStopped");
		
		UCinematicDelegateToken_OnCinematicStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4040
	 * 		Name   -> Function Stalker2.CinematicDelegateToken.OnCinematicStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCinematicDelegateToken::OnCinematicStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CinematicDelegateToken.OnCinematicStarted");
		
		UCinematicDelegateToken_OnCinematicStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCinematicDelegateToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicDelegateToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CinematicDelegateToken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA4080
	 * 		Name   -> Function Stalker2.CinematicManager.OnFadeScreenEnd
	 * 		Flags  -> (Final, Native, Private, HasDefaults)
	 * Parameters:
	 * 		bool                                               bFadeOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FadeTargetColor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCinematicManager::OnFadeScreenEnd(bool bFadeOut, const struct FLinearColor& FadeTargetColor, float FadeAmount, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CinematicManager.OnFadeScreenEnd");
		
		UCinematicManager_OnFadeScreenEnd_Params params {};
		params.bFadeOut = bFadeOut;
		params.FadeTargetColor = FadeTargetColor;
		params.FadeAmount = FadeAmount;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCinematicManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CinematicManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ClassicFireAnomaly.OnStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AClassicFireAnomaly::OnStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ClassicFireAnomaly.OnStateChanged");
		
		AClassicFireAnomaly_OnStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClassicFireAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClassicFireAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ClassicFireAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FA3DD0
	 * 		Name   -> Function Stalker2.ClickerAnomaly.OnBeginParticleOverlap
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AClickerAnomaly::OnBeginParticleOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ClickerAnomaly.OnBeginParticleOverlap");
		
		AClickerAnomaly_OnBeginParticleOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClickerAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClickerAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ClickerAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatMusicConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatMusicConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CombatMusicConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatSynchronizerSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatSynchronizerSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CombatSynchronizerSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAEB0
	 * 		Name   -> Function Stalker2.InteractableComponent.SetEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnabled                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractableComponent::SetEnabled(bool bInEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableComponent.SetEnabled");
		
		UInteractableComponent_SetEnabled_Params params {};
		params.bInEnabled = bInEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAD90
	 * 		Name   -> Function Stalker2.InteractableComponent.SetDisplayPriority
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		EDisplayPriority                                   NewPriority                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractableComponent::SetDisplayPriority(EDisplayPriority NewPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableComponent.SetDisplayPriority");
		
		UInteractableComponent_SetDisplayPriority_Params params {};
		params.NewPriority = NewPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAB50
	 * 		Name   -> Function Stalker2.InteractableComponent.GetPreventDefaultInteract
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UInteractableComponent::GetPreventDefaultInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableComponent.GetPreventDefaultInteract");
		
		UInteractableComponent_GetPreventDefaultInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAB20
	 * 		Name   -> Function Stalker2.InteractableComponent.GetInteractionType
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	EInteractionType UInteractableComponent::GetInteractionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableComponent.GetInteractionType");
		
		UInteractableComponent_GetInteractionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAAF0
	 * 		Name   -> Function Stalker2.InteractableComponent.GetDisplayPriority
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	EDisplayPriority UInteractableComponent::GetDisplayPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableComponent.GetDisplayPriority");
		
		UInteractableComponent_GetDisplayPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombinationLock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombinationLock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CombinationLock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD6460
	 * 		Name   -> Function Stalker2.HintBase.UpdateHintWidget
	 * 		Flags  -> (Native, Public)
	 */
	void UHintBase::UpdateHintWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintBase.UpdateHintWidget");
		
		UHintBase_UpdateHintWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5E50
	 * 		Name   -> Function Stalker2.HintBase.SetText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHintBase::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintBase.SetText");
		
		UHintBase_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5DB0
	 * 		Name   -> Function Stalker2.HintBase.SetStylePrefix
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      InStylePrefix                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHintBase::SetStylePrefix(const class FString& InStylePrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintBase.SetStylePrefix");
		
		UHintBase_SetStylePrefix_Params params {};
		params.InStylePrefix = InStylePrefix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.HintBase.PostShowHover
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInShow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHintBase::PostShowHover(bool bInShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintBase.PostShowHover");
		
		UHintBase_PostShowHover_Params params {};
		params.bInShow = bInShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5670
	 * 		Name   -> Function Stalker2.HintBase.HoverChangeHintTextColor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShow                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InStylePrefix                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHintBase::HoverChangeHintTextColor(bool bShow, const class FString& InStylePrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintBase.HoverChangeHintTextColor");
		
		UHintBase_HoverChangeHintTextColor_Params params {};
		params.bShow = bShow;
		params.InStylePrefix = InStylePrefix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.HintBase.GetHoverSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	TArray<struct FHoverAction> UHintBase::GetHoverSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintBase.GetHoverSettings");
		
		UHintBase_GetHoverSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonHint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonHint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CommonHint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADDA0
	 * 		Name   -> Function Stalker2.CompassWidget.ToggleOpacityState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOpasityState                                      InOpasityState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPreviousStateMode                                 InPreviousStateMode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayForward                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompassWidget::ToggleOpacityState(EOpasityState InOpasityState, EPreviousStateMode InPreviousStateMode, bool bPlayForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CompassWidget.ToggleOpacityState");
		
		UCompassWidget_ToggleOpacityState_Params params {};
		params.InOpasityState = InOpasityState;
		params.InPreviousStateMode = InPreviousStateMode;
		params.bPlayForward = bPlayForward;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC040
	 * 		Name   -> Function Stalker2.CompassWidget.GetCompassCenterBorders
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsRightBorder                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCompassWidget::GetCompassCenterBorders(bool bIsRightBorder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CompassWidget.GetCompassCenterBorders");
		
		UCompassWidget_GetCompassCenterBorders_Params params {};
		params.bIsRightBorder = bIsRightBorder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompassWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompassWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CompassWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActorOwnsModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActorOwnsModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActorOwnsModel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_ContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_ContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_ContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AContextualAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContextualAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualActionAssetDataShared.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualActionAssetDataShared::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualActionAssetDataShared");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualActionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualActionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualActionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualActionPrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualActionPrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualActionPrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCNeedPrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCNeedPrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NPCNeedPrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquippedItemPrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquippedItemPrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EquippedItemPrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCPrototypePrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCPrototypePrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NPCPrototypePrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAllowedAgentTypePrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAllowedAgentTypePrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AllowedAgentTypePrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombifiedAgentPrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombifiedAgentPrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ZombifiedAgentPrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemInInventoryPrecondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemInInventoryPrecondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemInInventoryPrecondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualActionEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualActionEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualActionEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualActionNeedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualActionNeedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualActionNeedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddNeedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddNeedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.AddNeedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveNeedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveNeedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RemoveNeedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACE30
	 * 		Name   -> Function Stalker2.ContextualNavLinkProxy.OnStartUsingCustomLink
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      MovingActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DestinationPoint                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AContextualNavLinkProxy::OnStartUsingCustomLink(class AActor* MovingActor, const struct FVector& DestinationPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ContextualNavLinkProxy.OnStartUsingCustomLink");
		
		AContextualNavLinkProxy_OnStartUsingCustomLink_Params params {};
		params.MovingActor = MovingActor;
		params.DestinationPoint = DestinationPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AContextualNavLinkProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContextualNavLinkProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ContextualNavLinkProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoverGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoverGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CoverGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoversStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoversStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CoversStorage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartCoverRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartCoverRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SmartCoverRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADF40
	 * 		Name   -> Function Stalker2.CppMediator.UIManagerOnQuestDeselected
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PrototypeID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_UIManagerOnQuestDeselected(int32_t PrototypeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.UIManagerOnQuestDeselected");
		
		UCppMediator_UIManagerOnQuestDeselected_Params params {};
		params.PrototypeID = PrototypeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADEC0
	 * 		Name   -> Function Stalker2.CppMediator.UIManagerGenerateAndGetDefaultNameSave
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UCppMediator::STATIC_UIManagerGenerateAndGetDefaultNameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.UIManagerGenerateAndGetDefaultNameSave");
		
		UCppMediator_UIManagerGenerateAndGetDefaultNameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADB90
	 * 		Name   -> Function Stalker2.CppMediator.SpawnTriplanarDecalAtLocation
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          DecalMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DecalSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              LifeSpan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTriplanarDecalComponent* UCppMediator::STATIC_SpawnTriplanarDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SpawnTriplanarDecalAtLocation");
		
		UCppMediator_SpawnTriplanarDecalAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DecalMaterial = DecalMaterial;
		params.DecalSize = DecalSize;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LifeSpan = LifeSpan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADA80
	 * 		Name   -> Function Stalker2.CppMediator.ShouldUpdateSolarTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              PrevSolarTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SolarTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UpdateSunDeltaTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_ShouldUpdateSolarTime(float PrevSolarTime, float SolarTime, float UpdateSunDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.ShouldUpdateSolarTime");
		
		UCppMediator_ShouldUpdateSolarTime_Params params {};
		params.PrevSolarTime = PrevSolarTime;
		params.SolarTime = SolarTime;
		params.UpdateSunDeltaTime = UpdateSunDeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD9A0
	 * 		Name   -> Function Stalker2.CppMediator.SetVoiceVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InVoiceVolume                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetVoiceVolume(float InVoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetVoiceVolume");
		
		UCppMediator_SetVoiceVolume_Params params {};
		params.InVoiceVolume = InVoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD920
	 * 		Name   -> Function Stalker2.CppMediator.SetTurnOnVoiceVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInTurnOnVoiceVolume                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetTurnOnVoiceVolume(bool bInTurnOnVoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetTurnOnVoiceVolume");
		
		UCppMediator_SetTurnOnVoiceVolume_Params params {};
		params.bInTurnOnVoiceVolume = bInTurnOnVoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD8A0
	 * 		Name   -> Function Stalker2.CppMediator.SetTurnOnMutantsVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInTurnOnMutantsVolume                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetTurnOnMutantsVolume(bool bInTurnOnMutantsVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetTurnOnMutantsVolume");
		
		UCppMediator_SetTurnOnMutantsVolume_Params params {};
		params.bInTurnOnMutantsVolume = bInTurnOnMutantsVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD820
	 * 		Name   -> Function Stalker2.CppMediator.SetTurnOnMusicVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInTurnOnMusicVolume                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetTurnOnMusicVolume(bool bInTurnOnMusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetTurnOnMusicVolume");
		
		UCppMediator_SetTurnOnMusicVolume_Params params {};
		params.bInTurnOnMusicVolume = bInTurnOnMusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD7A0
	 * 		Name   -> Function Stalker2.CppMediator.SetTurnOnAllVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInTurnOnAllVolume                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetTurnOnAllVolume(bool bInTurnOnAllVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetTurnOnAllVolume");
		
		UCppMediator_SetTurnOnAllVolume_Params params {};
		params.bInTurnOnAllVolume = bInTurnOnAllVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADA60
	 * 		Name   -> Function Stalker2.CppMediator.SettingsManagerRestoreCachedSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCppMediator::STATIC_SettingsManagerRestoreCachedSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SettingsManagerRestoreCachedSettings");
		
		UCppMediator_SettingsManagerRestoreCachedSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADA40
	 * 		Name   -> Function Stalker2.CppMediator.SettingsManagerCacheCurrentSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCppMediator::STATIC_SettingsManagerCacheCurrentSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SettingsManagerCacheCurrentSettings");
		
		UCppMediator_SettingsManagerCacheCurrentSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FADA20
	 * 		Name   -> Function Stalker2.CppMediator.SettingsManagerApplySettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCppMediator::STATIC_SettingsManagerApplySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SettingsManagerApplySettings");
		
		UCppMediator_SettingsManagerApplySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD730
	 * 		Name   -> Function Stalker2.CppMediator.SetSelectedLanguage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELocalizationLanguage                              InSelectedLanguage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetSelectedLanguage(ELocalizationLanguage InSelectedLanguage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetSelectedLanguage");
		
		UCppMediator_SetSelectedLanguage_Params params {};
		params.InSelectedLanguage = InSelectedLanguage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD6B0
	 * 		Name   -> Function Stalker2.CppMediator.SetMutantsVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMutantsVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetMutantsVolume(float InMutantsVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetMutantsVolume");
		
		UCppMediator_SetMutantsVolume_Params params {};
		params.InMutantsVolume = InMutantsVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD630
	 * 		Name   -> Function Stalker2.CppMediator.SetMusicVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMusicVolume                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetMusicVolume(float InMusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetMusicVolume");
		
		UCppMediator_SetMusicVolume_Params params {};
		params.InMusicVolume = InMusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD5B0
	 * 		Name   -> Function Stalker2.CppMediator.SetMouseSensitivityCoef
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMouseSensitivityCoef                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetMouseSensitivityCoef(float InMouseSensitivityCoef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetMouseSensitivityCoef");
		
		UCppMediator_SetMouseSensitivityCoef_Params params {};
		params.InMouseSensitivityCoef = InMouseSensitivityCoef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01502B70
	 * 		Name   -> Function Stalker2.CppMediator.SetMeshNaniteSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetMeshNaniteSettings(class UStaticMesh* Mesh, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetMeshNaniteSettings");
		
		UCppMediator_SetMeshNaniteSettings_Params params {};
		params.Mesh = Mesh;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD530
	 * 		Name   -> Function Stalker2.CppMediator.SetAudiologPlaybackPercent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              PlaybackPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetAudiologPlaybackPercent(float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetAudiologPlaybackPercent");
		
		UCppMediator_SetAudiologPlaybackPercent_Params params {};
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD4B0
	 * 		Name   -> Function Stalker2.CppMediator.SetAllVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InVolume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetAllVolume(float InVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetAllVolume");
		
		UCppMediator_SetAllVolume_Params params {};
		params.InVolume = InVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD430
	 * 		Name   -> Function Stalker2.CppMediator.SetAimMouseSensitivityCoef
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAimMouseSensitivityCoef                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SetAimMouseSensitivityCoef(float InAimMouseSensitivityCoef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SetAimMouseSensitivityCoef");
		
		UCppMediator_SetAimMouseSensitivityCoef_Params params {};
		params.InAimMouseSensitivityCoef = InAimMouseSensitivityCoef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD2B0
	 * 		Name   -> Function Stalker2.CppMediator.SaveCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CharacterSID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMeshGeneratorEditor*                        MeshGenerator                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveObj                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveObjConfigPath                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_SaveCharacter(const class FString& CharacterSID, class UMeshGeneratorEditor* MeshGenerator, bool bSaveObj, const class FString& SaveObjConfigPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.SaveCharacter");
		
		UCppMediator_SaveCharacter_Params params {};
		params.CharacterSID = CharacterSID;
		params.MeshGenerator = MeshGenerator;
		params.bSaveObj = bSaveObj;
		params.SaveObjConfigPath = SaveObjConfigPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD280
	 * 		Name   -> Function Stalker2.CppMediator.RuntimeGetWorld
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UWorld* UCppMediator::STATIC_RuntimeGetWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.RuntimeGetWorld");
		
		UCppMediator_RuntimeGetWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD1F0
	 * 		Name   -> Function Stalker2.CppMediator.ResetSaveForGuidActor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_ResetSaveForGuidActor(const struct FGuid& Guid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.ResetSaveForGuidActor");
		
		UCppMediator_ResetSaveForGuidActor_Params params {};
		params.Guid = Guid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD1D0
	 * 		Name   -> Function Stalker2.CppMediator.ReloadConfigPrototypes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCppMediator::STATIC_ReloadConfigPrototypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.ReloadConfigPrototypes");
		
		UCppMediator_ReloadConfigPrototypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAD0A0
	 * 		Name   -> Function Stalker2.CppMediator.ReadSaveForGuidActor_Bool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Seek                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCppMediator::STATIC_ReadSaveForGuidActor_Bool(const struct FGuid& Guid, bool* Value, int32_t Seek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.ReadSaveForGuidActor_Bool");
		
		UCppMediator_ReadSaveForGuidActor_Bool_Params params {};
		params.Guid = Guid;
		params.Seek = Seek;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACF80
	 * 		Name   -> Function Stalker2.CppMediator.QuestInteractionFinishAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LauncherName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_QuestInteractionFinishAction(class UInteractableComponent* InteractionComponent, const class FString& LauncherName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.QuestInteractionFinishAction");
		
		UCppMediator_QuestInteractionFinishAction_Params params {};
		params.InteractionComponent = InteractionComponent;
		params.LauncherName = LauncherName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACF80
	 * 		Name   -> Function Stalker2.CppMediator.QuestInteractionComponentFinishAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInteractionComponent*                       InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LauncherName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_QuestInteractionComponentFinishAction(class UInteractionComponent* InteractionComponent, const class FString& LauncherName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.QuestInteractionComponentFinishAction");
		
		UCppMediator_QuestInteractionComponentFinishAction_Params params {};
		params.InteractionComponent = InteractionComponent;
		params.LauncherName = LauncherName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACF00
	 * 		Name   -> Function Stalker2.CppMediator.OnToggleAudiolog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPlayAudiolog                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_OnToggleAudiolog(bool bPlayAudiolog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.OnToggleAudiolog");
		
		UCppMediator_OnToggleAudiolog_Params params {};
		params.bPlayAudiolog = bPlayAudiolog;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACDA0
	 * 		Name   -> Function Stalker2.CppMediator.ObjGetHP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Obj                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCppMediator::STATIC_ObjGetHP(class AObj* Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.ObjGetHP");
		
		UCppMediator_ObjGetHP_Params params {};
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABCD0
	 * 		Name   -> Function Stalker2.CppMediator.MusicPlaySoundCurve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            IndexNextWave                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_MusicPlaySoundCurve(int32_t IndexNextWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.MusicPlaySoundCurve");
		
		UCppMediator_MusicPlaySoundCurve_Params params {};
		params.IndexNextWave = IndexNextWave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACD10
	 * 		Name   -> Function Stalker2.CppMediator.MakeItemUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RawInt32                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItemUID UCppMediator::STATIC_MakeItemUID(int32_t RawInt32)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.MakeItemUID");
		
		UCppMediator_MakeItemUID_Params params {};
		params.RawInt32 = RawInt32;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACD10
	 * 		Name   -> Function Stalker2.CppMediator.MakeItemContainerUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RawInt32                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItemContainerUID UCppMediator::STATIC_MakeItemContainerUID(int32_t RawInt32)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.MakeItemContainerUID");
		
		UCppMediator_MakeItemContainerUID_Params params {};
		params.RawInt32 = RawInt32;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACCE0
	 * 		Name   -> Function Stalker2.CppMediator.MakeInvalidGUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UCppMediator::STATIC_MakeInvalidGUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.MakeInvalidGUID");
		
		UCppMediator_MakeInvalidGUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACC10
	 * 		Name   -> Function Stalker2.CppMediator.LogError
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Sender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_LogError(class AActor* Sender, const class FString& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.LogError");
		
		UCppMediator_LogError_Params params {};
		params.Sender = Sender;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACB80
	 * 		Name   -> Function Stalker2.CppMediator.IsWalking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsWalking(class AObj* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsWalking");
		
		UCppMediator_IsWalking_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACB50
	 * 		Name   -> Function Stalker2.CppMediator.IsRunningWorldPartitionMigrationFromCommandlet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UCppMediator::STATIC_IsRunningWorldPartitionMigrationFromCommandlet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsRunningWorldPartitionMigrationFromCommandlet");
		
		UCppMediator_IsRunningWorldPartitionMigrationFromCommandlet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FACA20
	 * 		Name   -> Function Stalker2.CppMediator.IsQuestSelected
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJournalQuest                               JournalQuest                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsQuestSelected(const struct FJournalQuest& JournalQuest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsQuestSelected");
		
		UCppMediator_IsQuestSelected_Params params {};
		params.JournalQuest = JournalQuest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC9F0
	 * 		Name   -> Function Stalker2.CppMediator.IsPendingLoadQuickSave
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UCppMediator::STATIC_IsPendingLoadQuickSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsPendingLoadQuickSave");
		
		UCppMediator_IsPendingLoadQuickSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC960
	 * 		Name   -> Function Stalker2.CppMediator.IsObjAlive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Obj                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsObjAlive(class AObj* Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsObjAlive");
		
		UCppMediator_IsObjAlive_Params params {};
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01501720
	 * 		Name   -> Function Stalker2.CppMediator.IsNaniteEnabledForMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsNaniteEnabledForMesh(class UStaticMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsNaniteEnabledForMesh");
		
		UCppMediator_IsNaniteEnabledForMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC8D0
	 * 		Name   -> Function Stalker2.CppMediator.IsMoving
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsMoving(class AObj* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsMoving");
		
		UCppMediator_IsMoving_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0175DC70
	 * 		Name   -> Function Stalker2.CppMediator.IsGamePlaying
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UCppMediator::STATIC_IsGamePlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsGamePlaying");
		
		UCppMediator_IsGamePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC840
	 * 		Name   -> Function Stalker2.CppMediator.IsFarAwayFromPlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsFarAwayFromPlayer(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsFarAwayFromPlayer");
		
		UCppMediator_IsFarAwayFromPlayer_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC810
	 * 		Name   -> Function Stalker2.CppMediator.IsEmissionActive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UCppMediator::STATIC_IsEmissionActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsEmissionActive");
		
		UCppMediator_IsEmissionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC780
	 * 		Name   -> Function Stalker2.CppMediator.IsActorInGameWorld
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_IsActorInGameWorld(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.IsActorInGameWorld");
		
		UCppMediator_IsActorInGameWorld_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC6F0
	 * 		Name   -> Function Stalker2.CppMediator.HasValidGUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_HasValidGUID(class AObj* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.HasValidGUID");
		
		UCppMediator_HasValidGUID_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC610
	 * 		Name   -> Function Stalker2.CppMediator.HasSaveForGuidActor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCppMediator::STATIC_HasSaveForGuidActor(const struct FGuid& Guid, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.HasSaveForGuidActor");
		
		UCppMediator_HasSaveForGuidActor_Params params {};
		params.Guid = Guid;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC5E0
	 * 		Name   -> Function Stalker2.CppMediator.GetSkyLightUpdateDeltaTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UCppMediator::STATIC_GetSkyLightUpdateDeltaTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetSkyLightUpdateDeltaTime");
		
		UCppMediator_GetSkyLightUpdateDeltaTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC550
	 * 		Name   -> Function Stalker2.CppMediator.GetPrototypeID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCppMediator::STATIC_GetPrototypeID(class AObj* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetPrototypeID");
		
		UCppMediator_GetPrototypeID_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC480
	 * 		Name   -> Function Stalker2.CppMediator.GetObjPrototypes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TMap<class FString, class UFileObjPrototypesEditor*> UCppMediator::STATIC_GetObjPrototypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetObjPrototypes");
		
		UCppMediator_GetObjPrototypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC400
	 * 		Name   -> Function Stalker2.CppMediator.GetNotePrototypeIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<int32_t> UCppMediator::STATIC_GetNotePrototypeIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetNotePrototypeIDs");
		
		UCppMediator_GetNotePrototypeIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC380
	 * 		Name   -> Function Stalker2.CppMediator.GetMeshGenerators
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UMeshGeneratorEditor*> UCppMediator::STATIC_GetMeshGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetMeshGenerators");
		
		UCppMediator_GetMeshGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC2F0
	 * 		Name   -> Function Stalker2.CppMediator.GetGUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCppMediator::STATIC_GetGUID(class AObj* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetGUID");
		
		UCppMediator_GetGUID_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC260
	 * 		Name   -> Function Stalker2.CppMediator.GetFocusedEnemy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AObj*                                        Obj                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AObj* UCppMediator::STATIC_GetFocusedEnemy(class AObj* Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetFocusedEnemy");
		
		UCppMediator_GetFocusedEnemy_Params params {};
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC210
	 * 		Name   -> Function Stalker2.CppMediator.GetFinishedQuests
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FJournalQuest> UCppMediator::STATIC_GetFinishedQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetFinishedQuests");
		
		UCppMediator_GetFinishedQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC1C0
	 * 		Name   -> Function Stalker2.CppMediator.GetFailedQuests
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FJournalQuest> UCppMediator::STATIC_GetFailedQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetFailedQuests");
		
		UCppMediator_GetFailedQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC180
	 * 		Name   -> Function Stalker2.CppMediator.GetEmissionLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FVector UCppMediator::STATIC_GetEmissionLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetEmissionLocation");
		
		UCppMediator_GetEmissionLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC140
	 * 		Name   -> Function Stalker2.CppMediator.GetCurrentSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FSettingsVariables UCppMediator::STATIC_GetCurrentSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetCurrentSettings");
		
		UCppMediator_GetCurrentSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC110
	 * 		Name   -> Function Stalker2.CppMediator.GetCurrentAudiologPlayedTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UCppMediator::STATIC_GetCurrentAudiologPlayedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetCurrentAudiologPlayedTime");
		
		UCppMediator_GetCurrentAudiologPlayedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC0E0
	 * 		Name   -> Function Stalker2.CppMediator.GetCurrentAudiologDuration
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UCppMediator::STATIC_GetCurrentAudiologDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetCurrentAudiologDuration");
		
		UCppMediator_GetCurrentAudiologDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FAC010
	 * 		Name   -> Function Stalker2.CppMediator.GetAnomalyCullingRadius
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UCppMediator::STATIC_GetAnomalyCullingRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetAnomalyCullingRadius");
		
		UCppMediator_GetAnomalyCullingRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABFC0
	 * 		Name   -> Function Stalker2.CppMediator.GetActiveSecondaryQuests
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FJournalQuest> UCppMediator::STATIC_GetActiveSecondaryQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetActiveSecondaryQuests");
		
		UCppMediator_GetActiveSecondaryQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABF70
	 * 		Name   -> Function Stalker2.CppMediator.GetActiveMainQuests
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FJournalQuest> UCppMediator::STATIC_GetActiveMainQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.GetActiveMainQuests");
		
		UCppMediator_GetActiveMainQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABE50
	 * 		Name   -> Function Stalker2.CppMediator.CreateAIVoiceEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AObj*                                        SenderObj                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_CreateAIVoiceEvent(class AObj* SenderObj, const struct FVector& Location, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.CreateAIVoiceEvent");
		
		UCppMediator_CreateAIVoiceEvent_Params params {};
		params.SenderObj = SenderObj;
		params.Location = Location;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABE20
	 * 		Name   -> Function Stalker2.CppMediator.CanPlayAudiolog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UCppMediator::STATIC_CanPlayAudiolog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.CanPlayAudiolog");
		
		UCppMediator_CanPlayAudiolog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABD50
	 * 		Name   -> Function Stalker2.CppMediator.AppendSaveForGuidActor_Bool
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_AppendSaveForGuidActor_Bool(const struct FGuid& Guid, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.AppendSaveForGuidActor_Bool");
		
		UCppMediator_AppendSaveForGuidActor_Bool_Params params {};
		params.Guid = Guid;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FABCD0
	 * 		Name   -> Function Stalker2.CppMediator.AmbientPlaySoundCurve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            IndexNextWave                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCppMediator::STATIC_AmbientPlaySoundCurve(int32_t IndexNextWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CppMediator.AmbientPlaySoundCurve");
		
		UCppMediator_AmbientPlaySoundCurve_Params params {};
		params.IndexNextWave = IndexNextWave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCppMediator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCppMediator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CppMediator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Creator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshairWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshairWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CrosshairWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshairWidgetCircle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshairWidgetCircle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CrosshairWidgetCircle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshairWidgetCross.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshairWidgetCross::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CrosshairWidgetCross");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshairWidgetPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshairWidgetPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CrosshairWidgetPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshairWidgetSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshairWidgetSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CrosshairWidgetSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrouchIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrouchIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CrouchIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.CustomButton.OnPress
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomButton::OnPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomButton.OnPress");
		
		UCustomButton_OnPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.CustomButton.OnClick
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomButton::OnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomButton.OnClick");
		
		UCustomButton_OnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1D00
	 * 		Name   -> Function Stalker2.CustomConsoleManager.XRunEngineCommand
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManager::XRunEngineCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManager.XRunEngineCommand");
		
		UCustomConsoleManager_XRunEngineCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB11F0
	 * 		Name   -> Function Stalker2.CustomConsoleManager.XExecuteAdditionalScript
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ScriptKeyName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManager::XExecuteAdditionalScript(const class FString& ScriptKeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManager.XExecuteAdditionalScript");
		
		UCustomConsoleManager_XExecuteAdditionalScript_Params params {};
		params.ScriptKeyName = ScriptKeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0540
	 * 		Name   -> Function Stalker2.CustomConsoleManager.ExecuteScripts
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<class FString>                              ScriptArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManager::ExecuteScripts(TArray<class FString> ScriptArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManager.ExecuteScripts");
		
		UCustomConsoleManager_ExecuteScripts_Params params {};
		params.ScriptArray = ScriptArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB35D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XToggleArtifactSpawnerDebugInfo
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XToggleArtifactSpawnerDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XToggleArtifactSpawnerDebugInfo");
		
		UCustomConsoleManagerAA_XToggleArtifactSpawnerDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB34E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XTeleportNPCToSpawn
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      NPCSID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XTeleportNPCToSpawn(const class FString& NPCSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XTeleportNPCToSpawn");
		
		UCustomConsoleManagerAA_XTeleportNPCToSpawn_Params params {};
		params.NPCSID = NPCSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB33F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XTeleportNPCToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      NPCSID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XTeleportNPCToPlayer(const class FString& NPCSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XTeleportNPCToPlayer");
		
		UCustomConsoleManagerAA_XTeleportNPCToPlayer_Params params {};
		params.NPCSID = NPCSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB32E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XStartQuestNodeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XStartQuestNodeBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XStartQuestNodeBySID");
		
		UCustomConsoleManagerAA_XStartQuestNodeBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB3250
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XStartQuestNode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XStartQuestNode(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XStartQuestNode");
		
		UCustomConsoleManagerAA_XStartQuestNode_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB3160
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XStartQuestBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XStartQuestBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XStartQuestBySID");
		
		UCustomConsoleManagerAA_XStartQuestBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB30D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XStartQuest
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XStartQuest(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XStartQuest");
		
		UCustomConsoleManagerAA_XStartQuest_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2B30
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSkipToQuestNode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSkipToQuestNode(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSkipToQuestNode");
		
		UCustomConsoleManagerAA_XSkipToQuestNode_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2B10
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSkipInfotopicRefreshCooldown
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XSkipInfotopicRefreshCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSkipInfotopicRefreshCooldown");
		
		UCustomConsoleManagerAA_XSkipInfotopicRefreshCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B54AD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XShowSpawnDebugInfo
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               Show                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XShowSpawnDebugInfo(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XShowSpawnDebugInfo");
		
		UCustomConsoleManagerAA_XShowSpawnDebugInfo_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B54AD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XShowQuestTriggers
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bShow                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XShowQuestTriggers(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XShowQuestTriggers");
		
		UCustomConsoleManagerAA_XShowQuestTriggers_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2A30
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XShowCurrentLocation
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XShowCurrentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XShowCurrentLocation");
		
		UCustomConsoleManagerAA_XShowCurrentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2930
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSetTimeSpeed
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSetTimeSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSetTimeSpeed");
		
		UCustomConsoleManagerAA_XSetTimeSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B54AD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSetSearchpointDebugState
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSetSearchpointDebugState(bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSetSearchpointDebugState");
		
		UCustomConsoleManagerAA_XSetSearchpointDebugState_Params params {};
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2860
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSetRelationsInRadius
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RelationValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSetRelationsInRadius(float Radius, int32_t RelationValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSetRelationsInRadius");
		
		UCustomConsoleManagerAA_XSetRelationsInRadius_Params params {};
		params.Radius = Radius;
		params.RelationValue = RelationValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2620
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSetRandomNodeDefinedPinBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PinNumber                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSetRandomNodeDefinedPinBySID(const class FString& SID, int32_t PinNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSetRandomNodeDefinedPinBySID");
		
		UCustomConsoleManagerAA_XSetRandomNodeDefinedPinBySID_Params params {};
		params.SID = SID;
		params.PinNumber = PinNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2550
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSetRandomNodeDefinedPin
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PinNumber                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSetRandomNodeDefinedPin(int32_t ID, int32_t PinNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSetRandomNodeDefinedPin");
		
		UCustomConsoleManagerAA_XSetRandomNodeDefinedPin_Params params {};
		params.ID = ID;
		params.PinNumber = PinNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB20B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XSetGameTime
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Second                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XSetGameTime(int32_t Hour, int32_t Minute, int32_t Second)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XSetGameTime");
		
		UCustomConsoleManagerAA_XSetGameTime_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		params.Second = Second;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1CE0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XRestartCurrentDialog
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XRestartCurrentDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XRestartCurrentDialog");
		
		UCustomConsoleManagerAA_XRestartCurrentDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1BF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XResetRandomNodeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XResetRandomNodeBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XResetRandomNodeBySID");
		
		UCustomConsoleManagerAA_XResetRandomNodeBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1B60
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XResetRandomNode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XResetRandomNode(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XResetRandomNode");
		
		UCustomConsoleManagerAA_XResetRandomNode_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1A70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XResetQuestBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XResetQuestBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XResetQuestBySID");
		
		UCustomConsoleManagerAA_XResetQuestBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1900
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XRemoveArtifactMarker
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      ArtifactSpawnerGuidString                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XRemoveArtifactMarker(const class FString& ArtifactSpawnerGuidString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XRemoveArtifactMarker");
		
		UCustomConsoleManagerAA_XRemoveArtifactMarker_Params params {};
		params.ArtifactSpawnerGuidString = ArtifactSpawnerGuidString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB16D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XPlayDialogFromPool
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      DialogEventTypeName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NPCUIDValue1                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NPCUIDValue2                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XPlayDialogFromPool(const class FString& DialogEventTypeName, int32_t NPCUIDValue1, int32_t NPCUIDValue2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XPlayDialogFromPool");
		
		UCustomConsoleManagerAA_XPlayDialogFromPool_Params params {};
		params.DialogEventTypeName = DialogEventTypeName;
		params.NPCUIDValue1 = NPCUIDValue1;
		params.NPCUIDValue2 = NPCUIDValue2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB15A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XPlayCommentFromPool
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      DialogEventTypeName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NPCUIDValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XPlayCommentFromPool(const class FString& DialogEventTypeName, int32_t NPCUIDValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XPlayCommentFromPool");
		
		UCustomConsoleManagerAA_XPlayCommentFromPool_Params params {};
		params.DialogEventTypeName = DialogEventTypeName;
		params.NPCUIDValue = NPCUIDValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1300
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XKillNPCInRadius
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinimalReputationToKill                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxReputationToKill                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XKillNPCInRadius(float Radius, int32_t MinimalReputationToKill, int32_t MaxReputationToKill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XKillNPCInRadius");
		
		UCustomConsoleManagerAA_XKillNPCInRadius_Params params {};
		params.Radius = Radius;
		params.MinimalReputationToKill = MinimalReputationToKill;
		params.MaxReputationToKill = MaxReputationToKill;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB12E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XFindNonEndingDialogs
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XFindNonEndingDialogs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XFindNonEndingDialogs");
		
		UCustomConsoleManagerAA_XFindNonEndingDialogs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1100
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XExcludeQuestNodeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XExcludeQuestNodeBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XExcludeQuestNodeBySID");
		
		UCustomConsoleManagerAA_XExcludeQuestNodeBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1070
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XExcludeQuestNode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XExcludeQuestNode(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XExcludeQuestNode");
		
		UCustomConsoleManagerAA_XExcludeQuestNode_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0F80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XExcludeQuestBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XExcludeQuestBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XExcludeQuestBySID");
		
		UCustomConsoleManagerAA_XExcludeQuestBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0EF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XExcludeQuest
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XExcludeQuest(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XExcludeQuest");
		
		UCustomConsoleManagerAA_XExcludeQuest_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0E00
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XEndQuestNodeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XEndQuestNodeBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XEndQuestNodeBySID");
		
		UCustomConsoleManagerAA_XEndQuestNodeBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0D70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XEndQuestNode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XEndQuestNode(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XEndQuestNode");
		
		UCustomConsoleManagerAA_XEndQuestNode_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0C80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XEndQuestBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XEndQuestBySID(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XEndQuestBySID");
		
		UCustomConsoleManagerAA_XEndQuestBySID_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0BF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XEndQuest
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XEndQuest(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XEndQuest");
		
		UCustomConsoleManagerAA_XEndQuest_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0B50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XDespawnNPCsAtRadius
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XDespawnNPCsAtRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XDespawnNPCsAtRadius");
		
		UCustomConsoleManagerAA_XDespawnNPCsAtRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0AD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XDespawnDeadNPCsAtRadius
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XDespawnDeadNPCsAtRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XDespawnDeadNPCsAtRadius");
		
		UCustomConsoleManagerAA_XDespawnDeadNPCsAtRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0A50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XDespawnAliveNPCsAtRadius
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XDespawnAliveNPCsAtRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XDespawnAliveNPCsAtRadius");
		
		UCustomConsoleManagerAA_XDespawnAliveNPCsAtRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0980
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XDebugAddHelloDialogsToQueue
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            TargetUID                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DialogsCount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XDebugAddHelloDialogsToQueue(int32_t TargetUID, int32_t DialogsCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XDebugAddHelloDialogsToQueue");
		
		UCustomConsoleManagerAA_XDebugAddHelloDialogsToQueue_Params params {};
		params.TargetUID = TargetUID;
		params.DialogsCount = DialogsCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB08D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XClearDialogQueue
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XClearDialogQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XClearDialogQueue");
		
		UCustomConsoleManagerAA_XClearDialogQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB08B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XCheckGamedata
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerAA::XCheckGamedata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XCheckGamedata");
		
		UCustomConsoleManagerAA_XCheckGamedata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0610
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XAddMoneyToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XAddMoneyToPlayer(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XAddMoneyToPlayer");
		
		UCustomConsoleManagerAA_XAddMoneyToPlayer_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0135ED10
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAA.XAddArtifactMarker
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      ArtifactSpawnerGuidString                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMainQuestMarker                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAA::XAddArtifactMarker(const class FString& ArtifactSpawnerGuidString, bool bMainQuestMarker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAA.XAddArtifactMarker");
		
		UCustomConsoleManagerAA_XAddArtifactMarker_Params params {};
		params.ArtifactSpawnerGuidString = ArtifactSpawnerGuidString;
		params.bMainQuestMarker = bMainQuestMarker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerAA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerAA::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerAA");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2320
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAI2.XSetVisionParamsOverride
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ModelUID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PrototypeSID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAI2::XSetVisionParamsOverride(int32_t ModelUID, const class FString& PrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAI2.XSetVisionParamsOverride");
		
		UCustomConsoleManagerAI2_XSetVisionParamsOverride_Params params {};
		params.ModelUID = ModelUID;
		params.PrototypeSID = PrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2750
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAI2.XSetRelation
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            FirstUID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SecondUID                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Relation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAI2::XSetRelation(int32_t FirstUID, int32_t SecondUID, int32_t Relation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAI2.XSetRelation");
		
		UCustomConsoleManagerAI2_XSetRelation_Params params {};
		params.FirstUID = FirstUID;
		params.SecondUID = SecondUID;
		params.Relation = Relation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2320
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAI2.XSetHearingParamsOverride
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ModelUID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PrototypeSID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAI2::XSetHearingParamsOverride(int32_t ModelUID, const class FString& PrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAI2.XSetHearingParamsOverride");
		
		UCustomConsoleManagerAI2_XSetHearingParamsOverride_Params params {};
		params.ModelUID = ModelUID;
		params.PrototypeSID = PrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerAI2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerAI2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerAI2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB33D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAK.XSuicide
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 */
	void UCustomConsoleManagerAK::XSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAK.XSuicide");
		
		UCustomConsoleManagerAK_XSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1850
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAK.XPrintInventory
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		int32_t                                            UnitUID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAK::XPrintInventory(int32_t UnitUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAK.XPrintInventory");
		
		UCustomConsoleManagerAK_XPrintInventory_Params params {};
		params.UnitUID = UnitUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB14B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAK.XKillThemAll
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 */
	void UCustomConsoleManagerAK::XKillThemAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAK.XKillThemAll");
		
		UCustomConsoleManagerAK_XKillThemAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerAK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerAK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerAK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB3630
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XToggleDebugTool
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerAM::XToggleDebugTool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XToggleDebugTool");
		
		UCustomConsoleManagerAM_XToggleDebugTool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1FA0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XSetFocus
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XSetFocus(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XSetFocus");
		
		UCustomConsoleManagerAM_XSetFocus_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB19C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XResetAI
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XResetAI(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XResetAI");
		
		UCustomConsoleManagerAM_XResetAI_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB14D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XMoveToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            NPC_UID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 Behaviour                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XMoveToPlayer(int32_t NPC_UID, EMovementBehaviour Behaviour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XMoveToPlayer");
		
		UCustomConsoleManagerAM_XMoveToPlayer_Params params {};
		params.NPC_UID = NPC_UID;
		params.Behaviour = Behaviour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB08F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XClearFocus
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XClearFocus(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XClearFocus");
		
		UCustomConsoleManagerAM_XClearFocus_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB07A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XCallQuickSave
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Angular                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XCallQuickSave(float Angular)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XCallQuickSave");
		
		UCustomConsoleManagerAM_XCallQuickSave_Params params {};
		params.Angular = Angular;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0720
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XCallQuickLoad
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Angular                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XCallQuickLoad(float Angular)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XCallQuickLoad");
		
		UCustomConsoleManagerAM_XCallQuickLoad_Params params {};
		params.Angular = Angular;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0690
	 * 		Name   -> Function Stalker2.CustomConsoleManagerAM.XAddMoveTo
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerAM::XAddMoveTo(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerAM.XAddMoveTo");
		
		UCustomConsoleManagerAM_XAddMoveTo_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerAM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerAM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerAM");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2FE0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSpawnItemNearPlayerBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      ItemPrototypeSID                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSpawnItemNearPlayerBySID(const class FString& ItemPrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSpawnItemNearPlayerBySID");
		
		UCustomConsoleManagerBuild_XSpawnItemNearPlayerBySID_Params params {};
		params.ItemPrototypeSID = ItemPrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2F50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSpawnItemNearPlayerByPrototypeID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ItemPrototypeID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSpawnItemNearPlayerByPrototypeID(int32_t ItemPrototypeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSpawnItemNearPlayerByPrototypeID");
		
		UCustomConsoleManagerBuild_XSpawnItemNearPlayerByPrototypeID_Params params {};
		params.ItemPrototypeID = ItemPrototypeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2D80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSpawnItemInCoordinatesBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      ItemPrototypeSID                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Px                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Py                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pz                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSpawnItemInCoordinatesBySID(const class FString& ItemPrototypeSID, float Px, float Py, float Pz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSpawnItemInCoordinatesBySID");
		
		UCustomConsoleManagerBuild_XSpawnItemInCoordinatesBySID_Params params {};
		params.ItemPrototypeSID = ItemPrototypeSID;
		params.Px = Px;
		params.Py = Py;
		params.Pz = Pz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2C20
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSpawnItemInCoordinatesByPrototypeID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ItemPrototypeID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Px                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Py                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pz                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSpawnItemInCoordinatesByPrototypeID(int32_t ItemPrototypeID, float Px, float Py, float Pz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSpawnItemInCoordinatesByPrototypeID");
		
		UCustomConsoleManagerBuild_XSpawnItemInCoordinatesByPrototypeID_Params params {};
		params.ItemPrototypeID = ItemPrototypeID;
		params.Px = Px;
		params.Py = Py;
		params.Pz = Pz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2AF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XShowPlayerCoordinates
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerBuild::XShowPlayerCoordinates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XShowPlayerCoordinates");
		
		UCustomConsoleManagerBuild_XShowPlayerCoordinates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB24D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetPlayerSpeedMultiplier
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              SpeedMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetPlayerSpeedMultiplier(float SpeedMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetPlayerSpeedMultiplier");
		
		UCustomConsoleManagerBuild_XSetPlayerSpeedMultiplier_Params params {};
		params.SpeedMultiplier = SpeedMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2400
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetNoClipGSC
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bNoClipGSC                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetNoClipGSC(bool bNoClipGSC, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetNoClipGSC");
		
		UCustomConsoleManagerBuild_XSetNoClipGSC_Params params {};
		params.bNoClipGSC = bNoClipGSC;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2250
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetGodModeByUID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            EntityUID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGodModeState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetGodModeByUID(int32_t EntityUID, bool bGodModeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetGodModeByUID");
		
		UCustomConsoleManagerBuild_XSetGodModeByUID_Params params {};
		params.EntityUID = EntityUID;
		params.bGodModeState = bGodModeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB21C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetGodModeAllFactions
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bGodModeState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetGodModeAllFactions(bool bGodModeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetGodModeAllFactions");
		
		UCustomConsoleManagerBuild_XSetGodModeAllFactions_Params params {};
		params.bGodModeState = bGodModeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2030
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetFreeCameraSpeedMultiplier
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              SpeedMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetFreeCameraSpeedMultiplier(float SpeedMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetFreeCameraSpeedMultiplier");
		
		UCustomConsoleManagerBuild_XSetFreeCameraSpeedMultiplier_Params params {};
		params.SpeedMultiplier = SpeedMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1EC0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetFactionGodMode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      CurrentFactionSelector                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGodModeState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetFactionGodMode(const class FString& CurrentFactionSelector, bool bGodModeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetFactionGodMode");
		
		UCustomConsoleManagerBuild_XSetFactionGodMode_Params params {};
		params.CurrentFactionSelector = CurrentFactionSelector;
		params.bGodModeState = bGodModeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1DF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XSetEntityUnkillableByUID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            EntityUID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGodModeState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerBuild::XSetEntityUnkillableByUID(int32_t EntityUID, bool bGodModeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XSetEntityUnkillableByUID");
		
		UCustomConsoleManagerBuild_XSetEntityUnkillableByUID_Params params {};
		params.EntityUID = EntityUID;
		params.bGodModeState = bGodModeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1A50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XResetCurrentWeaponDurabilityToZero
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerBuild::XResetCurrentWeaponDurabilityToZero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XResetCurrentWeaponDurabilityToZero");
		
		UCustomConsoleManagerBuild_XResetCurrentWeaponDurabilityToZero_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB19A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XRepairCurrentWeapon
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerBuild::XRepairCurrentWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XRepairCurrentWeapon");
		
		UCustomConsoleManagerBuild_XRepairCurrentWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0BD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerBuild.XDisplayFocusingPlayerEnemiesCount
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerBuild::XDisplayFocusingPlayerEnemiesCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerBuild.XDisplayFocusingPlayerEnemiesCount");
		
		UCustomConsoleManagerBuild_XDisplayFocusingPlayerEnemiesCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerBuild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerBuild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerBuild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB3610
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XToggleDebugPlayerArmorInfo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerDC::XToggleDebugPlayerArmorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XToggleDebugPlayerArmorInfo");
		
		UCustomConsoleManagerDC_XToggleDebugPlayerArmorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB35F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XToggleDebugBulletDistanceScaling
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerDC::XToggleDebugBulletDistanceScaling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XToggleDebugBulletDistanceScaling");
		
		UCustomConsoleManagerDC_XToggleDebugBulletDistanceScaling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB2A50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XShowDebugInfoForStash
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InStashIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDC::XShowDebugInfoForStash(const class FString& InStashIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XShowDebugInfoForStash");
		
		UCustomConsoleManagerDC_XShowDebugInfoForStash_Params params {};
		params.InStashIdentifier = InStashIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB29B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XSetWeatherTransitionTimeMultiplier
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              WeatherTransitionTimeMultiplier                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDC::XSetWeatherTransitionTimeMultiplier(float WeatherTransitionTimeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XSetWeatherTransitionTimeMultiplier");
		
		UCustomConsoleManagerDC_XSetWeatherTransitionTimeMultiplier_Params params {};
		params.WeatherTransitionTimeMultiplier = WeatherTransitionTimeMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB18E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XRegenerateItemsInStashes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerDC::XRegenerateItemsInStashes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XRegenerateItemsInStashes");
		
		UCustomConsoleManagerDC_XRegenerateItemsInStashes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB1420
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XKillNpcByUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            NpcUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDC::XKillNpcByUID(int32_t NpcUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XKillNpcByUID");
		
		UCustomConsoleManagerDC_XKillNpcByUID_Params params {};
		params.NpcUID = NpcUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB0820
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDC.XChangeDropBodyMethod
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bShouldDrop                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDC::XChangeDropBodyMethod(bool bShouldDrop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDC.XChangeDropBodyMethod");
		
		UCustomConsoleManagerDC_XChangeDropBodyMethod_Params params {};
		params.bShouldDrop = bShouldDrop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerDC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerDC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerDC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB000
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XTestDialogFolders
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            Members                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Answers                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XTestDialogFolders(int32_t Members, int32_t Answers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XTestDialogFolders");
		
		UCustomConsoleManagerDK_XTestDialogFolders_Params params {};
		params.Members = Members;
		params.Answers = Answers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9700
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadNavigationParams
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              InputDelay                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InputThreshold                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SelectionDelay                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XSetInventoryGamepadNavigationParams(float InputDelay, float InputThreshold, float SelectionDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadNavigationParams");
		
		UCustomConsoleManagerDK_XSetInventoryGamepadNavigationParams_Params params {};
		params.InputDelay = InputDelay;
		params.InputThreshold = InputThreshold;
		params.SelectionDelay = SelectionDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9670
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadNavigationByAxises
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bAxes                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XSetInventoryGamepadNavigationByAxises(bool bAxes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadNavigationByAxises");
		
		UCustomConsoleManagerDK_XSetInventoryGamepadNavigationByAxises_Params params {};
		params.bAxes = bAxes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB95F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputThreshold
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              InputThreshold                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XSetInventoryGamepadInputThreshold(float InputThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputThreshold");
		
		UCustomConsoleManagerDK_XSetInventoryGamepadInputThreshold_Params params {};
		params.InputThreshold = InputThreshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9570
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputSelectionDelay
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              InputSelectionDelay                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XSetInventoryGamepadInputSelectionDelay(float InputSelectionDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputSelectionDelay");
		
		UCustomConsoleManagerDK_XSetInventoryGamepadInputSelectionDelay_Params params {};
		params.InputSelectionDelay = InputSelectionDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB94F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputDelay
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              InputDelay                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XSetInventoryGamepadInputDelay(float InputDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XSetInventoryGamepadInputDelay");
		
		UCustomConsoleManagerDK_XSetInventoryGamepadInputDelay_Params params {};
		params.InputDelay = InputDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9200
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XSetGamepadNavigationBorderSpeed
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              Speed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XSetGamepadNavigationBorderSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XSetGamepadNavigationBorderSpeed");
		
		UCustomConsoleManagerDK_XSetGamepadNavigationBorderSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8100
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XGridNavigationVar
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            InVar                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XGridNavigationVar(int32_t InVar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XGridNavigationVar");
		
		UCustomConsoleManagerDK_XGridNavigationVar_Params params {};
		params.InVar = InVar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7790
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDrawDebugInventoryNavigation
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bDraw                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDrawDebugInventoryNavigation(bool bDraw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDrawDebugInventoryNavigation");
		
		UCustomConsoleManagerDK_XDrawDebugInventoryNavigation_Params params {};
		params.bDraw = bDraw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7210
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDKStartTwoQuestStage
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      QSID                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDKStartTwoQuestStage(const class FString& QSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDKStartTwoQuestStage");
		
		UCustomConsoleManagerDK_XDKStartTwoQuestStage_Params params {};
		params.QSID = QSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7090
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDKStartQuestStage
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      QSID                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SSID                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDKStartQuestStage(const class FString& QSID, const class FString& SSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDKStartQuestStage");
		
		UCustomConsoleManagerDK_XDKStartQuestStage_Params params {};
		params.QSID = QSID;
		params.SSID = SSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6FA0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDKStartQuest
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDKStartQuest(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDKStartQuest");
		
		UCustomConsoleManagerDK_XDKStartQuest_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6EB0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDKStartAndFinishQuestStage
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      QSID                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDKStartAndFinishQuestStage(const class FString& QSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDKStartAndFinishQuestStage");
		
		UCustomConsoleManagerDK_XDKStartAndFinishQuestStage_Params params {};
		params.QSID = QSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6CF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDKFinishQuestStage
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      QSID                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SSID                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWin                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDKFinishQuestStage(const class FString& QSID, const class FString& SSID, bool bWin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDKFinishQuestStage");
		
		UCustomConsoleManagerDK_XDKFinishQuestStage_Params params {};
		params.QSID = QSID;
		params.SSID = SSID;
		params.bWin = bWin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6BC0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.XDKFinishQuest
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWin                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::XDKFinishQuest(const class FString& SID, bool bWin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.XDKFinishQuest");
		
		UCustomConsoleManagerDK_XDKFinishQuest_Params params {};
		params.SID = SID;
		params.bWin = bWin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB61F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.UseStackSplitContextual
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bInUse                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::UseStackSplitContextual(bool bInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.UseStackSplitContextual");
		
		UCustomConsoleManagerDK_UseStackSplitContextual_Params params {};
		params.bInUse = bInUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6030
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.MoveItemsInTrade
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bMoveTraderItems                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMoveOwnItems                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMoveBarterItems                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::MoveItemsInTrade(bool bMoveTraderItems, bool bMoveOwnItems, bool bMoveBarterItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.MoveItemsInTrade");
		
		UCustomConsoleManagerDK_MoveItemsInTrade_Params params {};
		params.bMoveTraderItems = bMoveTraderItems;
		params.bMoveOwnItems = bMoveOwnItems;
		params.bMoveBarterItems = bMoveBarterItems;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB5FA0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.HideCursorInMouseDrag
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bHide                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::HideCursorInMouseDrag(bool bHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.HideCursorInMouseDrag");
		
		UCustomConsoleManagerDK_HideCursorInMouseDrag_Params params {};
		params.bHide = bHide;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB5F10
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDK.AllwaysShowDropHere
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bShow                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDK::AllwaysShowDropHere(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDK.AllwaysShowDropHere");
		
		UCustomConsoleManagerDK_AllwaysShowDropHere_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerDK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerDK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerDK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAF70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XTestCrashStackOverflow
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            Counter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDP::XTestCrashStackOverflow(int32_t Counter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XTestCrashStackOverflow");
		
		UCustomConsoleManagerDP_XTestCrashStackOverflow_Params params {};
		params.Counter = Counter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XTestCrashReturnIfFalse
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerDP::XTestCrashReturnIfFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XTestCrashReturnIfFalse");
		
		UCustomConsoleManagerDP_XTestCrashReturnIfFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAF50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XTestCrashRandomAddress
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerDP::XTestCrashRandomAddress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XTestCrashRandomAddress");
		
		UCustomConsoleManagerDP_XTestCrashRandomAddress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAF30
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XTestCrashNullptr
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerDP::XTestCrashNullptr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XTestCrashNullptr");
		
		UCustomConsoleManagerDP_XTestCrashNullptr_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAF10
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XTestCrashLambda
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerDP::XTestCrashLambda()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XTestCrashLambda");
		
		UCustomConsoleManagerDP_XTestCrashLambda_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8950
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XPrintLocalizedTextByKey
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      StringKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDP::XPrintLocalizedTextByKey(const class FString& StringKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XPrintLocalizedTextByKey");
		
		UCustomConsoleManagerDP_XPrintLocalizedTextByKey_Params params {};
		params.StringKey = StringKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8340
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDP.XInitializeLocalizationManager
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerDP::XInitializeLocalizationManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDP.XInitializeLocalizationManager");
		
		UCustomConsoleManagerDP_XInitializeLocalizationManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerDP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerDP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerDP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8240
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDR.XInitializeBenchmarkSequence
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerDR::XInitializeBenchmarkSequence(const class FString& AssetPath, const class FString& AssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDR.XInitializeBenchmarkSequence");
		
		UCustomConsoleManagerDR_XInitializeBenchmarkSequence_Params params {};
		params.AssetPath = AssetPath;
		params.AssetName = AssetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7940
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDR.XEnableCinematicMode
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerDR::XEnableCinematicMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDR.XEnableCinematicMode");
		
		UCustomConsoleManagerDR_XEnableCinematicMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7770
	 * 		Name   -> Function Stalker2.CustomConsoleManagerDR.XDisableCinematicMode
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerDR::XDisableCinematicMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerDR.XDisableCinematicMode");
		
		UCustomConsoleManagerDR_XDisableCinematicMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerDR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerDR::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerDR");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8050
	 * 		Name   -> Function Stalker2.CustomConsoleManagerEG.XGarbageCollector
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerEG::XGarbageCollector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerEG.XGarbageCollector");
		
		UCustomConsoleManagerEG_XGarbageCollector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerEG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerEG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerEG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAC70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerIK.XStartSequenceOnLevel
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            SequenceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerIK::XStartSequenceOnLevel(int32_t SequenceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerIK.XStartSequenceOnLevel");
		
		UCustomConsoleManagerIK_XStartSequenceOnLevel_Params params {};
		params.SequenceIndex = SequenceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerIK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerIK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerIK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB84A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerIM.XMigrateSquadToPlayerAlife
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerIM::XMigrateSquadToPlayerAlife(float StartX, float StartY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerIM.XMigrateSquadToPlayerAlife");
		
		UCustomConsoleManagerIM_XMigrateSquadToPlayerAlife_Params params {};
		params.StartX = StartX;
		params.StartY = StartY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8190
	 * 		Name   -> Function Stalker2.CustomConsoleManagerIM.XHighlightCovers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerIM::XHighlightCovers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerIM.XHighlightCovers");
		
		UCustomConsoleManagerIM_XHighlightCovers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerIM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerIM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerIM");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowTriggerCapsuleView
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerMB::XToggleShowTriggerCapsuleView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowTriggerCapsuleView");
		
		UCustomConsoleManagerMB_XToggleShowTriggerCapsuleView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB840
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowProtection
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XToggleShowProtection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowProtection");
		
		UCustomConsoleManagerMB_XToggleShowProtection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB820
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerRequestedMainHandWeaponType
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XToggleShowPlayerRequestedMainHandWeaponType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerRequestedMainHandWeaponType");
		
		UCustomConsoleManagerMB_XToggleShowPlayerRequestedMainHandWeaponType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB800
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XToggleShowPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerLocation");
		
		UCustomConsoleManagerMB_XToggleShowPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB7E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerLastHeldItem
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XToggleShowPlayerLastHeldItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowPlayerLastHeldItem");
		
		UCustomConsoleManagerMB_XToggleShowPlayerLastHeldItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB7C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowModels
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XToggleShowModels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowModels");
		
		UCustomConsoleManagerMB_XToggleShowModels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB7A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleShowLightningBallAnomalyDebugInfo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XToggleShowLightningBallAnomalyDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleShowLightningBallAnomalyDebugInfo");
		
		UCustomConsoleManagerMB_XToggleShowLightningBallAnomalyDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB210
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XToggleDebugExpulsionAnomaly
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerMB::XToggleDebugExpulsionAnomaly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XToggleDebugExpulsionAnomaly");
		
		UCustomConsoleManagerMB_XToggleDebugExpulsionAnomaly_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAD40
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XSwitchAnomalySpawnerPreset
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMB::XSwitchAnomalySpawnerPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XSwitchAnomalySpawnerPreset");
		
		UCustomConsoleManagerMB_XSwitchAnomalySpawnerPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9130
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XSetDrawDebugExplosion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bDebug                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DebugTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMB::XSetDrawDebugExplosion(bool bDebug, float DebugTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XSetDrawDebugExplosion");
		
		UCustomConsoleManagerMB_XSetDrawDebugExplosion_Params params {};
		params.bDebug = bDebug;
		params.DebugTime = DebugTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7820
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMB.XDrawDebugRadiation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InDrawDebugRadiation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMB::XDrawDebugRadiation(bool InDrawDebugRadiation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMB.XDrawDebugRadiation");
		
		UCustomConsoleManagerMB_XDrawDebugRadiation_Params params {};
		params.InDrawDebugRadiation = InDrawDebugRadiation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerMB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerMB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerMB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB860
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XToggleSoapBubbleDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMH::XToggleSoapBubbleDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XToggleSoapBubbleDebug");
		
		UCustomConsoleManagerMH_XToggleSoapBubbleDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB400
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerShootingDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMH::XToggleDrawPlayerShootingDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerShootingDebug");
		
		UCustomConsoleManagerMH_XToggleDrawPlayerShootingDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB3E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerRecoilDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMH::XToggleDrawPlayerRecoilDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerRecoilDebug");
		
		UCustomConsoleManagerMH_XToggleDrawPlayerRecoilDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB3C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerDispersionDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMH::XToggleDrawPlayerDispersionDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XToggleDrawPlayerDispersionDebug");
		
		UCustomConsoleManagerMH_XToggleDrawPlayerDispersionDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB2B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XToggleDrawAIShootingDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMH::XToggleDrawAIShootingDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XToggleDrawAIShootingDebug");
		
		UCustomConsoleManagerMH_XToggleDrawAIShootingDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB89F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XRemoveEffectFromPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EffectPrototypeSID                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMH::XRemoveEffectFromPlayer(const class FString& EffectPrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XRemoveEffectFromPlayer");
		
		UCustomConsoleManagerMH_XRemoveEffectFromPlayer_Params params {};
		params.EffectPrototypeSID = EffectPrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6570
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMH.XApplyMainHandWeaponUpgradeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      UpgradePrototypeSID                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMH::XApplyMainHandWeaponUpgradeBySID(const class FString& UpgradePrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMH.XApplyMainHandWeaponUpgradeBySID");
		
		UCustomConsoleManagerMH_XApplyMainHandWeaponUpgradeBySID_Params params {};
		params.UpgradePrototypeSID = UpgradePrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerMH.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerMH::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerMH");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB880
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMP.XTriggerAutoSave
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerMP::XTriggerAutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMP.XTriggerAutoSave");
		
		UCustomConsoleManagerMP_XTriggerAutoSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB630
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMP.XToggleLogLoadingProgress
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerMP::XToggleLogLoadingProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMP.XToggleLogLoadingProgress");
		
		UCustomConsoleManagerMP_XToggleLogLoadingProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAD00
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMP.XStartSleep
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerMP::XStartSleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMP.XStartSleep");
		
		UCustomConsoleManagerMP_XStartSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerMP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerMP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerMP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9B60
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMS.XShowMaterial
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMS::XShowMaterial(int32_t ObjUID, int32_t MaterialID, int32_t LODId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMS.XShowMaterial");
		
		UCustomConsoleManagerMS_XShowMaterial_Params params {};
		params.ObjUID = ObjUID;
		params.MaterialID = MaterialID;
		params.LODId = LODId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8C70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMS.XSetCameraShakeScale
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMS::XSetCameraShakeScale(float NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMS.XSetCameraShakeScale");
		
		UCustomConsoleManagerMS_XSetCameraShakeScale_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8B90
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMS.XSetAIStayGoal
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AnimPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMS::XSetAIStayGoal(int32_t ObjUID, const class FString& AnimPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMS.XSetAIStayGoal");
		
		UCustomConsoleManagerMS_XSetAIStayGoal_Params params {};
		params.ObjUID = ObjUID;
		params.AnimPath = AnimPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8360
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMS.XLaunchCustomAnimation
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AnimPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AnimSlotName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMS::XLaunchCustomAnimation(int32_t ObjUID, const class FString& AnimPath, const class FString& AnimSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMS.XLaunchCustomAnimation");
		
		UCustomConsoleManagerMS_XLaunchCustomAnimation_Params params {};
		params.ObjUID = ObjUID;
		params.AnimPath = AnimPath;
		params.AnimSlotName = AnimSlotName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerMS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerMS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerMS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9C70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XSimulatePhysicsOnBoneForObj
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BoneName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XSimulatePhysicsOnBoneForObj(int32_t ObjUID, const class FString& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XSimulatePhysicsOnBoneForObj");
		
		UCustomConsoleManagerMY_XSimulatePhysicsOnBoneForObj_Params params {};
		params.ObjUID = ObjUID;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9A40
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XSetXRayMode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XSetXRayMode(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XSetXRayMode");
		
		UCustomConsoleManagerMY_XSetXRayMode_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9110
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XSetDebugMode
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerMY::XSetDebugMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XSetDebugMode");
		
		UCustomConsoleManagerMY_XSetDebugMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB88C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XPossessToCharacterByUID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XPossessToCharacterByUID(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XPossessToCharacterByUID");
		
		UCustomConsoleManagerMY_XPossessToCharacterByUID_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7EB0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 InMovementBehaviour                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem(int32_t ObjUID, EMovementBehaviour InMovementBehaviour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem");
		
		UCustomConsoleManagerMY_XForceAIMoveToPlayerPositionByObjUIDAndMovementSystem_Params params {};
		params.ObjUID = ObjUID;
		params.InMovementBehaviour = InMovementBehaviour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7EB0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToPlayerPositionByObjUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 InMovementBehaviour                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XForceAIMoveToPlayerPositionByObjUID(int32_t ObjUID, EMovementBehaviour InMovementBehaviour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToPlayerPositionByObjUID");
		
		UCustomConsoleManagerMY_XForceAIMoveToPlayerPositionByObjUID_Params params {};
		params.ObjUID = ObjUID;
		params.InMovementBehaviour = InMovementBehaviour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7D40
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToObjectByObjUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SceneActor                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 InMovementBehaviour                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XForceAIMoveToObjectByObjUID(int32_t ObjUID, const class FString& SceneActor, EMovementBehaviour InMovementBehaviour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XForceAIMoveToObjectByObjUID");
		
		UCustomConsoleManagerMY_XForceAIMoveToObjectByObjUID_Params params {};
		params.ObjUID = ObjUID;
		params.SceneActor = SceneActor;
		params.InMovementBehaviour = InMovementBehaviour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7BE0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XForceAIMoveFaceToFaceByObjUIDs
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            FirstObjUID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SecondObjUID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 InMovementBehaviourFirst                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 InMovementBehaviourSecond                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XForceAIMoveFaceToFaceByObjUIDs(int32_t FirstObjUID, int32_t SecondObjUID, EMovementBehaviour InMovementBehaviourFirst, EMovementBehaviour InMovementBehaviourSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XForceAIMoveFaceToFaceByObjUIDs");
		
		UCustomConsoleManagerMY_XForceAIMoveFaceToFaceByObjUIDs_Params params {};
		params.FirstObjUID = FirstObjUID;
		params.SecondObjUID = SecondObjUID;
		params.InMovementBehaviourFirst = InMovementBehaviourFirst;
		params.InMovementBehaviourSecond = InMovementBehaviourSecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7A50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerMY.XForceAIDogsMoveToObject
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SceneActor                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementBehaviour                                 InMovementBehaviour                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpreadRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerMY::XForceAIDogsMoveToObject(const class FString& SceneActor, EMovementBehaviour InMovementBehaviour, float SpreadRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerMY.XForceAIDogsMoveToObject");
		
		UCustomConsoleManagerMY_XForceAIDogsMoveToObject_Params params {};
		params.SceneActor = SceneActor;
		params.InMovementBehaviour = InMovementBehaviour;
		params.SpreadRadius = SpreadRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerMY.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerMY::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerMY");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9000
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselTimeToCenter
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselTimeToCenter(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselTimeToCenter");
		
		UCustomConsoleManagerOM_XSetCarouselTimeToCenter_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8F80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselRotation
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselRotation(float Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselRotation");
		
		UCustomConsoleManagerOM_XSetCarouselRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8F00
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselLiftUpTime
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselLiftUpTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselLiftUpTime");
		
		UCustomConsoleManagerOM_XSetCarouselLiftUpTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8E80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselForce
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselForce(float Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselForce");
		
		UCustomConsoleManagerOM_XSetCarouselForce_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8E00
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselDuration
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselDuration(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselDuration");
		
		UCustomConsoleManagerOM_XSetCarouselDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8D70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselDebugTrajectory
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselDebugTrajectory(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselDebugTrajectory");
		
		UCustomConsoleManagerOM_XSetCarouselDebugTrajectory_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8CF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerOM.XSetCarouselAngle
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerOM::XSetCarouselAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerOM.XSetCarouselAngle");
		
		UCustomConsoleManagerOM_XSetCarouselAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerOM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerOM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerOM");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB6E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerPA.XTogglePhysicalMaterialDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerPA::XTogglePhysicalMaterialDebug(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerPA.XTogglePhysicalMaterialDebug");
		
		UCustomConsoleManagerPA_XTogglePhysicalMaterialDebug_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB510
	 * 		Name   -> Function Stalker2.CustomConsoleManagerPA.XToggleGrenadeDebug
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		EGrenadeDebugFlag                                  FlagValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerPA::XToggleGrenadeDebug(EGrenadeDebugFlag FlagValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerPA.XToggleGrenadeDebug");
		
		UCustomConsoleManagerPA_XToggleGrenadeDebug_Params params {};
		params.FlagValue = FlagValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerPA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerPA::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerPA");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9AD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerPS.XShowInventoryDebugItmesStats
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bShow                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerPS::XShowInventoryDebugItmesStats(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerPS.XShowInventoryDebugItmesStats");
		
		UCustomConsoleManagerPS_XShowInventoryDebugItmesStats_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB69D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerPS.XChangeInventoryScroll
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerPS::XChangeInventoryScroll(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerPS.XChangeInventoryScroll");
		
		UCustomConsoleManagerPS_XChangeInventoryScroll_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6940
	 * 		Name   -> Function Stalker2.CustomConsoleManagerPS.XChangeCompasMarkers
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerPS::XChangeCompasMarkers(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerPS.XChangeCompasMarkers");
		
		UCustomConsoleManagerPS_XChangeCompasMarkers_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6280
	 * 		Name   -> Function Stalker2.CustomConsoleManagerPS.XAddMapMarkersByIdAndAmount
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InMarkerPrototypeID                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerPS::XAddMapMarkersByIdAndAmount(int32_t InMarkerPrototypeID, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerPS.XAddMapMarkersByIdAndAmount");
		
		UCustomConsoleManagerPS_XAddMapMarkersByIdAndAmount_Params params {};
		params.InMarkerPrototypeID = InMarkerPrototypeID;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerPS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerPS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerPS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB8A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XUnlockDoor
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            DoorUID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XUnlockDoor(int32_t DoorUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XUnlockDoor");
		
		UCustomConsoleManagerRK_XUnlockDoor_Params params {};
		params.DoorUID = DoorUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB780
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XTogglePsyPhantomDebugMode
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerRK::XTogglePsyPhantomDebugMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XTogglePsyPhantomDebugMode");
		
		UCustomConsoleManagerRK_XTogglePsyPhantomDebugMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB760
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XTogglePlayerRadiationSphereVisibility
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerRK::XTogglePlayerRadiationSphereVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XTogglePlayerRadiationSphereVisibility");
		
		UCustomConsoleManagerRK_XTogglePlayerRadiationSphereVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB650
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleNPCFlashlight
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XToggleNPCFlashlight(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleNPCFlashlight");
		
		UCustomConsoleManagerRK_XToggleNPCFlashlight_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB5A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleHUDElements
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		EHUDElements                                       ElementsToHide                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XToggleHUDElements(EHUDElements ElementsToHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleHUDElements");
		
		UCustomConsoleManagerRK_XToggleHUDElements_Params params {};
		params.ElementsToHide = ElementsToHide;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB4F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleFreeCamera
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerRK::XToggleFreeCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleFreeCamera");
		
		UCustomConsoleManagerRK_XToggleFreeCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB420
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleDrawPlayerStats
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ValueFontXSizeCoef                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueFontYSizeCoef                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XToggleDrawPlayerStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleDrawPlayerStats");
		
		UCustomConsoleManagerRK_XToggleDrawPlayerStats_Params params {};
		params.ValueFontXSizeCoef = ValueFontXSizeCoef;
		params.ValueFontYSizeCoef = ValueFontYSizeCoef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB3A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleDrawItemStats
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerRK::XToggleDrawItemStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleDrawItemStats");
		
		UCustomConsoleManagerRK_XToggleDrawItemStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB2D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleDrawInteractNPCStats
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ValueFontXSizeCoef                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueFontYSizeCoef                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XToggleDrawInteractNPCStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleDrawInteractNPCStats");
		
		UCustomConsoleManagerRK_XToggleDrawInteractNPCStats_Params params {};
		params.ValueFontXSizeCoef = ValueFontXSizeCoef;
		params.ValueFontYSizeCoef = ValueFontYSizeCoef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB230
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XToggleDetailedVitalsStat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		EVitalType                                         VitalType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XToggleDetailedVitalsStat(EVitalType VitalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XToggleDetailedVitalsStat");
		
		UCustomConsoleManagerRK_XToggleDetailedVitalsStat_Params params {};
		params.VitalType = VitalType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBB0D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XTestOrchestrator
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      DialogPrototypeSID                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XTestOrchestrator(const class FString& DialogPrototypeSID, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XTestOrchestrator");
		
		UCustomConsoleManagerRK_XTestOrchestrator_Params params {};
		params.DialogPrototypeSID = DialogPrototypeSID;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAE80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XTeleportToObjUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XTeleportToObjUID(int32_t ObjUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XTeleportToObjUID");
		
		UCustomConsoleManagerRK_XTeleportToObjUID_Params params {};
		params.ObjUID = ObjUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAD60
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XTeleportTo
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              XCoord                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YCoord                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ZCoord                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XTeleportTo(float XCoord, float YCoord, float ZCoord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XTeleportTo");
		
		UCustomConsoleManagerRK_XTeleportTo_Params params {};
		params.XCoord = XCoord;
		params.YCoord = YCoord;
		params.ZCoord = ZCoord;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAD20
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XStopBenchmark
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerRK::XStopBenchmark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XStopBenchmark");
		
		UCustomConsoleManagerRK_XStopBenchmark_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBAB10
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XStartGSCBackgroundProfiler
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              MsecThreshold                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RamMBThreshold                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InFramesToCaptureOnSpike                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InFrameCountToComputeAverage                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XStartGSCBackgroundProfiler(float MsecThreshold, float RamMBThreshold, uint32_t InFramesToCaptureOnSpike, uint32_t InFrameCountToComputeAverage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XStartGSCBackgroundProfiler");
		
		UCustomConsoleManagerRK_XStartGSCBackgroundProfiler_Params params {};
		params.MsecThreshold = MsecThreshold;
		params.RamMBThreshold = RamMBThreshold;
		params.InFramesToCaptureOnSpike = InFramesToCaptureOnSpike;
		params.InFrameCountToComputeAverage = InFrameCountToComputeAverage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBA930
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XStartBenchmark
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              CameraHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CircleRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InitialPitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InitialYaw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BenchRuns                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProfileCsv                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XStartBenchmark(float CameraHeight, float CircleRadius, float InitialPitch, float InitialYaw, int32_t BenchRuns, bool bProfileCsv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XStartBenchmark");
		
		UCustomConsoleManagerRK_XStartBenchmark_Params params {};
		params.CameraHeight = CameraHeight;
		params.CircleRadius = CircleRadius;
		params.InitialPitch = InitialPitch;
		params.InitialYaw = InitialYaw;
		params.BenchRuns = BenchRuns;
		params.bProfileCsv = bProfileCsv;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBA810
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSpawnPsyNPC
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bIsPsyPhantom                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjPrototypeSID                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSpawnPsyNPC(bool bIsPsyPhantom, const class FString& ObjPrototypeSID, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSpawnPsyNPC");
		
		UCustomConsoleManagerRK_XSpawnPsyNPC_Params params {};
		params.bIsPsyPhantom = bIsPsyPhantom;
		params.ObjPrototypeSID = ObjPrototypeSID;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBA540
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSpawnObjBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      PrototypeSID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Px                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Py                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pz                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSpawnObjBySID(const class FString& PrototypeSID, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSpawnObjBySID");
		
		UCustomConsoleManagerRK_XSpawnObjBySID_Params params {};
		params.PrototypeSID = PrototypeSID;
		params.Px = Px;
		params.Py = Py;
		params.Pz = Pz;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBA320
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSpawnObj
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            PrototypeID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Px                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Py                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pz                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSpawnObj(int32_t PrototypeID, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSpawnObj");
		
		UCustomConsoleManagerRK_XSpawnObj_Params params {};
		params.PrototypeID = PrototypeID;
		params.Px = Px;
		params.Py = Py;
		params.Pz = Pz;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBA000
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSpawnItemContainerBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      PrototypeSID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Px                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Py                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pz                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Gold                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCustomConsoleManagerRK::XSpawnItemContainerBySID(const class FString& PrototypeSID, float Px, float Py, float Pz, int32_t Gold, float Pitch, float Yaw, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSpawnItemContainerBySID");
		
		UCustomConsoleManagerRK_XSpawnItemContainerBySID_Params params {};
		params.PrototypeSID = PrototypeSID;
		params.Px = Px;
		params.Py = Py;
		params.Pz = Pz;
		params.Gold = Gold;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9DA0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSpawnItemContainer
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            PrototypeID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Px                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Py                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pz                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Gold                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCustomConsoleManagerRK::XSpawnItemContainer(int32_t PrototypeID, float Px, float Py, float Pz, int32_t Gold, float Pitch, float Yaw, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSpawnItemContainer");
		
		UCustomConsoleManagerRK_XSpawnItemContainer_Params params {};
		params.PrototypeID = PrototypeID;
		params.Px = Px;
		params.Py = Py;
		params.Pz = Pz;
		params.Gold = Gold;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9820
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSetPsyNPCFilterParams
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bIsPsyPhantom                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAgentType                                         AgentType1                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAgentType                                         AgentType2                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjPrototypeFilter1                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjPrototypeFilter2                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjPrototypeFilter3                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSetPsyNPCFilterParams(bool bIsPsyPhantom, EAgentType AgentType1, EAgentType AgentType2, const class FString& ObjPrototypeFilter1, const class FString& ObjPrototypeFilter2, const class FString& ObjPrototypeFilter3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSetPsyNPCFilterParams");
		
		UCustomConsoleManagerRK_XSetPsyNPCFilterParams_Params params {};
		params.bIsPsyPhantom = bIsPsyPhantom;
		params.AgentType1 = AgentType1;
		params.AgentType2 = AgentType2;
		params.ObjPrototypeFilter1 = ObjPrototypeFilter1;
		params.ObjPrototypeFilter2 = ObjPrototypeFilter2;
		params.ObjPrototypeFilter3 = ObjPrototypeFilter3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9460
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSetGodMode
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bGodMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSetGodMode(bool bGodMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSetGodMode");
		
		UCustomConsoleManagerRK_XSetGodMode_Params params {};
		params.bGodMode = bGodMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9360
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSetGlobalObjectPath
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSetGlobalObjectPath(const class FString& SID, const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSetGlobalObjectPath");
		
		UCustomConsoleManagerRK_XSetGlobalObjectPath_Params params {};
		params.SID = SID;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9280
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSetGlobalBool
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSetGlobalBool(const class FString& SID, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSetGlobalBool");
		
		UCustomConsoleManagerRK_XSetGlobalBool_Params params {};
		params.SID = SID;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB9080
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XSetDebugBulletLogParams
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		EDebugBulletLog                                    BulletLogParams                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XSetDebugBulletLogParams(EDebugBulletLog BulletLogParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XSetDebugBulletLogParams");
		
		UCustomConsoleManagerRK_XSetDebugBulletLogParams_Params params {};
		params.BulletLogParams = BulletLogParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8A90
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XRevertUpgradeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      ItemPrototypeSID                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UpgradePrototypeSID                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XRevertUpgradeBySID(const class FString& ItemPrototypeSID, const class FString& UpgradePrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XRevertUpgradeBySID");
		
		UCustomConsoleManagerRK_XRevertUpgradeBySID_Params params {};
		params.ItemPrototypeSID = ItemPrototypeSID;
		params.UpgradePrototypeSID = UpgradePrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8830
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XOpenDoor
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            DoorUID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XOpenDoor(int32_t DoorUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XOpenDoor");
		
		UCustomConsoleManagerRK_XOpenDoor_Params params {};
		params.DoorUID = DoorUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB87A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XObjRecalcAllEquipment
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XObjRecalcAllEquipment(int32_t ObjUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XObjRecalcAllEquipment");
		
		UCustomConsoleManagerRK_XObjRecalcAllEquipment_Params params {};
		params.ObjUID = ObjUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8710
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XObjRecalcAllCachedStats
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XObjRecalcAllCachedStats(int32_t ObjUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XObjRecalcAllCachedStats");
		
		UCustomConsoleManagerRK_XObjRecalcAllCachedStats_Params params {};
		params.ObjUID = ObjUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8640
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XModifyStamina
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            TargetUID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FPSpent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XModifyStamina(int32_t TargetUID, float FPSpent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XModifyStamina");
		
		UCustomConsoleManagerRK_XModifyStamina_Params params {};
		params.TargetUID = TargetUID;
		params.FPSpent = FPSpent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8570
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XModifyBleeding
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            TargetUID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AddBleeding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XModifyBleeding(int32_t TargetUID, int32_t AddBleeding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XModifyBleeding");
		
		UCustomConsoleManagerRK_XModifyBleeding_Params params {};
		params.TargetUID = TargetUID;
		params.AddBleeding = AddBleeding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB81B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XIncreaseEnsuresLimit
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            IncreaseLimit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XIncreaseEnsuresLimit(int32_t IncreaseLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XIncreaseEnsuresLimit");
		
		UCustomConsoleManagerRK_XIncreaseEnsuresLimit_Params params {};
		params.IncreaseLimit = IncreaseLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB8070
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XGenerateItemsForPlayerWithPerfLog
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ItemGeneratorPrototypeID                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XGenerateItemsForPlayerWithPerfLog(int32_t ItemGeneratorPrototypeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XGenerateItemsForPlayerWithPerfLog");
		
		UCustomConsoleManagerRK_XGenerateItemsForPlayerWithPerfLog_Params params {};
		params.ItemGeneratorPrototypeID = ItemGeneratorPrototypeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7F80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XForceActorInteract
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ActorUID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InteractableUID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XForceActorInteract(int32_t ActorUID, int32_t InteractableUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XForceActorInteract");
		
		UCustomConsoleManagerRK_XForceActorInteract_Params params {};
		params.ActorUID = ActorUID;
		params.InteractableUID = InteractableUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7960
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XFileExists
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XFileExists(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XFileExists");
		
		UCustomConsoleManagerRK_XFileExists_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB78B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XDrawPsyFieldVolumes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bInDrawPsyField                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XDrawPsyFieldVolumes(bool bInDrawPsyField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XDrawPsyFieldVolumes");
		
		UCustomConsoleManagerRK_XDrawPsyFieldVolumes_Params params {};
		params.bInDrawPsyField = bInDrawPsyField;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB76A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XDetachItem
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ItemUID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XDetachItem(int32_t ItemUID, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XDetachItem");
		
		UCustomConsoleManagerRK_XDetachItem_Params params {};
		params.ItemUID = ItemUID;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB75D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XDealDurabilityDamage
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ItemUID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurabilityDamage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XDealDurabilityDamage(int32_t ItemUID, float DurabilityDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XDealDurabilityDamage");
		
		UCustomConsoleManagerRK_XDealDurabilityDamage_Params params {};
		params.ItemUID = ItemUID;
		params.DurabilityDamage = DurabilityDamage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB7300
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XDealDamage
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            TargetUID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ArmorDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ArmorPiercing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Bleeding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BleedingChanceIncrement                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDamageType                                        Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BoneHit                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XDealDamage(int32_t TargetUID, float Damage, float ArmorDamage, float ArmorPiercing, float Bleeding, float BleedingChanceIncrement, EDamageType Type, const class FString& BoneHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XDealDamage");
		
		UCustomConsoleManagerRK_XDealDamage_Params params {};
		params.TargetUID = TargetUID;
		params.Damage = Damage;
		params.ArmorDamage = ArmorDamage;
		params.ArmorPiercing = ArmorPiercing;
		params.Bleeding = Bleeding;
		params.BleedingChanceIncrement = BleedingChanceIncrement;
		params.Type = Type;
		params.BoneHit = BoneHit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6A60
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XCreateItemInInventoryByID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            PrototypeID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ObjUID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XCreateItemInInventoryByID(int32_t PrototypeID, int32_t ObjUID, int32_t Count, float Durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XCreateItemInInventoryByID");
		
		UCustomConsoleManagerRK_XCreateItemInInventoryByID_Params params {};
		params.PrototypeID = PrototypeID;
		params.ObjUID = ObjUID;
		params.Count = Count;
		params.Durability = Durability;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6830
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XAttachItem
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            EquipmentSlot                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AttachmentUID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OwnerUID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XAttachItem(int32_t EquipmentSlot, int32_t AttachmentUID, int32_t OwnerUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XAttachItem");
		
		UCustomConsoleManagerRK_XAttachItem_Params params {};
		params.EquipmentSlot = EquipmentSlot;
		params.AttachmentUID = AttachmentUID;
		params.OwnerUID = OwnerUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6730
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XApplyUpgradeBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      ItemPrototypeSID                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UpgradePrototypeSID                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XApplyUpgradeBySID(const class FString& ItemPrototypeSID, const class FString& UpgradePrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XApplyUpgradeBySID");
		
		UCustomConsoleManagerRK_XApplyUpgradeBySID_Params params {};
		params.ItemPrototypeSID = ItemPrototypeSID;
		params.UpgradePrototypeSID = UpgradePrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6660
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XApplyUpgrade
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ItemUID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpgradePrototypeID                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XApplyUpgrade(int32_t ItemUID, int32_t UpgradePrototypeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XApplyUpgrade");
		
		UCustomConsoleManagerRK_XApplyUpgrade_Params params {};
		params.ItemUID = ItemUID;
		params.UpgradePrototypeID = UpgradePrototypeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB64D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EffectPrototypeSID                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XApplyEffectOnPlayer(const class FString& EffectPrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnPlayer");
		
		UCustomConsoleManagerRK_XApplyEffectOnPlayer_Params params {};
		params.EffectPrototypeSID = EffectPrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB63F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnNPCByUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EffectPrototypeSID                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XApplyEffectOnNPCByUID(const class FString& EffectPrototypeSID, int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnNPCByUID");
		
		UCustomConsoleManagerRK_XApplyEffectOnNPCByUID_Params params {};
		params.EffectPrototypeSID = EffectPrototypeSID;
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6350
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnInteractNPC
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EffectPrototypeSID                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::XApplyEffectOnInteractNPC(const class FString& EffectPrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.XApplyEffectOnInteractNPC");
		
		UCustomConsoleManagerRK_XApplyEffectOnInteractNPC_Params params {};
		params.EffectPrototypeSID = EffectPrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FB6160
	 * 		Name   -> Function Stalker2.CustomConsoleManagerRK.TransformUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerRK::TransformUID(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerRK.TransformUID");
		
		UCustomConsoleManagerRK_TransformUID_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerRK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerRK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerRK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0CC0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XTeleportToPlacesOfInterest
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      SID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerSD::XTeleportToPlacesOfInterest(const class FString& SID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XTeleportToPlacesOfInterest");
		
		UCustomConsoleManagerSD_XTeleportToPlacesOfInterest_Params params {};
		params.SID = SID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0CA0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XTeleport
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSD::XTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XTeleport");
		
		UCustomConsoleManagerSD_XTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0530
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XShowCompass
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSD::XShowCompass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XShowCompass");
		
		UCustomConsoleManagerSD_XShowCompass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0510
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XShowAllWidget
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSD::XShowAllWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XShowAllWidget");
		
		UCustomConsoleManagerSD_XShowAllWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFB20
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XHideCompass
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSD::XHideCompass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XHideCompass");
		
		UCustomConsoleManagerSD_XHideCompass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFB00
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XHideAllWidget
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSD::XHideAllWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XHideAllWidget");
		
		UCustomConsoleManagerSD_XHideAllWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFA50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XGetActorNameByUID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            UID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerSD::XGetActorNameByUID(int32_t UID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XGetActorNameByUID");
		
		UCustomConsoleManagerSD_XGetActorNameByUID_Params params {};
		params.UID = UID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF6A0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSD.XBeginPlay
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSD::XBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSD.XBeginPlay");
		
		UCustomConsoleManagerSD_XBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerSD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerSD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerSD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0360
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XSVFriendlyFire
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerSM::XSVFriendlyFire(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XSVFriendlyFire");
		
		UCustomConsoleManagerSM_XSVFriendlyFire_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0C80
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XStopEmission
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSM::XStopEmission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XStopEmission");
		
		UCustomConsoleManagerSM_XStopEmission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0B90
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XStartEmissionBySID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      PrototypeSID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerSM::XStartEmissionBySID(const class FString& PrototypeSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XStartEmissionBySID");
		
		UCustomConsoleManagerSM_XStartEmissionBySID_Params params {};
		params.PrototypeSID = PrototypeSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0B70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XStartEmission
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSM::XStartEmission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XStartEmission");
		
		UCustomConsoleManagerSM_XStartEmission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0720
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XShowProjectileTrajectory
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerSM::XShowProjectileTrajectory(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XShowProjectileTrajectory");
		
		UCustomConsoleManagerSM_XShowProjectileTrajectory_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC02B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XResumeScheduledEmission
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSM::XResumeScheduledEmission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XResumeScheduledEmission");
		
		UCustomConsoleManagerSM_XResumeScheduledEmission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFFF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XPauseScheduledEmission
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSM::XPauseScheduledEmission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XPauseScheduledEmission");
		
		UCustomConsoleManagerSM_XPauseScheduledEmission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFAE0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSM.XGetEmissionState
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSM::XGetEmissionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSM.XGetEmissionState");
		
		UCustomConsoleManagerSM_XGetEmissionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerSM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerSM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerSM");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSS.XALifeKillAll
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSS::XALifeKillAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSS.XALifeKillAll");
		
		UCustomConsoleManagerSS_XALifeKillAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF4D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSS.XALifeEnable
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSS::XALifeEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSS.XALifeEnable");
		
		UCustomConsoleManagerSS_XALifeEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF4B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerSS.XALifeDisable
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerSS::XALifeDisable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerSS.XALifeDisable");
		
		UCustomConsoleManagerSS_XALifeDisable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerSS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerSS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerSS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0E30
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XTestPDA
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XTestPDA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XTestPDA");
		
		UCustomConsoleManagerVC_XTestPDA_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0E10
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XTestNotes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XTestNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XTestNotes");
		
		UCustomConsoleManagerVC_XTestNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0DF0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XTestMapMarker
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XTestMapMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XTestMapMarker");
		
		UCustomConsoleManagerVC_XTestMapMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0DD0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XTestJournalFinishQuest
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XTestJournalFinishQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XTestJournalFinishQuest");
		
		UCustomConsoleManagerVC_XTestJournalFinishQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0DB0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XTestJournal
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XTestJournal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XTestJournal");
		
		UCustomConsoleManagerVC_XTestJournal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0840
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XShowUIDebugInput
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XShowUIDebugInput(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XShowUIDebugInput");
		
		UCustomConsoleManagerVC_XShowUIDebugInput_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC07B0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XShowStatProgres
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XShowStatProgres(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XShowStatProgres");
		
		UCustomConsoleManagerVC_XShowStatProgres_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0690
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XShowPDANavigationCenter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XShowPDANavigationCenter(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XShowPDANavigationCenter");
		
		UCustomConsoleManagerVC_XShowPDANavigationCenter_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0600
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XShowPDABook
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XShowPDABook(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XShowPDABook");
		
		UCustomConsoleManagerVC_XShowPDABook_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC05E0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XShowGameDataAndTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XShowGameDataAndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XShowGameDataAndTime");
		
		UCustomConsoleManagerVC_XShowGameDataAndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0550
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XShowCompassAngle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XShowCompassAngle(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XShowCompassAngle");
		
		UCustomConsoleManagerVC_XShowCompassAngle_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFB40
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XHideGameDataAndTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XHideGameDataAndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XHideGameDataAndTime");
		
		UCustomConsoleManagerVC_XHideGameDataAndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF9C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XDialogFontSizeSubtitle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InTextSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XDialogFontSizeSubtitle(int32_t InTextSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XDialogFontSizeSubtitle");
		
		UCustomConsoleManagerVC_XDialogFontSizeSubtitle_Params params {};
		params.InTextSize = InTextSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF930
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XDialogFontSizeAnswer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InTextSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XDialogFontSizeAnswer(int32_t InTextSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XDialogFontSizeAnswer");
		
		UCustomConsoleManagerVC_XDialogFontSizeAnswer_Params params {};
		params.InTextSize = InTextSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF910
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XChangeTestWidgetOnHUD
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XChangeTestWidgetOnHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XChangeTestWidgetOnHUD");
		
		UCustomConsoleManagerVC_XChangeTestWidgetOnHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF8F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XChangeLanguageRU
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XChangeLanguageRU()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XChangeLanguageRU");
		
		UCustomConsoleManagerVC_XChangeLanguageRU_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF8D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XChangeLanguageEN
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XChangeLanguageEN()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XChangeLanguageEN");
		
		UCustomConsoleManagerVC_XChangeLanguageEN_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF840
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XChangeLanguage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            LanguageIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XChangeLanguage(int32_t LanguageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XChangeLanguage");
		
		UCustomConsoleManagerVC_XChangeLanguage_Params params {};
		params.LanguageIndex = LanguageIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF820
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XChangeHUDWidget
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCustomConsoleManagerVC::XChangeHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XChangeHUDWidget");
		
		UCustomConsoleManagerVC_XChangeHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF610
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XAddNotesById
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNotePrototypeID                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XAddNotesById(int32_t InNotePrototypeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XAddNotesById");
		
		UCustomConsoleManagerVC_XAddNotesById_Params params {};
		params.InNotePrototypeID = InNotePrototypeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF580
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XAddMapMarkerById
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InMarkerPrototypeID                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XAddMapMarkerById(int32_t InMarkerPrototypeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XAddMapMarkerById");
		
		UCustomConsoleManagerVC_XAddMapMarkerById_Params params {};
		params.InMarkerPrototypeID = InMarkerPrototypeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF4F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.XAddItemDragToQuickSlot
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            IndexSlot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::XAddItemDragToQuickSlot(int32_t IndexSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.XAddItemDragToQuickSlot");
		
		UCustomConsoleManagerVC_XAddItemDragToQuickSlot_Params params {};
		params.IndexSlot = IndexSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF130
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVC.DebugUIShowTextSize
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVC::DebugUIShowTextSize(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVC.DebugUIShowTextSize");
		
		UCustomConsoleManagerVC_DebugUIShowTextSize_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerVC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerVC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerVC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0970
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XSpawnTwoAlifeSquadsCloseEnoughToBattle
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		class FString                                      Faction1                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Faction2                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Faction1UnitsCount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Faction2UnitsCount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVD::XSpawnTwoAlifeSquadsCloseEnoughToBattle(const class FString& Faction1, const class FString& Faction2, int32_t Faction1UnitsCount, int32_t Faction2UnitsCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XSpawnTwoAlifeSquadsCloseEnoughToBattle");
		
		UCustomConsoleManagerVD_XSpawnTwoAlifeSquadsCloseEnoughToBattle_Params params {};
		params.Faction1 = Faction1;
		params.Faction2 = Faction2;
		params.Faction1UnitsCount = Faction1UnitsCount;
		params.Faction2UnitsCount = Faction2UnitsCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0950
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XSpawnDeadNpc
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 */
	void UCustomConsoleManagerVD::XSpawnDeadNpc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XSpawnDeadNpc");
		
		UCustomConsoleManagerVD_XSpawnDeadNpc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC08D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XShowUnitAndSquadUIDs
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVD::XShowUnitAndSquadUIDs(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XShowUnitAndSquadUIDs");
		
		UCustomConsoleManagerVD_XShowUnitAndSquadUIDs_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0470
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XSetALifeGridVisionRadius
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVD::XSetALifeGridVisionRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XSetALifeGridVisionRadius");
		
		UCustomConsoleManagerVD_XSetALifeGridVisionRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC03F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XSetALifeBattleTickTime
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVD::XSetALifeBattleTickTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XSetALifeBattleTickTime");
		
		UCustomConsoleManagerVD_XSetALifeBattleTickTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0140
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XProtectSquad
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		class FString                                      SquadUID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProtect                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVD::XProtectSquad(const class FString& SquadUID, bool bProtect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XProtectSquad");
		
		UCustomConsoleManagerVD_XProtectSquad_Params params {};
		params.SquadUID = SquadUID;
		params.bProtect = bProtect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0010
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVD.XProtectItemContainer
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		class FString                                      ContainerUID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProtect                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVD::XProtectItemContainer(const class FString& ContainerUID, bool bProtect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVD.XProtectItemContainer");
		
		UCustomConsoleManagerVD_XProtectItemContainer_Params params {};
		params.ContainerUID = ContainerUID;
		params.bProtect = bProtect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerVD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerVD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerVD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0EE0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XWoundNpcByUID
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            NpcUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XWoundNpcByUID(int32_t NpcUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XWoundNpcByUID");
		
		UCustomConsoleManagerVP_XWoundNpcByUID_Params params {};
		params.NpcUID = NpcUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC04F0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XShootAttach
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerVP::XShootAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XShootAttach");
		
		UCustomConsoleManagerVP_XShootAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC02D0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XResurrectNPCAsZombie
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            NpcUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XResurrectNPCAsZombie(int32_t NpcUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XResurrectNPCAsZombie");
		
		UCustomConsoleManagerVP_XResurrectNPCAsZombie_Params params {};
		params.NpcUID = NpcUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0290
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XReloadAttachTactical
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerVP::XReloadAttachTactical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XReloadAttachTactical");
		
		UCustomConsoleManagerVP_XReloadAttachTactical_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0270
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XReloadAttach
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 */
	void UCustomConsoleManagerVP::XReloadAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XReloadAttach");
		
		UCustomConsoleManagerVP_XReloadAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFE90
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XNpcLookAt
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            NpcUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XNpcLookAt(int32_t NpcUID, float X, float Y, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XNpcLookAt");
		
		UCustomConsoleManagerVP_XNpcLookAt_Params params {};
		params.NpcUID = NpcUID;
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFDB0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XLaunchFacialAnimation
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ObjUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AnimPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XLaunchFacialAnimation(int32_t ObjUID, const class FString& AnimPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XLaunchFacialAnimation");
		
		UCustomConsoleManagerVP_XLaunchFacialAnimation_Params params {};
		params.ObjUID = ObjUID;
		params.AnimPath = AnimPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFCE0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XKnockDownNpcByAnotherNpc
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            NpcUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AttackerNpcUID                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XKnockDownNpcByAnotherNpc(int32_t NpcUID, int32_t AttackerNpcUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XKnockDownNpcByAnotherNpc");
		
		UCustomConsoleManagerVP_XKnockDownNpcByAnotherNpc_Params params {};
		params.NpcUID = NpcUID;
		params.AttackerNpcUID = AttackerNpcUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFC50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XKnockDownNpc
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            NpcUID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XKnockDownNpc(int32_t NpcUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XKnockDownNpc");
		
		UCustomConsoleManagerVP_XKnockDownNpc_Params params {};
		params.NpcUID = NpcUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBFB60
	 * 		Name   -> Function Stalker2.CustomConsoleManagerVP.XInstallAttachBySID
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      AttachSID                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerVP::XInstallAttachBySID(const class FString& AttachSID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerVP.XInstallAttachBySID");
		
		UCustomConsoleManagerVP_XInstallAttachBySID_Params params {};
		params.AttachSID = AttachSID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerVP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerVP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerVP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC0E50
	 * 		Name   -> Function Stalker2.CustomConsoleManagerYK.XTestSetDiscount
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InbDiscount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerYK::XTestSetDiscount(bool InbDiscount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerYK.XTestSetDiscount");
		
		UCustomConsoleManagerYK_XTestSetDiscount_Params params {};
		params.InbDiscount = InbDiscount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF790
	 * 		Name   -> Function Stalker2.CustomConsoleManagerYK.XBlockItemSelectorSlots
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               InBlock                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerYK::XBlockItemSelectorSlots(bool InBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerYK.XBlockItemSelectorSlots");
		
		UCustomConsoleManagerYK_XBlockItemSelectorSlots_Params params {};
		params.InBlock = InBlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF6C0
	 * 		Name   -> Function Stalker2.CustomConsoleManagerYK.XBlockItemSelectorSlot
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               InBlock                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSlotNum                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomConsoleManagerYK::XBlockItemSelectorSlot(bool InBlock, int32_t InSlotNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomConsoleManagerYK.XBlockItemSelectorSlot");
		
		UCustomConsoleManagerYK_XBlockItemSelectorSlot_Params params {};
		params.InBlock = InBlock;
		params.InSlotNum = InSlotNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomConsoleManagerYK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomConsoleManagerYK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomConsoleManagerYK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF430
	 * 		Name   -> Function Stalker2.CustomGrid.OnScrollBarScrolled
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGrid::OnScrollBarScrolled(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomGrid.OnScrollBarScrolled");
		
		UCustomGrid_OnScrollBarScrolled_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF410
	 * 		Name   -> Function Stalker2.CustomGrid.OnGamepadSelectItemForMove
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomGrid::OnGamepadSelectItemForMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomGrid.OnGamepadSelectItemForMove");
		
		UCustomGrid_OnGamepadSelectItemForMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF3F0
	 * 		Name   -> Function Stalker2.CustomGrid.OnGamepadPutItem
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomGrid::OnGamepadPutItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.CustomGrid.OnGamepadPutItem");
		
		UCustomGrid_OnGamepadPutItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSlotBaseWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSlotBaseWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSlotBaseWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGridSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGridSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomGridSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DamageInteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamagableLockComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamagableLockComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DamagableLockComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DeadBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HoldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadBodyHoldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBodyHoldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DeadBodyHoldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF0A0
	 * 		Name   -> Function Stalker2.DealDamageComponent.DealDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDealDamageComponent::DealDamage(class AActor* InTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DealDamageComponent.DealDamage");
		
		UDealDamageComponent_DealDamage_Params params {};
		params.InTargetActor = InTargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDealDamageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDealDamageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DealDamageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeathScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DeathScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugHUDView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugHUDView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DebugHUDView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DebugWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF1C0
	 * 		Name   -> Function Stalker2.DebugTextWidgetBase.FindRengeSettings
	 * 		Flags  -> (Final, Native, Protected)
	 */
	struct FUIWarningSettings UDebugTextWidgetBase::FindRengeSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DebugTextWidgetBase.FindRengeSettings");
		
		UDebugTextWidgetBase_FindRengeSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBEF80
	 * 		Name   -> Function Stalker2.DebugTextWidgetBase.CheckDebugTextBluprint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 InOwnerWidget                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDebugTextWidgetBase::CheckDebugTextBluprint(const class FText& Text, class UUserWidget* InOwnerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DebugTextWidgetBase.CheckDebugTextBluprint");
		
		UDebugTextWidgetBase_CheckDebugTextBluprint_Params params {};
		params.Text = Text;
		params.InOwnerWidget = InOwnerWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTextWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTextWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DebugTextWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF300
	 * 		Name   -> Function Stalker2.DebugTextLenWidget.GetWarningIndex
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextLen                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDebugTextLenWidget::GetWarningIndex(const class FString& Text, int32_t TextLen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DebugTextLenWidget.GetWarningIndex");
		
		UDebugTextLenWidget_GetWarningIndex_Params params {};
		params.Text = Text;
		params.TextLen = TextLen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTextLenWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTextLenWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DebugTextLenWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FBF200
	 * 		Name   -> Function Stalker2.DebugTextLineWidget.GetIndecRowSettings
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            CurrentRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRengeSettings>                      RowSettings                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UDebugTextLineWidget::GetIndecRowSettings(int32_t CurrentRow, TArray<struct FRengeSettings> RowSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DebugTextLineWidget.GetIndecRowSettings");
		
		UDebugTextLineWidget_GetIndecRowSettings_Params params {};
		params.CurrentRow = CurrentRow;
		params.RowSettings = RowSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTextLineWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTextLineWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DebugTextLineWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroyableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DestroyableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructabilityMetaInfoComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestructabilityMetaInfoComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DestructabilityMetaInfoComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_DestructibleItemContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_DestructibleItemContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_DestructibleItemContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4AE0
	 * 		Name   -> Function Stalker2.DestructibleItemContainer.OnBreak
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FChaosBreakEvent                            BreakEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADestructibleItemContainer::OnBreak(const struct FChaosBreakEvent& BreakEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleItemContainer.OnBreak");
		
		ADestructibleItemContainer_OnBreak_Params params {};
		params.BreakEvent = BreakEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestructibleItemContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleItemContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DestructibleItemContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_DestructibleObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_DestructibleObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_DestructibleObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC52D0
	 * 		Name   -> Function Stalker2.DestructibleObject.StartDestructActions
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ADestructibleObject::StartDestructActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.StartDestructActions");
		
		ADestructibleObject_StartDestructActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4FE0
	 * 		Name   -> Function Stalker2.DestructibleObject.OnHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADestructibleObject::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.OnHit");
		
		ADestructibleObject_OnHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.DestructibleObject.GSCFramework_OnPreTransition
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADestructibleObject::GSCFramework_OnPreTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.GSCFramework_OnPreTransition");
		
		ADestructibleObject_GSCFramework_OnPreTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.DestructibleObject.GSCFramework_OnPostTransition
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADestructibleObject::GSCFramework_OnPostTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.GSCFramework_OnPostTransition");
		
		ADestructibleObject_GSCFramework_OnPostTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4A10
	 * 		Name   -> Function Stalker2.DestructibleObject.GSCFramework_GetObjectPhases
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FObjectPhaseSettings> ADestructibleObject::GSCFramework_GetObjectPhases()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.GSCFramework_GetObjectPhases");
		
		ADestructibleObject_GSCFramework_GetObjectPhases_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC49D0
	 * 		Name   -> Function Stalker2.DestructibleObject.GSCFramework_GetCurrentPhase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FObjectPhaseSettings ADestructibleObject::GSCFramework_GetCurrentPhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.GSCFramework_GetCurrentPhase");
		
		ADestructibleObject_GSCFramework_GetCurrentPhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4A50
	 * 		Name   -> Function Stalker2.DestructibleObject.GetCurrentPhaseIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADestructibleObject::GetCurrentPhaseIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DestructibleObject.GetCurrentPhaseIndex");
		
		ADestructibleObject_GetCurrentPhaseIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestructibleObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DestructibleObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeveloperSpectator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeveloperSpectator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DeveloperSpectator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogActionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogActionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogActionWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC51C0
	 * 		Name   -> Function Stalker2.DialogManager.OnToggleAudiolog
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bPlayAudiolog                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogManager::OnToggleAudiolog(bool bPlayAudiolog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogManager.OnToggleAudiolog");
		
		UDialogManager_OnToggleAudiolog_Params params {};
		params.bPlayAudiolog = bPlayAudiolog;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogOrchestrator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogOrchestrator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogOrchestrator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectAnswerIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectAnswerIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogSelectAnswerIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueSpeaker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueSpeaker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueSpeaker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4860
	 * 		Name   -> Function Stalker2.DialogueAnswer.AnswerWidgetClick
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueAnswer::AnswerWidgetClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueAnswer.AnswerWidgetClick");
		
		UDialogueAnswer_AnswerWidgetClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueAnswer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueAnswer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueAnswer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC52B0
	 * 		Name   -> Function Stalker2.DialogueFastAnswer.SelectAnswer
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueFastAnswer::SelectAnswer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueFastAnswer.SelectAnswer");
		
		UDialogueFastAnswer_SelectAnswer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.DialogueFastAnswer.PostSelectAnswer
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDialogueFastAnswer::PostSelectAnswer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueFastAnswer.PostSelectAnswer");
		
		UDialogueFastAnswer_PostSelectAnswer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4970
	 * 		Name   -> Function Stalker2.DialogueFastAnswer.EndSelectAnswer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDialogueFastAnswer::EndSelectAnswer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueFastAnswer.EndSelectAnswer");
		
		UDialogueFastAnswer_EndSelectAnswer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueFastAnswer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueFastAnswer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueFastAnswer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueViewArc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueViewArc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueViewArc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5390
	 * 		Name   -> Function Stalker2.DialogueViewFolder.UIDialogOpenUpgrade
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueViewFolder::UIDialogOpenUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.UIDialogOpenUpgrade");
		
		UDialogueViewFolder_UIDialogOpenUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5370
	 * 		Name   -> Function Stalker2.DialogueViewFolder.UIDialogOpenTrade
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueViewFolder::UIDialogOpenTrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.UIDialogOpenTrade");
		
		UDialogueViewFolder_UIDialogOpenTrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5350
	 * 		Name   -> Function Stalker2.DialogueViewFolder.UIDialogClose
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueViewFolder::UIDialogClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.UIDialogClose");
		
		UDialogueViewFolder_UIDialogClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5330
	 * 		Name   -> Function Stalker2.DialogueViewFolder.UIDialogAnswerUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueViewFolder::UIDialogAnswerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.UIDialogAnswerUp");
		
		UDialogueViewFolder_UIDialogAnswerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5310
	 * 		Name   -> Function Stalker2.DialogueViewFolder.UIDialogAnswerDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueViewFolder::UIDialogAnswerDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.UIDialogAnswerDown");
		
		UDialogueViewFolder_UIDialogAnswerDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC52F0
	 * 		Name   -> Function Stalker2.DialogueViewFolder.UIDialogAnswerConfirm
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogueViewFolder::UIDialogAnswerConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.UIDialogAnswerConfirm");
		
		UDialogueViewFolder_UIDialogAnswerConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4880
	 * 		Name   -> Function Stalker2.DialogueViewFolder.ChangeSelectFolder
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            IndexOldFolder                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AxisMove                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDialogueAnswer* UDialogueViewFolder::ChangeSelectFolder(int32_t IndexOldFolder, int32_t AxisMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DialogueViewFolder.ChangeSelectFolder");
		
		UDialogueViewFolder_ChangeSelectFolder_Params params {};
		params.IndexOldFolder = IndexOldFolder;
		params.AxisMove = AxisMove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueViewFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueViewFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DialogueViewFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULockableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULockableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LockableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4DB0
	 * 		Name   -> Function Stalker2.Door.OnDoorMeshHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UDoor::OnDoorMeshHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Door.OnDoorMeshHit");
		
		UDoor_OnDoorMeshHit_Params params {};
		params.HitComp = HitComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Door");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_Door.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_Door::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_Door");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC53B0
	 * 		Name   -> Function Stalker2.DoorView.UnlockDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void ADoorView::UnlockDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.UnlockDoor");
		
		ADoorView_UnlockDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5290
	 * 		Name   -> Function Stalker2.DoorView.RebuildDoorView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::RebuildDoorView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.RebuildDoorView");
		
		ADoorView_RebuildDoorView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5270
	 * 		Name   -> Function Stalker2.DoorView.PeekDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::PeekDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.PeekDoor");
		
		ADoorView_PeekDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC5250
	 * 		Name   -> Function Stalker2.DoorView.OpenDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::OpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.OpenDoor");
		
		ADoorView_OpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4B80
	 * 		Name   -> Function Stalker2.DoorView.OnComponentHit
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADoorView::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.OnComponentHit");
		
		ADoorView_OnComponentHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4AC0
	 * 		Name   -> Function Stalker2.DoorView.LockDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::LockDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.LockDoor");
		
		ADoorView_LockDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4AA0
	 * 		Name   -> Function Stalker2.DoorView.InvertDoorState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::InvertDoorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.InvertDoorState");
		
		ADoorView_InvertDoorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4A80
	 * 		Name   -> Function Stalker2.DoorView.InvertDoorLock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::InvertDoorLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.InvertDoorLock");
		
		ADoorView_InvertDoorLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC49B0
	 * 		Name   -> Function Stalker2.DoorView.ForceOpenDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::ForceOpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.ForceOpenDoor");
		
		ADoorView_ForceOpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4990
	 * 		Name   -> Function Stalker2.DoorView.ForceCloseDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::ForceCloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.ForceCloseDoor");
		
		ADoorView_ForceCloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FC4950
	 * 		Name   -> Function Stalker2.DoorView.CloseDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADoorView::CloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DoorView.CloseDoor");
		
		ADoorView_CloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DoorView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadLeftIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadLeftIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadLeftIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadOpenDownIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadOpenDownIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadOpenDownIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadOpenUpIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadOpenUpIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadOpenUpIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadRightIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadRightIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadRightIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPADSelection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPADSelection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPADSelection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadSelectPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadSelectPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadSelectPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCDB90
	 * 		Name   -> Function Stalker2.DPadWidget.OpenUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDPadWidget::OpenUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DPadWidget.OpenUpdate");
		
		UDPadWidget_OpenUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCD820
	 * 		Name   -> Function Stalker2.DPadWidget.EmuletClick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EDPadClickType                                     InClickType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDPadWidget::EmuletClick(EDPadClickType InClickType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.DPadWidget.EmuletClick");
		
		UDPadWidget_EmuletClick_Params params {};
		params.InClickType = InClickType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDPadWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDPadWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DPadWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragDropZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragDropZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DragDropZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraggableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraggableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DraggableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicPathBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicPathBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DynamicPathBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicPathBuilderSubscriber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicPathBuilderSubscriber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.DynamicPathBuilderSubscriber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEditorItemContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEditorItemContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EditorItemContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.EditorTools.XVerifyAllActorsForBrokenReference
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AEditorTools::XVerifyAllActorsForBrokenReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.XVerifyAllActorsForBrokenReference");
		
		AEditorTools_XVerifyAllActorsForBrokenReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.EditorTools.XRemoveRestoredLabelFromActors
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void AEditorTools::XRemoveRestoredLabelFromActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.XRemoveRestoredLabelFromActors");
		
		AEditorTools_XRemoveRestoredLabelFromActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.EditorTools.UpdateVoiceSounds
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AEditorTools::UpdateVoiceSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.UpdateVoiceSounds");
		
		AEditorTools_UpdateVoiceSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCDBB0
	 * 		Name   -> Function Stalker2.EditorTools.RemoveEditorContainers
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AEditorTools::RemoveEditorContainers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.RemoveEditorContainers");
		
		AEditorTools_RemoveEditorContainers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCDB00
	 * 		Name   -> Function Stalker2.EditorTools.IsGameWorld
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class UWorld*                                      GameWorld                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AEditorTools::STATIC_IsGameWorld(class UWorld* GameWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.IsGameWorld");
		
		AEditorTools_IsGameWorld_Params params {};
		params.GameWorld = GameWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCDA70
	 * 		Name   -> Function Stalker2.EditorTools.IsActorInGameWorld
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AEditorTools::STATIC_IsActorInGameWorld(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.IsActorInGameWorld");
		
		AEditorTools_IsActorInGameWorld_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCDA40
	 * 		Name   -> Function Stalker2.EditorTools.GetSkyLightUpdateDeltaTime
	 * 		Flags  -> (Final, Native, Static, Public)
	 */
	float AEditorTools::STATIC_GetSkyLightUpdateDeltaTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.GetSkyLightUpdateDeltaTime");
		
		AEditorTools_GetSkyLightUpdateDeltaTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.EditorTools.FixAttachMeshes
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AEditorTools::FixAttachMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.FixAttachMeshes");
		
		AEditorTools_FixAttachMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCD800
	 * 		Name   -> Function Stalker2.EditorTools.CheckAllPrototypes
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AEditorTools::CheckAllPrototypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.CheckAllPrototypes");
		
		AEditorTools_CheckAllPrototypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.EditorTools.ChangeNotesToTeleportPoints
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AEditorTools::ChangeNotesToTeleportPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EditorTools.ChangeNotesToTeleportPoints");
		
		AEditorTools_ChangeNotesToTeleportPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEditorTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEditorTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EditorTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ElectricComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCDA10
	 * 		Name   -> Function Stalker2.ElectroAnomaly.GetRadius
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float AElectroAnomaly::GetRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ElectroAnomaly.GetRadius");
		
		AElectroAnomaly_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCD9D0
	 * 		Name   -> Function Stalker2.ElectroAnomaly.GetParticleSpawnLocation
	 * 		Flags  -> (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AElectroAnomaly::GetParticleSpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ElectroAnomaly.GetParticleSpawnLocation");
		
		AElectroAnomaly_GetParticleSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FCD8A0
	 * 		Name   -> Function Stalker2.ElectroAnomaly.GetElectroBakedData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FElectroAnomalyBakedData AElectroAnomaly::GetElectroBakedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ElectroAnomaly.GetElectroBakedData");
		
		AElectroAnomaly_GetElectroBakedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ElectroAnomaly.BPSetActiveIdleVFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AElectroAnomaly::BPSetActiveIdleVFX(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ElectroAnomaly.BPSetActiveIdleVFX");
		
		AElectroAnomaly_BPSetActiveIdleVFX_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ElectroAnomaly.BPDoLightningStrikeAfterPauseTime
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AElectroAnomaly::BPDoLightningStrikeAfterPauseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ElectroAnomaly.BPDoLightningStrikeAfterPauseTime");
		
		AElectroAnomaly_BPDoLightningStrikeAfterPauseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectroAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectroAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ElectroAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EmissionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmptyObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmptyObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EmptyObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EquipmentSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD19D0
	 * 		Name   -> Function Stalker2.EquipmentSlots.OnItemMouseLeave
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UItemSlotBaseWidget*                         ItemWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquipmentSlots::OnItemMouseLeave(class UItemSlotBaseWidget* ItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EquipmentSlots.OnItemMouseLeave");
		
		UEquipmentSlots_OnItemMouseLeave_Params params {};
		params.ItemWidget = ItemWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1940
	 * 		Name   -> Function Stalker2.EquipmentSlots.OnItemMouseEnter
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UItemSlotBaseWidget*                         ItemWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquipmentSlots::OnItemMouseEnter(class UItemSlotBaseWidget* ItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EquipmentSlots.OnItemMouseEnter");
		
		UEquipmentSlots_OnItemMouseEnter_Params params {};
		params.ItemWidget = ItemWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1920
	 * 		Name   -> Function Stalker2.EquipmentSlots.OnGamepadNavigateUp
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEquipmentSlots::OnGamepadNavigateUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EquipmentSlots.OnGamepadNavigateUp");
		
		UEquipmentSlots_OnGamepadNavigateUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1900
	 * 		Name   -> Function Stalker2.EquipmentSlots.OnGamepadNavigateRight
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEquipmentSlots::OnGamepadNavigateRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EquipmentSlots.OnGamepadNavigateRight");
		
		UEquipmentSlots_OnGamepadNavigateRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD18E0
	 * 		Name   -> Function Stalker2.EquipmentSlots.OnGamepadNavigateLeft
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEquipmentSlots::OnGamepadNavigateLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EquipmentSlots.OnGamepadNavigateLeft");
		
		UEquipmentSlots_OnGamepadNavigateLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD18C0
	 * 		Name   -> Function Stalker2.EquipmentSlots.OnGamepadNavigateDown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEquipmentSlots::OnGamepadNavigateDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.EquipmentSlots.OnGamepadNavigateDown");
		
		UEquipmentSlots_OnGamepadNavigateDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentSlots.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentSlots::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EquipmentSlots");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.EventManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1810
	 * 		Name   -> Function Stalker2.ExplosionComponent.Explode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UExplosionComponent::Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ExplosionComponent.Explode");
		
		UExplosionComponent_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplosionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ExplosionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ExpulsionAnomaly.OnBoltCollided
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocalPoint                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AExpulsionAnomaly::OnBoltCollided(const struct FVector& LocalPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ExpulsionAnomaly.OnBoltCollided");
		
		AExpulsionAnomaly_OnBoltCollided_Params params {};
		params.LocalPoint = LocalPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExpulsionAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExpulsionAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ExpulsionAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1AC0
	 * 		Name   -> Function Stalker2.FadeoutScreen.UISkipFadeoutScreen
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UFadeoutScreen::UISkipFadeoutScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FadeoutScreen.UISkipFadeoutScreen");
		
		UFadeoutScreen_UISkipFadeoutScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFadeoutScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadeoutScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FadeoutScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1AE0
	 * 		Name   -> Function Stalker2.FastDialogueView.UpdateAfterClick
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UFastDialogueView::UpdateAfterClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FastDialogueView.UpdateAfterClick");
		
		UFastDialogueView_UpdateAfterClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1AA0
	 * 		Name   -> Function Stalker2.FastDialogueView.UIFastDialogSecondAnswer
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFastDialogueView::UIFastDialogSecondAnswer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FastDialogueView.UIFastDialogSecondAnswer");
		
		UFastDialogueView_UIFastDialogSecondAnswer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1A80
	 * 		Name   -> Function Stalker2.FastDialogueView.UIFastDialogFirstAnswer
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFastDialogueView::UIFastDialogFirstAnswer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FastDialogueView.UIFastDialogFirstAnswer");
		
		UFastDialogueView_UIFastDialogFirstAnswer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.FastDialogueView.PostSelectAnswer
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsRightAnswer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastDialogueView::PostSelectAnswer(bool bIsRightAnswer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FastDialogueView.PostSelectAnswer");
		
		UFastDialogueView_PostSelectAnswer_Params params {};
		params.bIsRightAnswer = bIsRightAnswer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1780
	 * 		Name   -> Function Stalker2.FastDialogueView.EndSelectAnswer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsRightAnswer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastDialogueView::EndSelectAnswer(bool bIsRightAnswer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FastDialogueView.EndSelectAnswer");
		
		UFastDialogueView_EndSelectAnswer_Params params {};
		params.bIsRightAnswer = bIsRightAnswer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.FastDialogueView.BlockInput
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UFastDialogueView::BlockInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.FastDialogueView.BlockInput");
		
		UFastDialogueView_BlockInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFastDialogueView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastDialogueView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FastDialogueView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFastTravelManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastTravelManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FastTravelManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireTypeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireTypeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FireTypeWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FlashlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlycatcherAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlycatcherAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FlycatcherAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1A60
	 * 		Name   -> Function Stalker2.GameGraphRenderingComponent.ShowAllComponents
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UGameGraphRenderingComponent::ShowAllComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GameGraphRenderingComponent.ShowAllComponents");
		
		UGameGraphRenderingComponent_ShowAllComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameGraphRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameGraphRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GameGraphRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameGraphData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameGraphData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GameGraphData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameGraphSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameGraphSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GameGraphSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GameManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameMenuElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameMenuElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GameMenuElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGaussDisplay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGaussDisplay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GaussDisplay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerEffectsSFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerEffectsSFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerEffectsSFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeigerCounterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeigerCounterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GeigerCounterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGilkaDisplay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGilkaDisplay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GilkaDisplay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD1830
	 * 		Name   -> Function Stalker2.Global.GoToMap
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		class FName                                        MapName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobal::GoToMap(const class FName& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Global.GoToMap");
		
		UGlobal_GoToMap_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Global");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalLoadingSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalLoadingSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GlobalLoadingSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalVariableManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalVariableManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GlobalVariableManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGranularSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGranularSynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GranularSynthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_Grenade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_Grenade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_Grenade");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD17F0
	 * 		Name   -> Function Stalker2.Grenade.Explode
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	void AGrenade::Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Grenade.Explode");
		
		AGrenade_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrenade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrenade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Grenade");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrenadeExplosionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrenadeExplosionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GrenadeExplosionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5450
	 * 		Name   -> Function Stalker2.GSCAblityBlueprintFunctions.ExecuteAbilityByActivationTagAttackPayload
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActivationTag                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCAblityBlueprintFunctions::STATIC_ExecuteAbilityByActivationTagAttackPayload(class AActor* Actor, const class FName& ActivationTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCAblityBlueprintFunctions.ExecuteAbilityByActivationTagAttackPayload");
		
		UGSCAblityBlueprintFunctions_ExecuteAbilityByActivationTagAttackPayload_Params params {};
		params.Actor = Actor;
		params.ActivationTag = ActivationTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSCAblityBlueprintFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSCAblityBlueprintFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCAblityBlueprintFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGSCAudioVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGSCAudioVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCAudioVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSCDataTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSCDataTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCDataTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSCTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSCTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSCTimeSynthVolumeGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSCTimeSynthVolumeGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCTimeSynthVolumeGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSCTimeSynthClip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSCTimeSynthClip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCTimeSynthClip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD6340
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UGSCTimeSynthVolumeGroup*                    InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGSCTimeSynthEventClipQuantization                 EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGSCTimeSynthTimeDef                        FadeTime                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(class UGSCTimeSynthVolumeGroup* InVolumeGroup, EGSCTimeSynthEventClipQuantization EventQuantization, const struct FGSCTimeSynthTimeDef& FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride");
		
		UGSCTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params params {};
		params.InVolumeGroup = InVolumeGroup;
		params.EventQuantization = EventQuantization;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD6270
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.StopSoundsOnVolumeGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGSCTimeSynthVolumeGroup*                    InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGSCTimeSynthEventClipQuantization                 EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::StopSoundsOnVolumeGroup(class UGSCTimeSynthVolumeGroup* InVolumeGroup, EGSCTimeSynthEventClipQuantization EventQuantization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.StopSoundsOnVolumeGroup");
		
		UGSCTimeSynthComponent_StopSoundsOnVolumeGroup_Params params {};
		params.InVolumeGroup = InVolumeGroup;
		params.EventQuantization = EventQuantization;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD6120
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.StopClipWithFadeOverride
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGSCTimeSynthClipHandle                     InClipHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGSCTimeSynthEventClipQuantization                 EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGSCTimeSynthTimeDef                        FadeTime                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::StopClipWithFadeOverride(const struct FGSCTimeSynthClipHandle& InClipHandle, EGSCTimeSynthEventClipQuantization EventQuantization, const struct FGSCTimeSynthTimeDef& FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.StopClipWithFadeOverride");
		
		UGSCTimeSynthComponent_StopClipWithFadeOverride_Params params {};
		params.InClipHandle = InClipHandle;
		params.EventQuantization = EventQuantization;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD6030
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.StopClip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGSCTimeSynthClipHandle                     InClipHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGSCTimeSynthEventClipQuantization                 EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::StopClip(const struct FGSCTimeSynthClipHandle& InClipHandle, EGSCTimeSynthEventClipQuantization EventQuantization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.StopClip");
		
		UGSCTimeSynthComponent_StopClip_Params params {};
		params.InClipHandle = InClipHandle;
		params.EventQuantization = EventQuantization;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5F20
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetVolumeGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGSCTimeSynthVolumeGroup*                    InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeDb                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTimeSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetVolumeGroup(class UGSCTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetVolumeGroup");
		
		UGSCTimeSynthComponent_SetVolumeGroup_Params params {};
		params.InVolumeGroup = InVolumeGroup;
		params.VolumeDb = VolumeDb;
		params.FadeTimeSec = FadeTimeSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5D20
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetSeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InSeed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetSeed(int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetSeed");
		
		UGSCTimeSynthComponent_SetSeed_Params params {};
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5C60
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetQuantizationSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGSCTimeSynthQuantizationSettings           InQuantizationSettings                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetQuantizationSettings(const struct FGSCTimeSynthQuantizationSettings& InQuantizationSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetQuantizationSettings");
		
		UGSCTimeSynthComponent_SetQuantizationSettings_Params params {};
		params.InQuantizationSettings = InQuantizationSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5B70
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetFilterSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EGSCTimeSynthFilter                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGSCTimeSynthFilterSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetFilterSettings(EGSCTimeSynthFilter Filter, const struct FGSCTimeSynthFilterSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetFilterSettings");
		
		UGSCTimeSynthComponent_SetFilterSettings_Params params {};
		params.Filter = Filter;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5AA0
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetFilterEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGSCTimeSynthFilter                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetFilterEnabled(EGSCTimeSynthFilter Filter, bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetFilterEnabled");
		
		UGSCTimeSynthComponent_SetFilterEnabled_Params params {};
		params.Filter = Filter;
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5A20
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetFFTSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGSCTimeSynthFFTSize                               InFFTSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetFFTSize(EGSCTimeSynthFFTSize InFFTSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetFFTSize");
		
		UGSCTimeSynthComponent_SetFFTSize_Params params {};
		params.InFFTSize = InFFTSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5970
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetEnvelopeFollowerSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGSCTimeSynthEnvelopeFollowerSettings       InSettings                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetEnvelopeFollowerSettings(const struct FGSCTimeSynthEnvelopeFollowerSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetEnvelopeFollowerSettings");
		
		UGSCTimeSynthComponent_SetEnvelopeFollowerSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD58E0
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetEnvelopeFollowerEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetEnvelopeFollowerEnabled");
		
		UGSCTimeSynthComponent_SetEnvelopeFollowerEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5860
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.SetBPM
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BeatsPerMinute                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::SetBPM(float BeatsPerMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.SetBPM");
		
		UGSCTimeSynthComponent_SetBPM_Params params {};
		params.BeatsPerMinute = BeatsPerMinute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5840
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.ResetSeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGSCTimeSynthComponent::ResetSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.ResetSeed");
		
		UGSCTimeSynthComponent_ResetSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5760
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.PlayClip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGSCTimeSynthClip*                           InClip                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGSCTimeSynthVolumeGroup*                    InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGSCTimeSynthClipHandle UGSCTimeSynthComponent::PlayClip(class UGSCTimeSynthClip* InClip, class UGSCTimeSynthVolumeGroup* InVolumeGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.PlayClip");
		
		UGSCTimeSynthComponent_PlayClip_Params params {};
		params.InClip = InClip;
		params.InVolumeGroup = InVolumeGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5640
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.HasActiveClips
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGSCTimeSynthComponent::HasActiveClips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.HasActiveClips");
		
		UGSCTimeSynthComponent_HasActiveClips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD55C0
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.GetSpectralData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FGSCTimeSynthSpectralData> UGSCTimeSynthComponent::GetSpectralData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.GetSpectralData");
		
		UGSCTimeSynthComponent_GetSpectralData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5590
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.GetMaxActiveClipLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGSCTimeSynthComponent::GetMaxActiveClipLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.GetMaxActiveClipLimit");
		
		UGSCTimeSynthComponent_GetMaxActiveClipLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5570
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.GetEnvelopeFollowerValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGSCTimeSynthComponent::GetEnvelopeFollowerValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.GetEnvelopeFollowerValue");
		
		UGSCTimeSynthComponent_GetEnvelopeFollowerValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5510
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.GetBPM
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGSCTimeSynthComponent::GetBPM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.GetBPM");
		
		UGSCTimeSynthComponent_GetBPM_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5360
	 * 		Name   -> Function Stalker2.GSCTimeSynthComponent.AddQuantizationEventDelegate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EGSCTimeSynthEventQuantization                     QuantizationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQuantizationEvent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGSCTimeSynthComponent::AddQuantizationEventDelegate(EGSCTimeSynthEventQuantization QuantizationType, const class FScriptDelegate& OnQuantizationEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GSCTimeSynthComponent.AddQuantizationEventDelegate");
		
		UGSCTimeSynthComponent_AddQuantizationEventDelegate_Params params {};
		params.QuantizationType = QuantizationType;
		params.OnQuantizationEvent = OnQuantizationEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSCTimeSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSCTimeSynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GSCTimeSynthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuidActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuidActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GuidActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.GUIDActorSavable.SaveGUIDActor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGUIDActorSavable::SaveGUIDActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GUIDActorSavable.SaveGUIDActor");
		
		UGUIDActorSavable_SaveGUIDActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.GUIDActorSavable.LoadGUIDActor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGUIDActorSavable::LoadGUIDActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.GUIDActorSavable.LoadGUIDActor");
		
		UGUIDActorSavable_LoadGUIDActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGUIDActorSavable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGUIDActorSavable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GUIDActorSavable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunRecoilTextureDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunRecoilTextureDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GunRecoilTextureDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeadFlashlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadFlashlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HeadFlashlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHintAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HintAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FD5540
	 * 		Name   -> Function Stalker2.HintDecoratorBase.GetCurrentPlatform
	 * 		Flags  -> (Final, Native, Protected)
	 */
	EGSCPlatformType UHintDecoratorBase::GetCurrentPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintDecoratorBase.GetCurrentPlatform");
		
		UHintDecoratorBase_GetCurrentPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHintDecoratorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintDecoratorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HintDecoratorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.HintKey.PlayHintAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSingleClick                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHintKey::PlayHintAnimation(bool bSingleClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.HintKey.PlayHintAnimation");
		
		UHintKey_PlayHintAnimation_Params params {};
		params.bSingleClick = bSingleClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHintKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HintKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RichTextWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHintRichTextWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintRichTextWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HintRichTextWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHintSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HintSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitReceiver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitReceiver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HitReceiver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitReceiverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitReceiverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HitReceiverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHittableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHittableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HittableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoldIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoldIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HoldIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoverIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoverIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HoverIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHumanAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHumanAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HumanAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHumanDefaultAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHumanDefaultAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HumanDefaultAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHumanFirearmAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHumanFirearmAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.HumanFirearmAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDB160
	 * 		Name   -> Function Stalker2.ImageWidget.UpdateIcon
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UImageWidget::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ImageWidget.UpdateIcon");
		
		UImageWidget_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDB140
	 * 		Name   -> Function Stalker2.ImageWidget.UpdateController
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UImageWidget::UpdateController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ImageWidget.UpdateController");
		
		UImageWidget_UpdateController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDB120
	 * 		Name   -> Function Stalker2.ImageWidget.UpdateColour
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UImageWidget::UpdateColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ImageWidget.UpdateColour");
		
		UImageWidget_UpdateColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAD00
	 * 		Name   -> Function Stalker2.ImageWidget.SetBrushTextureInIconSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImageWidget::SetBrushTextureInIconSettings(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ImageWidget.SetBrushTextureInIconSettings");
		
		UImageWidget_SetBrushTextureInIconSettings_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ImageWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAA10
	 * 		Name   -> Function Stalker2.ImpulseComponent.ApplyImpulse
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InImpulse                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImpulseComponent::ApplyImpulse(class AActor* InTargetActor, const struct FVector& InImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ImpulseComponent.ApplyImpulse");
		
		UImpulseComponent_ApplyImpulse_Params params {};
		params.InTargetActor = InTargetActor;
		params.InImpulse = InImpulse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImpulseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpulseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ImpulseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStalker2BaseGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStalker2BaseGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Stalker2BaseGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInitLevelGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInitLevelGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InitLevelGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InputManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInteractableItemContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractableItemContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractableItemContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIDActor_InteractableObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIDActor_InteractableObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDActor_InteractableObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDB0F0
	 * 		Name   -> Function Stalker2.InteractableObject.Toggle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AInteractableObject::Toggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.Toggle");
		
		AInteractableObject_Toggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDB060
	 * 		Name   -> Function Stalker2.InteractableObject.SetUnbreakable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInUnbreakable                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableObject::SetUnbreakable(bool bInUnbreakable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.SetUnbreakable");
		
		AInteractableObject_SetUnbreakable_Params params {};
		params.bInUnbreakable = bInUnbreakable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAFD0
	 * 		Name   -> Function Stalker2.InteractableObject.SetSelfSufficient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSelfSufficient                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableObject::SetSelfSufficient(bool bInSelfSufficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.SetSelfSufficient");
		
		AInteractableObject_SetSelfSufficient_Params params {};
		params.bInSelfSufficient = bInSelfSufficient;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAF40
	 * 		Name   -> Function Stalker2.InteractableObject.SetPrerequisiteRequired
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInPrerequisiteRequired                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableObject::SetPrerequisiteRequired(bool bInPrerequisiteRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.SetPrerequisiteRequired");
		
		AInteractableObject_SetPrerequisiteRequired_Params params {};
		params.bInPrerequisiteRequired = bInPrerequisiteRequired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAE20
	 * 		Name   -> Function Stalker2.InteractableObject.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnabled                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableObject::SetEnabled(bool bInEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.SetEnabled");
		
		AInteractableObject_SetEnabled_Params params {};
		params.bInEnabled = bInEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAC70
	 * 		Name   -> Function Stalker2.InteractableObject.SetBroken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInBroken                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableObject::SetBroken(bool bInBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.SetBroken");
		
		AInteractableObject_SetBroken_Params params {};
		params.bInBroken = bInBroken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.InteractableObject.OnNightStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AInteractableObject::OnNightStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.OnNightStart");
		
		AInteractableObject_OnNightStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.InteractableObject.OnEmissionStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AInteractableObject::OnEmissionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.OnEmissionStart");
		
		AInteractableObject_OnEmissionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.InteractableObject.OnEmissionFinish
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AInteractableObject::OnEmissionFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.OnEmissionFinish");
		
		AInteractableObject_OnEmissionFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.InteractableObject.OnDayStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AInteractableObject::OnDayStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.OnDayStart");
		
		AInteractableObject_OnDayStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAC40
	 * 		Name   -> Function Stalker2.InteractableObject.IsUnbreakable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AInteractableObject::IsUnbreakable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.IsUnbreakable");
		
		AInteractableObject_IsUnbreakable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAC10
	 * 		Name   -> Function Stalker2.InteractableObject.IsSelfSufficient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AInteractableObject::IsSelfSufficient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.IsSelfSufficient");
		
		AInteractableObject_IsSelfSufficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDABE0
	 * 		Name   -> Function Stalker2.InteractableObject.IsPrerequisiteRequired
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AInteractableObject::IsPrerequisiteRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.IsPrerequisiteRequired");
		
		AInteractableObject_IsPrerequisiteRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDABB0
	 * 		Name   -> Function Stalker2.InteractableObject.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AInteractableObject::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.IsEnabled");
		
		AInteractableObject_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDAB80
	 * 		Name   -> Function Stalker2.InteractableObject.IsBroken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AInteractableObject::IsBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractableObject.IsBroken");
		
		AInteractableObject_IsBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInteractableObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractableObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractableObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF1C0
	 * 		Name   -> Function Stalker2.InteractView.UpdateInteractHints
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UInteractView::UpdateInteractHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractView.UpdateInteractHints");
		
		UInteractView_UpdateInteractHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF0F0
	 * 		Name   -> Function Stalker2.InteractView.UpdateInteractClick
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EInteractionType                                   InteractionType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractView::UpdateInteractClick(EInteractionType InteractionType, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractView.UpdateInteractClick");
		
		UInteractView_UpdateInteractClick_Params params {};
		params.InteractionType = InteractionType;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF0B0
	 * 		Name   -> Function Stalker2.InteractView.UpdateHintState
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UInteractView::UpdateHintState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractView.UpdateHintState");
		
		UInteractView_UpdateHintState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEBA0
	 * 		Name   -> Function Stalker2.InteractViewHint.OnRunAction
	 * 		Flags  -> (Native, Public)
	 */
	void UInteractViewHint::OnRunAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InteractViewHint.OnRunAction");
		
		UInteractViewHint_OnRunAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractViewHint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractViewHint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InteractViewHint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InventoryIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF0D0
	 * 		Name   -> Function Stalker2.InventoryNew.UpdateInputDependent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::UpdateInputDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UpdateInputDependent");
		
		UInventoryNew_UpdateInputDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF090
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryToggleItemInfo
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryToggleItemInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryToggleItemInfo");
		
		UInventoryNew_UIInventoryToggleItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF070
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryToggleEquipmentPC
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryToggleEquipmentPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryToggleEquipmentPC");
		
		UInventoryNew_UIInventoryToggleEquipmentPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF050
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryToggleEquipment
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryToggleEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryToggleEquipment");
		
		UInventoryNew_UIInventoryToggleEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF030
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryTakeItem
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::UIInventoryTakeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryTakeItem");
		
		UInventoryNew_UIInventoryTakeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDF010
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventorySplitStepRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventorySplitStepRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventorySplitStepRight");
		
		UInventoryNew_UIInventorySplitStepRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEFF0
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventorySplitStepLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventorySplitStepLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventorySplitStepLeft");
		
		UInventoryNew_UIInventorySplitStepLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEFD0
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventorySort
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventorySort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventorySort");
		
		UInventoryNew_UIInventorySort_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEFB0
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateUp");
		
		UInventoryNew_UIInventoryNavigateUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEF90
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateRight");
		
		UInventoryNew_UIInventoryNavigateRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEF70
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateLeft");
		
		UInventoryNew_UIInventoryNavigateLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEF50
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateDown");
		
		UInventoryNew_UIInventoryNavigateDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEF30
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateComparingUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateComparingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateComparingUp");
		
		UInventoryNew_UIInventoryNavigateComparingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEF10
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateComparingRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateComparingRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateComparingRight");
		
		UInventoryNew_UIInventoryNavigateComparingRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEEF0
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateComparingLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateComparingLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateComparingLeft");
		
		UInventoryNew_UIInventoryNavigateComparingLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEED0
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryNavigateComparingDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryNavigateComparingDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryNavigateComparingDown");
		
		UInventoryNew_UIInventoryNavigateComparingDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEEB0
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryItemAction
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryItemAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryItemAction");
		
		UInventoryNew_UIInventoryItemAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEE90
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryDropItem
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryDropItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryDropItem");
		
		UInventoryNew_UIInventoryDropItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEE70
	 * 		Name   -> Function Stalker2.InventoryNew.UIInventoryCompareItem
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::UIInventoryCompareItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.UIInventoryCompareItem");
		
		UInventoryNew_UIInventoryCompareItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEE50
	 * 		Name   -> Function Stalker2.InventoryNew.SortInventory
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::SortInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.SortInventory");
		
		UInventoryNew_SortInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEE30
	 * 		Name   -> Function Stalker2.InventoryNew.ShowTooltip
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::ShowTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.ShowTooltip");
		
		UInventoryNew_ShowTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDED20
	 * 		Name   -> Function Stalker2.InventoryNew.OnVisibilityChangedEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnVisibilityChangedEvent(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnVisibilityChangedEvent");
		
		UInventoryNew_OnVisibilityChangedEvent_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDED00
	 * 		Name   -> Function Stalker2.InventoryNew.OnTrade
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::OnTrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnTrade");
		
		UInventoryNew_OnTrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEC70
	 * 		Name   -> Function Stalker2.InventoryNew.OnToggleEquipment
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnToggleEquipment(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnToggleEquipment");
		
		UInventoryNew_OnToggleEquipment_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEBE0
	 * 		Name   -> Function Stalker2.InventoryNew.OnSplitConfirmed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            ItemAmountSplitForDrop                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnSplitConfirmed(int32_t ItemAmountSplitForDrop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnSplitConfirmed");
		
		UInventoryNew_OnSplitConfirmed_Params params {};
		params.ItemAmountSplitForDrop = ItemAmountSplitForDrop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEBC0
	 * 		Name   -> Function Stalker2.InventoryNew.OnSplitCanceled
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnSplitCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnSplitCanceled");
		
		UInventoryNew_OnSplitCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDEA80
	 * 		Name   -> Function Stalker2.InventoryNew.OnRightClickMenuItemSelected
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FRightClickMenuItemData                     ItemData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnRightClickMenuItemSelected(const struct FRightClickMenuItemData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnRightClickMenuItemSelected");
		
		UInventoryNew_OnRightClickMenuItemSelected_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE910
	 * 		Name   -> Function Stalker2.InventoryNew.OnRightClickMenuItemHover
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FRightClickMenuItemData                     ItemData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInHover                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnRightClickMenuItemHover(const struct FRightClickMenuItemData& ItemData, bool bInHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnRightClickMenuItemHover");
		
		UInventoryNew_OnRightClickMenuItemHover_Params params {};
		params.ItemData = ItemData;
		params.bInHover = bInHover;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE8F0
	 * 		Name   -> Function Stalker2.InventoryNew.OnRightClickMenuCanceled
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::OnRightClickMenuCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnRightClickMenuCanceled");
		
		UInventoryNew_OnRightClickMenuCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE860
	 * 		Name   -> Function Stalker2.InventoryNew.OnRejectDrop
	 * 		Flags  -> (Final, Native, Public, HasDefaults)
	 * Parameters:
	 * 		struct FVector2D                                   Pos                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnRejectDrop(const struct FVector2D& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnRejectDrop");
		
		UInventoryNew_OnRejectDrop_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE840
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadSelectItemRelease
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadSelectItemRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadSelectItemRelease");
		
		UInventoryNew_OnGamepadSelectItemRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE820
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadSelectItemForMoveRepeat
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadSelectItemForMoveRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadSelectItemForMoveRepeat");
		
		UInventoryNew_OnGamepadSelectItemForMoveRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE800
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadSelectItemForMovePress
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadSelectItemForMovePress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadSelectItemForMovePress");
		
		UInventoryNew_OnGamepadSelectItemForMovePress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE7E0
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadPutItem
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadPutItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadPutItem");
		
		UInventoryNew_OnGamepadPutItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE7C0
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadEquipItem
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::OnGamepadEquipItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadEquipItem");
		
		UInventoryNew_OnGamepadEquipItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE7A0
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadDropItemRepeat
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadDropItemRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadDropItemRepeat");
		
		UInventoryNew_OnGamepadDropItemRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE780
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadDropItemRelease
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadDropItemRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadDropItemRelease");
		
		UInventoryNew_OnGamepadDropItemRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE760
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadDropItemPress
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadDropItemPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadDropItemPress");
		
		UInventoryNew_OnGamepadDropItemPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE740
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadDropItem
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadDropItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadDropItem");
		
		UInventoryNew_OnGamepadDropItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE720
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadContextMenu
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadContextMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadContextMenu");
		
		UInventoryNew_OnGamepadContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE700
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadCompareItemRepeat
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadCompareItemRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadCompareItemRepeat");
		
		UInventoryNew_OnGamepadCompareItemRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE6E0
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadCompareItemRelease
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadCompareItemRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadCompareItemRelease");
		
		UInventoryNew_OnGamepadCompareItemRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE6C0
	 * 		Name   -> Function Stalker2.InventoryNew.OnGamepadCompareItemPress
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::OnGamepadCompareItemPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnGamepadCompareItemPress");
		
		UInventoryNew_OnGamepadCompareItemPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE630
	 * 		Name   -> Function Stalker2.InventoryNew.OnExitClick
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FName                                        ButtonId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnExitClick(const class FName& ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnExitClick");
		
		UInventoryNew_OnExitClick_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE5A0
	 * 		Name   -> Function Stalker2.InventoryNew.OnDropToEmptyPlace
	 * 		Flags  -> (Final, Native, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector2D                                   Pos                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnDropToEmptyPlace(const struct FVector2D& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnDropToEmptyPlace");
		
		UInventoryNew_OnDropToEmptyPlace_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE510
	 * 		Name   -> Function Stalker2.InventoryNew.OnDragDropCanceled
	 * 		Flags  -> (Final, Native, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector2D                                   Pos                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryNew::OnDragDropCanceled(const struct FVector2D& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.OnDragDropCanceled");
		
		UInventoryNew_OnDragDropCanceled_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE4F0
	 * 		Name   -> Function Stalker2.InventoryNew.InventoryWidgetTakeAllItems
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInventoryNew::InventoryWidgetTakeAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.InventoryWidgetTakeAllItems");
		
		UInventoryNew_InventoryWidgetTakeAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FDE4D0
	 * 		Name   -> Function Stalker2.InventoryNew.HideRightClickMenu
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInventoryNew::HideRightClickMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.InventoryNew.HideRightClickMenu");
		
		UInventoryNew_HideRightClickMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryNew.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryNew::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.InventoryNew");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemAppearanceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemAppearanceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemAppearanceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemContainerHoldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemContainerHoldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemContainerHoldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemContainerInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemContainerInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemContainerInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemDragWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemDragWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemDragWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorChangeSlotIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorChangeSlotIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSelectorChangeSlotIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorSlotBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorSlotBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSelectorSlotBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorEquipSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorEquipSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSelectorEquipSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSelectorIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2F00
	 * 		Name   -> Function Stalker2.ItemSelectorView.UpdateSlotsFromGamepadAxis
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UpdateSlotsFromGamepadAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UpdateSlotsFromGamepadAxis");
		
		UItemSelectorView_UpdateSlotsFromGamepadAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2BE0
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorNVD
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UIItemSelectorNVD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorNVD");
		
		UItemSelectorView_UIItemSelectorNVD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2BC0
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorLentern
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::UIItemSelectorLentern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorLentern");
		
		UItemSelectorView_UIItemSelectorLentern_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2BA0
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotUp
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UIItemSelectorFastChangeSlotUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotUp");
		
		UItemSelectorView_UIItemSelectorFastChangeSlotUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2B80
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotRight
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UIItemSelectorFastChangeSlotRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotRight");
		
		UItemSelectorView_UIItemSelectorFastChangeSlotRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2B60
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotLeft
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UIItemSelectorFastChangeSlotLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotLeft");
		
		UItemSelectorView_UIItemSelectorFastChangeSlotLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2B40
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotDown
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UIItemSelectorFastChangeSlotDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorFastChangeSlotDown");
		
		UItemSelectorView_UIItemSelectorFastChangeSlotDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2B20
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorFastCancelChang
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UItemSelectorView::UIItemSelectorFastCancelChang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorFastCancelChang");
		
		UItemSelectorView_UIItemSelectorFastCancelChang_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2B00
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorDetector
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::UIItemSelectorDetector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorDetector");
		
		UItemSelectorView_UIItemSelectorDetector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2AE0
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorChangeSlotPrevious
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::UIItemSelectorChangeSlotPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorChangeSlotPrevious");
		
		UItemSelectorView_UIItemSelectorChangeSlotPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2AC0
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorChangeSlotNext
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::UIItemSelectorChangeSlotNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorChangeSlotNext");
		
		UItemSelectorView_UIItemSelectorChangeSlotNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.ItemSelectorView.UIItemSelectorBinocular
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::UIItemSelectorBinocular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.UIItemSelectorBinocular");
		
		UItemSelectorView_UIItemSelectorBinocular_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ItemSelectorView.GetSlotsBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	TArray<class UItemSelectorWeaponSlot*> UItemSelectorView::GetSlotsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.GetSlotsBP");
		
		UItemSelectorView_GetSlotsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ItemSelectorView.GetEquipSlotsBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	TArray<class UItemSelectorEquipSlot*> UItemSelectorView::GetEquipSlotsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.GetEquipSlotsBP");
		
		UItemSelectorView_GetEquipSlotsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2860
	 * 		Name   -> Function Stalker2.ItemSelectorView.ChangeFireType
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::ChangeFireType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.ChangeFireType");
		
		UItemSelectorView_ChangeFireType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2840
	 * 		Name   -> Function Stalker2.ItemSelectorView.ChangeAmmoType
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UItemSelectorView::ChangeAmmoType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorView.ChangeAmmoType");
		
		UItemSelectorView_ChangeAmmoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSelectorView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE29E0
	 * 		Name   -> Function Stalker2.ItemSelectorWeaponSlot.IsWeaponSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UItemSelectorWeaponSlot::IsWeaponSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorWeaponSlot.IsWeaponSlot");
		
		UItemSelectorWeaponSlot_IsWeaponSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE29B0
	 * 		Name   -> Function Stalker2.ItemSelectorWeaponSlot.IsGrenadeSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UItemSelectorWeaponSlot::IsGrenadeSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorWeaponSlot.IsGrenadeSlot");
		
		UItemSelectorWeaponSlot_IsGrenadeSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2980
	 * 		Name   -> Function Stalker2.ItemSelectorWeaponSlot.IsAlternativeSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UItemSelectorWeaponSlot::IsAlternativeSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorWeaponSlot.IsAlternativeSlot");
		
		UItemSelectorWeaponSlot_IsAlternativeSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ItemSelectorWeaponSlot.GetHoveredWidgets
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	TArray<class UUserWidget*> UItemSelectorWeaponSlot::GetHoveredWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorWeaponSlot.GetHoveredWidgets");
		
		UItemSelectorWeaponSlot_GetHoveredWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2910
	 * 		Name   -> Function Stalker2.ItemSelectorWeaponSlot.ConstructUpdateSlotScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UItemSelectorWeaponSlot::ConstructUpdateSlotScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemSelectorWeaponSlot.ConstructUpdateSlotScale");
		
		UItemSelectorWeaponSlot_ConstructUpdateSlotScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorWeaponSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorWeaponSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSelectorWeaponSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSlotState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSlotState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemSlotState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemsStatsUpgrades.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemsStatsUpgrades::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemsStatsUpgrades");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemStatProgress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemStatProgress::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemStatProgress");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemStatValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemStatValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemStatValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2950
	 * 		Name   -> Function Stalker2.ItemUsageComponent.HasRequiredItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UItemUsageComponent::HasRequiredItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemUsageComponent.HasRequiredItems");
		
		UItemUsageComponent_HasRequiredItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2930
	 * 		Name   -> Function Stalker2.ItemUsageComponent.ConsumeRequiredItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UItemUsageComponent::ConsumeRequiredItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ItemUsageComponent.ConsumeRequiredItems");
		
		UItemUsageComponent_ConsumeRequiredItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemUsageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemUsageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemUsageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJournalIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJournalIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.JournalIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJournalMouseIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJournalMouseIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.JournalMouseIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPageViewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPageViewBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PageViewBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAPage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAPage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAPage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2F20
	 * 		Name   -> Function Stalker2.JournalPage.UpdateStageOnDetailed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UJournalPage::UpdateStageOnDetailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UpdateStageOnDetailed");
		
		UJournalPage_UpdateStageOnDetailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2E30
	 * 		Name   -> Function Stalker2.JournalPage.UpdateHoverDetailsElement
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bHovered                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDetailsElementType                                ElementType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJournalPage::UpdateHoverDetailsElement(bool bHovered, EDetailsElementType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UpdateHoverDetailsElement");
		
		UJournalPage_UpdateHoverDetailsElement_Params params {};
		params.bHovered = bHovered;
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2DA0
	 * 		Name   -> Function Stalker2.JournalPage.UpdateButton
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            IndexUpdateButton                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJournalPage::UpdateButton(int32_t IndexUpdateButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UpdateButton");
		
		UJournalPage_UpdateButton_Params params {};
		params.IndexUpdateButton = IndexUpdateButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2D80
	 * 		Name   -> Function Stalker2.JournalPage.UIPDATransitionToMarkerPosition
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDATransitionToMarkerPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDATransitionToMarkerPosition");
		
		UJournalPage_UIPDATransitionToMarkerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2D60
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationUp");
		
		UJournalPage_UIPDANavigationUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2D40
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationStageUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationStageUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationStageUp");
		
		UJournalPage_UIPDANavigationStageUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2D20
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationStageDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationStageDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationStageDown");
		
		UJournalPage_UIPDANavigationStageDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2D00
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationSelectPanelRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationSelectPanelRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationSelectPanelRight");
		
		UJournalPage_UIPDANavigationSelectPanelRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2CE0
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationSelectPanelLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationSelectPanelLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationSelectPanelLeft");
		
		UJournalPage_UIPDANavigationSelectPanelLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2CC0
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationSelect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationSelect");
		
		UJournalPage_UIPDANavigationSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2CA0
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationRight");
		
		UJournalPage_UIPDANavigationRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2C80
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationReleased
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationReleased");
		
		UJournalPage_UIPDANavigationReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2C60
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationMouseUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationMouseUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationMouseUp");
		
		UJournalPage_UIPDANavigationMouseUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2C40
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationMouseDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationMouseDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationMouseDown");
		
		UJournalPage_UIPDANavigationMouseDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2C20
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationLeft");
		
		UJournalPage_UIPDANavigationLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2C00
	 * 		Name   -> Function Stalker2.JournalPage.UIPDANavigationDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UJournalPage::UIPDANavigationDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.UIPDANavigationDown");
		
		UJournalPage_UIPDANavigationDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2AA0
	 * 		Name   -> Function Stalker2.JournalPage.StageSlotHover
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UJournalPage::StageSlotHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.StageSlotHover");
		
		UJournalPage_StageSlotHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2A10
	 * 		Name   -> Function Stalker2.JournalPage.ShowDetails
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bEmpty                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJournalPage::ShowDetails(bool bEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.ShowDetails");
		
		UJournalPage_ShowDetails_Params params {};
		params.bEmpty = bEmpty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE2880
	 * 		Name   -> Function Stalker2.JournalPage.ClickButtonQuest
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ButtonId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJournalPage::ClickButtonQuest(const class FName& ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.JournalPage.ClickButtonQuest");
		
		UJournalPage_ClickButtonQuest_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJournalPage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJournalPage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.JournalPage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULadderAscendIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULadderAscendIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LadderAscendIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULadderDescendIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULadderDescendIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LadderDescendIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULadderFastDescendIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULadderFastDescendIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LadderFastDescendIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULadderJumpIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULadderJumpIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LadderJumpIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULadderSprintIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULadderSprintIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LadderSprintIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.LavaLampAnomaly.OnLavaStaticObjectCollision
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALavaLampAnomaly::OnLavaStaticObjectCollision(const struct FVector& Location, const struct FVector& NormalDirection, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LavaLampAnomaly.OnLavaStaticObjectCollision");
		
		ALavaLampAnomaly_OnLavaStaticObjectCollision_Params params {};
		params.Location = Location;
		params.NormalDirection = NormalDirection;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7F80
	 * 		Name   -> Function Stalker2.LavaLampAnomaly.OnLavaCollision
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBasicParticleData                          BasicParticleData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ALavaLampAnomaly::OnLavaCollision(const struct FBasicParticleData& BasicParticleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LavaLampAnomaly.OnLavaCollision");
		
		ALavaLampAnomaly_OnLavaCollision_Params params {};
		params.BasicParticleData = BasicParticleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.LavaLampAnomaly.OnFollowPositionChanged
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FollowPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALavaLampAnomaly::OnFollowPositionChanged(const struct FVector& FollowPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LavaLampAnomaly.OnFollowPositionChanged");
		
		ALavaLampAnomaly_OnFollowPositionChanged_Params params {};
		params.FollowPosition = FollowPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALavaLampAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALavaLampAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LavaLampAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALazyNavRebuildVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALazyNavRebuildVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LazyNavRebuildVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7E00
	 * 		Name   -> Function Stalker2.Lever.ChangeLeverPosition
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULever::ChangeLeverPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Lever.ChangeLeverPosition");
		
		ULever_ChangeLeverPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULever.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULever::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Lever");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE80C0
	 * 		Name   -> Function Stalker2.LightBulbComponent.SetFlicker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInFlicker                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBulbComponent::SetFlicker(bool bInFlicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LightBulbComponent.SetFlicker");
		
		ULightBulbComponent_SetFlicker_Params params {};
		params.bInFlicker = bInFlicker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE8030
	 * 		Name   -> Function Stalker2.LightBulbComponent.SetAutoLightOnNight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInAutoLightOnNight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBulbComponent::SetAutoLightOnNight(bool bInAutoLightOnNight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LightBulbComponent.SetAutoLightOnNight");
		
		ULightBulbComponent_SetAutoLightOnNight_Params params {};
		params.bInAutoLightOnNight = bInAutoLightOnNight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7EF0
	 * 		Name   -> Function Stalker2.LightBulbComponent.IsFlicker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULightBulbComponent::IsFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LightBulbComponent.IsFlicker");
		
		ULightBulbComponent_IsFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7EC0
	 * 		Name   -> Function Stalker2.LightBulbComponent.IsAutoLightOnNight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULightBulbComponent::IsAutoLightOnNight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LightBulbComponent.IsAutoLightOnNight");
		
		ULightBulbComponent_IsAutoLightOnNight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightBulbComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBulbComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LightBulbComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALightningBallAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightningBallAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LightningBallAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalizationDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalizationDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LocalizationDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalizationWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalizationWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LocalizationWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocomotionTestAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionTestAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LocomotionTestAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE8150
	 * 		Name   -> Function Stalker2.LocomotionTestComponent.SetTarget
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InTargetVelocity                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       InTargetOrientation                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULocomotionTestComponent::SetTarget(const struct FVector& InTargetVelocity, const struct FQuat& InTargetOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LocomotionTestComponent.SetTarget");
		
		ULocomotionTestComponent_SetTarget_Params params {};
		params.InTargetVelocity = InTargetVelocity;
		params.InTargetOrientation = InTargetOrientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7E20
	 * 		Name   -> Function Stalker2.LocomotionTestComponent.GetTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTrajectorySampleRange ULocomotionTestComponent::GetTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.LocomotionTestComponent.GetTrajectory");
		
		ULocomotionTestComponent_GetTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocomotionTestComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionTestComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LocomotionTestComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LookAtSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtTargetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtTargetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LookAtTargetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookUpIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookUpIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.LookUpIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipBoltIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipBoltIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipBoltIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipDetectorIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipDetectorIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipDetectorIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipGrenadeIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipGrenadeIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipGrenadeIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipKnifeIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipKnifeIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipKnifeIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipPistolIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipPistolIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipPistolIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipPrimaryWeaponIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipPrimaryWeaponIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipPrimaryWeaponIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainHandEquipSecondaryWeaponIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainHandEquipSecondaryWeaponIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainHandEquipSecondaryWeaponIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MainMenuGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapBorderIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapBorderIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MapBorderIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapMouseIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapMouseIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MapMouseIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapSettingsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapSettingsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MapSettingsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapSetupParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapSetupParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MapSetupParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7F50
	 * 		Name   -> Function Stalker2.MarkerCompassWidget.IsShowDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UMarkerCompassWidget::IsShowDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.MarkerCompassWidget.IsShowDistance");
		
		UMarkerCompassWidget_IsShowDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FE7F20
	 * 		Name   -> Function Stalker2.MarkerCompassWidget.IsQuestMarker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UMarkerCompassWidget::IsQuestMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.MarkerCompassWidget.IsQuestMarker");
		
		UMarkerCompassWidget_IsQuestMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMarkerCompassWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMarkerCompassWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MarkerCompassWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GroomEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCategoryEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCategoryEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.GroomCategoryEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialGroupEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialGroupEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MaterialGroupEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomDataEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDataEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomDataEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomDataVariationsEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDataVariationsEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.CustomDataVariationsEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGeneratorBodyMeshEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGeneratorBodyMeshEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MeshGeneratorBodyMeshEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGeneratorBodySlotEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGeneratorBodySlotEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MeshGeneratorBodySlotEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGeneratorMaterialSlotEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGeneratorMaterialSlotEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MeshGeneratorMaterialSlotEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGeneratorEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGeneratorEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MeshGeneratorEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjPrototypeEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjPrototypeEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ObjPrototypeEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileObjPrototypesEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileObjPrototypesEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FileObjPrototypesEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSoundPlacerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSoundPlacerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MeshSoundPlacerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ModelCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.ModifiableRichText.GetNextLine
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class FText UModifiableRichText::GetNextLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ModifiableRichText.GetNextLine");
		
		UModifiableRichText_GetNextLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifiableRichText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifiableRichText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ModifiableRichText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC430
	 * 		Name   -> Function Stalker2.MouthComponent.OnBreathFinished
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMouthComponent::OnBreathFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.MouthComponent.OnBreathFinished");
		
		UMouthComponent_OnBreathFinished_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMouthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MouthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveForwardIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveForwardIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MoveForwardIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovementComponentExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovementComponentExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MovementComponentExt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMovementPathBuilderTestingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMovementPathBuilderTestingActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MovementPathBuilderTestingActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveRightIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveRightIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MoveRightIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiClickComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiClickComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MultiClickComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiClickIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiClickIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MultiClickIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MusicManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMusicVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMusicVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MusicVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMutantAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMutantAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.MutantAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC410
	 * 		Name   -> Function Stalker2.NavigationPanel.MoveSelectSlotToPreviousSlot
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNavigationPanel::MoveSelectSlotToPreviousSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NavigationPanel.MoveSelectSlotToPreviousSlot");
		
		UNavigationPanel_MoveSelectSlotToPreviousSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC3F0
	 * 		Name   -> Function Stalker2.NavigationPanel.MoveSelectSlotToNextSlot
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNavigationPanel::MoveSelectSlotToNextSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NavigationPanel.MoveSelectSlotToNextSlot");
		
		UNavigationPanel_MoveSelectSlotToNextSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC360
	 * 		Name   -> Function Stalker2.NavigationPanel.ClickMenuButton
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FName                                        InButtonId                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavigationPanel::ClickMenuButton(const class FName& InButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NavigationPanel.ClickMenuButton");
		
		UNavigationPanel_ClickMenuButton_Params params {};
		params.InButtonId = InButtonId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NavigationPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationSlotInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationSlotInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NavigationSlotInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraBridgeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraBridgeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NiagaraBridgeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraParameterProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraParameterProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NiagaraParameterProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraTimeOfDayNormalizedProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraTimeOfDayNormalizedProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NiagaraTimeOfDayNormalizedProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoteMouseIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoteMouseIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NoteMouseIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotesIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotesIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NotesIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC720
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationUp");
		
		UNotesPage_UIPDANavigationUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC700
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationRight");
		
		UNotesPage_UIPDANavigationRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC6E0
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationPlayAudio
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationPlayAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationPlayAudio");
		
		UNotesPage_UIPDANavigationPlayAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC640
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigatioNoteUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigatioNoteUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigatioNoteUp");
		
		UNotesPage_UIPDANavigatioNoteUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC620
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigatioNoteDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigatioNoteDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigatioNoteDown");
		
		UNotesPage_UIPDANavigatioNoteDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC6C0
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationMouseUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationMouseUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationMouseUp");
		
		UNotesPage_UIPDANavigationMouseUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC6A0
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationMouseDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationMouseDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationMouseDown");
		
		UNotesPage_UIPDANavigationMouseDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC680
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationLeft");
		
		UNotesPage_UIPDANavigationLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC660
	 * 		Name   -> Function Stalker2.NotesPage.UIPDANavigationDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNotesPage::UIPDANavigationDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.UIPDANavigationDown");
		
		UNotesPage_UIPDANavigationDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC590
	 * 		Name   -> Function Stalker2.NotesPage.ShowDetails
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bEmpty                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNotesPage::ShowDetails(bool bEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.ShowDetails");
		
		UNotesPage_ShowDetails_Params params {};
		params.bEmpty = bEmpty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC500
	 * 		Name   -> Function Stalker2.NotesPage.ShowBlockListNavigstion
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bBlock                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNotesPage::ShowBlockListNavigstion(bool bBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.ShowBlockListNavigstion");
		
		UNotesPage_ShowBlockListNavigstion_Params params {};
		params.bBlock = bBlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FEC2D0
	 * 		Name   -> Function Stalker2.NotesPage.ClickButtonMenu
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ButtonId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNotesPage::ClickButtonMenu(const class FName& ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotesPage.ClickButtonMenu");
		
		UNotesPage_ClickButtonMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotesPage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotesPage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NotesPage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1600
	 * 		Name   -> Function Stalker2.NotificationWidget.TryShowNextNotify
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNotificationWidget::TryShowNextNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotificationWidget.TryShowNextNotify");
		
		UNotificationWidget_TryShowNextNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0F50
	 * 		Name   -> Function Stalker2.NotificationWidget.OnQuestStatusAnimFinished
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNotificationWidget::OnQuestStatusAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.NotificationWidget.OnQuestStatusAnimFinished");
		
		UNotificationWidget_OnQuestStatusAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificationWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NotificationWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NPCComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCScheduleManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCScheduleManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.NPCScheduleManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ObjBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0F70
	 * 		Name   -> Function Stalker2.OnAKEventFinished_Proxy.OnSoundFinished
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnAKEventFinished_Proxy::OnSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.OnAKEventFinished_Proxy.OnSoundFinished");
		
		UOnAKEventFinished_Proxy_OnSoundFinished_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnAKEventFinished_Proxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnAKEventFinished_Proxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.OnAKEventFinished_Proxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleCallbackHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleCallbackHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ParticleCallbackHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathBuilderDrawComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathBuilderDrawComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PathBuilderDrawComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1750
	 * 		Name   -> Function Stalker2.PauseGameView.UpdateShowDebugMenu
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPauseGameView::UpdateShowDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.UpdateShowDebugMenu");
		
		UPauseGameView_UpdateShowDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF16A0
	 * 		Name   -> Function Stalker2.PauseGameView.UIMenuMoveUp
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPauseGameView::UIMenuMoveUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.UIMenuMoveUp");
		
		UPauseGameView_UIMenuMoveUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1680
	 * 		Name   -> Function Stalker2.PauseGameView.UIMenuMoveToGameMap
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPauseGameView::UIMenuMoveToGameMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.UIMenuMoveToGameMap");
		
		UPauseGameView_UIMenuMoveToGameMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1660
	 * 		Name   -> Function Stalker2.PauseGameView.UIMenuMoveDown
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPauseGameView::UIMenuMoveDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.UIMenuMoveDown");
		
		UPauseGameView_UIMenuMoveDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1640
	 * 		Name   -> Function Stalker2.PauseGameView.UIMenuConfirm
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPauseGameView::UIMenuConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.UIMenuConfirm");
		
		UPauseGameView_UIMenuConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1620
	 * 		Name   -> Function Stalker2.PauseGameView.UIMenuBack
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPauseGameView::UIMenuBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.UIMenuBack");
		
		UPauseGameView_UIMenuBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF14A0
	 * 		Name   -> Function Stalker2.PauseGameView.ShowHoverOnButton
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UGameMenuElement*                            InHoverButton                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPauseGameView::ShowHoverOnButton(class UGameMenuElement* InHoverButton, bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.ShowHoverOnButton");
		
		UPauseGameView_ShowHoverOnButton_Params params {};
		params.InHoverButton = InHoverButton;
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1410
	 * 		Name   -> Function Stalker2.PauseGameView.SetCurrentSelectButtonIndex
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            NewIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPauseGameView::SetCurrentSelectButtonIndex(int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.SetCurrentSelectButtonIndex");
		
		UPauseGameView_SetCurrentSelectButtonIndex_Params params {};
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.PauseGameView.PostUpdateShowDebugMenu
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPauseGameView::PostUpdateShowDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.PostUpdateShowDebugMenu");
		
		UPauseGameView_PostUpdateShowDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.PauseGameView.PostMoveToGameMap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPauseGameView::PostMoveToGameMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.PostMoveToGameMap");
		
		UPauseGameView_PostMoveToGameMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.PauseGameView.PostGamepadButtonClick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InButtonIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPauseGameView::PostGamepadButtonClick(int32_t InButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.PostGamepadButtonClick");
		
		UPauseGameView_PostGamepadButtonClick_Params params {};
		params.InButtonIndex = InButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.PauseGameView.PostButtonClickBack
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPauseGameView::PostButtonClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.PostButtonClickBack");
		
		UPauseGameView_PostButtonClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0F30
	 * 		Name   -> Function Stalker2.PauseGameView.OnItemHovered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnItemHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnItemHovered");
		
		UPauseGameView_OnItemHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0F10
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickSave
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickSave");
		
		UPauseGameView_OnClickSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0EF0
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickPlay");
		
		UPauseGameView_OnClickPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0ED0
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickOptions
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickOptions");
		
		UPauseGameView_OnClickOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickOnline
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickOnline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickOnline");
		
		UPauseGameView_OnClickOnline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0EB0
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickLoad
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickLoad");
		
		UPauseGameView_OnClickLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0E90
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickExit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickExit");
		
		UPauseGameView_OnClickExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0E70
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickDebugMaps
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickDebugMaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickDebugMaps");
		
		UPauseGameView_OnClickDebugMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0E50
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickContinue
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickContinue");
		
		UPauseGameView_OnClickContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0E30
	 * 		Name   -> Function Stalker2.PauseGameView.OnClickBack
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPauseGameView::OnClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.OnClickBack");
		
		UPauseGameView_OnClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0D90
	 * 		Name   -> Function Stalker2.PauseGameView.MoveInButtonContainer
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            AxisMove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPauseGameView::MoveInButtonContainer(int32_t AxisMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PauseGameView.MoveInButtonContainer");
		
		UPauseGameView_MoveInButtonContainer_Params params {};
		params.AxisMove = AxisMove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPauseGameView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPauseGameView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PauseGameView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPauseMenuIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPauseMenuIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PauseMenuIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF12B0
	 * 		Name   -> Function Stalker2.PC.PlayerEndHandleInteractiveOverlaps
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APC::PlayerEndHandleInteractiveOverlaps(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PC.PlayerEndHandleInteractiveOverlaps");
		
		APC_PlayerEndHandleInteractiveOverlaps_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1040
	 * 		Name   -> Function Stalker2.PC.PlayerBeginHandleInteractiveOverlaps
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void APC::PlayerBeginHandleInteractiveOverlaps(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PC.PlayerBeginHandleInteractiveOverlaps");
		
		APC_PlayerBeginHandleInteractiveOverlaps_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF0D10
	 * 		Name   -> Function Stalker2.PC.AimTimelineTick
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APC::AimTimelineTick(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PC.AimTimelineTick");
		
		APC_AimTimelineTick_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCSaveLoadManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCSaveLoadManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PCSaveLoadManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAArrowButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAArrowButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAArrowButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAButtonBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAButtonBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAButtonBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAMenuButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAMenuButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAMenuButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF6620
	 * 		Name   -> Function Stalker2.PDASlotPanelBase.ClickSlot
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		int32_t                                            QuestSlotIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDASlotPanelBase::ClickSlot(int32_t QuestSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDASlotPanelBase.ClickSlot");
		
		UPDASlotPanelBase_ClickSlot_Params params {};
		params.QuestSlotIndex = QuestSlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF6590
	 * 		Name   -> Function Stalker2.PDASlotPanelBase.ClickArrowButton
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ButtonId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDASlotPanelBase::ClickArrowButton(const class FName& ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDASlotPanelBase.ClickArrowButton");
		
		UPDASlotPanelBase_ClickArrowButton_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF6360
	 * 		Name   -> Function Stalker2.PDASlotPanelBase.ChangeActiveQuestSlot
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               bActiveted                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InJournalQuestID                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSlotIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDASlotPanelBase::ChangeActiveQuestSlot(bool bActiveted, int32_t InJournalQuestID, int32_t InSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDASlotPanelBase.ChangeActiveQuestSlot");
		
		UPDASlotPanelBase_ChangeActiveQuestSlot_Params params {};
		params.bActiveted = bActiveted;
		params.InJournalQuestID = InJournalQuestID;
		params.InSlotIndex = InSlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDASlotPanelBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDASlotPanelBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDASlotPanelBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDANotePanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDANotePanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDANotePanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDANotesButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDANotesButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDANotesButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDANotesDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDANotesDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDANotesDetails");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF67C0
	 * 		Name   -> Function Stalker2.PDASlotBase.SetSelectPointTint
	 * 		Flags  -> (Native, Public, HasDefaults)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDASlotBase::SetSelectPointTint(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDASlotBase.SetSelectPointTint");
		
		UPDASlotBase_SetSelectPointTint_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF62D0
	 * 		Name   -> Function Stalker2.PDASlotBase.ChangeActive
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bActivate                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDASlotBase::ChangeActive(bool bActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDASlotBase.ChangeActive");
		
		UPDASlotBase_ChangeActive_Params params {};
		params.bActivate = bActivate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDASlotBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDASlotBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDASlotBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDANotesSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDANotesSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDANotesSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAPageIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAPageIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAPageIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestDescription::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestDescription");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1800
	 * 		Name   -> Function Stalker2.PDAQuestDetails.UpdateStageSlotHover
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPDAQuestDetails::UpdateStageSlotHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestDetails.UpdateStageSlotHover");
		
		UPDAQuestDetails_UpdateStageSlotHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1770
	 * 		Name   -> Function Stalker2.PDAQuestDetails.UpdateStageHover
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bIsStageHovered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDAQuestDetails::UpdateStageHover(bool bIsStageHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestDetails.UpdateStageHover");
		
		UPDAQuestDetails_UpdateStageHover_Params params {};
		params.bIsStageHovered = bIsStageHovered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF16C0
	 * 		Name   -> Function Stalker2.PDAQuestDetails.UpdateDescriptionHover
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bIsHovered                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDAQuestDetails::UpdateDescriptionHover(bool bIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestDetails.UpdateDescriptionHover");
		
		UPDAQuestDetails_UpdateDescriptionHover_Params params {};
		params.bIsHovered = bIsHovered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF1570
	 * 		Name   -> Function Stalker2.PDAQuestDetails.StageClick
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPDAQuestTaskSlot*                           InSlot                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDAQuestDetails::StageClick(class UPDAQuestTaskSlot* InSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestDetails.StageClick");
		
		UPDAQuestDetails_StageClick_Params params {};
		params.InSlot = InSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestDetails");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF6480
	 * 		Name   -> Function Stalker2.PDAQuestPanel.ChangeSelectedQuestSlot
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InJournalQuestID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSlotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDAQuestPanel::ChangeSelectedQuestSlot(bool bIsSelected, int32_t InJournalQuestID, int32_t InSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestPanel.ChangeSelectedQuestSlot");
		
		UPDAQuestPanel_ChangeSelectedQuestSlot_Params params {};
		params.bIsSelected = bIsSelected;
		params.InJournalQuestID = InJournalQuestID;
		params.InSlotIndex = InSlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestRewardSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestRewardSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestRewardSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF6850
	 * 		Name   -> Function Stalker2.PDAQuestTaskContainer.StageClick
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPDAQuestTaskSlot*                           InSlot                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDAQuestTaskContainer::StageClick(class UPDAQuestTaskSlot* InSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestTaskContainer.StageClick");
		
		UPDAQuestTaskContainer_StageClick_Params params {};
		params.InSlot = InSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF66F0
	 * 		Name   -> Function Stalker2.PDAQuestTaskContainer.MouseHoverStage
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bHovered                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOnParent                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPDAQuestTaskContainer::MouseHoverStage(bool bHovered, int32_t IndexOnParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAQuestTaskContainer.MouseHoverStage");
		
		UPDAQuestTaskContainer_MouseHoverStage_Params params {};
		params.bHovered = bHovered;
		params.IndexOnParent = IndexOnParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestTaskContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestTaskContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestTaskContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAQuestTaskSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAQuestTaskSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAQuestTaskSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDARadiationLine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDARadiationLine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDARadiationLine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDARegionPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDARegionPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDARegionPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDATextBorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDATextBorder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDATextBorder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDATimePanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDATimePanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDATimePanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAUpgradePanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAUpgradePanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAUpgradePanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAUpgradesButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAUpgradesButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAUpgradesButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAUpgradesSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAUpgradesSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAUpgradesSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.PDAView.UpdateQuestList
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPDAView::UpdateQuestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAView.UpdateQuestList");
		
		UPDAView_UpdateQuestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF66B0
	 * 		Name   -> Function Stalker2.PDAView.CloseUpdateView
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UPDAView::CloseUpdateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PDAView.CloseUpdateView");
		
		UPDAView_CloseUpdateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDAView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDAView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PDAView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PhysicsInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsSoundsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsSoundsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PhysicsSoundsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APillowAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APillowAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PillowAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaceToSit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaceToSit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlaceToSit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF68E0
	 * 		Name   -> Function Stalker2.PlatformManager.UpdateInputManager
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               IsGamepadInput                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlatformManager::UpdateInputManager(bool IsGamepadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PlatformManager.UpdateInputManager");
		
		UPlatformManager_UpdateInputManager_Params params {};
		params.IsGamepadInput = IsGamepadInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlatformManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF6970
	 * 		Name   -> Function Stalker2.PlatformSwitcher.UpdateWidget
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UPlatformSwitcher::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PlatformSwitcher.UpdateWidget");
		
		UPlatformSwitcher_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FF66D0
	 * 		Name   -> Function Stalker2.PlatformSwitcher.InitWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlatformSwitcher::InitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PlatformSwitcher.InitWidget");
		
		UPlatformSwitcher_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlatformSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerDefaultAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerDefaultAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerDefaultAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerDetectorAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerDetectorAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerDetectorAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerEnhancedInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerEnhancedInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerEnhancedInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerGameHUDView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerGameHUDView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerGameHUDView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerModeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerModeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerModeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerFirearmAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerFirearmAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerFirearmAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerThrowableItemAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerThrowableItemAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerThrowableItemAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerKnifeAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerKnifeAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerKnifeAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerPDAAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerPDAAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayerPDAAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ItemAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAttachAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAttachAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WeaponAttachAnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFBC70
	 * 		Name   -> Function Stalker2.PlaySoundQuestNodeListener.OnSoundFinished
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaySoundQuestNodeListener::OnSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PlaySoundQuestNodeListener.OnSoundFinished");
		
		UPlaySoundQuestNodeListener_OnSoundFinished_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaySoundQuestNodeListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaySoundQuestNodeListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlaySoundQuestNodeListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.PlayVideoWidget.PlayVideo
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UMediaSource*                                VideoToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayVideoWidget::PlayVideo(class UMediaSource* VideoToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PlayVideoWidget.PlayVideo");
		
		UPlayVideoWidget_PlayVideo_Params params {};
		params.VideoToPlay = VideoToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFABE0
	 * 		Name   -> Function Stalker2.PlayVideoWidget.EndVideo
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayVideoWidget::EndVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PlayVideoWidget.EndVideo");
		
		UPlayVideoWidget_EndVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayVideoWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayVideoWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PlayVideoWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoppyField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoppyField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PoppyField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlowerParticleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlowerParticleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.FlowerParticleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFB910
	 * 		Name   -> Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnEndOverlapFlowers
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPoppyFieldAnomalyBehaviorComponent::OnEndOverlapFlowers(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnEndOverlapFlowers");
		
		UPoppyFieldAnomalyBehaviorComponent_OnEndOverlapFlowers_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFB650
	 * 		Name   -> Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnEndOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPoppyFieldAnomalyBehaviorComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnEndOverlap");
		
		UPoppyFieldAnomalyBehaviorComponent_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFB3E0
	 * 		Name   -> Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnBeginOverlapFlowers
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UPoppyFieldAnomalyBehaviorComponent::OnBeginOverlapFlowers(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnBeginOverlapFlowers");
		
		UPoppyFieldAnomalyBehaviorComponent_OnBeginOverlapFlowers_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFAF00
	 * 		Name   -> Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UPoppyFieldAnomalyBehaviorComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PoppyFieldAnomalyBehaviorComponent.OnBeginOverlap");
		
		UPoppyFieldAnomalyBehaviorComponent_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoppyFieldAnomalyBehaviorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoppyFieldAnomalyBehaviorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PoppyFieldAnomalyBehaviorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFBD40
	 * 		Name   -> Function Stalker2.ProgressBarWidget.SetProgresValue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InProgress                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBarWidget::SetProgresValue(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ProgressBarWidget.SetProgresValue");
		
		UProgressBarWidget_SetProgresValue_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgressBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ProgressBarWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFBB70
	 * 		Name   -> Function Stalker2.Projectile.OnOverlap
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnOverlap(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Projectile.OnOverlap");
		
		AProjectile_OnOverlap_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFBA70
	 * 		Name   -> Function Stalker2.Projectile.OnHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.Projectile.OnHit");
		
		AProjectile_OnHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Projectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APSYAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APSYAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PSYAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APSYControllerAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APSYControllerAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PSYControllerAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APSYEmitterAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APSYEmitterAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PSYEmitterAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPSYEmitterDamagableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPSYEmitterDamagableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PSYEmitterDamagableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPsyNoiseSFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPsyNoiseSFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PsyNoiseSFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFAC90
	 * 		Name   -> Function Stalker2.PsyPhantom.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void APsyPhantom::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PsyPhantom.OnBeginOverlap");
		
		APsyPhantom_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APsyPhantom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APsyPhantom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PsyPhantom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPsyPhantomManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPsyPhantomManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PsyPhantomManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFB7B0
	 * 		Name   -> Function Stalker2.PsyVolumeComponent.OnEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPsyVolumeComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PsyVolumeComponent.OnEndOverlap");
		
		UPsyVolumeComponent_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFB170
	 * 		Name   -> Function Stalker2.PsyVolumeComponent.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UPsyVolumeComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.PsyVolumeComponent.OnBeginOverlap");
		
		UPsyVolumeComponent_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPsyVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPsyVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PsyVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFAC00
	 * 		Name   -> Function Stalker2.QuestNotification.FinishAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bHide                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestNotification::FinishAnimation(bool bHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuestNotification.FinishAnimation");
		
		UQuestNotification_FinishAnimation_Params params {};
		params.bHide = bHide;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFABC0
	 * 		Name   -> Function Stalker2.QuestNotification.CheckTasksAnimFinishedAndHide
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UQuestNotification::CheckTasksAnimFinishedAndHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuestNotification.CheckTasksAnimFinishedAndHide");
		
		UQuestNotification_CheckTasksAnimFinishedAndHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFABA0
	 * 		Name   -> Function Stalker2.QuestNotification.CancelHideAnim
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UQuestNotification::CancelHideAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuestNotification.CancelHideAnim");
		
		UQuestNotification_CancelHideAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestNotification.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestNotification::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuestNotification");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestStatusNotification.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestStatusNotification::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuestStatusNotification");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.QuestTaskNotification.PostPlayTaskAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EQuestTaskAnimationType                            AnimationType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestTaskNotification::PostPlayTaskAnimation(EQuestTaskAnimationType AnimationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuestTaskNotification.PostPlayTaskAnimation");
		
		UQuestTaskNotification_PostPlayTaskAnimation_Params params {};
		params.AnimationType = AnimationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> DelegateFunction Stalker2.QuestTaskNotification.OnAnimStarted__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UQuestTaskNotification::OnAnimStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Stalker2.QuestTaskNotification.OnAnimStarted__DelegateSignature");
		
		UQuestTaskNotification_OnAnimStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> DelegateFunction Stalker2.QuestTaskNotification.OnAnimFinished__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UQuestTaskNotification::OnAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Stalker2.QuestTaskNotification.OnAnimFinished__DelegateSignature");
		
		UQuestTaskNotification_OnAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01FFAC00
	 * 		Name   -> Function Stalker2.QuestTaskNotification.FinishAnimmation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bHide                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestTaskNotification::FinishAnimmation(bool bHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuestTaskNotification.FinishAnimmation");
		
		UQuestTaskNotification_FinishAnimmation_Params params {};
		params.bHide = bHide;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestTaskNotification.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestTaskNotification::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuestTaskNotification");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickLoadIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickLoadIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickLoadIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D37B0
	 * 		Name   -> Function Stalker2.QuickPanel.OnQuickSlotMouseLeave
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UQuickSlot*                                  HoveredWidget                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuickPanel::OnQuickSlotMouseLeave(class UQuickSlot* HoveredWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuickPanel.OnQuickSlotMouseLeave");
		
		UQuickPanel_OnQuickSlotMouseLeave_Params params {};
		params.HoveredWidget = HoveredWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D37B0
	 * 		Name   -> Function Stalker2.QuickPanel.OnQuickSlotMouseEnter
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UQuickSlot*                                  ItemWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuickPanel::OnQuickSlotMouseEnter(class UQuickSlot* ItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.QuickPanel.OnQuickSlotMouseEnter");
		
		UQuickPanel_OnQuickSlotMouseEnter_Params params {};
		params.ItemWidget = ItemWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSaveIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSaveIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSaveIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSaveManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSaveManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSaveManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlotBaseIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlotBaseIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSlotBaseIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlot1IPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlot1IPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSlot1IPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlot2IPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlot2IPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSlot2IPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlot3IPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlot3IPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSlot3IPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlot4IPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlot4IPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.QuickSlot4IPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARadiationField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARadiationField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RadiationField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000420
	 * 		Name   -> Function Stalker2.RadiationFieldComponent.OnEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadiationFieldComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RadiationFieldComponent.OnEndOverlap");
		
		URadiationFieldComponent_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000150
	 * 		Name   -> Function Stalker2.RadiationFieldComponent.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void URadiationFieldComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RadiationFieldComponent.OnBeginOverlap");
		
		URadiationFieldComponent_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadiationFieldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadiationFieldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RadiationFieldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARazorAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARazorAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RazorAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000890
	 * 		Name   -> Function Stalker2.ReferenceHolderBase.UpdateObjectReferences
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AReferenceHolderBase::UpdateObjectReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ReferenceHolderBase.UpdateObjectReferences");
		
		AReferenceHolderBase_UpdateObjectReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000130
	 * 		Name   -> Function Stalker2.ReferenceHolderBase.CheckAssetReferences
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AReferenceHolderBase::CheckAssetReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ReferenceHolderBase.CheckAssetReferences");
		
		AReferenceHolderBase_CheckAssetReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReferenceHolderBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReferenceHolderBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ReferenceHolderBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000400
	 * 		Name   -> Function Stalker2.RightClickMenuItemWidget.OnButtonUnHovered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URightClickMenuItemWidget::OnButtonUnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RightClickMenuItemWidget.OnButtonUnHovered");
		
		URightClickMenuItemWidget_OnButtonUnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020003E0
	 * 		Name   -> Function Stalker2.RightClickMenuItemWidget.OnButtonHovered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URightClickMenuItemWidget::OnButtonHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RightClickMenuItemWidget.OnButtonHovered");
		
		URightClickMenuItemWidget_OnButtonHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020003C0
	 * 		Name   -> Function Stalker2.RightClickMenuItemWidget.OnButtonClick
	 * 		Flags  -> (Final, Native, Public)
	 */
	void URightClickMenuItemWidget::OnButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RightClickMenuItemWidget.OnButtonClick");
		
		URightClickMenuItemWidget_OnButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URightClickMenuItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URightClickMenuItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RightClickMenuItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000830
	 * 		Name   -> Function Stalker2.RightClickMenuWidget.OnNoItemClick
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URightClickMenuWidget::OnNoItemClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RightClickMenuWidget.OnNoItemClick");
		
		URightClickMenuWidget_OnNoItemClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020006C0
	 * 		Name   -> Function Stalker2.RightClickMenuWidget.OnItemHover
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FRightClickMenuItemData                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInHover                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URightClickMenuWidget::OnItemHover(const struct FRightClickMenuItemData& Data, bool bInHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RightClickMenuWidget.OnItemHover");
		
		URightClickMenuWidget_OnItemHover_Params params {};
		params.Data = Data;
		params.bInHover = bInHover;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020005A0
	 * 		Name   -> Function Stalker2.RightClickMenuWidget.OnItemClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FRightClickMenuItemData                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URightClickMenuWidget::OnItemClicked(const struct FRightClickMenuItemData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.RightClickMenuWidget.OnItemClicked");
		
		URightClickMenuWidget_OnItemClicked_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URightClickMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URightClickMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.RightClickMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USaveableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaveableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SaveableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScenarioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScenarioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ScenarioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectedAnswerMark.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectedAnswerMark::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SelectedAnswerMark");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASelectionVolumeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASelectionVolumeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SelectionVolumeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASelectionVolumeBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASelectionVolumeBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SelectionVolumeBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASelectionVolumeSphere.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASelectionVolumeSphere::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SelectionVolumeSphere");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpeechComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpeechComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SpeechComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000870
	 * 		Name   -> Function Stalker2.SequenceSpeechComponent.OnSequenceStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USequenceSpeechComponent::OnSequenceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SequenceSpeechComponent.OnSequenceStarted");
		
		USequenceSpeechComponent_OnSequenceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000850
	 * 		Name   -> Function Stalker2.SequenceSpeechComponent.OnSequenceFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USequenceSpeechComponent::OnSequenceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SequenceSpeechComponent.OnSequenceFinished");
		
		USequenceSpeechComponent_OnSequenceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceSpeechComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceSpeechComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SequenceSpeechComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02000580
	 * 		Name   -> Function Stalker2.SequenceStartQuestNodeListener.OnEvent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USequenceStartQuestNodeListener::OnEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SequenceStartQuestNodeListener.OnEvent");
		
		USequenceStartQuestNodeListener_OnEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceStartQuestNodeListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceStartQuestNodeListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SequenceStartQuestNodeListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USettingsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SettingsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02004800
	 * 		Name   -> Function Stalker2.ShootingWeaponComponent.Shoot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UShootingWeaponComponent::Shoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ShootingWeaponComponent.Shoot");
		
		UShootingWeaponComponent_Shoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShootingWeaponComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShootingWeaponComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ShootingWeaponComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShotgunRecoilTextureDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShotgunRecoilTextureDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ShotgunRecoilTextureDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USignalProcessingSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignalProcessingSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SignalProcessingSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USignalReceiverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignalReceiverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SignalReceiverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02004770
	 * 		Name   -> Function Stalker2.SignalSenderComponent.Send
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     DataObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USignalSenderComponent::Send(class UObject* DataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SignalSenderComponent.Send");
		
		USignalSenderComponent_Send_Params params {};
		params.DataObject = DataObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USignalSenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignalSenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SignalSenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SingleClickIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkipCutsceneIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkipCutsceneIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SkipCutsceneIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkipDialogIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkipDialogIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SkipDialogIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USleepView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USleepView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SleepView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SmoothPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02004500
	 * 		Name   -> Function Stalker2.SoapBubbleAnomaly.OnActorCollided
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ASoapBubbleAnomaly::OnActorCollided(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SoapBubbleAnomaly.OnActorCollided");
		
		ASoapBubbleAnomaly_OnActorCollided_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoapBubbleAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoapBubbleAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SoapBubbleAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SoundConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APooledActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APooledActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.PooledActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ActorPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008640
	 * 		Name   -> Function Stalker2.SoundManager.MusicStopVolumeChange
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USoundManager::MusicStopVolumeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SoundManager.MusicStopVolumeChange");
		
		USoundManager_MusicStopVolumeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020082F0
	 * 		Name   -> Function Stalker2.SoundManager.AmbientStopVolumeChange
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USoundManager::AmbientStopVolumeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SoundManager.AmbientStopVolumeChange");
		
		USoundManager_AmbientStopVolumeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SoundManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundNodeCuePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundNodeCuePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SoundNodeCuePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020086C0
	 * 		Name   -> Function Stalker2.SoundTriggerVolume.OnEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASoundTriggerVolume::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SoundTriggerVolume.OnEndOverlap");
		
		ASoundTriggerVolume_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008310
	 * 		Name   -> Function Stalker2.SoundTriggerVolume.BeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ASoundTriggerVolume::BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SoundTriggerVolume.BeginOverlap");
		
		ASoundTriggerVolume_BeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoundTriggerVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundTriggerVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SoundTriggerVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USprintIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USprintIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SprintIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020089E0
	 * 		Name   -> Function Stalker2.StackSplitContextual.PressChangeAmmount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplitContextual::PressChangeAmmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.PressChangeAmmount");
		
		UStackSplitContextual_PressChangeAmmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020088E0
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnSplitValueChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStackSplitContextual::OnSplitValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnSplitValueChanged");
		
		UStackSplitContextual_OnSplitValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> DelegateFunction Stalker2.StackSplitContextual.OnSplitConfirmed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStackSplitContextual::OnSplitConfirmed__DelegateSignature(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Stalker2.StackSplitContextual.OnSplitConfirmed__DelegateSignature");
		
		UStackSplitContextual_OnSplitConfirmed__DelegateSignature_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> DelegateFunction Stalker2.StackSplitContextual.OnSplitCanceled__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UStackSplitContextual::OnSplitCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Stalker2.StackSplitContextual.OnSplitCanceled__DelegateSignature");
		
		UStackSplitContextual_OnSplitCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020088A0
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnSplitButtonClicked
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UStackSplitContextual::OnSplitButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnSplitButtonClicked");
		
		UStackSplitContextual_OnSplitButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008880
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnPlusButtonReleased
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplitContextual::OnPlusButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnPlusButtonReleased");
		
		UStackSplitContextual_OnPlusButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008880
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnPlusButtonPressed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplitContextual::OnPlusButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnPlusButtonPressed");
		
		UStackSplitContextual_OnPlusButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008860
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnPlusButtonClicked
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UStackSplitContextual::OnPlusButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnPlusButtonClicked");
		
		UStackSplitContextual_OnPlusButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008840
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnMinusButtonReleased
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplitContextual::OnMinusButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnMinusButtonReleased");
		
		UStackSplitContextual_OnMinusButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008840
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnMinusButtonPressed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplitContextual::OnMinusButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnMinusButtonPressed");
		
		UStackSplitContextual_OnMinusButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008820
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnMinusButtonClicked
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UStackSplitContextual::OnMinusButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnMinusButtonClicked");
		
		UStackSplitContextual_OnMinusButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020086A0
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnDropAllButtonClicked
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UStackSplitContextual::OnDropAllButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnDropAllButtonClicked");
		
		UStackSplitContextual_OnDropAllButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008660
	 * 		Name   -> Function Stalker2.StackSplitContextual.OnCancelButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplitContextual::OnCancelButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplitContextual.OnCancelButtonClicked");
		
		UStackSplitContextual_OnCancelButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackSplitContextual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackSplitContextual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StackSplitContextual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008960
	 * 		Name   -> Function Stalker2.StackSplittingWidget.OnSplitValueChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStackSplittingWidget::OnSplitValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplittingWidget.OnSplitValueChanged");
		
		UStackSplittingWidget_OnSplitValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020088C0
	 * 		Name   -> Function Stalker2.StackSplittingWidget.OnSplitButtonClicked
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UStackSplittingWidget::OnSplitButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplittingWidget.OnSplitButtonClicked");
		
		UStackSplittingWidget_OnSplitButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008680
	 * 		Name   -> Function Stalker2.StackSplittingWidget.OnCancelButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStackSplittingWidget::OnCancelButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StackSplittingWidget.OnCancelButtonClicked");
		
		UStackSplittingWidget_OnCancelButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackSplittingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackSplittingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StackSplittingWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStalker2GameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStalker2GameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Stalker2GameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStalker2HUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStalker2HUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Stalker2HUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStalker2MoviePipelineGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStalker2MoviePipelineGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Stalker2MoviePipelineGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStalker2PlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStalker2PlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Stalker2PlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStalker2Spectator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStalker2Spectator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.Stalker2Spectator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatisticIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatisticIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StatisticIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008A00
	 * 		Name   -> Function Stalker2.StatPanel.UpdateAllStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStatPanel::UpdateAllStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StatPanel.UpdateAllStats");
		
		UStatPanel_UpdateAllStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StatPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008A20
	 * 		Name   -> Function Stalker2.StatPanelDebug.UpdateAllStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStatPanelDebug::UpdateAllStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StatPanelDebug.UpdateAllStats");
		
		UStatPanelDebug_UpdateAllStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatPanelDebug.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatPanelDebug::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StatPanelDebug");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StatSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStealthKillComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStealthKillComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StealthKillComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02008580
	 * 		Name   -> Function Stalker2.StrandGenerator.GetFinalStrandData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FStrandFinalData AStrandGenerator::GetFinalStrandData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.StrandGenerator.GetFinalStrandData");
		
		AStrandGenerator_GetFinalStrandData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStrandGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStrandGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.StrandGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitleView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitleView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SubtitleView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwitchGrenadeIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchGrenadeIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SwitchGrenadeIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D460
	 * 		Name   -> Function Stalker2.SystemNotificationItem.SetModel
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USystemNotificationItem::SetModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SystemNotificationItem.SetModel");
		
		USystemNotificationItem_SetModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USystemNotificationItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USystemNotificationItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SystemNotificationItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D3C0
	 * 		Name   -> Function Stalker2.SystemNotificationWidget.NotificationClickHandler
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USystemNotificationWidget::NotificationClickHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.SystemNotificationWidget.NotificationClickHandler");
		
		USystemNotificationWidget_NotificationClickHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USystemNotificationWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USystemNotificationWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.SystemNotificationWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTacticalFlashlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTacticalFlashlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TacticalFlashlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATacticalPathfindingTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATacticalPathfindingTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TacticalPathfindingTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATeleportPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TeleportPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TextureTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D480
	 * 		Name   -> Function Stalker2.TextWidget.SetText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTextWidget::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.TextWidget.SetText");
		
		UTextWidget_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D320
	 * 		Name   -> Function Stalker2.TextWidget.GetText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FText UTextWidget::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.TextWidget.GetText");
		
		UTextWidget_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TextWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TickerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTilingGridBack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTilingGridBack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TilingGridBack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TimeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeoutSpeechComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeoutSpeechComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TimeoutSpeechComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D2D0
	 * 		Name   -> Function Stalker2.ToggleButton.ChangeToggleButtonPosition
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UToggleButton::ChangeToggleButtonPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.ToggleButton.ChangeToggleButtonPosition");
		
		UToggleButton_ChangeToggleButtonPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToggleButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToggleButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ToggleButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToggleHeldItemIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToggleHeldItemIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ToggleHeldItemIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AToxicCloudAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AToxicCloudAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ToxicCloudAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTraceSoundSpawnerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTraceSoundSpawnerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TraceSoundSpawnerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TriggerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriplanarDecalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriplanarDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TriplanarDecalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurnIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurnIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.TurnIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIBaseManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIBaseManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIBaseManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIDComponentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIDComponentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDComponentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIDSceneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIDSceneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIDSceneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIMainMenuManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIMainMenuManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIMainMenuManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0200D3E0
	 * 		Name   -> Function Stalker2.UIManagerEx.OnOpenLootMenu
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FItemContainerUID                           InStorageItemContainerUID                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIManagerEx::OnOpenLootMenu(const struct FItemContainerUID& InStorageItemContainerUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UIManagerEx.OnOpenLootMenu");
		
		UUIManagerEx_OnOpenLootMenu_Params params {};
		params.InStorageItemContainerUID = InStorageItemContainerUID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIManagerEx.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIManagerEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIManagerEx");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02010F80
	 * 		Name   -> Function Stalker2.UIStyleManager.GetCurrentPlatform
	 * 		Flags  -> (Final, Native, Protected)
	 */
	EGSCPlatformType UUIStyleManager::GetCurrentPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UIStyleManager.GetCurrentPlatform");
		
		UUIStyleManager_GetCurrentPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIStyleManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIStyleManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UIStyleManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateUIHintIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateUIHintIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpdateUIHintIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpgradeItemTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpgradeItemTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpgradeItemTooltipWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011D00
	 * 		Name   -> Function Stalker2.UpgradeItemWidget.OnUpgradeButtonClick
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUpgradeItemWidget::OnUpgradeButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeItemWidget.OnUpgradeButtonClick");
		
		UUpgradeItemWidget_OnUpgradeButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpgradeItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpgradeItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpgradeItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011DB0
	 * 		Name   -> Function Stalker2.UpgradeMenuWidget.OnUpgradeMouseExit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUpgradeMenuWidget::OnUpgradeMouseExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeMenuWidget.OnUpgradeMouseExit");
		
		UUpgradeMenuWidget_OnUpgradeMouseExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011D20
	 * 		Name   -> Function Stalker2.UpgradeMenuWidget.OnUpgradeMouseEnter
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            UpgradeID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpgradeMenuWidget::OnUpgradeMouseEnter(int32_t UpgradeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeMenuWidget.OnUpgradeMouseEnter");
		
		UUpgradeMenuWidget_OnUpgradeMouseEnter_Params params {};
		params.UpgradeID = UpgradeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011910
	 * 		Name   -> Function Stalker2.UpgradeMenuWidget.OnRevertLastUpgrade
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUpgradeMenuWidget::OnRevertLastUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeMenuWidget.OnRevertLastUpgrade");
		
		UUpgradeMenuWidget_OnRevertLastUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020118F0
	 * 		Name   -> Function Stalker2.UpgradeMenuWidget.OnRepair
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUpgradeMenuWidget::OnRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeMenuWidget.OnRepair");
		
		UUpgradeMenuWidget_OnRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011080
	 * 		Name   -> Function Stalker2.UpgradeMenuWidget.OnApplyUpgrade
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            UpgradeID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUpgradeItemWidget*                          InCurrentSlot                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpgradeMenuWidget::OnApplyUpgrade(int32_t UpgradeID, class UUpgradeItemWidget* InCurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeMenuWidget.OnApplyUpgrade");
		
		UUpgradeMenuWidget_OnApplyUpgrade_Params params {};
		params.UpgradeID = UpgradeID;
		params.InCurrentSlot = InCurrentSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02010EB0
	 * 		Name   -> Function Stalker2.UpgradeMenuWidget.ChangeUpgradeModule
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUpgradeMenuWidget::ChangeUpgradeModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradeMenuWidget.ChangeUpgradeModule");
		
		UUpgradeMenuWidget_ChangeUpgradeModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpgradeMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpgradeMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpgradeMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011E70
	 * 		Name   -> Function Stalker2.UpgradePage.UpdatePanel
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUpgradePage::UpdatePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradePage.UpdatePanel");
		
		UUpgradePage_UpdatePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011E50
	 * 		Name   -> Function Stalker2.UpgradePage.UIPDANavigationUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUpgradePage::UIPDANavigationUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradePage.UIPDANavigationUp");
		
		UUpgradePage_UIPDANavigationUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011E30
	 * 		Name   -> Function Stalker2.UpgradePage.UIPDANavigationRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUpgradePage::UIPDANavigationRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradePage.UIPDANavigationRight");
		
		UUpgradePage_UIPDANavigationRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011E10
	 * 		Name   -> Function Stalker2.UpgradePage.UIPDANavigationLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUpgradePage::UIPDANavigationLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradePage.UIPDANavigationLeft");
		
		UUpgradePage_UIPDANavigationLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011DF0
	 * 		Name   -> Function Stalker2.UpgradePage.UIPDANavigationDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUpgradePage::UIPDANavigationDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradePage.UIPDANavigationDown");
		
		UUpgradePage_UIPDANavigationDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02010ED0
	 * 		Name   -> Function Stalker2.UpgradePage.ClickButtonMenu
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ButtonId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpgradePage::ClickButtonMenu(const class FName& ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.UpgradePage.ClickButtonMenu");
		
		UUpgradePage_ClickButtonMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpgradePage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpgradePage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpgradePage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpgradesIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpgradesIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpgradesIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpgradesMouseIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpgradesMouseIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UpgradesMouseIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserWaterElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserWaterElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UserWaterElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserWaterElementText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserWaterElementText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.UserWaterElementText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.VerticalLadder.ProtectMeshLock
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ECollisionEnabled                                  CollisionType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::ProtectMeshLock(ECollisionEnabled CollisionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.ProtectMeshLock");
		
		AVerticalLadder_ProtectMeshLock_Params params {};
		params.CollisionType = CollisionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011BA0
	 * 		Name   -> Function Stalker2.VerticalLadder.OnTopClimbZoneEndOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::OnTopClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.OnTopClimbZoneEndOverlap");
		
		AVerticalLadder_OnTopClimbZoneEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011930
	 * 		Name   -> Function Stalker2.VerticalLadder.OnTopClimbZoneBeginOverlap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::OnTopClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.OnTopClimbZoneBeginOverlap");
		
		AVerticalLadder_OnTopClimbZoneBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011790
	 * 		Name   -> Function Stalker2.VerticalLadder.OnClimbZoneEndOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::OnClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.OnClimbZoneEndOverlap");
		
		AVerticalLadder_OnClimbZoneEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011520
	 * 		Name   -> Function Stalker2.VerticalLadder.OnClimbZoneBeginOverlap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::OnClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.OnClimbZoneBeginOverlap");
		
		AVerticalLadder_OnClimbZoneBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020113C0
	 * 		Name   -> Function Stalker2.VerticalLadder.OnBottomClimbZoneEndOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::OnBottomClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.OnBottomClimbZoneEndOverlap");
		
		AVerticalLadder_OnBottomClimbZoneEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011150
	 * 		Name   -> Function Stalker2.VerticalLadder.OnBottomClimbZoneBeginOverlap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AVerticalLadder::OnBottomClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VerticalLadder.OnBottomClimbZoneBeginOverlap");
		
		AVerticalLadder_OnBottomClimbZoneBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVerticalLadder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVerticalLadder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.VerticalLadder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02011DD0
	 * 		Name   -> Function Stalker2.VoicegenSpeechComponent.OnVoicegenFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UVoicegenSpeechComponent::OnVoicegenFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VoicegenSpeechComponent.OnVoicegenFinished");
		
		UVoicegenSpeechComponent_OnVoicegenFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoicegenSpeechComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoicegenSpeechComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.VoicegenSpeechComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02010FB0
	 * 		Name   -> Function Stalker2.VoiceoverSpeechComponent.OnAKEventFinished
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoiceoverSpeechComponent::OnAKEventFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.VoiceoverSpeechComponent.OnAKEventFinished");
		
		UVoiceoverSpeechComponent_OnAKEventFinished_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceoverSpeechComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceoverSpeechComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.VoiceoverSpeechComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumeBuilderConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumeBuilderConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.VolumeBuilderConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWalkIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWalkIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WalkIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWanderingLightInstanceSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWanderingLightInstanceSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WanderingLightInstanceSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWanderingLightInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWanderingLightInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WanderingLightInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02010F60
	 * 		Name   -> Function Stalker2.WanderingLightsArchiAnomaly.CreateVFX
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWanderingLightsArchiAnomaly::CreateVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WanderingLightsArchiAnomaly.CreateVFX");
		
		AWanderingLightsArchiAnomaly_CreateVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWanderingLightsArchiAnomaly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWanderingLightsArchiAnomaly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WanderingLightsArchiAnomaly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WaterElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplayInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplayInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WeaponDisplayInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02016440
	 * 		Name   -> Function Stalker2.WeatherController.UpdateDay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWeatherController::UpdateDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WeatherController.UpdateDay");
		
		AWeatherController_UpdateDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02016420
	 * 		Name   -> Function Stalker2.WeatherController.SetWeather
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWeatherController::SetWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WeatherController.SetWeather");
		
		AWeatherController_SetWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02016400
	 * 		Name   -> Function Stalker2.WeatherController.SetMaterials
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWeatherController::SetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WeatherController.SetMaterials");
		
		AWeatherController_SetMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020163E0
	 * 		Name   -> Function Stalker2.WeatherController.SelectWeather
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWeatherController::SelectWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WeatherController.SelectWeather");
		
		AWeatherController_SelectWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeatherController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeatherController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WeatherController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeatherSelectionVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeatherSelectionVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WeatherSelectionVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019640
	 * 		Name   -> Function Stalker2.WidgetPool.CreateWidgetByPool
	 * 		Flags  -> (Final, Native, Private)
	 */
	class UUserWidget* UWidgetPool::CreateWidgetByPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WidgetPool.CreateWidgetByPool");
		
		UWidgetPool_CreateWidgetByPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WidgetPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019990
	 * 		Name   -> Function Stalker2.WorldCompositionAnalyzer.OnLevelLoaded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWorldCompositionAnalyzer::OnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldCompositionAnalyzer.OnLevelLoaded");
		
		UWorldCompositionAnalyzer_OnLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldCompositionAnalyzer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldCompositionAnalyzer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldCompositionAnalyzer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020197F0
	 * 		Name   -> Function Stalker2.WorldMap.MarkerHover
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorldMapMarker*                             InHoverMarkerWidget                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldMap::MarkerHover(bool bInHovered, class UWorldMapMarker* InHoverMarkerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMap.MarkerHover");
		
		UWorldMap_MarkerHover_Params params {};
		params.bInHovered = bInHovered;
		params.InHoverMarkerWidget = InHoverMarkerWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020196B0
	 * 		Name   -> Function Stalker2.WorldMap.MarkerClick
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UWorldMapMarker*                             HoverMarkerWidget                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldMap::MarkerClick(class UWorldMapMarker* HoverMarkerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMap.MarkerClick");
		
		UWorldMap_MarkerClick_Params params {};
		params.HoverMarkerWidget = HoverMarkerWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020199D0
	 * 		Name   -> Function Stalker2.WorldMapMarker.OnMouseUnhover
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapMarker::OnMouseUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapMarker.OnMouseUnhover");
		
		UWorldMapMarker_OnMouseUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020199B0
	 * 		Name   -> Function Stalker2.WorldMapMarker.OnMouseHover
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapMarker::OnMouseHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapMarker.OnMouseHover");
		
		UWorldMapMarker_OnMouseHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019740
	 * 		Name   -> Function Stalker2.WorldMapMarker.MarkerClick
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapMarker::MarkerClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapMarker.MarkerClick");
		
		UWorldMapMarker_MarkerClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapHubMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapHubMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapHubMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapMarkerSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapMarkerSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapMarkerSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019670
	 * 		Name   -> Function Stalker2.WorldMapMarkerTracker.GetTrackerName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FName AWorldMapMarkerTracker::GetTrackerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapMarkerTracker.GetTrackerName");
		
		AWorldMapMarkerTracker_GetTrackerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020193D0
	 * 		Name   -> Function Stalker2.WorldMapMarkerTracker.CollisionTriggerTracker
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InOverlappedComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InOtherActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InOtherComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InOtherBodyIndex                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  InSweepResult                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWorldMapMarkerTracker::CollisionTriggerTracker(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool bFromSweep, const struct FHitResult& InSweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapMarkerTracker.CollisionTriggerTracker");
		
		AWorldMapMarkerTracker_CollisionTriggerTracker_Params params {};
		params.InOverlappedComponent = InOverlappedComponent;
		params.InOtherActor = InOtherActor;
		params.InOtherComp = InOtherComp;
		params.InOtherBodyIndex = InOtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.InSweepResult = InSweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019160
	 * 		Name   -> Function Stalker2.WorldMapMarkerTracker.CollisionTriggerKnown
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InOverlappedComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InOtherActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InOtherComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InOtherBodyIndex                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  InSweepResult                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWorldMapMarkerTracker::CollisionTriggerKnown(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool bFromSweep, const struct FHitResult& InSweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapMarkerTracker.CollisionTriggerKnown");
		
		AWorldMapMarkerTracker_CollisionTriggerKnown_Params params {};
		params.InOverlappedComponent = InOverlappedComponent;
		params.InOtherActor = InOtherActor;
		params.InOtherComp = InOtherComp;
		params.InOtherBodyIndex = InOtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.InSweepResult = InSweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWorldMapMarkerTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldMapMarkerTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapMarkerTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019B70
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDAToggleMarkTracking
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDAToggleMarkTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDAToggleMarkTracking");
		
		UWorldMapPage_UIPDAToggleMarkTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDAOpenQuestInJournal
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDAOpenQuestInJournal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDAOpenQuestInJournal");
		
		UWorldMapPage_UIPDAOpenQuestInJournal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012BCD70
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDAOpenPlayerMarkerSelector
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDAOpenPlayerMarkerSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDAOpenPlayerMarkerSelector");
		
		UWorldMapPage_UIPDAOpenPlayerMarkerSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019A90
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationUpReleased
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationUpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationUpReleased");
		
		UWorldMapPage_UIPDANavigationUpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019B50
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationUp");
		
		UWorldMapPage_UIPDANavigationUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019AD0
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationRightReleased
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationRightReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationRightReleased");
		
		UWorldMapPage_UIPDANavigationRightReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019B30
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationRight
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationRight");
		
		UWorldMapPage_UIPDANavigationRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019B10
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationMouseUp
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationMouseUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationMouseUp");
		
		UWorldMapPage_UIPDANavigationMouseUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019AF0
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationMouseDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationMouseDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationMouseDown");
		
		UWorldMapPage_UIPDANavigationMouseDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019AD0
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationLeftReleased
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationLeftReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationLeftReleased");
		
		UWorldMapPage_UIPDANavigationLeftReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019AB0
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationLeft
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationLeft");
		
		UWorldMapPage_UIPDANavigationLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019A90
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationDownReleased
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationDownReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationDownReleased");
		
		UWorldMapPage_UIPDANavigationDownReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019A70
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDANavigationDown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDANavigationDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDANavigationDown");
		
		UWorldMapPage_UIPDANavigationDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019A50
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDAMoveToPlayerPosition
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDAMoveToPlayerPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDAMoveToPlayerPosition");
		
		UWorldMapPage_UIPDAMoveToPlayerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019A30
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDADeletePlayerMarker
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDADeletePlayerMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDADeletePlayerMarker");
		
		UWorldMapPage_UIPDADeletePlayerMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019A10
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDACreatePlayerMarker
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDACreatePlayerMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDACreatePlayerMarker");
		
		UWorldMapPage_UIPDACreatePlayerMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020199F0
	 * 		Name   -> Function Stalker2.WorldMapPage.UIPDAChangeVisibilityPlayerMarkers
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWorldMapPage::UIPDAChangeVisibilityPlayerMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.UIPDAChangeVisibilityPlayerMarkers");
		
		UWorldMapPage_UIPDAChangeVisibilityPlayerMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020198C0
	 * 		Name   -> Function Stalker2.WorldMapPage.MarkerHover
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bHovered                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorldMapMarker*                             HoverMarkerWidget                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldMapPage::MarkerHover(bool bHovered, class UWorldMapMarker* HoverMarkerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.MarkerHover");
		
		UWorldMapPage_MarkerHover_Params params {};
		params.bHovered = bHovered;
		params.HoverMarkerWidget = HoverMarkerWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019760
	 * 		Name   -> Function Stalker2.WorldMapPage.MarkerClick
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UWorldMapMarker*                             HoverMarkerWidget                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldMapPage::MarkerClick(class UWorldMapMarker* HoverMarkerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.MarkerClick");
		
		UWorldMapPage_MarkerClick_Params params {};
		params.HoverMarkerWidget = HoverMarkerWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02019050
	 * 		Name   -> Function Stalker2.WorldMapPage.ChangeWorldMapZoom
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            CurrZoomLVL                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviousZoomLVL                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFast                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldMapPage::ChangeWorldMapZoom(int32_t CurrZoomLVL, int32_t PreviousZoomLVL, bool bFast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapPage.ChangeWorldMapZoom");
		
		UWorldMapPage_ChangeWorldMapZoom_Params params {};
		params.CurrZoomLVL = CurrZoomLVL;
		params.PreviousZoomLVL = PreviousZoomLVL;
		params.bFast = bFast;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapPage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapPage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapPage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapPlayerMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapPlayerMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapPlayerMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapRegionMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapRegionMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapRegionMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapScrollIPU.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapScrollIPU::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapScrollIPU");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapTooltip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapTooltip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapTooltip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapTooltipStage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapTooltipStage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapTooltipStage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DB6E0
	 * 		Name   -> Function Stalker2.WorldMapZoomContainer.ShowHandCursor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldMapZoomContainer::ShowHandCursor(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stalker2.WorldMapZoomContainer.ShowHandCursor");
		
		UWorldMapZoomContainer_ShowHandCursor_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapZoomContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapZoomContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WorldMapZoomContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoundedHoldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoundedHoldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.WoundedHoldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZoomIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZoomIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stalker2.ZoomIndicator");
		return ptr;
	}

}


