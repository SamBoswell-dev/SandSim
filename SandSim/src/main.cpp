#include <iostream>
#include "raylib.h"
#include "Globals.h"
#include "Grid.h"

int main()
{
	Color backgroundColor = { 29, 29, 29, 255 };

	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "SandSim");
	SetTargetFPS(120);
	

	Grid grid = Grid();
	while (!WindowShouldClose())
	{

		
		BeginDrawing();
		ClearBackground(backgroundColor);

		grid.Draw();

		EndDrawing();
	}
	CloseWindow();
}