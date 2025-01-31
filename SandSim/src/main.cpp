#include <iostream>
#include "raylib.h"
#include "Globals.h"
#include "Simulation.h"

int main()
{
	Color backgroundColor = { 29, 29, 29, 255 };

	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "SandSim");
	SetTargetFPS(120);
	

	Simulation simulation = Simulation();
	while (!WindowShouldClose())
	{
		// Handle input
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			int mouseX = GetMouseX() / CELL_SIZE;
			int mouseY = GetMouseY() / CELL_SIZE;

			simulation.AddParticle(mouseY, mouseX);
		}

		simulation.Update();

		BeginDrawing();
		ClearBackground(backgroundColor);

		simulation.Draw();

		EndDrawing();
	}
	CloseWindow();
}