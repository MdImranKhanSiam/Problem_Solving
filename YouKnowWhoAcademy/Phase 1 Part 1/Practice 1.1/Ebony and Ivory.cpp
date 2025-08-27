#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll a, b, c;

    cin >> a >> b >> c;

    for( int i = 0; i <= c; i += a )
    {
        for( int j = 0; j <= c; j += b )
        {
            if( i+j == c )
            {
                cout << "YES" << endl;

                return 0;
            }
        }
    }

    cout << "NO" << endl;
}
