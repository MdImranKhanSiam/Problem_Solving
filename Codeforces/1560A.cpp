#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int k;

        cin >> k;

        for( int i = 1; i <= 1666; i++ )
        {
            if( i % 3 != 0 && i % 10 != 3 )
                k--;
            if( k == 0 )
            {
                cout << i << endl;
                break;
            }
        }
    }
}



