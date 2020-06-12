#include "InvalidNameSurnameException.h"

InvalidNameSurnameException::InvalidNameSurnameException(string name) : invalid_argument{"Invalid format!"}, name_{name}{}