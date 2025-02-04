#include "Rectangle.h"

bool Rectangle::setLength(double l)
{
    if (l >= 0)
    {
        length = l;
        return true;
    }
    else
    {
        return false;
    }
}
bool Rectangle::setWidth(double w)
{
    if (w >= 0)
    {
        width = w;
        return true;
    }
    else
    {
        return false;
    }
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::calcArea()
{
    return length * width;
}

