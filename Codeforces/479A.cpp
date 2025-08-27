#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if( a == 1 && b == 1 && c == 1 )
        cout << 3 << endl;
    else if( a == 1 && b == 1 )
        cout << (a+b)*c << endl;
    else if( b == 1 && c == 1 )
        cout << a*(b+c) << endl;
    else if( a == 1 && c == 1 )
        cout << a+b+c << endl;
    else if( a != 1 && b != 1 && c != 1 )
        cout << a*b*c << endl;
    else if( a == 1 )
        cout << (a+b)*c << endl;
    else if( b == 1 && a > c )
        cout << a*(b+c) << endl;
    else if( b == 1 && a < c )
        cout << (a+b)*c << endl;
    else if( b == 1 && a == c )
        cout << (a+b)*c << endl;
    else if( c == 1 )
        cout << a*(b+c) << endl;
}
