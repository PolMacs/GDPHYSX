#include "P6Particle.h"

using namespace P6;

void P6Particle::UpdatePosition(float time)
{
	Position = this->Position + this->Velocity * time;
}

void P6Particle::UpdateVelocity(float time)
{
}

void P6Particle::Update(float time)
{
	this->UpdatePosition(time);
}
