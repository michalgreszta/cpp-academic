#include "InvalidProgramException.h"

InvalidProgramException::InvalidProgramException(string field) : invalid_argument{"Invalid field!"}, field_{field}{}