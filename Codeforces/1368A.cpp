#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, n;

        cin >> a >> b >> n;

        if( a > b )
        {
            int temp = a;
            a = b;
            b = temp;
        }

        int turn = 0, total = 0;

        while( true )
        {
            total++;

            if( turn % 2 == 0 )
                a += b;
            else
                b += a;

            if( a > n || b > n )
                break;

            turn++;
        }

        cout << total << endl;
    }
}
