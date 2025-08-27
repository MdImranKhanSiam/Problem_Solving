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
        ll n;

        cin >> n;

        vector<ll>store;

        bool zero = false;

        ll negative = 0;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( value == 0 )
            {
                zero = true;
            }

            if( value < 0 )
            {
                negative++;
            }

            store.push_back(value);
        }

        if( zero || (negative % 2 == 0) )
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
