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

    vector<ll>Hashmap(n+1,0);

    for( int i = 1; i < n; i++ )
    {
        ll value;

        cin >> value;

        Hashmap[value] = 1;
    }

    for( int i = 1; i <= n; i++ )
    {
        if( Hashmap[i] == 0 )
        {
            cout << i << endl;

            break;
        }
    }
}
