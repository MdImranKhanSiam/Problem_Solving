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

    vector<ll>Hashmap(m+1,0);

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        Hashmap[value]++;
    }

    for( int i = 1; i <= m; i++ )
    {
        cout << Hashmap[i] << endl;
    }
}
