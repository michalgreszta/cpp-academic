#include "Employee.h"
#include <iostream>

Employee::Employee(string name)
{
    this->name = name;
}

std::ostream &operator<<(std::ostream &output, const Employee &employee)
{
    output << employee.name;
    return output;
}