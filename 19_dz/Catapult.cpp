#include "Catapult.h"



void Catapult::dat_amui(const string& name, int kilk)
{
    canameAmu = name;
    cakilAmu = kilk;
    cout << "Амуніція встановлена: " << canameAmu << ", кількість: " << cakilAmu << endl;
}

void Catapult::shoot()
{
    if (cakilAmu > 0) {
        cout << "Катапульта стріляє: постріл зі " << canameAmu << "." << endl;
        cakilAmu--;
    }
    else {
        cout << "Катапульті бракує амуніції для пострілу." << endl;
    }
}

