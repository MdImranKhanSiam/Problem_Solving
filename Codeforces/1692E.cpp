#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, s;

        cin >> n >> s;

        int sum = 0;

        vector<int>store, prefix;

        prefix.push_back(0);

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            sum += value;

            store.push_back(value);

            prefix.push_back(prefix[i]+value);
        }

        if( sum < s )
            cout << -1 << endl;
        else
        {
            int left, right, minn = INT_MAX;


        }
    }
}

