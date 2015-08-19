#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
		double x, y, z;
		Vector();
		Vector(double xp, double yp, double zp) : x(xp), y(yp), z(zp) {} ;
		Vector copy();
}

Vector operator+(const Vector& a, const Vector& b);
Vector operator-(const Vector& a, const Vector& b);
Vector operator*(const Vector& a, const Vector& b);
double operator%(const Vector& a, const Vector& b);
double operator!(const Vector& a);

#endif