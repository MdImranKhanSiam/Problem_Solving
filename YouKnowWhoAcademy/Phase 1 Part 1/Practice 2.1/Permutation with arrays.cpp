#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>store1, store2;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store1.push_back(value);
    }

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store2.push_back(value);
    }

    sort(store1.begin(),store1.end());

    sort(store2.begin(),store2.end());

    bool match = true;

    for( int i = 0; i < n; i++ )
    {
        if( store1[i] != store2[i] )
        {
            match = false;
        }
    }

    if( match == true )
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
