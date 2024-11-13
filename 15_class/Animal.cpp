#include "Animal.h"


//size_t Animal::last_id = 0;
//
//
//void Animal::setAge(const size_t& age)
//{
//	this->age = age;
//}
//
//void Animal::setPlace(const string& place)
//{
//	if (!place.empty())
//		this->place = place;
//}
//
//const string& Animal::getPlace() const
//{
//	return this->place;
//}
//
//const size_t& Animal::getAge() const
//{
//	return this->age;
//}
//
//void Animal::print() const
//{
//	cout << "\t Animal id    ::#" << id << endl;
//	cout << "\t Animal age   :: " << id << endl;
//	cout << "\t Animal place :: " << id << endl;
//
//}
//
//Animal::Animal(const string& place, const size_t& age)
//{
//	setPlace(place);
//	setAge(age);
//	id = ++last_id;
//
//	cout << ">>>>>>>>>> Ctor Animal id #" << id << endl;
//}
//
//Animal::~Animal()
//{
//	cout << ">>>>>>>>>> Ctor Animal id #" << id << endl;
//
//}

void Student::setAge(const size_t& age)
{
	this->age = age;
}

void Student::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

void Student::setSurname(const string& surname)
{
	if (!surname.empty())
		this->surname = surname;
}

void Student::setGroup(const string& group)
{
	if (!group.empty())
		this->group = group;
}

const string& Student::getName() const
{
	return this->name;
}

const string& Student::getSurname() const
{
	return this->surname;

}

const string& Student::getGroup() const
{
	return this->group;

}

const size_t& Student::getAge() const
{
	return this->age;

}

//void Student::print() const
//{
//	cout << "\t Student" << endl;
//	cout << "Name     :: " << name << endl;
//	cout << "Surname  :: " << surname << endl;
//	cout << "Age	 :: " << age << endl;
//	cout << "Group	 :: " << group << endl;
//	cout << "Studying :: " << boolalpha << isstudying << endl;
//
//
//}

Student::Student(const string& name, const string& surname, const size_t& age, const string& group, bool isstudying)
	:isstudying(isstudying)
{
	setName(name);
	setSurname(surname);
	setAge(age);
	setGroup(group);

	cout << "<<<<<<< Ctor student << " << endl;


}

//Student::~Student()
//{
//	cout << "<<<<<<< Dtor student << " << endl;
//}










void Passport::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

void Passport::setSurname(const string& surname)
{
	if (!surname.empty())
		this->surname = surname;
}

void Passport::setAge(const size_t& age)
{
	this->age = age;
}

void Passport::setNomer(const string& nomer)
{
	if (!nomer.empty())
		this->nomer = nomer;
}

const string& Passport::getName() const
{
	return this->name;
}

const string& Passport::getSurname() const
{
	return this->surname;
}

const string& Passport::getNomer() const
{
	return this->nomer;
}

const size_t& Passport::getAge() const
{
	return this->age;
}

void Passport::print() const
{
	cout << "\t Passport" << endl;
	cout << "Name      :: " << name << endl;
	cout << "Surname   :: " << surname << endl;
	cout << "Age	  :: " << age << endl;
	cout << "Nomer	  :: " << nomer << endl;
}

Passport::Passport(const string& name, const string& surname, const size_t& age, const string& nomer)
{
	setName(name);
	setSurname(surname);
	setAge(age);
	setNomer(nomer);
	cout << "<<<<<<< Ctor Passport << " << endl;

}

Passport::~Passport()
{
	cout << "<<<<<<< Dtor Passport << " << endl;
}
