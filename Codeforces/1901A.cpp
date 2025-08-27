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

        int arr[n];

        for( int i = 0; i < n; i++ )
        {
            cin >> arr[i];
        }

        int last, gap = arr[0];

        last = (x - arr[n-1]) * 2;

        for( int i = 0; i < n - 1; i++ )
        {
            if( arr[i+1] - arr[i] > gap )
            {
                gap = arr[i+1] - arr[i];
            }
        }

        if( last > gap )
        {
            gap = last;
        }

        cout << gap << endl;
    }
}

