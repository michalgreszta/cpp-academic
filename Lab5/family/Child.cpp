#include "Child.h"

Child::Child()
{
    this->name = "";
    this->surname = "";
    this->age = 0;
    this->school = "";
}

Child::Child(string name, string surname, int age, string school)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->school = school;
}

