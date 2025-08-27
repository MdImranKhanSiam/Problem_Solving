#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, c;

        cin >> a >> b >> c;

        int maximum = max(a,max(b,c));

        if( a > b && a > c )
            cout << 0;
        else
            cout << (maximum-a)+1;

        cout << " ";

        if( b > a && b > c )
            cout << 0;
        else
            cout << (maximum-b)+1;

        cout << " ";

        if( c > a && c > b )
            cout << 0;
        else
            cout << (maximum-c)+1;

        cout << endl;
    }
}


