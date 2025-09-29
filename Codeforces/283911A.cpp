#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool Binary_Search( vector<ll>&store, ll target )
{
    bool found = false;

    ll low = 0, mid, high = store.size()-1;

    while( low <= high )
    {
        mid = (low+high)/2;

        if( store[mid] == target )
        {
            found = true;

            break;
        }

        if( target < store[mid] )
        {
            high = mid-1;
        }

        if( target > store[mid] )
        {
            low = mid+1;
        }
    }

    return found;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    while( k-- )
    {
        ll target;

        cin >> target;

        if( Binary_Search(store,target) )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
