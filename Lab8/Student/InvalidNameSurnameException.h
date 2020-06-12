#ifndef INVALIDNAMESURNAMEEXCEPTION_H
#define INVALIDNAMESURNAMEEXCEPTION_H
#include <stdexcept>
#include <string>
using std::string;

class InvalidNameSurnameException : public std::invalid_argument
{
    public:
        InvalidNameSurnameException(string name);
    
    private:
        string name_;
};

#endif // INVALIDNAMESURNAMEEXCEPTION_H