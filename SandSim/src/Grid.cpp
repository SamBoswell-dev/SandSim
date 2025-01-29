#include "Grid.h"
#include "AirParticle.h"

Grid::Grid()
	: m_gridColor{55, 55, 55, 255}
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cells[i][j] = AirParticle();
		}
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
