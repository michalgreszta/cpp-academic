#include <iostream>
#include "Student.h"
#include "StudyYear.h"
#include "StudentRepository.h"

int main()
{
    StudyYear rok1(4), rok2(3), rok3(2), rok4(1);
    Student osoba1("Jan","Kowalski","Mechanics","123",rok1);
    Student osoba2("Ban","Kowalski","Mechanics","123",rok2);
    Student osoba3("Kan","Kowalski","Mechanics","123",rok3);
    Student osoba4("Dan","Kowalski","Mechanics","123",rok4);

    StudentRepository listOfStudents;
    listOfStudents.AddStudent(osoba1);
    listOfStudents.AddStudent(osoba2);
    listOfStudents.AddStudent(osoba3);
    listOfStudents.AddStudent(osoba4);

    return 0;
}
