#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, x;

        cin >> n >> x;

        int even, odd;

        even = odd = 0;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( value % 2 == 0 )
                even++;
            else
                odd++;
        }

        if( odd % 2 == 0 )
            odd--;

        if( (odd+even) >= x )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
