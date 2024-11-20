#pragma once
#include <iostream>
using namespace std;
class Grandpa
{
	string name;
	size_t age;
public:
	Grandpa() = default;
	Grandpa(string name = "Noname", size_t age = 70)
		:age(age)
	{
		setName(name);
	}
	void setName(const string& name)
	{
		if (!name.empty())
		{
			this->name = name;
		}
	}
	virtual void Sleep()
	{
		cout << "Grandpa Sleep" << endl;
	}
};
class Daddy
	: public Grandpa
{
	string name;
	size_t age;
public:
	Daddy() = default;
	Daddy(string name = "Noname", size_t age = 70)
		:Grandpa(name,age)
	{
		
	}
	
	void Sleep() override
	{
		cout << "Daddy Sleep" << endl;
	}
	virtual void Walk()
	{
		cout << "Daddy Walk" << endl;
	}
};
class Son
	: public Daddy
{
	string name;
	size_t age;
public:
	Son() = default;
	Son(string name = "Noname", size_t age = 70)
		:Daddy(name, age)
	{

	}

	void Sleep() override
	{
		cout << "Son Sleep" << endl;
	}
	void Walk() override
	{
		cout << "Son Walk" << endl;
	}
	virtual void Play()
	{
		cout << "Son Play" << endl;
	}
};

