#ifndef INVALIDPROGRAMEXCEPTION_H
#define INVALIDPROGRAMEXCEPTION_H
#include <stdexcept>
#include <string>
using std::string;

class InvalidProgramException : public std::invalid_argument
{
    public:
        InvalidProgramException(string field);
    
    private:
        string field_;
};

#endif // INVALIDPROGRAMEXCEPTION_H