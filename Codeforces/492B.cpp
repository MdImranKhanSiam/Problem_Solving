#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, first, last, seq, long_seq = 0;

    cin >> l >> r;

    int arr[l];

    for( int i = 0; i < l; i++ )
        cin >> arr[i];

    sort( arr, arr + l );

    first = arr[0];
    last = r - arr[l-1];

    if( first < last )
        first = last;

    for( int i = 1; i < l; i++ )
    {
        seq = arr[i] - arr[i-1];

        if( seq > long_seq )
            long_seq = seq;
    }

    double x, result;

    x = long_seq;

    if( x / 2 < first )
        result = first;
    else
        result = x / 2;

    cout << fixed << setprecision(10) << result << endl;
}
