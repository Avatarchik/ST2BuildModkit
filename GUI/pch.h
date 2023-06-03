#pragma once
#include <Windows.h>
#include <psapi.h>
#include <dxgi1_4.h>
#include <d3d12.h>

#include "MinHook\Include\MinHook.h"

#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <iostream>
#include <queue>
#include <mutex>
#include <format>

#include "../Stalker2/SDK.h"

using PostRenderFuncType = void(*)(CG::UGameViewportClient*, CG::UCanvas*);
extern PostRenderFuncType OriginalMainThread;

#define UE_SMALL_NUMBER			(1.e-8f)
#define UE_KINDA_SMALL_NUMBER	(1.e-4f)

void RenderGui();