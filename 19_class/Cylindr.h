#pragma once
#include "Shape.h"

class Cylindr
	: public Shape
{
private:
	double height;
	double radius;


	void print() const override {
		cout << "This is a cilinder with radius " << radius << " and height " << height << "." << endl;
	}
	void printShapeName() const override {
		cout << "Cylindr" << endl;
	}

public:
	
	Cylindr(double r, double h);
		
	double area() const override;
	double volume() const override;
};

