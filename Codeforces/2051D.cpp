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
        ll n, x, y, sum = 0, total = 0;

        cin >> n >> x >> y;

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);

            sum += value;
        }

        for( int i = 0; i < n-1; i++ )
        {
            if( sum-store[i] >= x )
            {
                for( int j = i+1; j < n; j++ )
                {
                    ll result = sum-(store[i]+store[j]);

                    if( result >= x && result <= y )
                    {
                        total++;
                    }
                }
            }
        }

        cout << total << endl;
    }
}
