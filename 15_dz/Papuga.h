#pragma once
#include "homeAnim.h"
class Papuga
	: public homeAnim
{
public:
	void voice();
	void setBreed(const string& breed);
	void setColor(const string& color);
	const string& getColor() const;
	const string& getBreed() const;
	Papuga(const string& name = "No name", const size_t& age = 0, const string& weight = "No weight", const string& breed = "No breed", const string& color = "No color");
	void print() const;
	~Papuga();
private:

	string breed;
	string color;


};
