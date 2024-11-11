#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& name, const string& surname, const size_t& age, const string& nomer, const string& visit, const string& nomerForeign)
	:Passport(name,surname,age,nomer), visit(visit) , nomerForeign(nomerForeign)
{
	cout << "\t >>>>>> Ctor Passport >>>>>>" << endl;

}

void ForeignPassport::print() const
{
	cout << "\t Passport" << endl;
	cout << "Name         :: " << name << endl;
	cout << "Surname      :: " << surname << endl;
	cout << "Age	     :: " << age << endl;
	cout << "Nomer	     :: " << nomer << endl;
	cout << "Visits       :: " << visit << endl;
	cout << "Foreign num  :: " << nomerForeign << endl;
}

ForeignPassport::~ForeignPassport()
{
	cout << "\t >>>>>> Dtor Passport >>>>>>" << endl;

}
