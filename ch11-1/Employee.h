#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Person.h"

using namespace std;

class Employee : public Person
{
private:
	double wage = 0;
public:
	Employee() {}
	Employee(string name, double wage) : Person(name) { Employee::wage = wage; }
	void print();
};
#endif