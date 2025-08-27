#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m, s1_a = 0, s2_a = 0, s1_a_position = -1, s2_a_position = -1;

        cin >> n >> m;

        string s1, s2;

        cin >> s1 >> s2;

        for( int i = 0; i < n; i++ )
        {
            if( s1.at(i) == 'a' )
            {
                if( s1_a_position == -1 )
                {
                    s1_a_position = i;
                }

                s1_a++;
            }
        }

        for( int i = 0; i < m; i++ )
        {
            if( s2.at(i) == 'a' )
            {
                if( s2_a_position == -1 )
                {
                    s2_a_position = i;
                }

                s2_a++;
            }
        }

        bool result = false;

        if( s1 == s2 )
        {
            result = true;
        }
        else if( s1_a == 0 && s2_a == 0 )
        {
            if( s1 == s2 )
            {
                result = true;
            }
        }
        else if( s1_a == s2_a )
        {
            if( s1_a_position == s2_a_position )
            {
                result = true;
            }
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}

