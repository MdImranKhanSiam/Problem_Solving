#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x, sum = 0;

    cin >> x;

    while( true )
    {
        if( x == 1 )
        {
            sum++;
            break;
        }

        if( x % 2 == 0 )
        {
            x = x / 2;
        }
        else
        {
            x--;
            sum++;
        }
    }

    cout << sum << endl;
}

