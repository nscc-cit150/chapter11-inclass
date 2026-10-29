#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main()
{
	Person person("Person");
	Employee employee("Person", 25);

	person.print();
	cout << endl;
	employee.print();

	return 0;
}