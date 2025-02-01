#pragma once
#include "raylib.h"

class Grid;

enum ParticleType {
	Air,
	Sand,
	Stone
};

class Particle
{
public:
	Color color;
	Vector2 position;
	Grid& grid;
	ParticleType type;
private:

public:
	Particle(Grid& gridref) : grid(gridref) {}
	virtual void HandleMovement();
private:

};