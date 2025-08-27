#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string position;

        cin >> position;

        int row = position[1] - 48;

        for( int i = 1; i <= 8; i++ )
        {
            if( row != i )
            {
                cout << position[0] << i << endl;
            }
        }

        string ch;

        for( int i = 1; i <= 8; i++ )
        {
            ch = 96 + i;

            if( ch[0] != position[0] )
            {
                cout << ch[0] << row << endl;
            }
        }
    }
}
