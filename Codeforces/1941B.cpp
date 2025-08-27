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

        int lesss;

        bool ans = true;

        for( int i = 0; i < n-2; i++ )
        {
            if( store[i] > 0 )
            {
                lesss = store[i];

                store[i] = 0;

                store[i+1] = store[i+1] - (lesss*2);

                store[i+2] = store[i+2] - lesss;
            }

            if( store[i] < 0 )
            {
                ans = false;
                break;
            }
        }

        if( ans == true && store[n-1] == 0 && store[n-2] == 0 )
        {
            ans = true;
        }
        else
        {
            ans = false;
        }

        cout << ( (ans==true) ? "YES" : "NO" ) << endl;
    }
}
