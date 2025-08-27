//E

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        char first, second;

        cin >> first >> second;

        vector<int>Hashmap(127);

        for( int row = 1; row <= 94; row++ )
        {
            int column = 94/row;

            if( 94 % row != 0 )
            {
                column++;
            }

            int start = 33;

            for( int k = 1; k <= column; k++ )
            {
                for( int j = 1; j <= row; j++ )
                {
                    Hashmap[start] = j;

                    start++;

                    if( start > 126 )
                    {
                        break;
                    }
                }
            }

            int x, y;

            x = first;

            y = second;

            if( Hashmap[x] == Hashmap[y] )
            {
                cout << row << " " << column << endl;
            }
        }

        cout << endl;
    }
}

