#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for( int i = 0; i < n; i++ )
        cin >> arr[i];

    sort( arr, arr + n );

    int maxx = arr[n-1], rubles = 0;

    for( int i = 0; i < n - 1; i++ )
    {
        rubles += maxx - arr[i];
    }

    cout << rubles << endl;
}
