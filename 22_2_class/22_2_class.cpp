#include <iostream>
#include <cmath>
#include "MyArray.h"
using namespace std;

double calcTrykut(double a, double b, double c)
{
    if (a <= 0 or b <= 0 or c <= 0)
        throw invalid_argument("All side must be > 0");
    if (a + b <= c or a + c <= b or c + b <= a)
    {
        throw invalid_argument("Trykutnuk ne wyhodut");
    }
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

int main()
{
   try {
        double a, b, c;
        cout << "Enter sies : ";
        cin >> a >> b >> c;

        double area = calcTrykut(a, b, c);
        cout << "Area : " << area << endl;
    }
    catch (const std::invalid_argument& ex) {
        cout << "Error: " << ex.what() << std::endl;
    }

    MyArray<int> arr;
    arr.setSize(5, 2);
    arr.Add(10);
    arr.Add(20);
    arr.Add(30);
    arr.Add(40);
    arr.Add(50);
    try
    {
        cout << arr[100] << endl;
    }
    catch (const IndexOutOfRangeException& ex)
    {
        cout << ex.what() << endl;
    }
   
}