1=
0!=

1733

0000*
0001*
0010*
0011
0100*
0101
0110
0111
1000
1001
1010
1011
1100
1101
1110
1111*


#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if( a != b && a != c && a != d && b != c && b != d && c != d )
        cout << 0 << endl;
    else if( a == b && b == c && c == d )
        cout << 3 << endl;
    else if( )
}
