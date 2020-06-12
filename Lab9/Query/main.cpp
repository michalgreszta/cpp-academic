#include <iostream>
#include <memory>
#include "Query.h"
#include "StudentRepository.h"

using namespace std;

int main()
{
    Student jan("asd","asd","asd", 5);
    Student dan("asd","asd","bsd", 4);
    Student man("asd","bsd","bsd", 3);

    StudentRepository repo;
    repo.AddStudent(jan);
    repo.AddStudent(man);
    repo.AddStudent(dan);

    ByFirstName byfirst('a');
    ByLastName bylast('b');
    ByOneOfPrograms byprogram("asd");
    ByYearLowerOrEqualTo byear(3);

    std::unique_ptr<Query> uptr(new ByFirstName('a'));
    std::unique_ptr<Query> uptr1(new ByYearLowerOrEqualTo(4));
    AndQuery test(uptr, uptr1);
    
    vector<Student> myVec;
    myVec = repo.FindByQuery(test);
    std::cout << myVec.size() << std::endl;
    return 0;
}