#ifndef SQUARE_H
#define SQUARE_H
#include "Point.h"

class Square
{
    public:
        Square();
        Square(Point A, Point B, Point C, Point D);
        ~Square();
        double Area(double distance);
        double Circumference(double distance);
    
    private:
        Point A, B, C, D;
};



#endif //SQUARE_H

