#ifndef INVALIDNAMECHARACTERSEXCEPTION_H
#define INVALIDNAMECHARACTERSEXCEPTION_H
#include <stdexcept>
#include <string>
using std::string;

class InvalidNameCharactersException : public std::invalid_argument
{
    public:
        InvalidNameCharactersException(string name);
    
    private:
        string name_;
};

#endif // INVALIDNAMECHARACTERSEXCEPTION_H