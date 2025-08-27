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
        int n, max_h = INT_MIN, max_w = INT_MIN;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            int a, b;

            cin >> a >> b;

            if( a > max_h )
            {
                max_h = a;
            }

            if( b > max_w )
            {
                max_w = b;
            }
        }

        cout << 2*(max_h+max_w) << endl;
    }
}

