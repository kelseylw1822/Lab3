#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
class Circle
{
private:
    double radius;
public:
    bool setRadius(double r);
    double getRadius();
    double calcArea();
};

#endif
