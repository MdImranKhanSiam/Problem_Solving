#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, odd = 1, even = 2;

        cin >> n;

        int total = n;

        if( n % 2 != 0 )
            total -= 3;

        for( int i = 0; i < total; i++ )
        {
            if( i % 2 == 0 )
            {
                cout << even << " ";
                even += 2;
            }
            else
            {
                cout << odd << " ";
                odd += 2;
            }
        }

        if( n % 2 != 0 )
            cout << n << " " << n-2 << " " << n-1 << endl;
    }
}
