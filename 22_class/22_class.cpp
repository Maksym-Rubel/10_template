//#include <iostream>
//using namespace std;
//
//double divi(double a, double b)
//{
//    const int LIMIT = 1'000'000;
//    if (b == 0)
//        throw "Error!!! Divivsion by zero";
//    if (b > LIMIT)
//        throw b;
//    if (b < -LIMIT)
//        throw (int)b;
//
//    return a / b;
//}
//
////void terminate()
////{
////    cout << "Override terminate" << endl;
////    exit(EXIT_FAILURE);
////}
//void my_terminate()
//{
//    cout << "my_terminate worked" << endl;
//    exit(EXIT_SUCCESS);
//}
//
//
//int main()
//{
//    set_terminate(my_terminate);
//    double a, b;
//    cout << "Enter two number :: \n";
//    while (cin >> a >> b)
//    {
//        try
//        {
//            cout << a << "/" << b << " = " << divi(a, b) << endl;
//        }
//        catch (const char* ex)
//        {
//            cout << ex << endl;
//        }
//        catch (double ex)
//        {
//            cout << "Big number ----> " << ex << endl;
//        }
//        catch (int ex)
//        {
//            cout << "Small number ----> " << ex << endl;
//        }
//        catch (...)
//        {
//            cout << "Default catch " << endl;
//        }
//    }
//}
//







#include <iostream>
using namespace std;


//class MyException
//{
//	string message;
//	double value;
//public:
//	MyException(const string& message = "None", double value = 0)
//		:message(message), value(value)
//	{
//	}
//	const string& what() const
//	{
//		return message;
//	}
//	const double& getValue() const
//	{
//		return value;
//	}
//};
//
//class DivisionByZero : public MyException
//{
//public:
//	DivisionByZero(const string& message = "None")
//		:MyException(message)
//	{}
//};
//
//class TooBigNumber : public MyException
//{
//	static const int LIMIT_UP = 1'000'000;
//public:
//	TooBigNumber(const string& message = "None", double value = 0)
//		:MyException(message,value)
//	{
//
//	}
//};
//class TooSmallNumber : public MyException
//{
//	static const int LIMIT_DOWN = -1'000'000;
//public:
//	TooSmallNumber(const string& message = "None", double value = 0)
//		:MyException(message, value)
//	{
//
//	}
//};
//double divi(double a, double b)
//{
//    const int LIMIT = 1'000'000;
//	if (b == 0)
//		throw DivisionByZero("Division by zero");
//	if (b > LIMIT)
//		throw TooBigNumber("To big number", b);
//	if (b < -LIMIT)
//		throw TooSmallNumber("To small number", b);
//
//    return a / b;
//}
//
//
//int main()
//{
//    double a, b;
//    cout << "Enter two number :: \n";
//    while (cin >> a >> b)
//    {
//        try
//        {
//            cout << a << "/" << b << " = " << divi(a, b) << endl;
//        }
//		catch (const DivisionByZero& ex)
//		{
//			cout << "Exception :: "<< typeid(ex).name() << "\t Message :: " << ex.what() << endl;
//			cout << "Bad value :: " << ex.getValue() << endl;
//
//		}
//        catch (const TooBigNumber& ex)
  //      {
		//	cout << "Exception :: " << typeid(ex).name() << "\t Message :: " << ex.what() << endl;
		//	cout << "Bad value :: "<< ex.getValue() << endl;
  //      }
  //      catch (const TooSmallNumber& ex)
  //      {
		//	cout << "Exception :: " << typeid(ex).name() << "\t Message :: " << ex.what() << endl;
		//	cout << "Bad value :: " << ex.getValue() << endl;
  //      }
		//catch (const MyException& ex)
		//{
		//	cout << "Exception :: " << typeid(ex).name() << "\t Message :: " << ex.what() << endl;
		//	cout << "Bad value :: " << ex.getValue() << endl;
		//}
  //      catch (...)
//        {
//            cout << "Default catch " << endl;
//        }
//    }
//}


//void fnT(int& value)
//{
//	try
//	{
//		if (value < 0)
//		{
//			throw exception("Error!!! value < 0");
//		}
//	}
//	catch (const std::exception& ex)
//	{
//		cout << "Inner catch " << endl;
//		throw;
//	}
//	value *= 2;
//
//	
//}
//
//int main()
//{
//	int number = -10;
//	try
//	{
//		fnT(number);
//		cout << "Number :: " << number << endl;
//	}
//	catch (const std::exception& ex)
//	{
//		cout << "Outer catch " << endl;
//		cout << "Message :: " << ex.what() << endl;
//
//
//	}
//}





//class Cat {
//	char* name = nullptr;
//	int age = 0;
//public: 
//	Cat(const char* name, int age)
//	{
//		setName(name);
//		try
//		{
//			setAge(age);
//		}
//		catch (...)
//		{
//			this->~Cat();
//			throw;
//		}
//
//	}
//	void setAge(const int& age)
//	{
//		if (age < 0)
//			throw invalid_argument("Error:: Age < 0");
//		this->age = age;
//	}
//	void setName(const char* name)
//	{
//		if (this->name != nullptr)
//			delete[] this->name;
//		int size = strlen(name) + 1;
//		this->name = new char[size];
//		strcpy_s(this->name, size, name);
//
//	}
//	~Cat()
//	{
//		cout << "------------- Dtor done -------------" << endl;
//		delete[] name;
//	}
//};

//int main()
//{
//	try
//	{
//		Cat cat("Barsik", -2);
//		cout << "Ok1 Object created" << endl;
//	}
//	catch (const std::exception& ex)
//	{
//		cout << "Exception :: " << typeid(ex).name() << "\t Message :: " << ex.what() << endl;
//	}
//}


#include<exception>
#include<string>
#include<vector>
using namespace std;


int main()
{
	string str = "12dsds4512";
	try
	{
		int value = stoi(str);
		cout << "Value :: " << value << "\t type(" << typeid(value).name() << ")" << endl;
	}
	catch (const std::exception& ex)
	{
		cout << "Exception :: " << typeid(ex).name() << "\t Message :: " << ex.what() << endl;
	}
	
	vector<int> v{ 1,2,3,4 };
	cout << "v[5] :: " << v[5] << endl;

}



































