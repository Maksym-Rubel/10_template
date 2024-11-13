#pragma once
#include "Kolo.h"
#include "Square.h"
class SircleSquare
	: public Kolo, public Square
{
public:
	SircleSquare(double r = 0);

	double Lengthfigure();
	double areaDifference();

   
};

