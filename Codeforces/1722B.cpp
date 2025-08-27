#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string row[2];

        for( int i = 0; i < 2; i++ )
        {
            string s;

            cin >> s;

            for( char ch : s )
            {
                if( ch == 'G' || ch == 'B' )
                    ch = 'X';

                row[i].push_back(ch);
            }
        }

        cout << ( (row[0]==row[1]) ? "YES" : "NO" ) << endl;
    }
}
