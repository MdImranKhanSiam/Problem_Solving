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
        ll n, result = 0;

        cin >> n;

        map<ll,ll>Count;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( Count[value] == NULL )
            {
                Count[value] = 1;
            }
            else
            {
                Count[value]++;
            }

            if( Count[value] == 2 )
            {
                result = value;
            }
        }

        if( result == 0 )
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl << result << endl;
        }
    }
}
