
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, m;

        cin >> n >> m;

        vector<vector<ll>>Matrix;

        set<ll>Color;

        for( int i = 0; i < n; i++ )
        {
            vector<ll>store;

            for( int j = 0; j < m; j++ )
            {
                ll value;

                cin >> value;

                Color.insert(value);

                store.push_back(value);
            }

            Matrix.push_back(store);
        }

        map<ll,ll>Hashmap;

        for( auto point : Color )
        {
            Hashmap[point] = 1;
        }

        for( int i = 0; i < n; i++ )
        {
            for( int j = 0; j < m; j++ )
            {
                bool found = false;

                if( i-1 >= 0 && Matrix[i][j] == Matrix[i-1][j] )
                {
                    found = true;
                }

                if( i+1 < n && Matrix[i][j] == Matrix[i+1][j] )
                {
                    found = true;
                }

                if( j-1 >= 0 && Matrix[i][j] == Matrix[i][j-1] )
                {
                    found = true;
                }

                if( j+1 < m && Matrix[i][j] == Matrix[i][j+1] )
                {
                    found = true;
                }

                if( found == true )
                {
                    Hashmap[Matrix[i][j]] = 2;
                }
            }
        }

        bool Two = false;

        ll result = 0;

        for( auto point : Color )
        {
            ll value = Hashmap[point];

            result += value;

            if( value == 2 )
            {
                Two = true;
            }
        }

        if( Two == true )
        {
            cout << result-2;
        }
        else
        {
            cout << result-1;
        }

        cout << endl;
    }
}
