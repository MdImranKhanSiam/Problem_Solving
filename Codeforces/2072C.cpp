#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll limit = pow(2,30), value = 1, index = -1;

    vector<ll>Store;

    while( value <= limit )
    {
        Store.push_back(value);

        value *= 2;

        index++;
    }

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, x, need = 0, left;

        cin >> n >> x;

        if( n == 1 )
        {
            cout << x << endl;
        }
        else
        {
            ll temp = x;

            for( int i = index; i >= 0; i-- )
            {
                if( Store[i] <= temp )
                {
                    cout << Store[i] << " ";

                    need++;

                    temp -= Store[i];
                }
            }

            left = n-need;

            for( int i = 1; i <= left; i++ )
            {
                cout << 0 << " ";
            }

            cout << endl;
        }
    }
}

