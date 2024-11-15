
#include <iostream>
#include <vector>

#include "Circle.h"
#include "Shape.h"
#include "Point.h"
#include "Cylindr.h"
using namespace std;


int main()
{
    vector<Shape*> v{new Point(), new Circle(5.0), new Cylindr(5.0, 10.0)};
	for (auto& i : v)
	{
		i->printShapeName();
		i->print();
		cout << "Area: " << i->area() << endl;
		cout << "Volume: " << i->volume() << endl;
		cout << "----------------------" << endl;

	}
}
