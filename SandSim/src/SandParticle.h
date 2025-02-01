#pragma once
#include "Particle.h"

class SandParticle : public Particle
{
public:

private:
	
public:
	SandParticle(Grid& grid);
	SandParticle(const SandParticle& other);
	void HandleMovement() override;
private:
	Color GenerateRandomColor();
	int GetRandomDirection();
};

