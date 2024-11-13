#pragma once
#include "lib.h"
class Kolo
{
public:

	Kolo(const double radius = 0);
	void setRadius(double r);
	double getRadius() const;
	void print() const;
	~Kolo();
	double square() const;
	double length() const;
protected:
	double radius;
};

