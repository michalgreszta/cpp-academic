#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    public:
        Circle();
        Circle(double x, double y, double r);
        double pole();
        void SetValues(double x, double y, double r);

    protected:
        double x, y;
        double r;
};

#endif // CIRCLE_H
