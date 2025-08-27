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
        ll n, k;

        cin >> n >> k;

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        store.push_back(0);

        ll result = 0;

        if( k == n )
        {
            int j = 1;

            for( int i = 1; i < n; i += 2 )
            {
                if( store[i] != j )
                {
                    result = j;

                    break;
                }

                j++;
            }

            if( result == 0 )
            {
                result = j;
            }
        }
        else
        {
            ll limit = (n-k)+2;

            bool found = false;

            for( int i = 1; i < limit; i++ )
            {
                if( store[i] >= 2 )
                {
                    found = true;

                    break;
                }
            }

            if( found == true )
            {
                result = 1;
            }
            else
            {
                result = 2;
            }
        }

        cout << result << endl;
    }
}
