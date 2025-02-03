#include "Trapezoid.h"

bool Trapezoid::setBase1(double b1)
    {
        if (b1 >= 0)
        {
            base1 = b1;
            return true;
        }
        else
        {
            return false;
        }
    }
bool Trapezoid::setBase2(double b2)
    {
        if (b2 >= 0)
        {
            base2 = b2;
            return true;
        }
        else
        {
            return false;
        }
    }
bool Trapezoid::setheight(double h)
    {
        if (h >= 0)
        {
            height = h;
            return true;
        }
        else
        {
            return false;
        }
    }
double Trapezoid::getBase1()
    {
        return base1;
    }
double Trapezoid::getBase2()
    {
        return base2;
    }
double Trapezoid::getHeight()
    {
        return height;
    }
double Trapezoid::getArea()
    {
        return ((base1+base2)/2.0) * height;
    }
