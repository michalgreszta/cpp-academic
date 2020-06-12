#include <iostream>
#include <stdexcept>
#include "PESEL.h"

Pesel::Pesel(string pesel)
{
    if(validatePESEL(pesel))
    {
        this->pesel = pesel;
        std::cout << "Correct!" << std::endl;
    }
    else
    {
        throw std::invalid_argument("Invalid PESEL number!");
    }
    
}

bool Pesel::validatePESEL(string id)
{
    // Check if there are exactly 11 characters
    if(id.length() != 11)
    {
        return false;
    }

    // Check whether each of them is digit
    for(int i=0; i<11; i++)
    {
        if((id[i]<48)||(id[i]>57))
        {
            return false;
        }
    }

    // Check whether last digit is correct
    int sample = 9*(id[0]-'0') + 7*(id[1]-'0') + 3*(id[2]-'0') + (id[3]-'0') + 9*(id[4]-'0') + 
                 7*(id[5]-'0') + 3*(id[6]-'0') + (id[7]-'0') + 9*(id[8]-'0') + 7*(id[9]-'0');
    
    if(id[10]-'0' != sample%10)
    {
        return false;
    }

    return true;
}