#include "Range.h"


void Range::shoot()
{
    if (kilAmu > 0) {
        cout << "�������� ������: ������ � " << nameAmu << "." << endl;
        kilAmu--;
    }
    else {
        cout << "��������� ����� ������� ��� �������." << endl;
    }
}

