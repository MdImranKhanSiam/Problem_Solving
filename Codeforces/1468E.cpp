#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        vector<int>store;

        for( int i = 0; i < 4; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        sort( store.begin(), store.end() );

        cout << store[0]*store[2] << endl;
    }
}

