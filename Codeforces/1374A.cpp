#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int x, y, n;

        cin >> x >> y >> n;

        int div = n / x;

        for( int i = div; i >= 0; i-- )
        {
            if( ((i*x)+y) <= n )
            {
                cout << ((i*x)+y) << endl;
                goto here;
            }
        }

        cout << 0 << endl;

        here:;
    }
}

