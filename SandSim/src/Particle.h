#pragma once
#include "raylib.h"


class Particle
{
public:
	Color color;
	Vector2 position;
private:

public:
	virtual void HandleMovement();
private:

};