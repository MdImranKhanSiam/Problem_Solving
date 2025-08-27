#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, total = 0;

    cin >> n;

    for( int i = 1; i <= n; i++ )
    {
        sum += i;

        total = total + sum;

        if( total == n )
        {
            cout << i << endl;
            break;
        }
        else if( total > n )
        {
            cout << i-1 << endl;
            break;
        }
    }
}

