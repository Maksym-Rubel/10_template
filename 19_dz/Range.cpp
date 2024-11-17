#include "Range.h"


void Range::shoot()
{
    if (kilAmu > 0) {
        cout << "Рейнджер стріляє: постріл зі " << nameAmu << "." << endl;
        kilAmu--;
    }
    else {
        cout << "Рейнджеру бракує амуніції для пострілу." << endl;
    }
}

