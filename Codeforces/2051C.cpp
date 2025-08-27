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
        ll n, m, k;

        cin >> n >> m >> k;

        vector<ll>M, K;

        for( ll i = 0; i < m; i++ )
        {
            ll value;

            cin >> value;

            M.push_back(value);
        }

        for( ll i = 0; i < k; i++ )
        {
            ll value;

            cin >> value;

            K.push_back(value);
        }

        if( k < n-1 )
        {
            for( ll i = 0; i < m; i++ )
            {
                cout << 0;
            }
        }
        else if( k == n )
        {
            for( ll i = 0; i < m; i++ )
            {
                cout << 1;
            }
        }
        else
        {
            ll target;

            vector<ll>Hashmap(n+1,0);

            for( auto point : K )
            {
                Hashmap[point] = 1;
            }

            for( auto point : M )
            {
                if( Hashmap[point] == 1 )
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
        }

        cout << endl;
    }
}
