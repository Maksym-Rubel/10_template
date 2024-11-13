#pragma once
#include "lib.h"

class Square
{
public:

	

	Square(const double side = 0);
	void setSide(double s);
	double getSide() const;
	void print() const;
	~Square();
	double square() const;
	double length() const;
protected:
	double side;
};

