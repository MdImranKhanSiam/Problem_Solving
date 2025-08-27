#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, k;

        cin >> n >> k;

        if( k == 1 )
        {
            cout << n << endl;
        }
        else
        {
            vector<ll>expo;

            ll power = 0, op = 0;

            while( true )
            {
                ll value = pow(k,power);

                if( value > n )
                {
                    break;
                }

                power++;

                expo.push_back(value);
            }

            ll length = expo.size();

            for( ll i = length-1; i >= 0; i-- )
            {
                ll value = expo[i];

                if( n >= value )
                {
                    ll incre = n/value;

                    n -= value*incre;

                    op += incre;
                }

                if( n <= 0 )
                {
                    break;
                }
            }

            cout << op << endl;
        }
    }
}
