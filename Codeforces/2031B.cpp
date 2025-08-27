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
        int n;

        cin >> n;

        bool result = true;

        for( int i = 1; i <= n; i++ )
        {
            int value;

            cin >> value;

            if( abs(value-i) > 1 )
            {
                result = false;
            }
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}

