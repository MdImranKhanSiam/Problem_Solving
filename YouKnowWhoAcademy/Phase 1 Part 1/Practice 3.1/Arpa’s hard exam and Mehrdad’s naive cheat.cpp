#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    ll result;

    if( n == 0 )
    {
        result = 1;
    }
    else if( n % 4 == 0 )
    {
        result = 6;
    }
    else if( n % 4 == 1 )
    {
        result = 8;
    }
    else if( n % 4 == 2 )
    {
        result = 4;
    }
    else if( n % 4 == 3 )
    {
        result = 2;
    }

    cout << result << endl;
}
