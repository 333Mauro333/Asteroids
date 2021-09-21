#include "raylib.h"
#include <cmath>


namespace scenes
{
	// Fondo. Botones. Elementos como asteroides flotando alrededor de toda la pantalla.

	Vector2 directionVector = { 100.0f, 200.0f };
	Vector2 p1 = {400, 300};
	float rotation = 0;
	float magicAngle = 0;

	void InitMenu()
	{

	}

	void UpdateMenu()
	{
		directionVector.x = (float)GetMouseX() - p1.x;
		directionVector.y = (float)GetMouseY() - p1.y;

		magicAngle = RAD2DEG * atan(directionVector.y / directionVector.x);

		if (directionVector.x < 0 && directionVector.y < 0) { //Quadrant II
			magicAngle += 270.0;
		}
		if (directionVector.y >= 0 && directionVector.x >= 0) { //Quadrant IV
			magicAngle += 90.0;
		}
		if (directionVector.x < 0 && directionVector.y >= 0) { //QuadrantIII
			magicAngle += 270.0;
		}
		if (directionVector.x >= 0 && directionVector.y < 0) { //Quadrant I
			magicAngle += 90;
		}

		rotation = magicAngle;
	}

	void DrawMenu()
	{

	}

	void DestroyMenu()
	{

	}
}