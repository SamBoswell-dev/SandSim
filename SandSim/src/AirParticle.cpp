#include "AirParticle.h"


AirParticle::AirParticle()
	: Particle(grid)
{
	type = Air;
	color = { 55, 55, 55, 255 };
}