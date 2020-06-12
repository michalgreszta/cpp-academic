#include "Query.h"

ByFirstName::ByFirstName(char key)
{
    this->key = key;
}

bool ByFirstName::Accept(const Student& student) const
{
    if (student.FirstNameLetter() == key)
    {                               
        return true;
    }
    return false;
}


ByLastName::ByLastName(char key)
{
    this->key = key;
}

bool ByLastName::Accept(const Student& student) const
{
    if (student.LastNameLetter() == key)
    {                               
        return true;
    }
    return false;
}


ByOneOfPrograms::ByOneOfPrograms(string key)
{
    this->key = key;
}

bool ByOneOfPrograms::Accept(const Student& student) const
{
    if (student.GetProgram() == key)
    {                               
        return true;
    }
    return false;
}


ByYearLowerOrEqualTo::ByYearLowerOrEqualTo(int key)
{
    this->key = key;
}

bool ByYearLowerOrEqualTo::Accept(const Student& student) const
{
    if (student.GetYear() <= key)
    {                               
        return true;
    }
    return false;
}


OrQuery::OrQuery(unique_ptr<Query>& query1, unique_ptr<Query>& query2)
{
    this->query1 = move(query1);
    this->query2 = move(query2);
}

bool OrQuery::Accept(const Student& student) const
{
    return this->query1->Accept(student) || this->query2->Accept(student);
}


AndQuery::AndQuery(unique_ptr<Query>& query1, unique_ptr<Query>& query2)
{
    this->query1 = move(query1);
    this->query2 = move(query2);
}

bool AndQuery::Accept(const Student& student) const
{
    if(this->query1->Accept(student) == true)
    {
        return this->query2->Accept(student);
    }
    return false;
}