
#include <iostream>
#include <vector>

#include "Family.h"
using namespace std;
int main()

{

	Grandpa ann("Ann",67);
	Daddy denis("Denis", 40);
	Son ivan("Ivan", 16);;
	vector<Grandpa*> peoples{ &ann, &denis, &ivan };
	for (auto& i : peoples)
	{
		i->Sleep();
		Daddy* s = dynamic_cast<Daddy*>(i);
		if (s != nullptr)
			s->Walk();
		Son* a = dynamic_cast<Son*>(i);
		if (a != nullptr)
		{
			a->Play();
		}
			
		cout << "\n======================\n\n";
	}
	for (auto& i : peoples)
	{
		i->Sleep();
		if (typeid(*i) == typeid(Daddy))
		{
			static_cast<Daddy*>(i)->Walk();
		}
		if (typeid(*i) == typeid(Son))
		{
			static_cast<Son*>(i)->Walk();
			static_cast<Son*>(i)->Play();
		}
		cout << "\n======================\n\n";

	}
}
