#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if( n % 2 == 0 )
    {
        int x = n/2;

        cout << x << endl;

        for( int i = 0; i < x; i++ )
        {
            cout << 2 << " ";
        }

        cout << endl;
    }
    else
    {
        int y = n - 3, z;

        z = y/2;

        cout << z+1 << endl;

        for( int i = 0; i < z; i++ )
        {
            cout << 2 << " ";
        }

        cout << 3 << endl;
    }

}

