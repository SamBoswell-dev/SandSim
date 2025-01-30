#include "Grid.h"
#include "AirParticle.h"
#include "SandParticle.h"


Grid::Grid()
	: m_gridColor{ 55, 55, 55, 255 }
{
	// Set the size of the vector
	cells.resize(ROWS);
	for (int i = 0; i < ROWS; i++)
		cells[i].resize(COLUMNS);


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			cells[i][j] = std::move(AirParticle());
	}

}

void Grid::Draw()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE - 1, CELL_SIZE - 1, cells[i][j].color);
		}
	}
}
