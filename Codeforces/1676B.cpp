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

        int sum = 0, minimum = 10000001;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            sum += value;

            if( value < minimum )
                minimum = value;
        }

        cout << sum-(minimum*n) << endl;
    }
}

