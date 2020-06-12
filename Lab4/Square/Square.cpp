#include "Square.h"

Square::Square()
{
    this->A = Point();
    this->B = Point();
    this->C = Point();
    this->D = Point();
}

Square::Square(Point A, Point B, Point C, Point D)
{
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}

double Square::Area(double distance)
{
    return distance*distance;
}

double Circumference(double distance)
{
    return 4*distance;
}
