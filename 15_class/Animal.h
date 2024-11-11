#pragma once
#include "lib.h"
//class Animal
//{
//public:
//	void setAge(const size_t& age);
//	void setPlace(const string& place);
//	const string& getPlace() const;
//	const size_t& getAge() const;
//
//
//
//	void print() const;
//	Animal(const string& place = "No place", const size_t& age = 0);
//	~Animal();
//	
//private:
//	size_t age;
//	static size_t last_id;
//protected:
//	string place;
//	size_t id;
//};
//

class Student
{
public:
	void setAge(const size_t& age);
	void setName(const string& name);
	void setSurname(const string& surname);
	void setGroup(const string& group);
	const string& getName() const;
	const string& getSurname() const;
	const string& getGroup() const;
	const size_t& getAge() const;

	void print() const;
	Student(const string& name = "No name", const string& surname = "No surname", const size_t& age = 0, const string& group = "no group",bool isstudying = true);
	~Student();

protected:
	string name;
	string surname;
	size_t age;
	string group;
	bool isstudying = true;

};



class Passport 
{
public:
	void setName(const string& name);
	void setSurname(const string& surname);
	void setAge(const size_t& age);
	void setNomer(const string& nomer);
	const string& getName() const;
	const string& getSurname() const;
	const string& getNomer() const;
	const size_t& getAge() const;

	void print() const;
	Passport(const string& name = "No name", const string& surname = "No surname", const size_t& age = 0, const string& nomer = "no nomer");
	~Passport();

protected:
	string name;
	string surname;
	size_t age;
	string nomer;
};