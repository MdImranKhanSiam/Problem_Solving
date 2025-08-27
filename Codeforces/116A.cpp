#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, maxx = 0, current = 0;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> a >> b;

        current = ( current - a ) + b;

        if( maxx < current )
            maxx = current;
    }

    cout << maxx << endl;
}
