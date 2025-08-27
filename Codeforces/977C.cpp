#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int>store;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    sort( store.begin(), store.end() );

    if( k == 0 && store[0] == 1 )
        cout << -1 << endl;
    else if( k == 0 )
        cout << --store[0] << endl;
    else if( store[k-1] == store[k] )
        cout << -1 << endl;
    else
        cout << store[k-1] << endl;
}
