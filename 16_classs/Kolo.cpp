#include "Kolo.h"


Kolo::Kolo(const double radius)
	:radius(radius)
{

}
void Kolo::setRadius(double r)
{
	radius = r;
}

double Kolo::getRadius() const
{
	return radius;
}



void Kolo::print() const
{
	cout << "R = " << radius << endl;

}

Kolo::~Kolo()
{
}

double Kolo::square() const
{
	double P = 3.14;
	return P * radius * radius;
}

double Kolo::length() const
{
	double P = 3.14;
	return 2 * P * radius;
}
