#include "Papuga.h"

void Papuga::voice()
{
	cout << "Hello World!!!" << endl;
}

void Papuga::setBreed(const string& breed)
{
	if (!breed.empty())
		this->breed = breed;
}

void Papuga::setColor(const string& color)
{
	if (!color.empty())
		this->color = color;
}

const string& Papuga::getColor() const
{
	return this->color;
}

const string& Papuga::getBreed() const
{
	return this->breed;
}

Papuga::Papuga(const string& name, const size_t& age, const string& weight, const string& breed, const string& color)
	:homeAnim(name, age, weight), breed(breed), color(color)
{

}

void Papuga::print() const
{
	cout << "Name    :: " << name << endl;
	cout << "Age     :: " << age << endl;
	cout << "Weight  :: " << weight << endl;
	cout << "Breed   :: " << breed << endl;
	cout << "Color   :: " << color << endl;


}

Papuga::~Papuga()
{
}

