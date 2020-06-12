#ifndef SPHERE_H
#define SPHERE_H
#include "Circle.h"

class Sphere: public Circle
{
    public:
        Sphere(double x, double y, double z, double r);
        double pole();

    private:
        double z;
};

#endif // SPHERE_H
