#include <bits/stdc++.h>

using namespace std;

bool check( int a, int b, int c, int d )
{
    if( a < b && c < d && a < c && b < d )
        return true;

    return false;
}

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        bool result = false;

        if( check(a,b,c,d) == true || check(c,a,d,b) == true || check(d,c,b,a) == true || check(b,d,a,c) == true )
            result = true;

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}


