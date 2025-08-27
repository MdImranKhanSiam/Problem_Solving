#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, total = 0;

    cin >> n >> m;

    if( n >= m )
    {
        cout << n-m << endl;
        return 0;
    }

    while( true )
    {
        total++;

        if( m % 2 != 0 )
            m++;
        else
            m /= 2;

        if( n == m )
            break;

        if( m < n )
        {
            total += n - m;
            break;
        }
    }

    cout << total << endl;
}
