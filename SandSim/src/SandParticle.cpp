#include "SandParticle.h"
#include "AirParticle.h"
#include "Grid.h"
#include <random>
#include <iostream>

SandParticle::SandParticle(Grid& grid)
	: Particle(grid)
{
	type = Sand;
	color = GenerateRandomColor();
}

Color SandParticle::GenerateRandomColor()
{
	std::random_device rd;
	std::mt19937 mt(rd());

	std::uniform_real_distribution<float> genR(193, 210);
	unsigned char r = genR(mt);

	std::uniform_real_distribution<float> genG(170, 180);
	unsigned char g = genG(mt);

	std::uniform_real_distribution<float> genB(82, 90);
	unsigned char b = genB(mt);

	return { r, g, b, 255 };

}

void SandParticle::HandleMovement()
{
	// check if air is on the ground
	if (position.y == ROWS - 1)
		return;

	// check if air is below
	if (grid.cells[position.y + 1][position.x]->type == Air)
	{
		// move this instance down a row in the vector
		grid.cells[position.y + 1][position.x] = std::move(grid.cells[position.y][position.x]);
		// Create air particle where we previously were
		grid.cells[position.y][position.x] = std::make_unique<AirParticle>();
		position.y += 1;
		return;
	}
}