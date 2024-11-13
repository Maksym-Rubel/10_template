#pragma once
#include "lib.h"
class Person
{
public:
	Person( const string& name)
		:name(name)
	{
		cout << "\t\t >>>>>>>>>>> Ctor Person :: " << this->name << endl;
	}
	~Person()
	{
		cout << "\t\t >>>>>>>>>>> Dtor Person :: " << this->name << endl;
	}
	void print() const
	{
		cout << "Name :: " << name << endl;
	}
protected:
	string name;
};

