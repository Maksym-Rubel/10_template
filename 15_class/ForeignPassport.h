#pragma once
#include "Animal.h"
class ForeignPassport :
    public Passport
{
public:
	ForeignPassport(const string& name = "No name", const string& surname = "No surname", const size_t& age = 0, const string& nomer = "no nomer", const string& visit = "No visit", const string& nomerForeign = "No nomerForeign");
	void print() const;
	~ForeignPassport();
private:
	string visit;
	string nomerForeign;
};

