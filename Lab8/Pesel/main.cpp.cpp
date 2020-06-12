#include <iostream>
#include "PESEL.h"

int main()
{
    try
    {
        Pesel id("123");
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
