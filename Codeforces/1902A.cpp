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

        int zero = 1, one = 1;

        for( int i = 0; i < n; i++ )
        {
            if( s.at(i) != '0' )
            {
                zero = 0;
            }
            if( s.at(i) != '1' )
            {
                one = 0;
            }
        }

        if( zero == 1 )
            cout << "YES" << endl;
        else if( one == 1 )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
