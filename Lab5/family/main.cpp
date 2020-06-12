#include <iostream>
#include <string>
#include "Parent.h"
#include "Child.h"

using namespace std;

int main()
{
    Child syn("Jan","Kowalski",7,"St.Hugo");
    Parent tata("Marian", "Kowalski", 25, syn);

    cout << "Przed zmiana: " << tata.ShowKidSchool() << endl;
    tata.AssignToOtherSchool("St. Domingo");
    cout << "Po zmianie: " << tata.ShowKidSchool() << endl;

    return 0;
}
