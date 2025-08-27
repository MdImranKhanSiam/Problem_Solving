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

        vector<int>gang(1,0);

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            gang.push_back(value);
        }

        int roads = 0;

        vector<pair<int,int>>Road;

        vector<int>remain;

        int next = 0;

        for( int i = 2; i <= n; i++ )
        {
            if( gang[1] != gang[i] )
            {
                if( next == 0 )
                {
                    next = i;
                }

                Road.push_back(make_pair(1,i));

                roads++;
            }
            else
            {
                remain.push_back(i);
            }
        }

        for( auto point : remain )
        {
            Road.push_back(make_pair(next,point));

            roads++;
        }

        if( next == 0 )
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for( auto point : Road )
            {
                cout << point.first << " " << point.second << endl;
            }
        }
    }
}
