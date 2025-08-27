#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, y, total = 0;

        cin >> n;

        for( int i = 0; i < 3; i++ )
        {
            cin >> y;

            if( y > n )
                total++;
        }

        cout << total << endl;
    }
}
