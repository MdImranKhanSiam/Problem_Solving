#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double x, y, a, b;

        cin >> x >> y;

        int yy;

        yy = y;

        a = ceil(y/2);

        if( a != 0 )
        {
            x -= (a-1)*7;

            if( yy % 2 == 0 )
            {
                x -= 7;
            }
            else
            {
                x -= 11;
            }

            if( x <= 0 )
            {
                cout << a << endl;
            }
            else
            {
                a += ceil(x/15);

                cout << a << endl;
            }
        }
        else
        {
            b = ceil(x/15);
            cout << b << endl;
        }
    }
}

