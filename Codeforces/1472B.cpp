#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, sum = 0, one = 0;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( value == 1 )
                one++;

            sum += value;
        }

        if( one == 0 && n % 2 != 0 )
            cout << "NO" << endl;
        else
            cout << ( (sum%2==0) ? "YES" : "NO" ) << endl;
    }
}

