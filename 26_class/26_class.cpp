#include <iostream>
#include <string>

#include <fstream>
using namespace std;

void writeToFIleArary(const int* arr, const size_t& size, const string& pathFile);
void showFile(const string& pathFile);
int* readFromFileArray(size_t& size,const string& pathFile);




int main()
{
	const size_t SIZE = 5;
	int arr[SIZE]{ 4,14,-5,23,56 };
	string fname = "number.txt";
	//writeToFIleArary(arr, SIZE, fname);
	showFile(fname);
	cout << "\n====================================\n";
	size_t size;
	int* mas = readFromFileArray(size, fname);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

}

void writeToFIleArary(const int* arr, const size_t& size, const string& pathFile)
{
	ofstream file;
	file.open(pathFile, ios_base::app);
	if (!file.good())
	{
		cout << "Error.File not open " << endl;
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		file << arr[i] << "\n";
	}
}

void showFile(const string& pathFile)
{
	fstream file(pathFile, ios_base::in);
	if (!file.good())
	{
		cout << "Error.File not open " << endl;
		return;
	}
	cout << "================= file.rdbuf() ================" << endl;
	cout << file.rdbuf() << endl;
	cout << "\n================= line by line ==============" << endl;
	file.seekg(0);

	string line;
	while (getline(file,line))
	{
		cout << line << "\n";
	}

}

int* readFromFileArray(size_t& size, const string& pathFile)
{
	size = 0;
	fstream file(pathFile, ios_base::in);
	if (!file.good())
	{
		cout << "Error.File not open " << endl;
		return nullptr;
	}
	int value;
	while (file >> value) ++size;

	int* tmp = new int[size];
	file.clear();
	file.seekg(0, ios_base::beg);
	int i = 0;
	while (file >> value)
	{
		tmp[i] = value;
		i++;
	}
	return tmp;
}
