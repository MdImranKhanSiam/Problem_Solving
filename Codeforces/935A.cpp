#include <bits/stdc++.h>

using namespace std;

int main()
{
    while( true )
    {



    double n, countt = 1;

    cin >> n;

    for( double i = 2; i <= n/2; i++ )
    {
        if( (n-i)/i == floor((n-i)/i) )
            countt++;
    }

    cout << countt << endl;

    }
}

