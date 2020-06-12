#include "Student.h"
#include <iostream>

Student::Student(string name)
{
    this->name = name;
}

std::ostream &operator<<(std::ostream &output, const Student &student)
{
    output << student.name;
    return output;
}