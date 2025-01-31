#include "Grid.h"
#include "AirParticle.h"
#include "SandParticle.h"
#include <iostream>


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

void Grid::AddParticle(int row, int column, Particle& particle)
{
	if ((row >= 0 && row < ROWS) && (column >= 0 && column < COLUMNS))
	{
		cells[row][column] = particle;
	}
}

void Grid::RemoveParticle(int row, int column)
{
	if ((row >= 0 && row < ROWS) && (column >= 0 && column < COLUMNS))
		cells[row][column] = AirParticle();
}