#include "Name.h"
#include <sstream>

using namespace std;

Name::Name()
{
    this->FirstName = "";
    this->SecondName = "";
    this->ThirdName = "";
    this->Surname = "";
}

Name::Name(string firName, string surName)
{
    this->FirstName = firName;
    this->SecondName = "";
    this->ThirdName = "";
    this->Surname = surName;
}

Name::Name(string firName, string secName, string surName)
{
    this->FirstName = firName;
    this->SecondName = secName;
    this->ThirdName = "";
    this->Surname = surName;
}

Name::Name(string firName, string secName, string thrdName, string surName)
{
    this->FirstName = firName;
    this->SecondName = secName;
    this->ThirdName = thrdName;
    this->Surname = surName;
}

Name::~Name()
{
    //dtor
}


string Name::ToFullInitials()
{
    stringstream ss;
    ss << this->FirstName[0] << ". ";

    if (this->SecondName != "")
    {
        ss << this->SecondName[0] << ". ";
        if (this->ThirdName != "")
        {
            ss << this->ThirdName[0] << ". ";
        }
    }
    ss << this->Surname[0] << ". ";

    string initials = ss.str();
    return initials;
}

string Name::ToFirstNamesInitials()
{
    stringstream ss;
    ss << this->FirstName[0] << ". ";

    if (this->SecondName != "")
    {
        ss << this->SecondName[0] << ". ";
        if (this->ThirdName != "")
        {
            ss << this->ThirdName[0] << ". ";
        }
    }
    ss << this->Surname;

    string initials = ss.str();
    return initials;
}

string Name::ToSurnameNames()
{
    stringstream ss;
    ss << this->Surname << " " << this->FirstName;

    if (this->SecondName != "")
    {
        ss << " " << this->SecondName;
        if (this->ThirdName != "")
        {
            ss << " " << this->ThirdName;
        }
    }

    string surnameNames = ss.str();
    return surnameNames;
}

string Name::ToNamesSurname()
{
    stringstream ss;
    ss << this->FirstName;

    if (this->SecondName != "")
    {
        ss << " " << this->SecondName;
        if (this->ThirdName != "")
        {
            ss << " " << this->ThirdName;
        }
    }
    ss << " " << this->Surname;

    string surnameNames = ss.str();
    return surnameNames;
}

bool Name::IsBeforeBySurname(const Name &other) const
{
    int firstInitial = this->Surname[0];
    int secondInitial = other.Surname[0];

    if(firstInitial < secondInitial){
        return true;
    }
    else{
        return false;
    }
}

bool Name::IsBeforeByFirstName(const Name &other) const
{
    int firstInitial = this->FirstName[0];
    int secondInitial = other.FirstName[0];

    if(firstInitial < secondInitial){
        return true;
    }
    else{
        return false;
    }
}
