#include "Shooter.h"

Shooter::Shooter(string nameAmu, int kilAmu)
	:nameAmu(nameAmu),kilAmu(kilAmu)
{
}



void Shooter::shoot()
{
    if (kilAmu > 0) {
        cout << "������ �������� � ������������� " << nameAmu << endl;
        kilAmu--;
    }
    else {
        cout << "����������� ������� ��� �������" << endl;
    }
}

void Shooter::dat_amui(const string& name, int kilk)
{
    nameAmu = name;
    kilAmu = kilk;
    cout << "������� �����������: " << nameAmu << ", �������: " << kilAmu << endl;
        
}

