#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int column;

        cin >> column;

        string row_1, row_2;

        cin >> row_1 >> row_2;

        bool ans = true;

        for( int i = 0; i < column; i++ )
        {
            if( row_1[i] == '1' && row_2[i] == '1' )
            {
                ans = false;
            }
        }

        cout << ( (ans==true) ? "YES" : "NO" ) << endl;
    }
}

