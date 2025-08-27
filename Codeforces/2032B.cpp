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
        int n, k;

        cin >> n >> k;

        if( n == 1 )
        {
            cout << 1 << endl << 1;
        }
        else if( k == 1 || k == n )
        {
            cout << -1;
        }
        else
        {
            cout << 3 << endl;

            if( k % 2 == 0 )
            {
                cout << 1 << " " << k << " " << k+1;
            }
            else
            {
                cout << 1 << " " << k-1 << " " << k+2;
            }
        }

        cout << endl;
    }
}

