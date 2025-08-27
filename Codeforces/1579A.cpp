#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc; cin >> tc;

    while( tc-- )
    {
        string s; cin >> s;

        int a, b, c;

        a = b = c = 0;

        for( int i = 0; s[i] != '\0'; i++ )
            ( (s.at(i)=='A') ? a++ : ( (s.at(i)=='B') ? b++ : c++ ) );

        cout << ( (a+c==b) ? "YES" : "NO" ) << endl;
    }
}

