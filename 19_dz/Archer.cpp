#include "Archer.h"





void Archer::shoot()
{
    if (kilAmu > 0) {
        cout << "������ ������: ������ � " << nameAmu << "." << endl;
        kilAmu--;
    }
    else {
        cout << "������� ����� ������� ��� �������." << endl;
    }
}

