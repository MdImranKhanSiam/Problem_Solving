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

    vector<ll>store(2,0);

    store[1] = 1;

    for( int i = 2; i < n; i++ )
    {
        store.push_back(store[i-2]+store[i-1]);
    }

    cout << store[n-1] << endl;
}
