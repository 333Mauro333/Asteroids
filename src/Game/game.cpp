#include "../External files/externalFiles.h"
#include "../Scene manager/sceneManager.h"


namespace game
{
	namespace windowSize
	{
		int windowWidth = 800;
		int windowHeight = 600;
	}

	static const char windowTitle[] = "Asteroids";


	static void init();
	static void update();
	static void draw();
	static void close();


	void run()
	{
		init();

		while (!WindowShouldClose())
		{
			update();

			draw();
		}

		close();
	}


	static void init()
	{
		InitWindow(windowSize::windowWidth, windowSize::windowHeight, windowTitle);
		SetTargetFPS(60);

		// Acá se inician los archivos externos y la escena cargada.
		externalFiles::initAllFiles();
		sceneManager::LoadScene(SCREEN::MENU);
	}

	static void update()
	{
		sceneManager::UpdateActualScene();
	}

	static void draw()
	{
		BeginDrawing();

		sceneManager::DrawActualScene();

		EndDrawing();
	}

	static void close()
	{
		CloseWindow();
	}


}