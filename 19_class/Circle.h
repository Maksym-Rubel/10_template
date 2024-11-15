#pragma once
#include "Point.h"

class Circle
	: public Point
{
public:
	Circle(double r);
	void print() const override {
		cout << "This is a circle with radius " << radius << "." << endl;
	}
	void printShapeName() const override {
		cout << "Circle" << endl;
	}
	
	double area() const override;

	double getR();


private:
	double radius;
};

