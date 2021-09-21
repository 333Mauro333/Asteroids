#include <iostream>

#include "raylib.h"


namespace gameplay
{
	static Vector2 posShip;
	static Vector2 posMouse;
	static Vector2 vectorDirection;
	static float angle;


	void shipInit(Vector2 pos)
	{
		posShip = pos;
	}

	void shipUpdate()
	{
		posMouse = GetMousePosition();
		vectorDirection = { posMouse.x - posShip.x, posMouse.y - posShip.y };

		angle = RAD2DEG * atan(vectorDirection.y / vectorDirection.x);

	}
}