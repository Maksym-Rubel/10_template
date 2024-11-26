
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <array>
#include <algorithm>
#include <random>

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
	srand(0);
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
	///////////////////////////////////
	cout << "\n\n";
	cout << "\n\n";

	print(v3, "Vector v3");
	cout << "Vector v1 ";
	for (auto it = v1.rbegin(); it != v1.rend(); it++)
	{
		cout << *it << "\t";
	}cout << endl;
	cout << "\n\n";

	for (size_t i = 0; i < v2.size(); i++)
	{
		v2[i] = i + 1;
	}
	

	v2.erase(v2.begin() + 1);
	v2.erase(v2.end() - 1);

	for (size_t i = 0; i < v2.size(); i++)
	{
		int a = rand() % 10;
		swap(v2[i],v2[a]);
	}
	print(v2, "Vector v2");
	cout << "\n\n";

	vector<int> result;
	
	for (size_t i = 0; i < v4.size(); i++)
	{
		result.push_back(v4[i]);
		result.push_back(v4[i]);


	}
	print(result, "Vector v4");

	cout << "\n\n";

	v5.clear();
	for (size_t i = 0; i < v4.size(); i++)
	{
		if (v4[i] % 2 == 0)
		{
			v5.push_back(v4[i]);
		}


	}
	transform(v5.begin(), v5.end(), v5.begin(), [](auto value) {return value / 2; });

	print(v5, "Vector v5");
	cout << "\n\n";


	int value = 5;
	auto itF = find(v5.begin(), v5.end(), value);
	while (itF != end(v5))
	{
		cout << "Found value :: " << value << " in index " << itF - begin(v5) << endl;
		itF = find(itF + 1, v5.end(), value);
	}

	cout << "Count of value " << value << " = " << count(v5.begin(), v5.end(), value) << endl;



	cout << "\n\n";
	vector<int> v6(v4.size());


	print(v4, "Vector v4");
	print(v5, "Vector v5");


	copy(v4.begin(), v4.end(), v6.begin());
	v4.clear();
	v4.resize(v5.size());
	copy(v5.begin(), v5.end(), v4.begin());
	v5.clear();
	v5.resize(v6.size());

	copy(v6.begin(), v6.end(), v5.begin());


	print(v4, "Vector v4");
	print(v5, "Vector v5");



}

