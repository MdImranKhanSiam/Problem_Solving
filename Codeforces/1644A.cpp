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

        map<char,bool>check;

        bool ans = true;

        for( char ch : s )
        {
            if( ch == 'r' || ch == 'g' || ch == 'b' )
            {
                check[toupper(ch)] = true;
            }
            else
            {
                if( check[ch] != true )
                    ans = false;
            }
        }

        cout << ( (ans==true) ? "YES" : "NO" ) << endl;
    }
}

