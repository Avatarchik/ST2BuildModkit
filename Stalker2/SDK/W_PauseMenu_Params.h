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
	 * Function W_PauseMenu.W_PauseMenu_C.Construct
	 */
	struct UW_PauseMenu_C_Construct_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.PostGamepadButtonClick
	 */
	struct UW_PauseMenu_C_PostGamepadButtonClick_Params
	{
	public:
		int32_t                                                    InButtonIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.PostButtonClickBack
	 */
	struct UW_PauseMenu_C_PostButtonClickBack_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.PostUpdateShowDebugMenu
	 */
	struct UW_PauseMenu_C_PostUpdateShowDebugMenu_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.ExecuteUbergraph_W_PauseMenu
	 */
	struct UW_PauseMenu_C_ExecuteUbergraph_W_PauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
