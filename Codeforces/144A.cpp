#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n], sorted[n], total = 0;

    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i];

        sorted[i] = arr[i];
    }

    sort( sorted, sorted + n );

    int maxx = sorted[n-1], minn = sorted[0], max_p = -1, min_p = -1;

    if( maxx == arr[0] && minn == arr[n-1] )
        cout << 0 << endl;
    else
    {
        for( int i = 0; i < n; i++ )
        {
            if( maxx == arr[i] && max_p == -1 )
                max_p = i;
            if( minn == arr[i] )
                min_p = i;
        }

        if( min_p < max_p )
            total = max_p + ( n - ( min_p + 2 ) );
        else if( max_p < min_p )
            total = max_p + ( n - ( min_p + 1 ) );

        cout << total << endl;
    }
}
