#include <iostream>
#include <vector>

#include "Person.h"

using namespace std;


/*void funInt(const int& value)
{
	//++const_cast<int&>(value);
	
	int& ref = const_cast<int&>(value);
	ref++;
}

/*void funInt(const int& value)
{
	//++const_cast<int&>(value);

	int& ref = const_cast<int&>(value);
	ref++;
}


void funString(const string& value)
{

	++const_cast<string&>(value)[0];
	string& ref1 = const_cast<string&>(value);
	ref1 += "ddsdad";
}
void funString(const string& value)
{

	++const_cast<string&>(value)[0];
	string& ref1 = const_cast<string&>(value);
	ref1 += "ddsdad";
}

class Person
{
public:
	Person(const string& name = "Noname", const size_t& age = 0)
		:name{name}, age{age}
	{

	}
	const string& getName() const
	{
		//this->name[0] = '0';
		if (islower(name[0]))
		{
			string& ref1 = const_cast<string&>(name);
			ref1[0] = toupper(ref1[0]);
		}
		return name;
	}
	const size_t& getAge() const
	{
		Person* changeThis = const_cast<Person*>(this);
		changeThis->age++;
		changeThis->name += "*";
		return age;

	}
private:
	string name;
	size_t age;
};
int main()
{
	int number = 1000;
	cout << "Number :: " << number << endl;
	funInt(number);
	cout << "Number :: " << number << endl;


	string line = "CONST CAST";
	cout << line << endl;
	funString(line);
	cout << line << endl;

	Person people("dmytro", 22);


}*/

class MyClass1
{
public:
	const int field;
	MyClass1(int f) 
		: field(f) 
	{
	}

};


int main()
{
	/*Person ann("Ann");
	Student denis("Denis","Design");
	Aspirant ivan("Ivan", "Python", "AI");
	

	Person* ptr_denis = &denis;
	ptr_denis->print();

	Person* ptr_ivan = &ivan;
	ptr_ivan->print();
	cout << "\n=====================\n\n";

	vector<Person*> peoples{ &ann,&denis,&ivan };
	for (auto& i : peoples)
	{
		i->print();
		Student* s = dynamic_cast<Student*>(i);
		if (s != nullptr)
			s->lear();
		Aspirant* a = dynamic_cast<Aspirant*>(i);
		if (a != nullptr)
			a->writeDyplom();
		cout << "\n=====================\n\n";
	}*/




	// Завдання 1
	// 
	//const char* t = "my text";
	//cout << t << endl;
	//char* ref3 = const_cast<char*>(t); 
	//ref3[0] = 'h';
	//cout << t << endl;
	// не робить

	cout << "\n\n";


	const string* ps = new string("my test");
	cout << *ps << endl;
	string* ref1 = const_cast<string*>(ps);  
	ref1->append( " more text");
	cout << *ps << endl;


	cout << "\n\n";
	const MyClass1 n(40);
	cout << n.field << endl;

	int& ref2 = const_cast<int&>(n.field);
	ref2 = 100;
	cout << n.field << endl;

}














