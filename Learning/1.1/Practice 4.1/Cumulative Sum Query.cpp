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

    vector<ll>store(1);

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    vector<ll>prefix(1,0);

    for( int i = 1; i <= n; i++ )
    {
        prefix.push_back(prefix[i-1]+store[i]);
    }

    ll q;

    cin >> q;

    while( q-- )
    {
        ll l, r;

        cin >> l >> r;

        l++;

        r++;

        ll result = prefix[r]-prefix[l-1];

        cout << result << endl;
    }
}
