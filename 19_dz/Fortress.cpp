#include "Fortress.h"

Fortress::Fortress()
	: wall_thickness(100), gate_state(100)
{
	ArcherTower::dat_amui("Стріли", 4);
	Catapult::dat_amui("Каміння", 2);
}
void Fortress::print() const
{
	cout << "Стан фортеці: " << std::endl;
	cout << "Товщина стін: " << wall_thickness << "m" << std::endl;
	cout << "Стан воріт: " << gate_state << "%" << std::endl;
}
