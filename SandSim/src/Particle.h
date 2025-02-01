#pragma once
#include "raylib.h"

class Grid;

class Particle
{
public:
	Color color;
	Vector2 position;
	Grid& grid;
private:

public:
	Particle(Grid& gridref) : grid(gridref) {}
	virtual void HandleMovement();
private:

};