#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int x, y, k;

        cin >> x >> y >> k;

        if( x > y )
        {
            cout << x << endl;
        }
        else if( x + k >= y )
        {
            cout << y << endl;
        }
        else if( x + k < y )
        {
            int z = 2 * ( y - ( x + k ) );
            cout << x + k + z << endl;
        }
    }
}
