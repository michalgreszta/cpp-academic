#include "InvalidNameCharactersException.h"

InvalidNameCharactersException::InvalidNameCharactersException(string name) : invalid_argument{"Invalid characters!"}, name_{name}{}