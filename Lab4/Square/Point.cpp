#include "Point.h"
#include <cmath>

Point::Point(){
    this->x = 0;
    this->y = 0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point(){}

double Point::Distance(const Point &other) const
{
    return sqrt(pow(this->x - other.GetX(),2) + pow(this->y - other.GetY(),2));
}

double Point::GetX() const
{
    return this->x;
}

double Point::GetY() const
{
    return this->y;
}

void Point::SetX(double x)
{
    this->x = x;
}

void Point::SetY(double y)
{
    this->y = y;
}
