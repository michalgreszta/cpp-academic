#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
using std::string;

class Student{
    public:
        Student();
        Student(string firstName, string lastName, int age, string field);

    private:
        string firstName;
        string lastName;
        int age;
        string field;
        std::vector<string> fields = {"Informatyka", "Ekonomia", "Matematyka", "Fizyka", "Filozofia"};

        bool validName(string name);
        bool validAge(int age);
        bool validField(string field);

};

#endif // STUDENT_H
