#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b;

        cin >> a >> b;

        if( a > b )
            cout << ( ((a%2==0&b%2==0)||(a%2!=0&&b%2!=0)) ? 1 : 2 ) << endl;
        else if( a < b )
            cout << ( ((a%2==0&b%2==0)||(a%2!=0&&b%2!=0)) ? 2 : 1 ) << endl;
        else
            cout << 0 << endl;
    }
}

