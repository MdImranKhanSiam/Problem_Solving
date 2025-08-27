#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void even_index( vector<ll>&store, ll n, ll index )
{
    if( index >= n )
    {
        return;
    }

    even_index(store,n,index+2);

    cout << store[index] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    even_index(store, n, 0);

    cout << endl;
}
