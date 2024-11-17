#include "Fortress.h"

Fortress::Fortress()
	: wall_thickness(100), gate_state(100)
{
	ArcherTower::dat_amui("�����", 4);
	Catapult::dat_amui("������", 2);
}
void Fortress::print() const
{
	cout << "���� �������: " << std::endl;
	cout << "������� ���: " << wall_thickness << "m" << std::endl;
	cout << "���� ����: " << gate_state << "%" << std::endl;
}
