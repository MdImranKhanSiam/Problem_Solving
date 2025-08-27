#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int n, multi = 1, i, flag = 0;

        cin >> n;

        long long int arr[n];

        for( i = 0; i < n; i++ )
        {
            cin >> arr[i];

            if( n == 1 && arr[i] == 0 )
            {
                cout << 0 << endl;
                goto here;
            }
            else if( n == 1 )
            {
                cout << 1 << endl << 1 << " " << 0 << endl;
                goto here;
            }

            if( arr[i] == 0 )
            {
                cout << 0 << endl;
                goto here;
            }
            else
            {
                multi = multi * arr[i];
            }

        }

        if( multi == 0 )
            cout << 0 << endl;
        else if( multi < 0 )
            cout << 0 << endl;
        else if( multi > 0 )
        {
            cout << 1 << endl << 1 << " " << 0 << endl;
        }

        here:;
    }
}
