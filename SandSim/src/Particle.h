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
	static int copyCount;
	Color color;
	Vector2 position;
	Grid& grid;
	ParticleType type;
private:

public:
	Particle(Grid& gridref) : grid(gridref) {}
	Particle(const Particle& other) : grid(other.grid) { copyCount++; }
	virtual void HandleMovement();
private:

};