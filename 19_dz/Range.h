#pragma once
#include "Shooter.h"

class Range
	: virtual public Shooter
{
public:
	Range() {
		nameAmu = "Стріли";
	}


	void shoot();
	




};
