#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, Rs = 0, Rmax = INT_MIN;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            Rs += value;

            if( Rs > Rmax )
            {
                Rmax = Rs;
            }
        }

        int m, Bs = 0, Bmax = INT_MIN;

        cin >> m;

        for( int i = 0; i < m; i++ )
        {
            int value;

            cin >> value;

            Bs += value;

            if( Bs > Bmax )
            {
                Bmax = Bs;
            }
        }

        cout << max(0,max(0,Rmax)+max(0,Bmax)) << endl;
    }
}

