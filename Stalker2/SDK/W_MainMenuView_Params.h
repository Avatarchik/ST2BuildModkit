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
	 * Function W_MainMenuView.W_MainMenuView_C.Construct
	 */
	struct UW_MainMenuView_C_Construct_Params
	{	};

	/**
	 * Function W_MainMenuView.W_MainMenuView_C.PostGamepadButtonClick
	 */
	struct UW_MainMenuView_C_PostGamepadButtonClick_Params
	{
	public:
		int32_t                                                    InButtonIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenuView.W_MainMenuView_C.PostButtonClickBack
	 */
	struct UW_MainMenuView_C_PostButtonClickBack_Params
	{	};

	/**
	 * Function W_MainMenuView.W_MainMenuView_C.ExecuteUbergraph_W_MainMenuView
	 */
	struct UW_MainMenuView_C_ExecuteUbergraph_W_MainMenuView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NMFC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
