#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool check_palindrome( ll value )
{
    bool result = true;

    string s;

    s = to_string(value);

    ll length = s.size();

    for( int i = 0, j = length-1; i < length; i++, j-- )
    {
        if( s.at(i) != s.at(j) )
        {
            result = false;

            break;
        }
    }

    return result;
}

bool check_prime( ll value )
{
    bool result = true;

    ll range = sqrt(value);

    for( int i = 2; i <= range; i++ )
    {
        if( value % i == 0 )
        {
            result = false;

            break;
        }
    }

    if( value == 1 )
    {
        result = false;
    }

    return result;
}

ll count_divisor( ll value )
{
    ll result = 1;

    ll range = value/2;

    for( int i = 1; i <= range; i++ )
    {
        if( value % i == 0 )
        {
            result++;
        }
    }

    return result;
}

ll Max( vector<ll>&store )
{
    ll result = LLONG_MIN;

    for( auto point : store )
    {
        if( point > result )
        {
            result = point;
        }
    }

    return result;
}

ll Min( vector<ll>&store )
{
    ll result = LLONG_MAX;

    for( auto point : store )
    {
        if( point < result )
        {
            result = point;
        }
    }

    return result;
}

ll Prime( vector<ll>&store )
{
    ll result = 0;

    for( auto point: store )
    {
        if( check_prime(point) )
        {
            result++;
        }
    }

    return result;
}

ll Palindrome( vector<ll>&store )
{
    ll result = 0;

    for( auto point: store )
    {
        if( check_palindrome(point) )
        {
            result++;
        }
    }

    return result;
}

ll Divisor( vector<ll>&store )
{
    ll result, Max = 0;

    vector<ll>temp;

    temp = store;

    sort(temp.begin(),temp.end());

    for( auto point : temp )
    {
        ll value = count_divisor(point);

        if( value >= Max )
        {
            Max = value;

            result = point;
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    ll max_value, min_value, prime_value, palindrome_value, divisor_value;

    max_value = Max(store);

    min_value = Min(store);

    prime_value = Prime(store);

    palindrome_value = Palindrome(store);

    divisor_value = Divisor(store);

    cout << "The maximum number : " << max_value << endl;

    cout << "The minimum number : " << min_value << endl;

    cout << "The number of prime numbers : " << prime_value << endl;

    cout << "The number of palindrome numbers : " << palindrome_value << endl;

    cout << "The number that has the maximum number of divisors : " << divisor_value << endl;
}
