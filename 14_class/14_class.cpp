#include <iostream>
#include "List.h"
using namespace std;
int main()
{
    List<int> list;
	List<int> list2;



	for (size_t i = 0; i < 5; i++)
	{
		list.addHead(rand() % 50);
		/*list.print();*/
	}
	cout << "\n\n";
	
	list.print();
	list.printR();


	
	cout << endl;
	list.print();
	list.addTail(4);
	list.print();
	cout << endl;

	list.removeTail();
	list.print();
	list.printR();

	cout << endl;
	//list.clear();
	//list.print();


	cout << endl;

	cout << "List 2"<< endl;

	list2 = list;

	list2.print();
	list.addTail(4);
	list.print();



	
	list.inlist(5, 2);
	list.print();
	list.outlist(2);
	list.print();
	cout << list.index(4) << endl;


	cout << "replace count : " << list.research(17, 20) << endl;
	list.print();


	list.repd();
	list.print();







}

