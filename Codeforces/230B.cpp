//T-primes

#include <iostream>
#include <math.h>

using namespace std;

int is_prime( long long int num );

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int n;

        cin >> n;

        long long int sq;

        sq = sqrt(n);

        if( n == 4 )
        {
            cout << "YES" << endl;
        }
        else if( n == 0 || n == 1 || n == 2 || ( n % 2 == 0 && n != 4 ) || ( n % 3 == 0 && n != 9 ) || ( n % 4 == 0 && n != 16 ) || ( n % 5 == 0 && n != 25 ) )
        {
            cout << "NO" << endl;
        }
        else if( sq*sq == n )
        {
            if( is_prime(sq) == 1 )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}

int is_prime( long long int num )
{
    long long int div, root;

    //div = num / 2;
    root = sqrt(num);


    for( long long int i = 2; i <= root; i++ )
    {
        if( num % i == 0 )
            return 0;
    }

    return 1;
}









