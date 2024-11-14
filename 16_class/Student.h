#pragma once
#include "Person.h"
class Student
	:virtual public Person
{
public:
	Student(const string& name = "Noname", const string& specialization = "No spec");
	void print() const;
	~Student();
protected:
	/*string name;*/
	string specialization;

};
