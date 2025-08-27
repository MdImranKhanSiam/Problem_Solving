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

        string s;

        cin >> s;

        int one, zero;

        one = zero = 0;

        for( int i = 0; i < n; i++ )
        {
            char ch;

            ch = s.at(i);

            if( ch == '0' )
            {
                if( one == 0 )
                {
                    cout << 0;
                }
                else if( one > 0 )
                {
                    if( i == n-1 )
                    {
                        cout << 0;
                        one = 0;
                    }
                    else
                        zero++;
                }
            }
            else if( ch == '1' )
            {
                if( one > 0 && zero > 0 )
                {
                    cout << 0;
                    one = 1;
                    zero = 0;
                }
                else
                    one++;
            }

            if( i == n-1 )
            {
                for( int j = 0; j < one; j++ )
                {
                    cout << 1;
                }
            }
        }

        cout << endl;
    }
}

