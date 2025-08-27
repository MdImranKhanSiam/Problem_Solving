#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, total = 0;

        cin >> n;

        for( int i = 1; i <= n; i++ )
        {
            int value;

            cin >> value;

            if( value == i )
                total++;
        }

        if( total % 2 != 0 )
            total = (total/2)+1;
        else
            total = total/2;

        cout << total << endl;
    }
}
