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

        int lr = 0, ud = 0;
        bool pass = false;

        for( char ch : s )
        {
            if( ch == 'L' )
                lr--;
            else if( ch == 'R' )
                lr++;
            else if( ch == 'U' )
                ud++;
            else
                ud--;

            if( lr == 1 && ud == 1 )
            {
                pass = true;
                break;
            }
        }

        cout << ( (pass==true) ? "YES" : "NO" ) << endl;
    }
}

