#pragma once
#include "homeAnim.h"

class Dog
	: public homeAnim
{
public:
	void voice();
	void setBreed(const string& breed);
	const string& getBreed() const;
	Dog(const string& name = "No name", const size_t& age = 0, const string& weight = "No weight", const string& breed = "No breed");
	void print() const;
	~Dog();
private:

	string breed;
		
	
		
};

