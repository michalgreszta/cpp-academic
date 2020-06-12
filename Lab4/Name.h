#ifndef NAME_H
#define NAME_H
#include <string>
using ::std::string;

class Name
{

    public:
        Name();
        Name(string firName, string surName);
        Name(string firName, string secName, string Surname);
        Name(string firName, string secName, string thrdName, string Surname);
        virtual ~Name();

        string ToFullInitials();
        string ToFirstNamesInitials();
        string ToSurnameNames();
        string ToNamesSurname();
        bool IsBeforeBySurname(const Name &other) const;
        bool IsBeforeByFirstName(const Name &other) const;

    private:
        string FirstName;
        string SecondName;
        string ThirdName;
        string Surname;
};

#endif // NAME_H
