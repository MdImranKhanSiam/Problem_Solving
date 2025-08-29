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

    vector<ll>store, store_sort;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);

        store_sort.push_back(value);
    }

    sort(store_sort.begin(),store_sort.end());

    vector<ll>prefix(1,0), prefix_sort(1,0);

    for( int i = 0; i < n; i++ )
    {
        prefix.push_back(prefix[i]+store[i]);

        prefix_sort.push_back(prefix_sort[i]+store_sort[i]);
    }

    ll m;

    cin >> m;

    for( int i = 0; i < m; i++ )
    {
        ll type, l, r;

        cin >> type >> l >> r;

        ll result;

        if( type == 1 )
        {
            result = prefix[r]-prefix[l-1];
        }
        else
        {
            result = prefix_sort[r]-prefix_sort[l-1];
        }

        cout << result << endl;
    }
}
