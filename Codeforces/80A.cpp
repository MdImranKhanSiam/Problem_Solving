#include <bits/stdc++.h>

using namespace std;

bool isprime(int n);

int main()
{
    int n, m;

    bool check = true;

    cin >> n >> m;

    while( true )
    {
        long long int x;
        cout << "Check Prime: ";
        cin >> x;

        cout << isprime(x) << endl;
    }

    if( isprime(m) == false )
        cout << "NO" << endl;
    else
    {
        for( int i = n+1; i < m; i++ )
        {
            if( isprime(i) == true )
            {
                check = false;
                break;
            }
        }

        cout << ( (check==true) ? "YES" : "NO" );
    }
}

bool isprime( int value)
{
    long double check = value;

    if( value == 1)
        return false;

    if( value < 12 )
    {
        if( value == 2 || value == 3 || value == 5 || value == 7 || value == 11 )
            return true;
    }

    if( ((check/2) == floor(check/2)) || value % 2 == 0 || value % 3 == 0 || value % 5 == 0 || value % 7 == 0 || value % 11 == 0 )
        return false;

    for( long long int i = 13; i < sqrt(value/2); i += 2 )
    {
        if( value % i == 0 )
            return false;
    }

    return true;
}
