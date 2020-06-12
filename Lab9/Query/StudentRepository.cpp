#include <iostream>
#include "StudentRepository.h"

std::vector<Student> StudentRepository::FindByQuery(const Query &query)
{
    std::vector<Student> result;
    for (int i=0; i<listOfStudents.size(); i++) 
    {   
        if(query.Accept(listOfStudents[i]))
        {
            result.push_back(listOfStudents[i]); 
        }                                        
    }
    return result;
}

void StudentRepository::AddStudent(const Student& person)
{
    listOfStudents.push_back(person);
}