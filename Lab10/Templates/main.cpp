#include <iostream>
#include <vector>
#include "RepoTemplate.h"
#include "Employee.h"
#include "Student.h"

using namespace std;

int main()
{
    // Creates repo of employees
    Employee emp1("Jan"), emp2("Jarek"), emp3("Karol");
    Repository<Employee> empRepo;
    empRepo.AddMember(emp1);
    empRepo.AddMember(emp2);
    empRepo.AddMember(emp3);

    // Creates repo of students
    Student stu1("Andrzej"), stu2("Darek"), stu3("Lech");
    Repository<Student> stuRepo;
    stuRepo.AddMember(stu1);
    stuRepo.AddMember(stu2);
    stuRepo.AddMember(stu3);

    cout << "Pracownicy: " << endl;
    for (int i=0; i<empRepo.Size(); i++)
    {
        cout << empRepo[i] << endl;
    }

    cout << endl;
    cout << "Studenci: " << endl;
    for (int i=0; i<stuRepo.Size(); i++)
    {
        cout << stuRepo[i] << endl;
    }

    vector<Employee> EmployVec = empRepo.FindByQuery(ByFirstName<Employee>('J'));
    vector<Student> StudentVec = stuRepo.FindByQuery(ByFirstName<Student>('D'));

    cout << endl;
    cout << "Pracownicy na 'J': " << EmployVec.size() << endl;
    cout << "Studenci na 'D': " << StudentVec.size() << endl;
    return 0;
}