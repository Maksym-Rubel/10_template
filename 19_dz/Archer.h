#pragma once
#include "Shooter.h"

class Archer
	: virtual public Shooter
{
public:
	Archer() {
		nameAmu = "Стріли";
	}
	void shoot();
	
		
	

};

