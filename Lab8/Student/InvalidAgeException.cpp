#include "InvalidAgeException.h"

InvalidAgeException::InvalidAgeException(int age) : invalid_argument{"Age out of range!"}, age_{age}{}