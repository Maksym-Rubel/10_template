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



	






}

