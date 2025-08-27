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

        int first = 0, last = 0, i = 1;

        for( char ch : s )
        {
            if( ch == 'B' && first == 0 )
                first = i;
            else if( ch == 'B' )
                last = i;

            i++;
        }

        if( last == 0 )
            cout << 1 << endl;
        else
            cout << (last-first)+1 << endl;
    }
}

