#include "Vector.h"
#include <Math.h>

Vector::Vector(){
	this.x=0;
	this.y=0;
	this.z=0;
}

Vector::Vector(double x, double y, double z){
	this.x = x;
	this.y = y;
	this.z = z;
}

Vector::copy(){
	Vector newVec (x,y,z);
	
	return newVec;
}


Vector operator+(const Vector& a, const Vector& b)
{
	Vector temp;
	temp.x = a.x + b.x;
	temp.y = a.y + b.y;
	temp.z = a.z + b.z;
	
	return temp;
}

Vector operator-(const Vector& a, const Vector& b)
{
	Vector temp;
	temp.x = a.x - b.x;
	temp.y = a.y - b.y;
	temp.z = a.z - b.z;
	
	return temp;
}

Vector operator*(const Vector& a, const Vector& b)
{
	Vector temp;
	temp.x = a.y*b.z - a.z*b.y;
	temp.y = a.z*b.x - a.x+b.z;
	temp.z = a.x*b.y - a.y*b.x;
	
	return temp;
}

double operator%(const Vector& a, const Vector& b)
{
	return a.x*b.x + a.y*b.y + a.z*b.z;
}

double operator!(const Vector& a)
{
	return sqrt(a%a);
}
