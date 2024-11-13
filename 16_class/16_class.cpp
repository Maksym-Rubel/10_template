#include <iostream>
#include "Student.h"
#include "Employee.h"
#include "StudentEmployee.h"



using namespace std;

int main()
{
    Employee emp("Denis","Manager");
    emp.print();
    cout << "\n\n";

    Student st("denis", "Builder");
    st.print();
    cout << "\n\n";

    //StudentEmployee se("Sasha", "Frint-end" ,"Director");

  /*  se.Student::print();
    se.Employee::print();*/
    StudentEmployee se(st, emp);
    se.print();

    cout << "\n\n";
}

