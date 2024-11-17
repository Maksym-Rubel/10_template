#include "Archer.h"





void Archer::shoot()
{
    if (kilAmu > 0) {
        cout << "Лучник стріляє: постріл зі " << nameAmu << "." << endl;
        kilAmu--;
    }
    else {
        cout << "Лучнику бракує амуніції для пострілу." << endl;
    }
}

