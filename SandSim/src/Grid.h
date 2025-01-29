#pragma once
#include "Globals.h"
#include "raylib.h"
#include "SandParticle.h"

class Grid
{
public:
	Particle cells[ROWS][COLUMNS];
private:
	const Color m_gridColor;
public:
	Grid();
	void Draw();
private:

};

