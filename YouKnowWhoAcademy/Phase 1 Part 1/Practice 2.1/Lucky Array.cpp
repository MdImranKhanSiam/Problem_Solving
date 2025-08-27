#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, Min = LLONG_MAX, total = 0;

    cin >> n;

   vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        Min = min(Min,value);

        store.push_back(value);
    }

    for( auto point : store )
    {
        if( point == Min )
        {
            total++;
        }
    }

    if( total % 2 != 0 )
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }
}
