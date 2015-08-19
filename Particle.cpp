#include "Particle.h"

Particle::Particle(Vector position, Vector velocity)
{
	this.pos = position.copy();
	this.vel = velocity.copy();
	this.acc = Vector (0,0);
}

Particle::Particle(Vector position)
{
	this.pos = position.copy();
	this.vel = Vector (0,0);
	this.acc = Vector (0,0);
}

Particle::setH(double h)
{
	this.h = h;
	this.h3 = h*h*h;
}
