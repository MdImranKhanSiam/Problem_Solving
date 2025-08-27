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

        char ch;

        cin >> ch;

        bool check = false;

        for( int i = 0; s[i] != '\0'; i++ )
        {
            if( s.at(i) == ch && i % 2 == 0 )
            {
                check = true;
                break;
            }
        }

        cout << ( (check==true) ? "YES" : "NO" ) << endl;
    }
}

