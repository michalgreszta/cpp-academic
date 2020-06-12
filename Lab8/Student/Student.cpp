#include <iostream>
#include "Student.h"
#include "InvalidNameSurnameException.h"
#include "InvalidNameCharactersException.h"
#include "InvalidAgeException.h"
#include "InvalidProgramException.h"

Student::Student(){}

Student::Student(string firstName, string lastName, int age, string field)
{
        try
        {
            if (validName(firstName))   {this->firstName = firstName;}
            if (validName(lastName))    {this->lastName = lastName;}
            if (validAge(age))          {this->age = age;}
            if (validField(field))      {this->field = field;}
        }

        catch(const InvalidNameSurnameException& e)     {std::cerr << e.what() << '\n';}
        catch(const InvalidNameCharactersException& e)  {std::cerr << e.what() << '\n';}
        catch(const InvalidAgeException& e)             {std::cerr << e.what() << '\n';}
        catch(const InvalidProgramException& e)         {std::cerr << e.what() << '\n';}
        
        
}

bool Student::validName(string name)
{
    // Check if first letter is uppercase
    if(name[0]<65)
    {   
        if((name[0]>31)&&(name[0]<65))
        {
            throw InvalidNameCharactersException(name);
        }
        throw InvalidNameSurnameException(name);
    }
    else if (name[0]>90)
    {
        throw InvalidNameSurnameException(name);
    }
    
    // Check if other letters are lowercase
    for (int i=1; i<name.length(); i++)
    {
        if(name[i]<97)
        {   
            if((name[i]>31)&&(name[i]<65))
            {
                throw InvalidNameCharactersException(name);
            }
            throw InvalidNameSurnameException(name);
        }
        else if (name[i]>122)
        {
            throw InvalidNameSurnameException(name);
        }
    }
    return true;
}

bool Student::validField(string field)
{
    for (int i=0; i<5; i++)
    {
        if(fields[i] == field)
        {
            return true;
        }
    }
    throw InvalidProgramException(field);
}

bool Student::validAge(int age)
{
    if ((age > 9) && (age < 101))
    {
        return true;
    }
    else
    {
        throw InvalidAgeException(age);
    }
    
}

