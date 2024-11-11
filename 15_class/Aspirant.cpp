#include "Aspirant.h"

Aspirant::Aspirant(const string& name, const string& surname, const size_t& age, const string& group, bool isstudying, const string& theme, const string& date)
	:Student(name, surname, age, group, isstudying) , theme(theme) , date(date)
{
	cout << "\t >>>>>> Ctor Aspirant >>>>>>" << endl;

}

void Aspirant::print() const
{
	cout << "\t Student" << endl;
	cout << "Name      :: " << name << endl;
	cout << "Surname   :: " << surname << endl;
	cout << "Age	  :: " << age << endl;
	cout << "Group	  :: " << group << endl;
	cout << "Studying  :: " << boolalpha << isstudying << endl;
	cout << "Theme     :: " << theme << endl;
	cout << "Date exams :: " << date << endl;

}

Aspirant::~Aspirant()
{
	cout << "\t >>>>>> Dtor Aspirant >>>>>>" << endl;

}
