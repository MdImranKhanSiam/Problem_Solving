#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
    	string str;

        cin >> str;

        int displace = 0;

        char ch = 'a';

        for( int i = 0; i < 3; i++, ch++ )
        {
            if( str.at(i) != ch )
                displace++;
        }

        if( displace < 3 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
