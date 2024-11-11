#include <iostream>
#include "Aspirant.h"
#include "ForeignPassport.h"




using namespace std;

int main()
{
	
	//Animal animal("South Africa", 3);
	//animal.print();


	//Lion lion("North Africa", 4, false);
	//lion.print();

	//cout << "\n\n";
	////lion.Animal::print();

	//Wolf wolf("Africa", 5, 30);
	//wolf.print();

	//cout << "\n\n";

	//Dog dog("Ukraine", 10,15,"Oleg");
	//dog.print();



	//cout << "\n\n";

	//Animal arr[4]{ animal,lion,wolf,dog };
	//for (auto& i : arr)
	//{
	//	i.print();
	//	cout << endl;
	//}
	//cout << "\n\n";

	Student stud("Maksym","Rubel", 15,"PV421");
	stud.print();

	Aspirant stud2("Maksym", "Rubel", 15, "PV421", true, "C++" , "01.12.24");
	stud2.print();

	cout << "\n\n";
	cout << "\n\n";
	Passport pasp1("Maksym","Rubel", 15,"1234345343");
	pasp1.print();



	ForeignPassport pasp2("Maksym", "Rubel", 15, "1234345343", "Poland(24.12.24 - 05.01.25)","231235654934");
	pasp2.print();

	

}

