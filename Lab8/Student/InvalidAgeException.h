#ifndef INVALIDAGEEXCEPTION_H
#define INVALIDAGEEXCEPTION_H
#include <stdexcept>

class InvalidAgeException : public std::invalid_argument
{
    public:
        InvalidAgeException(int age);
    
    private:
        int age_;
};

#endif // INVALIDAGEEXCEPTION_H