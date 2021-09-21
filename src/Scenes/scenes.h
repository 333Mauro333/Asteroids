#pragma once


namespace scenes
{
	// Escenas con sus respectivos inits, updates, etc.


	// Presentación.
	void InitPresentation();
	void UpdatePresentation();
	void DrawPresentation();
	void DestroyPresentation();

	// Menú.
	void InitMenu();
	void UpdateMenu();
	void DrawMenu();
	void DestroyMenu();

	// Opciones.
	void InitOptions();
	void UpdateOptions();
	void DrawOptions();
	void DestroyOptions();

	// Game mode.
	void InitGameMode();
	void UpdateGameMode();
	void DrawGameMode();
	void DestroyGameMode();

	// Gameplay.
	void InitGameplay();
	void UpdateGameplay();
	void DrawGameplay();
	void DestroyGameplay();

	// Ayuda.
	void InitHelp();
	void UpdateHelp();
	void DrawHelp();
	void DestroyHelp();

	// Puntajes altos.
	void InitHighScores();
	void UpdateHighScores();
	void DrawHighScores();
	void DestroyHighScores();

	// Créditos.
	void InitCredits();
	void UpdateCredits();
	void DrawCredits();
	void DestroyCredits();

	// Salida.
	void InitQuit();
	void UpdateQuit();
	void DrawQuit();
	void DestroyQuit();
}