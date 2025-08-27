#include <bits/stdc++.h>

using namespace std;

#define int long long int

signed main()
{
    int n = 10000000000;

    int sum = 0;

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n; j++ )
        {
            sum++;
        }
    }

    cout << sum << endl;
}
