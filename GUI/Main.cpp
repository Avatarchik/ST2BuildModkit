#include "pch.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx12.h"
#include "ImGui/imgui_impl_win32.h"
#include "../Stalker2/SDK.h"

using namespace CG;

UGameEngine* GEngine = nullptr;
UKismetSystemLibrary* KismetSysLib = nullptr;
UKismetMathLibrary* KismetMathLib = nullptr;
UGameplayStatics* GameplayStatisicLib = nullptr;
bool bInitOnce = false;

std::queue<std::string> RequestsFromRender;
std::mutex RequestsMutex;

std::queue<std::string> ImmediateLog;
std::mutex ImmediateLogMutex;

UWorld* GetWorld(AActor* Actor)
{
	if (Actor->Outer->IsA(ULevel::StaticClass()))
	{
		ULevel* OwningLevel = (ULevel*)Actor->Outer;
		return OwningLevel->OwningWorld;
	}

	return nullptr;
}

UFont* RandomFont = nullptr;


void UEMainThread(UGameViewportClient* thiz, UCanvas* Canvas)
{
	if (!bInitOnce)
	{
		std::vector<UGameEngine*> Engines = UObject::FindObjects<UGameEngine>();
		for (UGameEngine* Engine : Engines)
		{
			if (strstr(Engine->GetName().c_str(), "Default") == nullptr)
			{
				GEngine = Engine;
			}
		}

		KismetSysLib = UObject::FindObject<UKismetSystemLibrary>();
		KismetMathLib = UObject::FindObject<UKismetMathLibrary>();
		GameplayStatisicLib = UObject::FindObject<UGameplayStatics>();

		std::vector<UFont*> Fonts = UObject::FindObjects<UFont>();
		for (UFont* Font : Fonts)
		{
			if (Font->FontCacheType == EFontCacheType::Runtime)
			{
				RandomFont = Font;
				break;
			}
		}

		bInitOnce = true;
	}

	// You can draw stuff in GameThread by this way
#if 0
	static FString Title(L"System started!");
	Canvas->DrawColor = FColor{ 255,255, 255,255 };
	Canvas->K2_DrawText(RandomFont, // Font
		Title, // Text
		FVector2D{ 10, 10 }, // ScreenPos
		FVector2D{ 1.0f, 1.0f }, // Scale
		FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, // RenderColor
		4.0f, // Kerning
		FLinearColor{ 0.0f, 0.0f, 0.0f, 1.0f }, // ShadowColor
		FVector2D{ 0.0f, 0.0f }, 0.0f, 0.0f, false, FLinearColor{ 0.0f, 0.0f, 0.0f, 1.0f });
#endif


	OriginalMainThread(thiz, Canvas);
}

// ImGUI main routine
// Called in Render thread, so do not interact with engine
void RenderGui()
{
	ImGui::Begin("Main", nullptr);

	ImGui::Text("Test");

	ImGui::GetBackgroundDrawList();

// 	if (UWorld* World = *UWorld::GWorld)
// 	{
// 		if (AGameStateBase* StateBase = World->GameState)
// 		{
// 		}
// 	}

	ImGui::End();

	ImGui::Begin("Log", nullptr);

	if (ImGui::TreeNode("Immediate Log"))
	{
		std::lock_guard guard{ ImmediateLogMutex };

		while (!ImmediateLog.empty())
		{
			const std::string LogLine = ImmediateLog.front();

			ImGui::Text("%s", LogLine.c_str());

			ImmediateLog.pop();
		}

		ImGui::TreePop();
	}

	ImGui::End();
}