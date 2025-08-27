#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
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

        sort(store.begin(),store.end());

        int click, can = 0, removed = 0;

        for( int i = 0; i < n; i++ )
        {
            int current = store[i]-removed;

            can += current*(n-i);

            if( can >= k )
            {
                click = k+i;

                break;
            }

            removed += current;
        }

        cout << click << endl;
    }
}

