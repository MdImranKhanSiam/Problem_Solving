#include<bits/stdc++.h>

using namespace std;

#define ll long long int

bool prime( ll value )
{
    ll half = value/2;

    for( ll i = 2; i <= half; i++ )
    {
        if( value % i == 0 )
        {
            return false;
        }
    }

    return true;
}

bool almostprime( ll value )
{
    ll half = value/2, Count = 0;

    for( ll i = 2; i <= half; i++ )
    {
        if( value % i == 0 )
        {
            if( prime(i) )
            {
                Count++;
            }

        }
    }

    if( Count == 2 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll n, Count = 0;

    cin >> n;

    for( int i = 1; i <= n; i++ )
    {
        if( almostprime(i) )
        {
            Count++;
        }
    }

    cout << Count << endl;
}

 
