#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using std::string;

class Student{
    public:
        Student();
        Student(string firstName, string lastName, string field, int year);
        char FirstNameLetter() const;
        char LastNameLetter() const;
        string GetProgram() const;
        int GetYear() const;

    private:
        string firstName;
        string lastName;
        string field;
        int year;
};

#endif // STUDENT_