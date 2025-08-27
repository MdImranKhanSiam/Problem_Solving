#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int arr[m], result[m-n+1];

    for( int i = 0; i < m; i++ )
        cin >> arr[i];

    sort( arr, arr + m );

    for( int i = 0; i <= m - n; i++ )
    {
        result[i] = arr[n+i-1] - arr[i];
    }

    sort( result, result + (m-n+1) );
    cout << result[0] << endl;
}
