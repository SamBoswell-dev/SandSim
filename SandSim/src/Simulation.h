#pragma once
#include "Grid.h"

class Simulation
{
public:
	Grid grid;
private:

public:
	Simulation();
	void Draw();
	void AddParticle(int row, int column);
	void Update();
private:
};

