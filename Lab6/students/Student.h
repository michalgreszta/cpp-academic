#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "StudyYear.h"
using std::string;

class Student{
    public:
        Student();
        Student(string firstName, string lastName, string field, string id, StudyYear &year);
        void SetId(string x);
        string GetId() const;
        friend std::ostream &operator<<(std::ostream &output, const Student &student);
        friend std::istream &operator>>(std::istream &input, Student &student);

    private:
        string firstName;
        string lastName;
        string field;
        string id;
        StudyYear year;

};

#endif // STUDENT_H
