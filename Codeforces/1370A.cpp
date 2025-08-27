#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, gcd, maxx = 0;

        cin >> n;

        for( int i = n; i > n/2; i-- )
        {
            for( int j = i-1; j > i / 2; j-- )
            {
                gcd = __gcd(i,j);

                if( gcd < maxx )
                    goto here;

                if( maxx < gcd )
                    maxx = gcd;
            }
        }

        here:

        cout << maxx << endl;
    }
}

