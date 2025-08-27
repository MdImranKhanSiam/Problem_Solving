#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x, i, j;

    static long long int match;

    cin >> n >> x;

    for( i = 1; i <= n; i++ )
    {
        for( j = 1; j <= n; j++ )
        {
            if( i*j == x )
                match++;
        }
    }

    cout << match << endl;
}

