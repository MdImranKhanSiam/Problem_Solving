#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    int coins[n];

    for( int i = 0; i < n; i++ )
    {
        cin >> coins[i];

        sum += coins[i];
    }

    int half = sum / 2, countt = 0;

    sort( coins, coins + n );

    sum = 0;

    for( int i = n - 1; i >= 0; i-- )
    {
        if( sum <= half )
        {
            sum += coins[i];
            countt++;
        }
    }

    cout << countt << endl;
}
