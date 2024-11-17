#pragma once
#include "ArcherTower.h"
#include "Catapult.h"
class Fortress
	: public ArcherTower, public Catapult
{
private:
	int wall_thickness;
	int gate_state;
public:
	Fortress();
	void print() const;
	
};

