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

        string cs = s;

        sort(cs.begin(), cs.end() );

        int sizee = s.size(), total = 0;

        for( int i = 0; i < sizee; i++ )
        {
            if( s.at(i) != cs.at(i) )
                total++;
        }

        cout << total << endl;
    }
}

