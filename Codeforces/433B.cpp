#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;

    cin >> n;

    vector<ll>store, ordered;

    store.push_back(0);
    ordered.push_back(0);

    for( ll i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
        ordered.push_back(value);
    }

    sort(ordered.begin(), ordered.end());

    for( ll i = 0; i < n; i++ )
    {
        store[i+1] += store[i];
        ordered[i+1] += ordered[i];
    }

    ll query;

    cin >> query;

    for( ll i = 0; i < query; i++ )
    {
        ll type, start, finish;

        cin >> type >> start >> finish;

        if( type == 1 )
        {
            ll sum = store[finish] - store[start-1];

            cout << sum << endl;
        }
        else
        {
            ll sum = ordered[finish] - ordered[start-1];

            cout << sum << endl;
        }
    }
}

