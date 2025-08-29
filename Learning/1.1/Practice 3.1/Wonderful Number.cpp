#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool binary_check ( ll n )
{
    bool result = true;

    bitset<64>store(n);

    string s;

    for( int i = 0; i < 64; i++ )
    {
        if( store[i] == 0 )
        {
            s.push_back('0');
        }
        else
        {
            s.push_back('1');
        }
    }

    ll length1 = s.size();

    ll length2 = length1;

    for( int i = length1-1; i >= 0; i-- )
    {
        if( s.at(i) == '0' )
        {
            length2--;
        }
        else
        {
            break;
        }
    }

    for( int i = 0, j = length2-1; i < length2; i++, j-- )
    {
        if( s.at(i) != s.at(j) )
        {
            result = false;

            break;
        }
    }

    return result;
}

bool check ( ll n )
{
    bool result;

    if ( n % 2 != 0 )
    {
        result = binary_check(n);
    }
    else
    {
        result = false;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    bool result;

    result = check(n);

    if ( result == true )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
