#pragma once
#include "Shooter.h"

class Catapult
	: virtual public Shooter
{
public:
	Catapult() {
		canameAmu = "������";
	}
	void dat_amui(const string& name, int kilk);

	void shoot();


private:
	string canameAmu;
	int cakilAmu;


};
