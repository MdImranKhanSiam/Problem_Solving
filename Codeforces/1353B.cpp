#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k, sum = 0;

        cin >> n >> k;

        int a1[n], a2[n];

        for( int i = 0; i < n; i++ )
            cin >> a1[i];
        sort( a1, a1 + n );

        for( int i = 0; i < n; i++ )
            cin >> a2[i];
        sort( a2, a2 + n, greater<int>() );

        for( int i = 0; i < k; i++ )
        {
            if( a1[i] < a2[i] )
                a1[i] = a2[i];
            else
                break;
        }

        for( int i = 0; i < n; i++ )
            sum += a1[i];

        cout << sum << endl;
    }
}

