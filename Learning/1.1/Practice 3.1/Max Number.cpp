#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll Max_Value( vector<ll>&store, ll n, ll Max, ll index )
{
    if( index == n )
    {
        return LLONG_MIN;
    }

    return max(store[index],Max_Value(store,n,Max,index+1));
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

    ll Max = LLONG_MIN;

    cout << Max_Value(store,n,Max,0) << endl;
}
