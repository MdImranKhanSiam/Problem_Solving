/*
1. Write a C++ program to implement a class
called Circle that has private member variables
for radius. Include member functions to calculate
    the circle's area and circumference.

Input: 4

*/

#include <bits/stdc++.h>
using namespace std;
class Circle{
private:
    double radius, pi;
public:
    Circle( double radius_value )
    {
        pi = 3.14159;
        radius = radius_value;
    }
    double area()
    {
        double result;
        result = pi * pow(radius,2);
        return result;
    }
    double circumference()
    {
        double result;
        result = 2.0 * pi * radius;
        return result;
    }
};
int main()
{
    double radius, area, circumference;
    cout << "Radius Of The Circle: ";
    cin >> radius;
    Circle circle1(radius);
    area = circle1.area();
    circumference = circle1.circumference();
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    return 0;
}
