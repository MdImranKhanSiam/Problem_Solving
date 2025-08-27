#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maxx = 0, i, j, k, n, arr[3], num[3];

    cin >> n;

    for( i = 0; i < 3; i++ )
        cin >> arr[i];

    sort( arr, arr + 3 );

    for( i = 0; i < 3; i++ )
        num[i] = n/arr[i];

    for( i = num[0]; i >= 0; i-- )
    {
        for( j = 0; j <= num[1]; j++ )
        {
            for( k = 0; k <= num[2]; k++ )
            {
                if( ( (i*arr[0])+(j*arr[1])+(k*arr[2]) ) == n )
                {
                    if( i+j+k > maxx )
                        maxx = i+j+k;
                    else if( i+j+k <= maxx )
                    {
                        cout << maxx << endl;
                        return 0;
                    }
                }

            }
        }
    }

    cout << maxx << endl;
}

