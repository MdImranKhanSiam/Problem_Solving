#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double n, m, a;

    cin >> n >> m >> a;

    long long int r1, r2;

    if( n == m && m == a )
    {
        r1 = 1;
        r2 = 0;
    }
    else if( a == 1 )
    {
        r1 = n*m;
        r2 = 0;
    }
    else if( n < a && m < a )
    {
        r1 = 1;
        r2 = 0;
    }
    else if( (n == 1 || m == 1) && a == 1 )
    {
        if( n > m )
            r1 = n;
        else
            r1 = m;
        r2 = 0;
    }
    else if( n == 1 || m == 1 )
    {
        if( n > m )
        {
            if( n / a != ceil(n/a) )
            {
                r1 = n / a;
                r1++;
            }
            else
            {
                r1 = n / a;
            }
        }
        else
        {
            if( m / a != ceil(m/a) )
            {
                r1 = m / a;
                r1++;
            }
            else
            {
                r1 = m / a;
            }
        }

        r2 = 0;
    }
    else if( n != 1 && m != 1 )
    {
        if( n / a != ceil(n/a) )
        {
            r1 = n / a;
            r1++;
        }
        else
        {
            r1 = n / a;
        }

        if( m / a != ceil(m/a) )
        {
            r2 = m /a;
            r2++;
        }
        else
        {
            r2 = m / a;
        }
    }

    if( r2 != 0 )
        cout << r1*r2 << endl;
    else
        cout << r1+r2 << endl;

    return 0;
}
