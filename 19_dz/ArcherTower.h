#pragma once
#include "Archer.h"
#include "Range.h"
class ArcherTower
	:public Range, public Archer
{
public:
	ArcherTower() {
		nameAmu = "�����";
	}	
	
	void dat_amui(const string& name, int kilk);

	void shoot();
};

