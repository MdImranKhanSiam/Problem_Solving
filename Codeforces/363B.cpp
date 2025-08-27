#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, sum = 0, position = 1, minimum = 600001;

    cin >> n >> k;

    int arr[n];

    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i];

        if( i < k )
        {
            sum += arr[i];
            minimum = sum;
            continue;
        }
        else
            sum += arr[i]-arr[i-k];

        if( sum < minimum && i >= k )
        {
            minimum = sum;
            position = i-k+2;
        }
    }

    cout << position << endl;
}

