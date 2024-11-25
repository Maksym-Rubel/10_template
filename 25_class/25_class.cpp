
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;



bool div_3(int number)
{
	return number % 3 == 0;

}

int inc(int number)
{
	return number * 2;
}





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
	const int SIZE = 5;
	array<int, SIZE> arr{ 40,-4,5,38,5 };
	cout << "Print array" << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
	cout << "Print array" << endl;
	for (/*array<int,SIZE>::iterator*/auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << "\t";
	}cout << endl;
	cout << "Print array reverse" << endl;
	for (auto it = arr.rbegin(); it != arr.rend(); it++)
	{
		cout << *it << "\t";
	}cout << endl;
	print(arr, "Print void array");


	auto it = min_element(arr.begin(), arr.end());
	cout << "Min element :: " << *it << "\t index :: " << it - arr.begin() << endl;
	*it *= -1;
	print(arr, "Print Array");

	it = max_element(arr.begin(), arr.end());
	cout << "Max element :: " << *it << "\t index :: " << it - arr.begin() << endl;




	try
	{
		arr.at(5) = 777;
	}
	catch (const std::exception& ex)
	{
		cout << "Bad index :: " << ex.what() << endl;
	}



	cout << "\n\n ============================================================\n\n";
	vector<int> v(arr.begin(), arr.end());
	print(v, "Print vector");

	v.push_back(555);
	v.insert(v.begin() + v.size() / 2, 777);

	print(v, "Print Vector after push and insert");



	cout << "\n\n ============================================================\n\n";

	deque<int> d(v.begin(), v.begin() + v.size() / 2);
	print(d, "Deque print");
	d.resize(v.size(), -1);
	print(d, "Deque print");
	copy(v.rbegin(), v.rend() - v.size() / 2, d.begin() + d.size() / 2);
	print(d, "Deque print");
	d.push_front(10);
	d.push_back(10);
	d.insert(d.begin() + d.size() / 2, 10);
	print(d, "Print Deque");

	int value = 10;
	auto itF = find(d.begin(), d.end(), value);
	while (itF != end(d))
	{
		cout << "Found value :: " << value << " int index " << itF - begin(d) << endl;
		itF = find(itF + 1, d.end(), value);

	}

	cout << "Count of value " << value << " = " << count(d.begin(), d.end(), value) << endl;
	-1

	/*itF = find_if(d.begin(), d.end(), div_3);*/
	if (itF != end(d))
	{
		cout << "Found value " << *itF << " = " << itF - begin(d) << endl;

	}
	else {
		cout << "Number not found" << endl;
	}


	cout << "\n\n ============================================================\n\n";
	vector<int> vv(d.size());
	transform(d.begin(), d.end(), vv.begin(), inc);


	print(vv, "Print Deque");

	sort(vv.begin(), vv.end());
	print(vv, "Print Vector");
	//sort(vv.rbegin(), vv.rend());
	sort(vv.begin(), vv.end(), greater<int>());
	print(vv, "Print Vector");



	int mult = 2;

	auto fun = [mult](int a, int b)->double {
		double res = a / b;
		return res * mult;
		};
	cout << "fun(5,2) ---> " << fun(5, 2) << endl;

	int divisors = 5;
	itF = find_if(d.begin(), d.end(), [divisors](auto value) {return value % divisors == 0; });
	if (itF != end(d))
	{
		cout << "Found value " << *itF << " = " << itF - begin(d) << endl;

	}
	else {
		cout << "Number not found" << endl;
	}


	cout << "number % 5 == 0 " << count_if(d.begin(), d.end(), [divisors](auto a) {return a % divisors == 0; });



	transform(d.begin(), d.end(), vv.begin(), [](auto a) {return a * 10; });


	deque<string>colors{ "red","yellow","blue","orange","purple","pink" };
	auto itColors = max_element(colors.begin(), colors.end(), [](auto s1, auto s2) { return s1.size(); });
	int size = (*itColors).size();
	itColors = find_if(colors.begin(), colors.end(), [size](auto s) { return s.size() == size; });
	while (itColors != colors.end())
	{
		cout << *itColors << endl;
		itColors = find_if(itColors + 1, colors.end(), [size](auto s) { return s.size() == size; });

	}


	print(colors, "Colors :: ");
	sort(colors.begin(), colors.end(), [](auto s1, auto s2) {return tolower(s1[0]) < tolower(s2[0]);});
	print(colors, "Colors :: ");

}
