#include "homeAnim.h"

void homeAnim::setAge(const size_t& age)
{
	this->age = age;
}

void homeAnim::setWeight(const string& weight)
{
	if (!weight.empty())
		this->weight = weight;
}

void homeAnim::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

const string& homeAnim::getName() const
{
	return this->name;
}

const string& homeAnim::getWeight() const
{
	return this->weight;
}

const size_t& homeAnim::getAge() const
{
	return this->age;

}

void homeAnim::print() const
{
	cout << "Name    :: " << name << endl;
	cout << "Age     :: " << age << endl;
	cout << "Weight  :: " << weight << endl;

}

homeAnim::homeAnim(const string& name, const size_t& age, const string& weight)
{
	setName(name);
	setAge(age);
	setWeight(weight);
}


homeAnim::~homeAnim()
{
}
