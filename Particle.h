#ifndef PARTICLE_H
#define PARTICLE_H

#include "Vector.h"

class Particle
{
public:
		Vector pos, vel, acc;
		double h, h3;
		double density;
		Particle();
		Particle(Vector pos, Vector Vel);
		Particle(Vector pos);
		setH(double h);
}

#endif