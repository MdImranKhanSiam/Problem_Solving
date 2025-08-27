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

        vector<ll>a, b, modified(n,0);

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            a.push_back(value);
        }

        for( int i = 0; i < m; i++ )
        {
            ll value;

            cin >> value;

            b.push_back(value);
        }

        bool result = true;

        a[n-1] = max(b[0]-a[n-1],a[n-1]);

        for( int i = n-2; i >= 0; i-- )
        {
            if( b[0]-a[i] <= a[i+1] && a[i] <= a[i+1] )
            {
                a[i] = max(b[0]-a[i],a[i]);
            }
            else if( a[i] <= a[i+1] )
            {
                result = true;
            }
            else if( b[0]-a[i] <= a[i+1] )
            {
                a[i] = b[0]-a[i];
            }
            else
            {
                result = false;

                break;
            }
        }

        cout << ( (result == true ) ? "YES" : "NO" ) << endl;
    }
}
