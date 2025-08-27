#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, l, r, x, suitable = 0;

    cin >> n >> l >> r >> x;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    ll bits = pow(2,n)-1;

    for( int i = 1; i <= bits; i++ )
    {
        ll Count = 0, Max = LLONG_MIN, Min = LLONG_MAX, diff = 0;

        for( int j = 0; j < n; j++ )
        {
            if( (i >> j) & 1 )
            {
                ll value = store[j];

                Count++;

                Max = max(Max, value);

                Min = min(Min, value);

                diff += value;
            }
        }

        if( (Count >= 2) && (l <= diff) && (diff <= r) && (Max-Min >= x) )
        {
            suitable++;
        }
    }

    cout << suitable << endl;
}
