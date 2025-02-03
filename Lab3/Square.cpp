#include "Square.h"

bool Square::setSide(double s)
{
if (s >= 0)
{
        side = s;
        return true;
    }
    else
    {
        return false;
    }
}
double Square::getSide()
{
    return side;
}
double Square::getArea()
{
    return side * side;
}

