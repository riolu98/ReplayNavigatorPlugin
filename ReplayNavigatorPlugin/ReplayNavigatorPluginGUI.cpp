#include "pch.h"
#include "ReplayNavigatorPlugin.h"

/* Plugin Settings Window code here
std::string ReplayNavigatorPlugin::GetPluginName() {
	return "ReplayNavigatorPlugin";
}

void ReplayNavigatorPlugin::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> ReplayNavigatorPlugin
void ReplayNavigatorPlugin::RenderSettings() {
	ImGui::TextUnformatted("ReplayNavigatorPlugin plugin settings");
}
*/

/*
// Do ImGui rendering here
void ReplayNavigatorPlugin::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string ReplayNavigatorPlugin::GetMenuName()
{
	return "replaynavigatorplugin";
}

// Title to give the menu
std::string ReplayNavigatorPlugin::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void ReplayNavigatorPlugin::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool ReplayNavigatorPlugin::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool ReplayNavigatorPlugin::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void ReplayNavigatorPlugin::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void ReplayNavigatorPlugin::OnClose()
{
	isWindowOpen_ = false;
}
*/
