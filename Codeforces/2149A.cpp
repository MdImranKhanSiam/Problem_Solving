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

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        ll zeroes = 0;

        for( int i = 0; i < n; i++ )
        {
            if( store[i] == 0 )
            {
                zeroes++;

                store[i]++;
            }
        }

        ll negative_one = 0;

        for( auto point : store )
        {
            if( point == -1 )
            {
                negative_one++;
            }
        }

        if( negative_one % 2 == 0 )
        {
            cout << zeroes << endl;
        }
        else
        {
            cout << zeroes+2 << endl;
        }
    }
}
