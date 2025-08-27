#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        int p1 = -1;

        char c1;

        for( int i = 0; i < n-1; i++ )
        {
            if( s.at(i) == s.at(i+1) )
            {
                c1 = s.at(i);

                for( int j = i+1; j < n; j++ )
                {
                    if( s.at(i) == s.at(j) )
                    {
                        p1 = j;
                    }
                    else
                    {
                        break;
                    }
                }

                break;
            }
        }

        if( p1 != -1 )
        {
            if( p1+1 < n )
            {
                s[p1] = s[p1+1];

                s[p1+1] = c1;
            }
        }

        bool result = true;

        for( int i = 0; i < n-1; i++ )
        {
            if( s.at(i) == s.at(i+1) )
            {
                result = false;
            }
        }

        if( result == true )
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}
