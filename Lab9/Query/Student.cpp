#include "Student.h"

Student::Student(){}

Student::Student(string firstName, string lastName, string field, int year)
{
        this->firstName = firstName;
        this->lastName = lastName;
        this->field = field;
        this->year = year;
}

char Student::FirstNameLetter() const
{
        return firstName[0];
}

char Student::LastNameLetter() const
{
        return lastName[0];
}

string Student::GetProgram() const
{
        return field;
}

int Student::GetYear() const
{
        return year;
}