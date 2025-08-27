#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, div, even = 0, odd = 0;

        cin >> n;

        div = n / 2;

        if( div % 2 != 0 )
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;

            for( int i = 0, j = 2; i < div; i++, j += 2 )
            {
                cout << j << " ";

                even += j;
            }

            for( int i = 0, k = 1; i < div - 1; i++, k += 2 )
            {
                cout << k << " ";

                odd += k;
            }

            cout << even - odd << endl;
        }
    }
}
