#include <bits/stdc++.h>

using namespace std;

int main()
{
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

        unordered_map<int,int>Hashmap;

        bool all = true;

        int result;

        for( int i = n-1; i >= 0; i-- )
        {
            Hashmap[store[i]]++;

            if( Hashmap[store[i]] == 2 )
            {
                all = false;

                result = n-((n-1)-i);

                break;
            }
        }

        if( all == true )
        {
            cout << 0 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
}

