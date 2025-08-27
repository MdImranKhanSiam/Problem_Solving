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

        int length = s.size();

        if( length % 2 != 0 )
        {
            cout << "NO" << endl;
            continue;
        }

        int open, close, unknown;

        open = close = unknown = 0;

        bool ans = true;

        for( int i = 0; i < length; i++ )
        {
            if( s.at(i) == '(' )
                open++;
            else if( s.at(i) == ')' )
            {
                close++;

                if( close > open )
                {
                    ans = false;
                    break;
                }
            }
            else if( s.at(i) == '?' )
            {
                unknown++;
            }
        }
    }
}


