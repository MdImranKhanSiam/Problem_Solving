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

        int first, last, total;

        for( int i = 0; i < n; i++ )
        {
            if( s.at(i) == 'A' )
            {
                first = i;
                break;
            }
        }
        for( int i = n - 1; i >= 0; i-- )
        {
            if( s.at(i) == 'B' )
            {
                last = i;
                break;
            }
        }

        total = last - first;

        if( total < 0 )
            total = 0;

        cout << total << endl;
    }
}
