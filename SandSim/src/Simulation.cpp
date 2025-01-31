#include "Simulation.h"
#include "AirParticle.h"
#include "SandParticle.h"

Simulation::Simulation() 
	: grid(Grid())
{

}

void Simulation::Draw()
{
	grid.Draw();
}
