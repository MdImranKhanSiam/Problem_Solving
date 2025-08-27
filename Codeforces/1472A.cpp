#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int a, b, n, cut = 1;

        cin >> a >> b >> n;

        while( a % 2 == 0 || b % 2 == 0 )
        {
            if( a % 2 == 0 )
            {
                a /= 2;
                cut *= 2;
            }

            if( b % 2 == 0 )
            {
                b /= 2;
                cut *= 2;
            }
        }

        cout << ( (cut>=n) ? "YES" : "NO" ) << endl;
    }
}

