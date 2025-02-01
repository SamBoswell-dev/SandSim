#pragma once
#include "Particle.h"

class SandParticle : public Particle
{
public:

private:
	
public:
	SandParticle(Grid& grid);
	void HandleMovement() override;
private:
	Color GenerateRandomColor();
};

