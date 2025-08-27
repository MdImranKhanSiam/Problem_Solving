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
        int n;

        cin >> n;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        int first = 0, second = 0, total;

        total = 0;

        for( int i = 0; i < n; i += 2 )
        {
            total++;

            if( store[i] > first )
            {
                first = store[i];
            }
        }

        first += total;

        total = 0;

        for( int i = 1; i < n; i += 2 )
        {
            total++;

            if( store[i] > second )
            {
                second = store[i];
            }
        }

        second += total;

        cout << max(first,second) << endl;
    }
}
