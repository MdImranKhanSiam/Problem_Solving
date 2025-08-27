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

        vector<int>player;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            player.push_back(value);
        }

        sort( player.begin(), player.end() );

        int minimum = 1000;

        for( int i = 1; i < n; i++ )
        {
            int value;

            value = player[i] - player[i-1];

            if( value < minimum )
                minimum = value;
        }

        cout << minimum << endl;
    }
}

