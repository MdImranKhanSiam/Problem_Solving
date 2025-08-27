#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        bool r1 = true, r2 = true, r3 = true;

        int P = -1, S = -1, countp = 0, counts = 0;

        for( int i = 0; i < n; i++ )
        {
            if( s.at(i) == 'p' )
            {
                countp++;
            }

            if( s.at(i) == 's' )
            {
                counts++;
            }

            if( P == -1 && s.at(i) == 'p' )
            {
                P = i;

                r3 = false;
            }

            if( S == -1 && s.at(i) == 's' )
            {
                S = i;
            }
        }

        if( P != -1 )
        {
            for( int i = P+1; i < n; i++ )
            {
                if( s.at(i) == 's' )
                {
                    r1 = false;

                    break;
                }
            }
        }

        if( S != -1 )
        {
            for( int i = 0; i < S; i++ )
            {
                if( s.at(i) == '.' )
                {
                    r2 = false;

                    break;
                }
            }
        }

        if( countp > 1 && counts > 1 )
        {
            cout << "NO";
        }
        else if( r3 == true )
        {
            cout << "YES";
        }
        else if( r1 == false || r2 == false )
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }

        cout << endl;
    }
}
