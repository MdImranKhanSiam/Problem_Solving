#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k, flag = 1;

        cin >> n >> k;

        int arr[n];

        for( int i = 0; i < n; i++ )
        {
            cin >> arr[i];

            if( i != 0 && arr[i] < arr[i-1] )
            {
                flag = 0;
            }
        }

        if( flag == 1 )
            cout << "YES" << endl;
        else if( k > 1 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
