#pragma once
#include "lib.h"
class homeAnim
{
public:
		void setAge(const size_t& age);
		void setWeight(const string& weight);
		void setName(const string& name);
		const string& getName() const;
		const string& getWeight() const;
		const size_t& getAge() const;
	
	
	
		void print() const;
		homeAnim(const string& name = "No name", const size_t& age = 0, const string& weight = "No weight");
		~homeAnim();
		
	protected:
		string name;
		size_t age;
		string weight;

};

