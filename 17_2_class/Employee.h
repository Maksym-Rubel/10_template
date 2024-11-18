#pragma once
#include "Human.h"

class Employee
	: public Human
{
	
public:
	Employee(const string & name, const size_t & age)
		:Human(name,age)
	{

	}
	void eat() const override
	{
		cout << "Student " << name << " likes to eat burger" << endl;

	}
	void print() const override
	{
		cout << "\t Student     " << name << endl;
		cout << "\t Student age " << age << endl;

	}

};
