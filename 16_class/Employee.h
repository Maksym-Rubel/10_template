#pragma once
#include "Person.h"

class Employee
	:virtual public Person
{
public:
	Employee(const string& name = "No name", const string& position = "No pos");
	void print() const;
	~Employee();
	
protected:
	//string name;
	string position;
};

