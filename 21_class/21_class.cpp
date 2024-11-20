#include <iostream>
#include <vector>

#include "IMove.h"

using namespace std;

int main()
{
	Car car("bmw", 190);
	car.start();
	car.upSpeed();

	Horse hr("name", "noporood", 25);
	hr.start();
	hr.downSpeed();
	Driver maks("Maks", &car);
	cout << "Driver set car" << endl;
	maks.testDrive();
	maks.setVehicle(&hr);
	cout << "Driver set horse" << endl;

	maks.testDrive();

}

