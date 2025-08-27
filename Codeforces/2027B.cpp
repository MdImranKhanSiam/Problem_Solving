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
            int Remove = 0;

            for( int j = i+1; j < n; j++ )
            {
                if( store[i] < store[j] )
                {
                    Remove++;
                }
            }

            if( Min > Remove+i )
            {
                Min = Remove+i;
            }
        }

        cout << Min << endl;
    }
}

