#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m;

        cin >> n >> m;

        string s[n], vika = "vika";
        int vika_index = 0;

        for( int i = 0; i < n; i++ )
            cin >> s[i];

        for( int i = 0; i < m; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                if( s[j].at(i) == vika.at(vika_index) )
                {
                    vika_index++;
                    break;

                    if( vika_index == 4 )
                        break;
                }

            }

            if( vika_index == 4 )
                break;
        }

        cout << ( (vika_index==4) ? "YES" : "NO" ) << endl;
    }
}

