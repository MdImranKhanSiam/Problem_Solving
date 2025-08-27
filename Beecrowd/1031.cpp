#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    while( true )
    {
        ll a;

        cin >> a;

        if( a == 0 )
        {
            break;
        }

        for( int k = 1; k <= 1000; k++ )
        {
            vector<ll>found(a+1,0);

            ll limit = k, start = 1, region;

            for( int i = 1; i <= a; i++ )
            {
                region = start;

                found[region] = 1;

                if( i != a )
                {
                    for( int j = 1; j <= limit; j++ )
                    {
                        start++;

                        if( start > a )
                        {
                            start = 1;
                        }

                        if( found[start] == 1 )
                        {
                            j--;
                        }
                    }
                }
            }

            if( region == 13 )
            {
                cout << k << endl;

                break;
            }
        }
    }
}
