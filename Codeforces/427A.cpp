#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, p = 0, c = 0;

    cin >> n;

    while( n-- )
    {
        cin >> x;

        if( x == -1 )
        {
            if( p != 0 )
                p--;
            else
                c++;
        }
        else if( x >= 1 )
            p += x;
    }

    cout << c << endl;
}
