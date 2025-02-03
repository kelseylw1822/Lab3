#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
using namespace std;

int main()
{
    int input;
    cout << "1 -- circle\n2 -- square\n3 -- rectangle\n4 -- trapezoid\n5 -- quit" << endl;
    cout << "Enter what you want to find the area of: " ;
    cin >> input;
    while ((input < 1) || (input > 5))
    {
        cout << "Invalid input. Please try again: " ;
        cin >> input;
    }
    if (input == 1)
    {
        Circle circle;
        cout << "Radius: " ;
        cin >> input;
        while (!(circle.setRadius(input)))
        {
            cout << "Invalid input. Please enter the radius again: " ;
            cin >> input;
        }
        cout << "Area: " << fixed << setprecision(1) << circle.getArea() << endl;
    }
    else if (input == 2)
    {
        Square square;
        double side;
        cout << "Side: " ;
        cin >> side;
        while (!(square.setSide(side)))
        {
            cout << "Invalid input. Please enter the side again: " ;
            cin >> side;
        }
        cout << "Area: " << fixed << setprecision(1) << square.getArea() << endl;
        
    }
    else if (input == 3)
    {
        Rectangle rectangle;
        double len, wid;
        cout << "Length: " ;
        cin >> len;
        while (!(rectangle.setLength(len)))
        {
            cout << "Invalid input. Please enter the length again: " ;
            cin >> len;
        }
        cout << "Width: " ;
        cin >> wid;
        while (!(rectangle.setWidth(wid)))
        {
            cout << "Invalid input. Please enter the width again: " ;
            cin >> wid;
        }
        cout << "Area: " << fixed << setprecision(1) << rectangle.getArea() << endl;
    }
    else if (input == 4)
    {
        Trapezoid trapezoid;
        double base1, base2, h;
        cout << "Base1: ";
        cin >> base1;
        while (!(trapezoid.setBase1(base1)))
        {
            cout << "Invalid input. Please enter base1 again: " ;
            cin >> base1;
        }
        cout << "Base2: ";
        cin >> base2;
        while (!(trapezoid.setBase2(base2)))
        {
            cout << "Invalid input. Please enter base2 again: " ;
            cin >> base2;
        }
        cout << "Height: ";
        cin >> h;
        while (!(trapezoid.setheight(h)))
        {
            cout << "Invalid input. Please enter height again: " ;
            cin >> h;
        }
        cout << "Area: " << fixed << setprecision(1) << trapezoid.getArea() << endl;
    }
    else
    {
        
    }
    return 0;
}
