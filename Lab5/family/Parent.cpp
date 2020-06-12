#include "Parent.h"

Parent::Parent(string name, string surname, int age)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
}

Parent::Parent(string name, string surname, int age, Child& child)
{
    Parent(name, surname, age);
    AddChild(child);
}

void Parent::AddChild(Child& child)
{
    this->child = child;
}

void Parent::AssignToOtherSchool(string newSchool)
{
    child.school = newSchool;
}

string Parent::ShowKidSchool()
{
    return child.school;
}
