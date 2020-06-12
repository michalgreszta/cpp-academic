#include "Circle.h"

Circle::Circle(){}

Circle::Circle(double x, double y, double r)
{
    this->x = x;
    this->y = y;
    this->r = r;
}

double Circle::pole()
{
    return 3.14*r*r;
}

void Circle::SetValues(double x, double y, double r)
{
    this->x = x;
    this->y = y;
    this->r = r;
}
