#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double n;

        cin >> n;

        double divisor = 1.0, increment = 1.0;

        while( true )
        {
            increment *= 2;

            divisor += increment;

            if( n/divisor == floor(n/divisor) )
            {
                cout << fixed << setprecision(0) << n/divisor << endl;
                break;
            }
        }
    }
}

