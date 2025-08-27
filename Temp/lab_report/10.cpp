/*
10. Write a C++ program to implement a class called
Shape with virtual member functions for calculating area and perimeter.
Derive classes such as Circle, Rectangle, and Triangle from
the Shape class and override virtual functions accordingly.

Input:
*/

#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    double pi = 3.14159;
    virtual double area()
    {
        cout << "Virtual Function" << endl;
    }
    virtual double perimeter()
    {
        cout << "Virtual Function" << endl;
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle( double Radius )
    {
        radius = Radius;
    }
    double area()
    {
        double result;
        result = pi * pow(radius, 2);
        return result;
    }
    double perimeter()
    {
        double result;
        result = 2 * pi * radius;
        return result;
    }
};
class Rectangle : public Shape
{
private:
    double length, width;
public:
    Rectangle( double Length, double Width )
    {
        length = Length;
        width = Width;
    }
    double area()
    {
        double result;
        result = length * width;
        return result;
    }
    double perimeter()
    {
        double result;
        result = 2 * ( length + width );
        return result;
    }
};
class Triangle : public Shape
{
private:
    double side1, side2, side3;
public:
    Triangle( double Side1, double Side2, double Side3 )
    {
        side1 = Side1;
        side2 = Side2;
        side3 = Side3;
    }
    double area()
    {
        double s, result;
        s = ( side1 + side2 + side3 ) / 2;
        result = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        return result;
    }
    double perimeter()
    {
        double result;
        result = side1 + side2 + side3;
        return result;
    }
};
int main()
{
    Circle circle1(5);
    Rectangle rectangle1(4, 5);
    Triangle triangle1(4, 4, 3);
    cout << fixed << setprecision(2);
    cout << "Circle" << endl;
    cout << "Area: " << circle1.area() << endl;
    cout << "Perimeter: " << circle1.perimeter() << endl << endl;
    cout << "Rectangle" << endl;
    cout << "Area: " << rectangle1.area() << endl;
    cout << "Perimeter: " << rectangle1.perimeter() << endl << endl;
    cout << "Triangle" << endl;
    cout << "Area: " << triangle1.area() << endl;
    cout << "Perimeter: " << triangle1.perimeter() << endl << endl;
    return 0;
}
