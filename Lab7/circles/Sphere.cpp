#include "Sphere.h"

Sphere::Sphere(double x, double y, double z, double r) : Circle(x, y, r)
{
    this->z = z;
}

double Sphere::pole()
{
    return 4*3.14*r*r;
}
