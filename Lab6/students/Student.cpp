#include "Student.h"

Student::Student(){}

Student::Student(string firstName, string lastName, string field, string id, StudyYear &year)
{
        this->firstName = firstName;
        this->lastName = lastName;
        this->field = field;
        this->id = id;
        this->year = year;
}

void Student::SetId(string x)
{
    this->id = x;
}

string Student::GetId() const
{
    return id;
}

std::ostream &operator<<(std::ostream &output, const Student &student)
{
    output << "{id: \"" << student.id
           << "\", firstName: \"" << student.firstName
           <<"\", lastName: \"" << student.lastName
           << "\", field: \"" << student.field
           << "\", year: " << student.year
           << "}";
    return output;
}

std::istream &operator>>(std::istream &input, Student &student)
{
    input >> student.id >> student.firstName >> student.lastName >> student.field >> student.year;
    return input;
}
