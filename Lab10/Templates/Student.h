#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using std::string;

class Student
{
    public:
        string name;
        Student(){};
        Student(string name);
        friend std::ostream &operator<<(std::ostream &output, const Student &student);
};

#endif // STUDENT_H