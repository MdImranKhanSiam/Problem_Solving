#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>store;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    sort( store.begin(), store.end() );

    bool result = false;

    for( int i = 0; i < n-2; i++ )
    {
        if( (store[i]+store[i+1]) > store[i+2] )
        {
            result = true;
            break;
        }
    }

    cout << ( (result==true) ? "YES" : "NO" ) << endl;
}

