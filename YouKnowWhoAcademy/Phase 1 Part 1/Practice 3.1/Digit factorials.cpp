#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll fact( ll n )
{
    ll result = 1;

    for( int i = 2; i <= n; i++ )
    {
        result *= i;
    }

    return result;
}

bool check( ll n )
{
    bool result = false;

    ll sum = 0, temp = n;

    while( temp > 0 )
    {
        ll digit = temp % 10;

        temp /= 10;

        sum += fact(digit);
    }

    if( sum % n == 0 )
    {
        result = true;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    ll sum = 0;

    for( int i = 10; i < n; i++ )
    {
        if( check(i) )
        {
            sum += i;
        }
    }

    cout << sum << endl;
}
