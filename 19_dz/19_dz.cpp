#include <iostream>
#include "Fortress.h"
//#include "Archer.h"
//#include "Range.h"
//#include "Catapult.h"
#include <Windows.h>
#include "lib.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Fortress f;
	f.print();

	f.Archer::shoot();
	f.Archer::shoot();
	f.Archer::shoot();

	f.Range::shoot();
	f.Range::shoot();

	f.Catapult::shoot();
	f.Catapult::shoot();
	f.Catapult::shoot();





}
