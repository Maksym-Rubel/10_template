#include "Employee.h"

Employee::Employee(const string& name, const string& position)
	:Person(name) , position(position)
{
	cout << "\t\t >>>>>>>>> Ctor Employee :: " << this->name << endl;

}

void Employee::print() const
{
	cout << "Employee name     :: " << name << endl;
	cout << "Employee position :: " << position << endl;
}

Employee::~Employee()
{
	cout << "\t\t >>>>>>>>> Dtor Employee :: " << this->name << endl;
}
