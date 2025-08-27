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

        int arr[n];
        bool flag = true;

        for( int i = 0; i < n; i++ )
            cin >> arr[i];

        sort( arr, arr + n );

        for( int i = 1; i < n; i++ )
        {
            if( ( arr[i] - arr[i-1] ) > 1 )
                flag = false;
        }

        cout << ( ( n == 1) ? "YES" : ( (flag == true) ? "YES" : "NO" ) ) << endl;
    }
}

