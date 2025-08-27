#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m, n, hour, countt = 0;

    cin >> m >> n;

    for( hour = 1; hour <= m; hour++ )
    {
        countt++;

        if( countt == n )
        {
            m++;
            countt = 0;
        }
    }

    cout << m << endl;
}


