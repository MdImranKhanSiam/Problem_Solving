/*
6. Write a C++ program to create a class
called Triangle that has private member variables
for the lengths of its three sides. Implement member
functions to determine if the triangle is
equilateral, isosceles, or scalene.

Input:
Input the lengths of the three sides of the triangle
Side1: 3
Side2: 3
Side3: 3
Equilateral Triangle


Input the lengths of the three sides of the triangle
Side1: 3
Side2: 4
Side3: 5
Scalene Triangle


Input the lengths of the three sides of the triangle
Side1: 5
Side2: 5
Side3: 7
Isosceles Triangle
*/

#include <bits/stdc++.h>
using namespace std;
class Triangle
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
    void triangle_type()
    {
        if ( (side1 == side2) && (side2 == side3) )
        {
            cout << "Equilateral Triangle" << endl;
        }
        else if ( (side1 == side2) || (side1 == side3) || (side2 == side3) )
        {
            cout << "Isosceles Triangle" << endl;
        }
        else
        {
            cout << "Scalene Triangle" << endl;
        }
    }
};
int main()
{
    int loop = 3;
    while( loop-- )
    {
        double side1, side2, side3;
        cout << "Input the lengths of the three sides of the triangle" << endl;
        cout << "Side1: ";
        cin >> side1;
        cout << "Side2: ";
        cin >> side2;
        cout << "Side3: ";
        cin >> side3;
        Triangle triangle1(side1, side2, side3);
        triangle1.triangle_type();
        cout << endl << endl;
    }
    return 0;
}

