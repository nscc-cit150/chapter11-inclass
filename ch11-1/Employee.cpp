#include "Employee.h"

void Employee::print()
{
	Person::print();
	cout << "wage = " << wage << endl;
}