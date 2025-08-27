#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, q;

    cin >> n >> q;

    vector<ll>store(1);

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    vector<ll>prefix_xor(1,0);

    for( int i = 1; i <= n; i++ )
    {
        prefix_xor.push_back(prefix_xor[i-1] ^ store[i]);
    }

    while( q-- )
    {
        ll a, b;

        cin >> a >> b;

        ll result = prefix_xor[b] ^ prefix_xor[a-1];

        cout << result << endl;
    }
}
