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

        bool ans = false;

        if( s.size() > 2 )
        {
            if( s.at(0) == '1' && s.at(1) == '0' )
            {
                for( int i = '2'; i <= '9'; i++ )
                {
                    if( s[2] == i )
                    {
                        ans = true;

                        break;
                    }
                }

                if( s.at(2) == '1' && s.size() > 3 )
                {
                    ans = true;
                }
            }
        }

        cout << ( (ans==true) ? "YES" : "NO" ) << endl;
    }
}

