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
	 * 		Name   -> PredefinedFunction UVoiceGenActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceGenActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoiceGen.VoiceGenActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceGenSoundWave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceGenSoundWave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoiceGen.VoiceGenSoundWave");
		return ptr;
	}

}


