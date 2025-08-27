#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, prev;

        cin >> n >> prev;

        int gap = INT_MAX;

        bool sorted = true;

        for( int i = 1; i < n; i++ )
        {
            int value;

            cin >> value;

            if( value < prev )
                sorted = false;

            int range = value-prev;

            if( range < gap )
                gap = range;

            prev = value;
        }

        cout << ( (sorted==false) ? 0 : (gap/2)+1 ) << endl;
    }
}


