#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc; cin >> tc;

    while( tc-- )
    {
        string s;

        for( int i = 0; i < 8; i++ )
        {
            for( int j = 0; j < 8; j++ )
            {
                char ch; cin >> ch;

                if( ch != '.' )
                    s += ch;
            }
        }

        cout << s << endl;
    }
}

