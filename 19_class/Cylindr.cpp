#include "Cylindr.h"


Cylindr::Cylindr(double r, double h)
	: radius(r), height(h)
{

}

double Cylindr::area() const
{
	const double PI = 3.14;
	
	return 2 * PI * radius * (radius +height);
}

double Cylindr::volume() const
{
	const double PI = 3.14;
	
	return 2 * PI * radius * radius * height;
}
