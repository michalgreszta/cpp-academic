#ifndef STUDYYEAR_H
#define STUDYYEAR_H
#include <iostream>
using std::istream;
class StudyYear{
    public:
        StudyYear();
        StudyYear(int val);
        void ChangeValue(int val);
        int GetValue() const;

        StudyYear operator+(const StudyYear &studentYear) const;
        void operator++(int);
        void operator--(int);
        friend std::ostream &operator<<(std::ostream &output, const StudyYear &studentYear);
        friend std::istream &operator>>(std::istream &input, StudyYear &studentYear);
        bool operator==(const StudyYear& studentYear) const;
        bool operator<(const StudyYear& studentYear) const;
        operator int() const;

    private:
        int value;
};

#endif // STUDYYEAR_H
