#include "ArcherTower.h"

void ArcherTower::dat_amui(const string& name, int kilk)
{
    nameAmu = name;
    kilAmu = kilk;
    cout << "������� �����������: " << nameAmu << ", �������: " << kilAmu << endl;
}

void ArcherTower::shoot()
{
    if (kilAmu > 0) {
        cout << "��������� ���� ������: ������ � " << nameAmu << "." << endl;
        kilAmu--;
    }
    else {
        cout << "��������� ��� ����� ������� ��� �������." << endl;
    }
}


