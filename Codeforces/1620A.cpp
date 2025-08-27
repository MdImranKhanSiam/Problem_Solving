#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        int total = 0;

        for( auto point : s )
        {
            if( point == 'N' )
            {
                total++;
            }
        }

        cout << ( (total==1) ? "NO" : "YES" ) << endl;
    }
}

