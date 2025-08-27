#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool palindrome( vector<ll>&store, ll n, ll index )
{
    if( index == n )
    {
        return true;
    }

    if( (palindrome(store,n,index+1)) && (store[index] == store[n-index-1]) )
    {
        return true;
    }
    else
    {
        return false;
    }
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

    if( palindrome(store,n,0) )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}
