#include "Circle.h"

Circle::Circle(double r)
	:radius(r)
{
}

double Circle::area() const
{
	const double PI = 3.14;
	return PI * radius * radius;
}

double Circle::getR()
{
	return radius;
}


