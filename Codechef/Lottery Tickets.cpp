#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int win( ll lower, ll upper )
{
    ll total = (abs(lower-upper)/2)+1;

    return total;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, first, winnings = 0, low = LLONG_MIN, high = LLONG_MAX, limit = 1000000;

        bool MIN = false, MAX = false;

        cin >> n >> first;

        for( int i = 1; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( value > first )
            {
                MAX = true;
            }

            if( value < first )
            {
                MIN = true;
            }

            if( value != first )
            {
                ll diff = value-first;

                if( diff < 0 )
                {
                    if( diff > low )
                    {
                        low = diff;
                    }
                }
                else
                {
                    if( diff < high )
                    {
                        high = diff;
                    }
                }
            }
        }

        if( MIN == true && MAX == true )
        {
            ll lower = first+low, upper = first+high;

            winnings += win(lower,first);

            winnings += win(first,upper);

            winnings--;
        }
        else if( MIN == true && MAX == false )
        {
            ll lower = first+low;

            winnings += win(lower,first);

            winnings += limit-first;
        }
        else if( MIN == false && MAX == true )
        {
            ll upper = first+high;

            winnings += win(first,upper);

            winnings += first-1;
        }

        cout << winnings << endl;
    }
}
