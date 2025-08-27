#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, current = 0, maxx = 0;

        cin >> n;

        string s;

        cin >> s;

        for( int i = 0; i < n - 1; i++ )
        {
            if( s[i] == 'B' && s[i+1] == 'U' || s[i] == 'U' && s[i+1] == 'B' )
            {
                current += 2;
                i++;

                if( current > maxx )
                    maxx = current;
            }
            else
                current = 0;
        }

        cout << maxx << endl;
    }
}
