#ifndef STUDENTREPOSITORY_H
#define STUDENTREPOSITORY_H
#include <vector>
#include "Student.h"
#include "Query.h"

class StudentRepository{
    public:
        std::vector<Student> FindByQuery(const Query &query);   
        void AddStudent(const Student& person);

    private:
        std::vector<Student> listOfStudents;
};

#endif // STUDENTREPOSITORY_H
