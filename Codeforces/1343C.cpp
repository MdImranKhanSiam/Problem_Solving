#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll tc;

    cin >> tc;

    while( tc-- )
    {
        ll n;

        cin >> n;

        ll maxx, prev, current, sum = 0;

        for( ll i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( i == 0 )
            {
                maxx = value;

                if( value > 0 )
                    prev = 2;
                else
                    prev = 1;
            }
            else
            {
                if( value > 0 )
                    current = 2;
                else
                    current = 1;

                if( prev == current )
                {
                    if( value > maxx )
                        maxx = value;
                }
                else
                {
                    sum += maxx;

                    maxx = value;

                    prev = current;
                }
            }

            if( i == n-1 )
                sum += maxx;
        }

        cout << sum << endl;
    }
}



