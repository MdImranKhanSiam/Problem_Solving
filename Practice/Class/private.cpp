#include <bits/stdc++.h>

using namespace std;

class Shape{

private:
    double pi = 3.1416;
    double area;

public:
    double r;

    double circle_area()
    {
        area = pi*r*r;

        return area;
    }
};

int main()
{
    Shape Circle;

    Circle.r = 3;

    //Circle.pi = 3.14159;

    cout << Circle.circle_area() << endl;
}

