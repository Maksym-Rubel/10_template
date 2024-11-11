#pragma once
#include "Animal.h"

class Aspirant
	: public Student
{
public:
	Aspirant(const string& name = "No name", const string& surname = "No surname", const size_t& age = 0, const string& group = "no group", bool isstudying = true, const string& theme = "no theme", const string& date = "no date");
	void print() const;
	~Aspirant();
private:
	string theme;
	string date;
	
};


