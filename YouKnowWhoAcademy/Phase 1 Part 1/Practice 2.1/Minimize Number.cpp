#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, op = 0;

    cin >> n;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    while( true )
    {
        bool even = true;

        for( int i = 0; i < n; i++ )
        {
            if( store[i] % 2 != 0 )
            {
                even = false;
            }

            store[i] /= 2;
        }

        if( even == false )
        {
            break;
        }

        op++;
    }

    cout << op << endl;
}
