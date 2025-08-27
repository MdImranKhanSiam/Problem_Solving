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
        char a, b;

        cin >> a >> b;

        for( int row = 1; row <= 94; row++ )
        {
            unordered_map<char,int>Hashmap;

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
                    char ch = start;

                    start++;

                    Hashmap[ch] = j;
                }
            }

            if( Hashmap[a] == Hashmap[b] )
            {
                cout << row << " " << column << endl;
            }

//            for( int i = 33; i <= 126; i++ )
//            {
//                char ch = i;
//
//                cout << ch << ": " << Hashmap[ch] << endl;
//            }
        }
    }
}
