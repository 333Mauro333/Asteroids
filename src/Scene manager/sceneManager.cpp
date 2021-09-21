#include "raylib.h"

#include "../Scene manager/sceneManager.h"
#include "../Scenes/scenes.h"


using namespace scenes;

namespace sceneManager
{
	static SCREEN actualScreen = SCREEN::MENU;


	static void DestroyActualScene();


	void InitNewScene()
	{
		switch (actualScreen)
		{
		case SCREEN::PRESENTATION:
			InitPresentation();
			break;

		case SCREEN::MENU:
			InitMenu();
			break;

		case SCREEN::GAMEMODE:
			InitGameMode();
			break;

		case SCREEN::GAMEPLAY:
			InitGameplay();
			break;

		case SCREEN::OPTIONS:
			InitOptions();
			break;

		case SCREEN::HELP:
			InitHelp();
			break;

		case SCREEN::HIGHSCORES:
			InitHighScores();
			break;

		case SCREEN::CREDITS:
			InitCredits();
			break;

		case SCREEN::QUIT:
			InitQuit();
			break;
		}
	}

	void UpdateActualScene()
	{
		switch (actualScreen)
		{
		case SCREEN::PRESENTATION:
			UpdatePresentation();
			break;

		case SCREEN::MENU:
			UpdateMenu();
			break;

		case SCREEN::GAMEMODE:
			UpdateGameMode();
			break;

		case SCREEN::GAMEPLAY:
			UpdateGameplay();
			break;

		case SCREEN::OPTIONS:
			UpdateOptions();
			break;

		case SCREEN::HELP:
			UpdateHelp();
			break;

		case SCREEN::HIGHSCORES:
			UpdateHighScores();
			break;

		case SCREEN::CREDITS:
			UpdateCredits();
			break;

		case SCREEN::QUIT:
			UpdateQuit();
			break;
		}
	}

	void DrawActualScene()
	{
		switch (actualScreen)
		{
		case SCREEN::PRESENTATION:
			DrawPresentation();
			break;

		case SCREEN::MENU:
			DrawMenu();
			break;

		case SCREEN::GAMEMODE:
			DrawGameMode();
			break;

		case SCREEN::GAMEPLAY:
			DrawGameplay();
			break;

		case SCREEN::OPTIONS:
			DrawOptions();
			break;

		case SCREEN::HELP:
			DrawHelp();
			break;

		case SCREEN::HIGHSCORES:
			DrawHighScores();
			break;

		case SCREEN::CREDITS:
			DrawCredits();
			break;

		case SCREEN::QUIT:
			DrawQuit();
			break;
		}
	}

	void LoadScene(SCREEN newScreen)
	{
		DestroyActualScene();

		actualScreen = newScreen;

		InitNewScene();
	}



	static void DestroyActualScene()
	{
		switch (actualScreen)
		{
		case SCREEN::PRESENTATION:
			DestroyPresentation();
			break;

		case SCREEN::MENU:
			DestroyMenu();
			break;

		case SCREEN::GAMEMODE:
			DestroyGameMode();
			break;

		case SCREEN::GAMEPLAY:
			DestroyGameplay();
			break;

		case SCREEN::OPTIONS:
			DestroyOptions();
			break;

		case SCREEN::HELP:
			DestroyHelp();
			break;

		case SCREEN::HIGHSCORES:
			DestroyHighScores();
			break;

		case SCREEN::CREDITS:
			DestroyCredits();
			break;

		case SCREEN::QUIT:
			DestroyQuit();
			break;
		}
	}


}