#pragma once
#include "Globals.h"
#include "raylib.h"
#include "Particle.h"
#include <vector>

class Grid
{
public:
	std::vector<std::vector<Particle>> cells;
private:
	const Color m_gridColor;
public: 
	Grid();
	void Draw();
private:

};

