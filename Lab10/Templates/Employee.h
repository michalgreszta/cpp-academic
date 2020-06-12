#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using std::string;

class Employee
{
    public:
        string name;
        Employee(){};
        Employee(string name);
        friend std::ostream &operator<<(std::ostream &output, const Employee &employee);
};

#endif // EMPLOYEE_H