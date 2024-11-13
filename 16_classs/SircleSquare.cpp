#include "SircleSquare.h"

SircleSquare::SircleSquare(double r)
{
	setRadius(r);
	setSide(r * 2);
}

double SircleSquare::Lengthfigure()
{
	
	return Kolo::length() + Square::length();
	

}

double SircleSquare::areaDifference()
{
	return Square::square() - Kolo::square();
}
