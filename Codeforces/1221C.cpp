#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll q;

    cin >> q;

    for( int i = 0; i < q; i++ )
    {
        ll c, m, x, teams = 0;

        cin >> c >> m >> x;

        if( x > c && x > m )
        {
            teams += x;
        }
        else
        {
            ll first = min(x,min(c,m));

            teams += first;

            c -= first;

            m -= first;


        }

        cout << teams << endl;
    }
}
