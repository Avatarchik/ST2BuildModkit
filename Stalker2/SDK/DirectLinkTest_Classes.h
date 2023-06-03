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
	 * Class DirectLinkTest.DirectLinkTestLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDirectLinkTestLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_TestParameters();
		bool STATIC_StopSender();
		bool STATIC_StopReceiver();
		bool STATIC_StartSender();
		bool STATIC_StartReceiver();
		bool STATIC_SetupSender();
		bool STATIC_SetupReceiver();
		bool STATIC_SendScene(const class FString& InFilePath);
		int32_t STATIC_MakeEndpoint(const class FString& NiceName, bool bVerbose);
		bool STATIC_DumpReceivedScene();
		bool STATIC_DeleteEndpoint(int32_t EndpointId);
		bool STATIC_DeleteAllEndpoint();
		bool STATIC_AddPublicSource(int32_t EndpointId, const class FString& SourceName);
		bool STATIC_AddPublicDestination(int32_t EndpointId, const class FString& DestName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
