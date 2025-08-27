#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        int a, b, c, init, ans = 0;

        cin >> a >> b >> c;

        if( a == b && b == c )
            init = a;
        else if( a == b )
            ans = 3;
        else if( a == c )
            ans = 2;
        else if( b == c )
            ans = 1;

        for( int i = 4; i <= n; i++ )
        {
            cin >> b;

            if( ans == 0 )
            {
                if( b != init )
                ans = i;
            }
        }

        cout << ans << endl;
    }
}

