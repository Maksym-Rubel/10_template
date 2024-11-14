#include "Dog.h"

void Dog::voice()
{
	cout << "gav-gav-gav" << endl;
}

void Dog::setBreed(const string& breed)
{
	if (!breed.empty())
		this->breed = breed;
}

const string& Dog::getBreed() const
{
	return this->breed;
}

Dog::Dog(const string& name, const size_t& age, const string& weight, const string& breed)
	:homeAnim(name,age,weight), breed(breed)
{

}

void Dog::print() const
{
	cout << "Name    :: " << name << endl;
	cout << "Age     :: " << age << endl;
	cout << "Weight  :: " << weight << endl;
	cout << "Breed   :: " << breed << endl;

}

Dog::~Dog()
{
}
