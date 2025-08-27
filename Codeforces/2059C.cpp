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
        ll n;

        cin >> n;

        vector<vector<ll>>store;

        vector<ll>ones;

        for( int i = 0; i < n; i++ )
        {
            vector<ll>temp;

            for( int j = 0; j < n; j++ )
            {
                ll value;

                cin >> value;

                temp.push_back(value);
            }

            store.push_back(temp);
        }

        for( int i = 0; i < n; i++ )
        {
            ll total = 0;

            for( int j = n-1; j >= 0; j-- )
            {
                if( store[i][j] == 1 )
                {
                    total++;
                }
                else
                {
                    break;
                }
            }

            ones.push_back(min(total,n-1));
        }

        sort(ones.begin(),ones.end());

        ll start = 1;

        for( auto point : ones )
        {
            if( point == 0 )
            {
                continue;
            }

            if( point >= start )
            {
                start++;
            }
        }

        cout << start << endl;
    }
}
