#pragma once
#include "Globals.h"
#include "raylib.h"

class Grid
{
public:
	char cells[ROWS][COLUMNS];
private:
	const Color m_gridColor;
public:
	Grid();
	void Draw();
private:

};

