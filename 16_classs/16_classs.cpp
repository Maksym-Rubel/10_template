

#include <iostream>
#include "SircleSquare.h"
#include "Square.h"
#include "Kolo.h"

using namespace std;
int main()
{
    SircleSquare shape(5.0);  

    cout << "Total length of the figure: " << shape.Lengthfigure() << endl;
    cout << "Area of ​​a part of a figure: " << shape.areaDifference() << endl;


    Kolo ko(5.0);
    ko.print();
    Square ko1(5.0);
    ko1.print();

    cout << "Area of ​​a circle with radius 5 --> " << ko.square() << endl;
    cout << "The length of a circle with a radius 5 --> " << ko.length() << endl;



}

