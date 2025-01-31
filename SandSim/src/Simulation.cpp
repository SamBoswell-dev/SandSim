#include "Simulation.h"
#include "AirParticle.h"
#include "SandParticle.h"

Simulation::Simulation() 
	: grid(Grid())
{

}

void Simulation::Draw()
{
	grid.Draw();
}

void Simulation::AddParticle(int row, int column)
{
	if ((row >= 0 && row < ROWS) && (column >= 0 && column < COLUMNS))
		grid.AddParticle(row, column, SandParticle());
}

void Simulation::Update()
{
	// Call the movement methods for each particle
	for (int i = 0; i < grid.cells.size(); i++)
	{
		for (int j = 0; j < grid.cells[i].size(); j++)
		{
			grid.cells[i][j].HandleMovement();
		}
	}

}