#pragma once
#include "Shape.h"

class Point
	: public Shape
{
public:
	void print() const override {
		cout << "This is a point" << endl;
	}
	void printShapeName() const override {
		cout << "Point" << endl;
	}
	
};

