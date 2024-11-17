#include "Shooter.h"

Shooter::Shooter(string nameAmu, int kilAmu)
	:nameAmu(nameAmu),kilAmu(kilAmu)
{
}



void Shooter::shoot()
{
    if (kilAmu > 0) {
        cout << "Постріл здійснено з використанням " << nameAmu << endl;
        kilAmu--;
    }
    else {
        cout << "Недостатньо амуніції для пострілу" << endl;
    }
}

void Shooter::dat_amui(const string& name, int kilk)
{
    nameAmu = name;
    kilAmu = kilk;
    cout << "Амуніція встановлена: " << nameAmu << ", кількість: " << kilAmu << endl;
        
}

