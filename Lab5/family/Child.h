#ifndef CHILD_H
#define CHILD_H
#include <string>
using std::string;

class Child{
    public:
        Child();
        Child(string name, string surname, int age, string school);
        friend class Parent;

    private:
        string name;
        string surname;
        int age;
        string school;
};
#endif // CHILD_H
