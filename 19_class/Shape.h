#pragma once
#include "lib.h"

class Shape abstract
{
public:

	virtual void print() const = 0;
	virtual void printShapeName() const = 0;

	virtual double area() const;
	virtual double volume() const;


};

