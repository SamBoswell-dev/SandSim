#include "SandParticle.h"
#include <random>

SandParticle::SandParticle() 
{

	// TODO: Add semi-random color generation for each instance
	color = GenerateRandomColor();
}

Color SandParticle::GenerateRandomColor()
{
	std::random_device rd;
	std::mt19937 mt(rd());

	std::uniform_real_distribution<float> genR(193, 210);
	unsigned char r = genR(mt);

	std::uniform_real_distribution<float> genG(170, 180);
	unsigned char g = genG(mt);

	std::uniform_real_distribution<float> genB(82, 90);
	unsigned char b = genB(mt);

	return { r, g, b, 255 };

}

//void SandParticle::HandleMovement()
//{
//	if ()
//}