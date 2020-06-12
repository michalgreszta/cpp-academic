#ifndef STUDENTREPOSITORY_H
#define STUDENTREPOSITORY_H
#include <vector>
#include "Student.h"

class StudentRepository{
    public:
        void AddStudent(const Student& person);
        int NumberOfStudents() const;
        Student operator[](int index) const;

    private:
        std::vector<Student> listOfStudents;
};

#endif // STUDENTREPOSITORY_H
