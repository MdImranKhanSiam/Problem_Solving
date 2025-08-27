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

        string s, t;

        cin >> s >> t;

        reverse( t.begin(), t.end() );

        s.append(t);

        int sizee = s.size(), total = 0;

        char prev = s.at(0);

        for( int i = 1; i < sizee; i++ )
        {
            if( s.at(i) == prev )
                total++;

            if( total > 1 )
                break;

            prev = s.at(i);
        }

        cout << ( (total<2) ? "YES" : "NO" ) << endl;
    }
}

