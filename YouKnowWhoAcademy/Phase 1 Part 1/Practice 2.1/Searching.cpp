#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<ll>store;

    ll n, x;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    cin >> x;

    for( int i = 0; i < n; i++ )
    {
        if( x == store[i] )
        {
            cout << i << endl;

            return 0;

        }
    }

    cout << -1 << endl;

    return 0;
}


