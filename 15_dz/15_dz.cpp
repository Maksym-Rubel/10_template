#include <iostream>
#include "lib.h"
#include "Dog.h"
#include "Cat.h"
#include "Papuga.h"




int main()
{
	homeAnim cat("one", 3, "1200g");
	cat.print();
	
	cout << "\n\n";
	Dog dog("two", 4, "2200g", "ddddd");
	dog.print();
	dog.voice();
	cout << "\n\n";

	Cat cat1("two", 4, "2200g", "ddddd");
	cat1.print();
	cat1.voice();
	cout << "\n\n";

	Papuga pap1("three", 2, "1600g", "dwdwdw","red");
	pap1.print();
	pap1.voice();
}

