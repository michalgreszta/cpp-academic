#include "StudentRepository.h"

void StudentRepository::AddStudent(const Student& person)
{
    listOfStudents.push_back(person);
}

int StudentRepository::NumberOfStudents() const
{
    return (int)listOfStudents.size();
}

Student StudentRepository::operator[](int index) const
{
    if ((index >= listOfStudents.size())|| (index<0))
    {
        std::cout << "Index out of range." << std::endl;
    }
    else    {return listOfStudents[index];}
}
