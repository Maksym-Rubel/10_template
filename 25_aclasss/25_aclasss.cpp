
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

template<typename ContType>
void print(const ContType& cont, const string& prompt = "")
{
	cout << prompt << " :: ";
	for (const auto& el : cont)
	{
		cout << el << "\t";
	}cout << endl;
}
int main()
{
	vector<int> v1 (10);
	vector<int> v2(10,0);
	vector<int> v4(10);



	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << "Enter number ";
		int a;
		cin >> a;
		v1[i] = a;
	}
	cout << "Enter size ";

	int b;
	cin >> b;
	vector<int> v3(b);
	for (size_t i = 0; i < v3.size(); i++)
	{
		v3[i] = (rand() % 10) + 1;
	}

	print(v1, "Vector v1");
	print(v2, "Vector v2");
	print(v3, "Vector v3");
	copy(v1.begin(), v1.end(), v4.begin());
	print(v4, "Vector v4");
	vector<int> v5(b-2);

	copy(v3.begin() + 1, v3.end() - 1, v5.begin());
	print(v5, "Vector v5");



}

