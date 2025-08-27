#include <bits/stdc++.h>

using namespace std;

int cycle_length( int n );

int main()
{
    int i, j;

    cin >> i >> j;

    int start, finish, maxx = 0;

    start = min(i,j);
    finish = max(i,j);

    for( int i = start; i <= finish; i++ )
    {
        int store;

        store = cycle_length(i);

        if( store > maxx )
        {
            maxx = store;
        }
    }

    cout << i << " " << j << " " << maxx << endl;
}

int cycle_length( int n )
{
    int total = 1;

    while( n != 1 )
    {
        if( n % 2 == 0 )
        {
            n = n/2;
        }
        else
        {
            n = (3*n)+1;
        }

        total++;
    }

    return total;
}
