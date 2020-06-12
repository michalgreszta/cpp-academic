#ifndef PESEL_H
#define PESEL_H
#include <string>
using std::string;

class Pesel
{
    public:
        Pesel(string pesel);

    private:
        string pesel;
        bool validatePESEL(string id);        
};


#endif //PESEL_H