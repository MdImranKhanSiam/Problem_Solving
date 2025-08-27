#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        bool check = false;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( value == k )
                check = true;
        }

        cout << ( (check==true) ? "YES" : "NO" ) << endl;
    }
}


