#include "Catapult.h"



void Catapult::dat_amui(const string& name, int kilk)
{
    canameAmu = name;
    cakilAmu = kilk;
    cout << "������� �����������: " << canameAmu << ", �������: " << cakilAmu << endl;
}

void Catapult::shoot()
{
    if (cakilAmu > 0) {
        cout << "���������� ������: ������ � " << canameAmu << "." << endl;
        cakilAmu--;
    }
    else {
        cout << "��������� ����� ������� ��� �������." << endl;
    }
}

