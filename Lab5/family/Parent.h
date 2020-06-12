#ifndef PARENT_H
#define PARENT_H
#include <string>
#include "Child.h"
using std::string;

class Parent{
    public:
        Parent(string name, string surname, int age);
        Parent(string name, string surname, int age, Child& child);
        void AddChild(Child& child);
        void AssignToOtherSchool(string newSchool);
        string ShowKidSchool();

    private:
        string name;
        string surname;
        int age;
        Child child;
};

#endif // PARENT_H
