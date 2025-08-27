#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m;

    cin >> n >> m;

    vector<ll>store1, store2;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store1.push_back(value);
    }

    for( int i = 0; i < m; i++ )
    {
        ll value;

        cin >> value;

        store2.push_back(value);
    }

    ll index = 0;

    for( auto point : store1 )
    {
        if( point == store2[index] )
        {
            index++;
        }
    }

    if( index == m )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
