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

        vector<ll>store(1);

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        ll sum = 0;

        for( int i = 1; i <= n; i++ )
        {
            for( int j = i; j <= n; j++ )
            {
                if( store[j] == 1 )
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }

        }

        cout << sum << endl;
    }
}
