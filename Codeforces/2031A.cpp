#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, Min = INT_MAX;

        cin >> n;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            int value = store[i], change = 0;

            for( int j = 0; j < n; j++ )
            {
                if( store[j] != value )
                {
                    change++;
                }
            }

            if( change < Min )
            {
                Min = change;
            }
        }

        cout << Min << endl;
    }
}

