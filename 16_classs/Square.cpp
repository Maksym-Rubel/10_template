#include "Square.h"
Square::Square(const double side)
	:side(side)
{
}

void Square::setSide(double s)
{
	side = s;
}

double Square::getSide() const
{
	return side;
}



void Square::print() const
{
	cout << "Side = " << side << endl;

}

Square::~Square()
{
}

double Square::square() const
{
	return side * side;
}

double Square::length() const
{
	return 4 * side;
}
