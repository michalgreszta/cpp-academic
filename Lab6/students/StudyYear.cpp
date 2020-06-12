#include "StudyYear.h"

StudyYear::StudyYear()
{
    this->value = 0;
}

StudyYear::StudyYear(int val)
{
    this->value = val;
}

void StudyYear::ChangeValue(int val)
{
    value = val;
}

int StudyYear::GetValue() const
{
    return value;
}


StudyYear StudyYear::operator+(const StudyYear &studentYear) const
{
    int newValue = value + studentYear.value;
    StudyYear newStudYear(newValue);
    return newStudYear;
}

void StudyYear::operator++(int)
{
    value = value + 1;
}

void StudyYear::operator--(int)
{
    value = value - 1;
}

std::ostream &operator<<(std::ostream &output, const StudyYear &studentYear)
{
    output << studentYear.value;
    return output;
}

std::istream &operator>>(std::istream &input, StudyYear &studentYear)
{
    input >> studentYear.value;
    return input;
}

bool StudyYear::operator==(const StudyYear &studentYear) const
{
    if (value == studentYear.value) return true;
    else                            return false;
}

bool StudyYear::operator<(const StudyYear& studentYear) const
{
    if (value < studentYear.value) return true;
    else                           return false;
}

StudyYear::operator int() const
{
    return value;
}
