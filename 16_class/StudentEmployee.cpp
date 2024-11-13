#include "StudentEmployee.h"

StudentEmployee::StudentEmployee(const string& name, const string& specialization, const string& position)
	:Person(name), Student("", specialization), Employee("---", position)
{
	//this->specialization = specialization;
	//this->position = position;
	//Student::name = nameStudent;
	//Employee::name = nameEmployee;
	cout << "\t\t >>>>>>>>> Ctor Student_Employee :: " << Student::name << " - "<< Employee::name << endl;

}

StudentEmployee::StudentEmployee(const Student& student, const Employee& empl)
	: Person(student), Student(student), Employee(empl)
{

}

StudentEmployee::~StudentEmployee()
{
	cout << "\t\t >>>>>>>>> Dtor Student_Employee :: " << Student::name << " - " << Employee::name << endl;

}

void StudentEmployee::print() const
{
	/*Student::print();
	*
	Employee::print();*/
	cout << "Name  :: " << name << endl;
	cout << "Spec  :: " << specialization << endl;
	cout << "Posi  :: " << position << endl;

}
