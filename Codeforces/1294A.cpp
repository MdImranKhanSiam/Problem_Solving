#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int arr[3], n, x, y;

        cin >> arr[0] >> arr[1] >> arr[2] >> n;

        sort(arr, arr+3);

        x = arr[2];
        y = arr[0] + arr[1];

        int need;

        need = (x * 2) - y;

        if( n < need )
            cout << "NO" << endl;
        else if( (n - need) % 3 == 0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
