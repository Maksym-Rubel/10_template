#pragma once
#include "lib.h"
class Shooter
{
protected:
	string nameAmu;
	int kilAmu;
public:

	Shooter(string nameAmu = "", int kilAmu = 0);

	void shoot();
	void dat_amui(const string& name, int kilk);

	int getall() const {
		return kilAmu;
	}
};

