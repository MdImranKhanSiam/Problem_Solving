/*
2. Write a C++ program to create a class called
Rectangle that has private member variables for
length and width. Implement member functions to
calculate the rectangle's area and perimeter.

Input: 4
       5
*/

#include <bits/stdc++.h>
using namespace std;
class Rectangle
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
        result = 2 * (length + width);
        return result;
    }
};

int main()
{
    double length, width, area, perimeter;
    cout << "Length Of The Rectangle: ";
    cin >> length;
    cout << "Width Of The Rectangle: ";
    cin >> width;
    Rectangle rectangle1(length, width);
    area = rectangle1.area();
    perimeter = rectangle1.perimeter();
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}
