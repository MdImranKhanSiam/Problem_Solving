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

        int minn = 9;

        for( char ch : s )
        {
            int num = ch - 48;

            if( num < minn )
                minn = num;
        }

        if( s.size() == 2 )
        {
            if( s.at(1) == minn )
                cout << minn << endl;
            else
                cout << s.at(1) << endl;
        }
        else
            cout << minn << endl;
    }
}

