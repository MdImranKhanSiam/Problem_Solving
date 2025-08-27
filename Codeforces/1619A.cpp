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

        double mid;

        if( s.size()/2.0 == floor(s.size()/2.0) )
            mid = s.size()/2;
        else
        {
            cout << "NO" << endl;
            continue;
        }

        bool check = true;

        for( int i = 0, j = mid; i < mid; i++, j++ )
        {
            if( s.at(i) != s.at(j) )
            {
                check = false;
                break;
            }
        }

        cout << ( (check==true) ? "YES" : "NO" ) << endl;
    }
}

