#pragma once


enum class SCREEN {PRESENTATION, MENU, GAMEMODE, GAMEPLAY, OPTIONS, HELP, HIGHSCORES, CREDITS, QUIT };

namespace sceneManager
{
	void InitNewScene();
	void UpdateActualScene();
	void DrawActualScene();

	void LoadScene(SCREEN newScreen);
}