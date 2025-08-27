#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, odd_count = 0;

        cin >> n;

        for( int i = 0; i < 2*n; i++ )
        {
            int value;

            cin >> value;

            if( value % 2 != 0 )
                odd_count++;
        }

        cout << ( (odd_count==n) ? "YES" : "NO" ) << endl;
    }
}

