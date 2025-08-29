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

    vector<ll>store;

    cin >> n;

    for( int k = 0; k < n; k++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    sort(store.begin(),store.end());


    for( auto i : store )
    {
        cout << i << " ";
    }

    cout << endl;
}

