#include "ArcherTower.h"

void ArcherTower::dat_amui(const string& name, int kilk)
{
    nameAmu = name;
    kilAmu = kilk;
    cout << "Амуніція встановлена: " << nameAmu << ", кількість: " << kilAmu << endl;
}

void ArcherTower::shoot()
{
    if (kilAmu > 0) {
        cout << "Стрілецька вежа стріляє: постріл зі " << nameAmu << "." << endl;
        kilAmu--;
    }
    else {
        cout << "Стрілецькій вежі бракує амуніції для пострілу." << endl;
    }
}


