#pragma once
#include "Globals.h"
#include "raylib.h"
#include "Particle.h"
#include <vector>
#include <memory>

class Grid
{
public:
	std::vector<std::vector<std::unique_ptr<Particle>>> cells;
private:
	const Color m_gridColor;
public: 
	Grid();
	void Draw();
	void AddParticle(int row, int column, std::unique_ptr<Particle> particle);
	void RemoveParticle(int row, int column);
private:

};

