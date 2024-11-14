#include "Cat.h"

void Cat::voice()
{
	cout << "miau-miau-miau" << endl;
}

void Cat::setBreed(const string& breed)
{
	if (!breed.empty())
		this->breed = breed;
}

const string& Cat::getBreed() const
{
	return this->breed;
}

Cat::Cat(const string& name, const size_t& age, const string& weight, const string& breed)
	:homeAnim(name, age, weight), breed(breed)
{

}

void Cat::print() const
{
	cout << "Name    :: " << name << endl;
	cout << "Age     :: " << age << endl;
	cout << "Weight  :: " << weight << endl;
	cout << "Breed   :: " << breed << endl;

}

Cat::~Cat()
{
}

