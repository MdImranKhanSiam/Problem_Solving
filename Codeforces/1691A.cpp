#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        int even = 0, odd = 0;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( value % 2 == 0 )
                even++;
            else
                odd++;
        }

        cout << min(even,odd) << endl;
    }
}


